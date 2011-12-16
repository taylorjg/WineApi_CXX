strBuffer = ""

Const ReturnCodeSuccess = 0
Const ReturnCodeCriticalError = 100
Const ReturnCodeUnableToAuthorize = 200
Const ReturnCodeNoAccess = 300

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

Set oCategoryMapService = CreateObject ("WineApi.CategoryMapService")

Set oCategoryMap = oCategoryMapService _
	.Show (4) _
	.Execute ()

Call AppendBuffer ("Status.ReturnCode", oCategoryMap.Status.ReturnCode)

For Each strMessage In oCategoryMap.Status.Messages
	Call AppendBuffer ("Status.Messages", strMessage)
Next

If oCategoryMap.Status.ReturnCode = ReturnCodeSuccess Then
	For Each oCategory In oCategoryMap.Categories
		Call AppendBuffer ("Category.Name", oCategory.Name)
		For Each oRefinement In oCategory.Refinements
			Call AppendBuffer ("Refinement.Name", oRefinement.Name)
		Next
	Next
End If

Call MsgBox (strBuffer, vbOKOnly + vbInformation, "CategoryMapService Results")
