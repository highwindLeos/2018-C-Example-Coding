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
        Me.components = New System.ComponentModel.Container()
        Dim ListViewItem5 As System.Windows.Forms.ListViewItem = New System.Windows.Forms.ListViewItem("아이콘 뷰", "icon01.jpg")
        Dim ListViewItem6 As System.Windows.Forms.ListViewItem = New System.Windows.Forms.ListViewItem("아이콘 출력2", "icon02.jpg")
        Dim ListViewItem7 As System.Windows.Forms.ListViewItem = New System.Windows.Forms.ListViewItem("음악", "icon03.jpg")
        Dim ListViewItem8 As System.Windows.Forms.ListViewItem = New System.Windows.Forms.ListViewItem("설정", "icon04.jpg")
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(Form1))
        Me.ListBox = New System.Windows.Forms.ListBox()
        Me.ListView = New System.Windows.Forms.ListView()
        Me.ImageList1 = New System.Windows.Forms.ImageList(Me.components)
        Me.ColumnHeader1 = CType(New System.Windows.Forms.ColumnHeader(), System.Windows.Forms.ColumnHeader)
        Me.ColumnHeader2 = CType(New System.Windows.Forms.ColumnHeader(), System.Windows.Forms.ColumnHeader)
        Me.ImageList2 = New System.Windows.Forms.ImageList(Me.components)
        Me.SuspendLayout()
        '
        'ListBox
        '
        Me.ListBox.FormattingEnabled = True
        Me.ListBox.ItemHeight = 12
        Me.ListBox.Items.AddRange(New Object() {"큰아이콘", "작은아이콘", "간단히", "자세히", "블럭보기"})
        Me.ListBox.Location = New System.Drawing.Point(12, 12)
        Me.ListBox.Name = "ListBox"
        Me.ListBox.Size = New System.Drawing.Size(233, 412)
        Me.ListBox.TabIndex = 0
        '
        'ListView
        '
        Me.ListView.Columns.AddRange(New System.Windows.Forms.ColumnHeader() {Me.ColumnHeader1, Me.ColumnHeader2})
        Me.ListView.Items.AddRange(New System.Windows.Forms.ListViewItem() {ListViewItem5, ListViewItem6, ListViewItem7, ListViewItem8})
        Me.ListView.LargeImageList = Me.ImageList1
        Me.ListView.Location = New System.Drawing.Point(275, 12)
        Me.ListView.Name = "ListView"
        Me.ListView.Size = New System.Drawing.Size(426, 412)
        Me.ListView.SmallImageList = Me.ImageList1
        Me.ListView.TabIndex = 1
        Me.ListView.UseCompatibleStateImageBehavior = False
        Me.ListView.View = System.Windows.Forms.View.Details
        '
        'ImageList1
        '
        Me.ImageList1.ImageStream = CType(resources.GetObject("ImageList1.ImageStream"), System.Windows.Forms.ImageListStreamer)
        Me.ImageList1.TransparentColor = System.Drawing.Color.Transparent
        Me.ImageList1.Images.SetKeyName(0, "icon01.jpg")
        Me.ImageList1.Images.SetKeyName(1, "icon02.jpg")
        Me.ImageList1.Images.SetKeyName(2, "icon03.jpg")
        Me.ImageList1.Images.SetKeyName(3, "icon04.jpg")
        Me.ImageList1.Images.SetKeyName(4, "icon05.jpg")
        Me.ImageList1.Images.SetKeyName(5, "icon06.jpg")
        Me.ImageList1.Images.SetKeyName(6, "icon07.jpg")
        '
        'ColumnHeader1
        '
        Me.ColumnHeader1.Text = "설명"
        Me.ColumnHeader1.Width = 121
        '
        'ColumnHeader2
        '
        Me.ColumnHeader2.Text = "데이터"
        '
        'ImageList2
        '
        Me.ImageList2.ImageStream = CType(resources.GetObject("ImageList2.ImageStream"), System.Windows.Forms.ImageListStreamer)
        Me.ImageList2.TransparentColor = System.Drawing.Color.Transparent
        Me.ImageList2.Images.SetKeyName(0, "icon08.jpg")
        Me.ImageList2.Images.SetKeyName(1, "icon09.jpg")
        Me.ImageList2.Images.SetKeyName(2, "icon10.jpg")
        Me.ImageList2.Images.SetKeyName(3, "icon11.jpg")
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(7.0!, 12.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(713, 439)
        Me.Controls.Add(Me.ListView)
        Me.Controls.Add(Me.ListBox)
        Me.Name = "Form1"
        Me.Text = "ListView 예제"
        Me.ResumeLayout(False)

    End Sub

    Friend WithEvents ListBox As ListBox
    Friend WithEvents ListView As ListView
    Friend WithEvents ImageList1 As ImageList
    Friend WithEvents ColumnHeader1 As ColumnHeader
    Friend WithEvents ColumnHeader2 As ColumnHeader
    Friend WithEvents ImageList2 As ImageList
End Class
