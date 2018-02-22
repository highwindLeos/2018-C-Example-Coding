Public Class Form1
    Private Sub ListBox_SelectedIndexChanged(sender As Object, e As EventArgs) Handles ListBox.SelectedIndexChanged
        If ListBox.SelectedIndex = 0 Then
            ListView.LargeImageList = ImageList1
            ListView.View = View.LargeIcon

        ElseIf ListBox.SelectedIndex = 1 Then
            ListView.SmallImageList = ImageList2
            ListView.View = View.SmallIcon

        ElseIf ListBox.SelectedIndex = 2 Then
            ListView.SmallImageList = ImageList2
            ListView.View = View.List

        ElseIf ListBox.SelectedIndex = 3 Then
            ListView.SmallImageList = ImageList1
            ListView.View = View.Details

        Else
            ListView.SmallImageList = ImageList1
            ListView.View = View.Tile
        End If

    End Sub

    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        ListBox.SelectedIndex = 0
        ListView.LargeImageList = ImageList1
        ListView.View = View.LargeIcon
    End Sub
End Class
