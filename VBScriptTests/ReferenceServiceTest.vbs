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

Set oReferenceService = CreateObject ("WineApi.ReferenceService")

Set oReference = oReferenceService _
	.CategoryFilter (2288) _
	.Execute ()

Call AppendBuffer ("Status.ReturnCode", oReference.Status.ReturnCode)

For Each strMessage In oReference.Status.Messages
	Call AppendBuffer ("Status.Messages", strMessage)
Next

If oReference.Status.ReturnCode = ReturnCodeSuccess Then
	For Each oBook In oReference.Books
		Call AppendBuffer ("Book.Title", oBook.Title)
		For Each oArticle In oBook.Articles
			Call AppendBuffer ("Article.Title", oArticle.Title)
			' Call AppendBuffer ("Article.Abstract", oArticle.Abstract)
			numFootnotes = 0
			For Each oFootnote In oArticle.Footnotes
				Call AppendBuffer ("Footnote.Title", oFootnote.Title)
				Call AppendBuffer ("Footnote.Url", oFootnote.Url)
				numFootnotes = numFootnotes + 1
				If numFootnotes >= 5 Then
					Exit For
				End If
			Next
		Next
	Next
End If

Call MsgBox (strBuffer, vbOKOnly + vbInformation, "ReferenceService Results")
