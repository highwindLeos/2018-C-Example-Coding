Public Class Form1
    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load

    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        PictureBox1.Image = New Bitmap("C:\Users\Leos\Desktop\Leos Workspace\images\animation Image\kannazuki no miko.png")
        Label1.Text = ""
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        PictureBox1.Image = New Bitmap("C:\Users\Leos\Desktop\Leos Workspace\images\animation Image\logo.jpg")
        Label1.Text = ""
    End Sub

    Private Sub LinkLabel1_LinkClicked(sender As Object, e As LinkLabelLinkClickedEventArgs) Handles LinkLabel1.LinkClicked
        Process.Start("http://leos.ipdisk.co.kr/portfolio")
    End Sub
End Class
