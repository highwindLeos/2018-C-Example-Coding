using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 메세지_박스_예제
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        //포트폴리오
        private void linkLabel1_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            string link = "http://leos.ipdisk.co.kr/portfolio";
            Process.Start(link); 
        }
        private void pictureBox3_Click(object sender, EventArgs e)
        {
            string link = "http://leos.ipdisk.co.kr/portfolio";
            Process.Start(link);
        }
        //일공공
        private void linkLabel2_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            string link = "http://bookcafe100.com/";
            Process.Start(link);
        }

        private void pictureBox2_Click(object sender, EventArgs e)
        {
            string link = "http://bookcafe100.com/";
            Process.Start(link);
        }
        // 생활코딩
        private void linkLabel5_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            string link = "https://opentutorials.org/course/1";
            Process.Start(link);
        }

        private void pictureBox6_Click(object sender, EventArgs e)
        {
            string link = "https://opentutorials.org/course/1";
            Process.Start(link);
        }
        // 에니스타그램
        private void linkLabel3_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            
            string link = "https://github.com/highwindLeos/PHPBootCamp";
            Process.Start(link);
        }

        private void pictureBox4_Click(object sender, EventArgs e)
        {
            string link = "https://github.com/highwindLeos/PHPBootCamp";
            Process.Start(link);
        }
        // 서커스 Japen
        private void linkLabel4_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            string link = "http://circus-co.jp/";
            Process.Start(link);
            
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            label5.Visible = false;
            pictureBox1.Image = Properties.Resources.logo;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            label5.Visible = false;
            pictureBox1.Image = Properties.Resources.php;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            label5.Visible = false;
            pictureBox1.Image = Properties.Resources.Profile05;
        }
    }
}
