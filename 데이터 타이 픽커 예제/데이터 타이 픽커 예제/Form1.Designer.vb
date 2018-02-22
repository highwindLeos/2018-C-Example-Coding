<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form은 Dispose를 재정의하여 구성 요소 목록을 정리합니다.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Windows Form 디자이너에 필요합니다.
    Private components As System.ComponentModel.IContainer

    '참고: 다음 프로시저는 Windows Form 디자이너에 필요합니다.
    '수정하려면 Windows Form 디자이너를 사용하십시오.  
    '코드 편집기에서는 수정하지 마세요.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.Textmemo = New System.Windows.Forms.TextBox()
        Me.DTP = New System.Windows.Forms.DateTimePicker()
        Me.btnWrite = New System.Windows.Forms.Button()
        Me.SuspendLayout()
        '
        'Textmemo
        '
        Me.Textmemo.Location = New System.Drawing.Point(12, 49)
        Me.Textmemo.Multiline = True
        Me.Textmemo.Name = "Textmemo"
        Me.Textmemo.ScrollBars = System.Windows.Forms.ScrollBars.Vertical
        Me.Textmemo.Size = New System.Drawing.Size(442, 219)
        Me.Textmemo.TabIndex = 0
        '
        'DTP
        '
        Me.DTP.Location = New System.Drawing.Point(12, 12)
        Me.DTP.Name = "DTP"
        Me.DTP.Size = New System.Drawing.Size(361, 21)
        Me.DTP.TabIndex = 1
        '
        'btnWrite
        '
        Me.btnWrite.Location = New System.Drawing.Point(379, 12)
        Me.btnWrite.Name = "btnWrite"
        Me.btnWrite.Size = New System.Drawing.Size(75, 23)
        Me.btnWrite.TabIndex = 2
        Me.btnWrite.Text = "메모남기기"
        Me.btnWrite.UseVisualStyleBackColor = True
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(7.0!, 12.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(466, 281)
        Me.Controls.Add(Me.btnWrite)
        Me.Controls.Add(Me.DTP)
        Me.Controls.Add(Me.Textmemo)
        Me.Name = "Form1"
        Me.Text = "매모기록장"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents Textmemo As TextBox
    Friend WithEvents DTP As DateTimePicker
    Friend WithEvents btnWrite As Button
End Class
