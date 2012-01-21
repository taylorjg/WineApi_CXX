strBuffer = ""

Const ReturnCodeSuccess = 0
Const ReturnCodeCriticalError = 100
Const ReturnCodeUnableToAuthorize = 200
Const ReturnCodeNoAccess = 300

Const SortOptionPopularity = 0
Const SortOptionRating = 1
Const SortOptionVintage = 2
Const SortOptionWinery = 3
Const SortOptionName = 4
Const SortOptionPrice = 5
Const SortOptionSaving = 6
Const SortOptionJustIn = 7

Const SortOptionAscending = 0
Const SortOptionDescending = 1

Function ReadApiKey

	Const ioMode = 1 ' ForReading
	Const createMode = False

	Set oFSO = CreateObject("Scripting.FileSystemObject")
	Set oFile = oFSO.OpenTextFile("apikey.txt", ioMode, createMode)
	ReadApiKey = oFile.ReadLine ()
	oFile.Close ()

End Function

Sub AppendBuffer (strPropertyName, strPropertyValue)
	strBuffer = strBuffer & strPropertyName & ": " & strPropertyValue & vbCrLf
End Sub

Set oConfig = CreateObject ("WineApi.Config")
oConfig.ApiKey = ReadApiKey ()

Set oCatalogService = CreateObject ("WineApi.CatalogService")

Set oCatalog = oCatalogService _
	.ProductFilter (95456) _
	.State ("CA") _
	.Execute ()

Call AppendBuffer ("Status.ReturnCode", oCatalog.Status.ReturnCode)

For Each strMessage In oCatalog.Status.Messages
	Call AppendBuffer ("Status.Messages", strMessage)
Next

If oCatalog.Status.ReturnCode = ReturnCodeSuccess Then
	If Not IsNull (oCatalog.Products) Then

		Call AppendBuffer ("Catalog.Products.Total", oCatalog.Products.Total)
		Call AppendBuffer ("Catalog.Products.Offset", oCatalog.Products.Offset)

		For Each oProduct In oCatalog.Products.List
			Call AppendBuffer ("Product.Id", oProduct.Id)
			Call AppendBuffer ("Product.Name", oProduct.Name)
			Call AppendBuffer ("Product.Url", oProduct.Url)
			If Not IsNull (oProduct.Retail) Then
				Call AppendBuffer ("Product.Retail.Price", oProduct.Retail.Price)
			End If
		Next

	End If
End If

Call MsgBox (strBuffer, vbOKOnly + vbInformation, "CatalogService Results")
