Public Class Form1
    Dim memo_rec(365) As String '일자별 기록을 남기기위한 배열

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles btnWrite.Click
        '첫번째 날짜 설정
        Dim startdate = Convert.ToDateTime("2017/1/1")

        '두번째 날짜 설정
        Dim selectdate = DTP.Value

        Dim idx As Integer = Convert.ToInt32(DateAndTime.DateDiff(DateInterval.Day, startdate, selectdate)) '형변환을 해주는 메소드. convert 클래스에 있음.
    End Sub

    Private Sub bbb()

    End Sub
End Class
