#pragma once
#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include "About.h"
#include "ClassClients.h"
#include "ClassWorkers.h"
#include "ClassHotel.h"
#include "ClassTours.h"
#include "ClassOrders.h"
#include "ClassComeback.h"
#include "EditClient.h"
#include "EditWorker.h"
#include "EditHotel.h"
#include "EditTours.h"
#include "EditOrders.h"
#include "EditComebacks.h"

namespace TourAgency {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Data::SqlServerCe;
	using namespace System::IO;
	using namespace System::Drawing::Printing;
	using namespace System::Drawing::Drawing2D;
	using namespace System::Drawing::Imaging; 
	typedef System::Drawing::Rectangle R;

	public ref class Main : public System::Windows::Forms::Form
	{
	private: 
		List<ClassClients^>^ clients;
		List<ClassWorkers^>^ workers;
		List<ClassHotel^>^ hotels;
		List<ClassTours^>^ tours;
		List<ClassOrders^>^ orders;
		List<ClassComeback^>^ comebacks;

	public:
		SqlCeConnection^ connection;
		SqlCeCommand^ command;
		SqlCeDataReader^ dataReader;
		SqlCeDataReader^ dataReader2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column39;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column25;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column26;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column27;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column28;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column38;

	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column40;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column29;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column30;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column31;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column32;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column33;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column34;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column35;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column36;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column37;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button26;







	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column23;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column24;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column41;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column19;






























































	public:
		SqlCeDataReader^ dataReader3;
	
	public:
		Main(void)
		{
			InitializeComponent();
			SqlCeEngine^ dbEngine = gcnew SqlCeEngine();
			dbEngine->LocalConnectionString = "Data Source = TourAgency.sdf";
			connection = gcnew SqlCeConnection(dbEngine->LocalConnectionString);
			clients = gcnew List<ClassClients^>();
			workers = gcnew List<ClassWorkers^>();
			hotels = gcnew List<ClassHotel^>();
			tours = gcnew List<ClassTours^>();
			orders = gcnew List<ClassOrders^>();
			comebacks = gcnew List<ClassComeback^>();
			printPreviewDialog1->Document = gcnew PrintDocument();
			printPreviewDialog1->Document->PrintPage += gcnew PrintPageEventHandler(this, &Main::prints);
		}

	protected:

		~Main()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PrintDialog^ printDialog1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ ClientsPage2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox3;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Button^ buttonAddClient;
	private: System::Windows::Forms::Button^ buttonRemoveClient;
	private: System::Windows::Forms::Button^ buttonEditClient;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TabPage^ OrderPage3;
	private: System::Windows::Forms::TabPage^ ToursPage5;
	private: System::Windows::Forms::TabPage^ HotelsPage6;
	private: System::Windows::Forms::TabPage^ WorkersPage7;

	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::TabPage^ MainPage1;

	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label26;

	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::ComboBox^ comboBox2;

	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label28;

	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Label^ label37;

	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Label^ label38;

	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button15;

	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::DataGridView^ dataGridView6;

	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Label^ label47;

	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button19;

	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::GroupBox^ groupBox7;

	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button22;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker4;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;

	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::Label^ label54;
	private: System::Windows::Forms::Label^ label53;
	private: System::Windows::Forms::Label^ label52;
	private: System::Windows::Forms::Label^ label51;
	private: System::Windows::Forms::Label^ label50;

	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label55;

	private: System::Drawing::Printing::PrintDocument^ printDocument1;

	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button8;

	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ туриToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ готеліToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ друкToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вихідToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ видToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ приховативідобразитиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ довідкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проПрограмуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;

	private: System::Windows::Forms::Splitter^ splitter2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->splitter2 = (gcnew System::Windows::Forms::Splitter());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->ClientsPage2 = (gcnew System::Windows::Forms::TabPage());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->buttonAddClient = (gcnew System::Windows::Forms::Button());
			this->buttonRemoveClient = (gcnew System::Windows::Forms::Button());
			this->buttonEditClient = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->OrderPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->ToursPage5 = (gcnew System::Windows::Forms::TabPage());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker4 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->Column40 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column29 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column30 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column31 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column32 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column33 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column34 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column35 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column36 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column37 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->HotelsPage6 = (gcnew System::Windows::Forms::TabPage());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->Column39 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column26 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column28 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column38 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->WorkersPage7 = (gcnew System::Windows::Forms::TabPage());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MainPage1 = (gcnew System::Windows::Forms::TabPage());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->туриToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->готеліToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->друкToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вихідToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->видToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->приховативідобразитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->довідкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->Column41 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->toolStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->ClientsPage2->SuspendLayout();
			this->panel11->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->OrderPage3->SuspendLayout();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->ToursPage5->SuspendLayout();
			this->panel19->SuspendLayout();
			this->panel18->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->panel17->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->panel16->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			this->HotelsPage6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->panel15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->panel13->SuspendLayout();
			this->WorkersPage7->SuspendLayout();
			this->panel12->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::Color::Black;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripButton3,
					this->toolStripButton2, this->toolStripButton1
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 28);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1924, 27);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(29, 24);
			this->toolStripButton3->Text = L"Вихід";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &Main::button8_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(29, 24);
			this->toolStripButton2->Text = L"Друк";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &Main::друкToolStripMenuItem_Click);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(29, 24);
			this->toolStripButton1->Text = L"Довідка";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Main::проПрограмуToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->splitter2);
			this->panel1->Controls->Add(this->tabControl1);
			this->panel1->Location = System::Drawing::Point(0, 65);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(2047, 954);
			this->panel1->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label11);
			this->panel2->Location = System::Drawing::Point(231, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1816, 54);
			this->panel2->TabIndex = 0;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label11->Location = System::Drawing::Point(1536, 16);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 29);
			this->label11->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(3, 15);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(227, 186);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Black;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(0, 796);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(233, 55);
			this->button8->TabIndex = 10;
			this->button8->Text = L"Вихід";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Main::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Gainsboro;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(0, 585);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(233, 55);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Персонал";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Main::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Gainsboro;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(0, 533);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(233, 55);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Готелі";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Main::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Gainsboro;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(0, 480);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(233, 55);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Тури";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Main::button5_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gainsboro;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(0, 426);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(233, 55);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Замовлення";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Main::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gainsboro;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(0, 374);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(233, 55);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Клієнти";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Main::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gainsboro;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(0, 322);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(233, 55);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Головна";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Text", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(1, 247);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 43);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Меню";
			// 
			// splitter2
			// 
			this->splitter2->BackColor = System::Drawing::Color::DimGray;
			this->splitter2->Location = System::Drawing::Point(0, 0);
			this->splitter2->Margin = System::Windows::Forms::Padding(4);
			this->splitter2->Name = L"splitter2";
			this->splitter2->Size = System::Drawing::Size(233, 954);
			this->splitter2->TabIndex = 12;
			this->splitter2->TabStop = false;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->ClientsPage2);
			this->tabControl1->Controls->Add(this->OrderPage3);
			this->tabControl1->Controls->Add(this->ToursPage5);
			this->tabControl1->Controls->Add(this->HotelsPage6);
			this->tabControl1->Controls->Add(this->WorkersPage7);
			this->tabControl1->Controls->Add(this->MainPage1);
			this->tabControl1->Location = System::Drawing::Point(231, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1816, 954);
			this->tabControl1->TabIndex = 11;
			// 
			// ClientsPage2
			// 
			this->ClientsPage2->BackColor = System::Drawing::Color::LightGray;
			this->ClientsPage2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientsPage2->Controls->Add(this->panel11);
			this->ClientsPage2->Controls->Add(this->groupBox2);
			this->ClientsPage2->Controls->Add(this->panel3);
			this->ClientsPage2->Controls->Add(this->groupBox1);
			this->ClientsPage2->Controls->Add(this->buttonRemoveClient);
			this->ClientsPage2->Controls->Add(this->buttonEditClient);
			this->ClientsPage2->Controls->Add(this->dataGridView1);
			this->ClientsPage2->Controls->Add(this->label2);
			this->ClientsPage2->Location = System::Drawing::Point(4, 25);
			this->ClientsPage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ClientsPage2->Name = L"ClientsPage2";
			this->ClientsPage2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ClientsPage2->Size = System::Drawing::Size(1808, 925);
			this->ClientsPage2->TabIndex = 1;
			this->ClientsPage2->Text = L"ClientsPage2";
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::Black;
			this->panel11->Controls->Add(this->label35);
			this->panel11->Location = System::Drawing::Point(72, 110);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(789, 48);
			this->panel11->TabIndex = 1;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::Black;
			this->label35->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label35->Location = System::Drawing::Point(306, 11);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(192, 25);
			this->label35->TabIndex = 0;
			this->label35->Text = L"Список клієнтів";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Silver;
			this->groupBox2->Controls->Add(this->pictureBox2);
			this->groupBox2->Controls->Add(this->button10);
			this->groupBox2->Controls->Add(this->panel5);
			this->groupBox2->Controls->Add(this->panel4);
			this->groupBox2->Controls->Add(this->button9);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(925, 591);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(722, 237);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Пошук";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(333, 53);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(68, 58);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Gray;
			this->button10->Location = System::Drawing::Point(23, 64);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(206, 43);
			this->button10->TabIndex = 4;
			this->button10->Text = L"Постійні клієнти";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Main::button10_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel5->Controls->Add(this->textBox3);
			this->panel5->Controls->Add(this->textBox2);
			this->panel5->Controls->Add(this->label10);
			this->panel5->Controls->Add(this->label9);
			this->panel5->Location = System::Drawing::Point(23, 128);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(675, 95);
			this->panel5->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Silver;
			this->textBox3->Location = System::Drawing::Point(477, 33);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(170, 27);
			this->textBox3->TabIndex = 3;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Main::search);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Silver;
			this->textBox2->Location = System::Drawing::Point(123, 34);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(170, 27);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Main::search);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(318, 36);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(153, 20);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Номер телефону";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 36);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(105, 20);
			this->label9->TabIndex = 0;
			this->label9->Text = L"ПІБ клієнта";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Black;
			this->panel4->Controls->Add(this->tableLayoutPanel1);
			this->panel4->Controls->Add(this->label8);
			this->panel4->Location = System::Drawing::Point(0, -1);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(722, 48);
			this->panel4->TabIndex = 1;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 54);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(716, 184);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Black;
			this->label8->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(323, 11);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(89, 25);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Пошук";
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Brown;
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button9->Location = System::Drawing::Point(492, 64);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(206, 43);
			this->button9->TabIndex = 3;
			this->button9->Text = L"Очистити фільтр";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Main::button9_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Black;
			this->panel3->Controls->Add(this->label3);
			this->panel3->Location = System::Drawing::Point(925, 110);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(722, 48);
			this->panel3->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(283, 11);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(139, 25);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Додавання";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->maskedTextBox3);
			this->groupBox1->Controls->Add(this->maskedTextBox2);
			this->groupBox1->Controls->Add(this->maskedTextBox1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->buttonAddClient);
			this->groupBox1->Location = System::Drawing::Point(925, 110);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(722, 409);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Нові дані";
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->BackColor = System::Drawing::Color::LightGray;
			this->maskedTextBox3->Location = System::Drawing::Point(432, 131);
			this->maskedTextBox3->Mask = L"00/00/0000";
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->Size = System::Drawing::Size(234, 22);
			this->maskedTextBox3->TabIndex = 11;
			this->maskedTextBox3->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->BackColor = System::Drawing::Color::LightGray;
			this->maskedTextBox2->Location = System::Drawing::Point(432, 254);
			this->maskedTextBox2->Mask = L"0000000000";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(234, 22);
			this->maskedTextBox2->TabIndex = 10;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->BackColor = System::Drawing::Color::LightGray;
			this->maskedTextBox1->Location = System::Drawing::Point(48, 252);
			this->maskedTextBox1->Mask = L"(999) 000-0000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(234, 22);
			this->maskedTextBox1->TabIndex = 8;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::LightGray;
			this->textBox1->Location = System::Drawing::Point(48, 122);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(234, 48);
			this->textBox1->TabIndex = 7;
			this->textBox1->Text = L"\r\n\r\n\r\n";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(428, 217);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(152, 22);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Номер паспорта";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(44, 217);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(155, 22);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Номер телефону";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(428, 93);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(166, 22);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Дата народження";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(44, 93);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 22);
			this->label4->TabIndex = 3;
			this->label4->Text = L"ПІБ клієнта";
			// 
			// buttonAddClient
			// 
			this->buttonAddClient->BackColor = System::Drawing::Color::Green;
			this->buttonAddClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAddClient->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonAddClient->Location = System::Drawing::Point(253, 332);
			this->buttonAddClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonAddClient->Name = L"buttonAddClient";
			this->buttonAddClient->Size = System::Drawing::Size(241, 45);
			this->buttonAddClient->TabIndex = 2;
			this->buttonAddClient->Text = L"Додати";
			this->buttonAddClient->UseVisualStyleBackColor = false;
			this->buttonAddClient->Click += gcnew System::EventHandler(this, &Main::buttonAddClient_Click);
			// 
			// buttonRemoveClient
			// 
			this->buttonRemoveClient->BackColor = System::Drawing::Color::DarkRed;
			this->buttonRemoveClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonRemoveClient->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonRemoveClient->Location = System::Drawing::Point(534, 841);
			this->buttonRemoveClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonRemoveClient->Name = L"buttonRemoveClient";
			this->buttonRemoveClient->Size = System::Drawing::Size(231, 45);
			this->buttonRemoveClient->TabIndex = 4;
			this->buttonRemoveClient->Text = L"Видалити";
			this->buttonRemoveClient->UseVisualStyleBackColor = false;
			this->buttonRemoveClient->Click += gcnew System::EventHandler(this, &Main::buttonRemoveClient_Click);
			// 
			// buttonEditClient
			// 
			this->buttonEditClient->BackColor = System::Drawing::Color::Olive;
			this->buttonEditClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonEditClient->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonEditClient->Location = System::Drawing::Point(200, 841);
			this->buttonEditClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonEditClient->Name = L"buttonEditClient";
			this->buttonEditClient->Size = System::Drawing::Size(231, 45);
			this->buttonEditClient->TabIndex = 3;
			this->buttonEditClient->Text = L"Редагувати";
			this->buttonEditClient->UseVisualStyleBackColor = false;
			this->buttonEditClient->Click += gcnew System::EventHandler(this, &Main::buttonEditClient_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column5,
					this->Column1, this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->Location = System::Drawing::Point(72, 157);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(789, 671);
			this->dataGridView1->TabIndex = 1;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Номер";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 60;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column1->HeaderText = L"ПІБ клієнта";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Дата народження";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Номер телефону";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Паспорт";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(32, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(253, 32);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Клієнти агентства";
			// 
			// OrderPage3
			// 
			this->OrderPage3->BackColor = System::Drawing::Color::Gainsboro;
			this->OrderPage3->Controls->Add(this->button27);
			this->OrderPage3->Controls->Add(this->panel9);
			this->OrderPage3->Controls->Add(this->dataGridView4);
			this->OrderPage3->Controls->Add(this->groupBox4);
			this->OrderPage3->Controls->Add(this->button14);
			this->OrderPage3->Controls->Add(this->button4);
			this->OrderPage3->Controls->Add(this->label25);
			this->OrderPage3->Controls->Add(this->panel8);
			this->OrderPage3->Controls->Add(this->dataGridView3);
			this->OrderPage3->Location = System::Drawing::Point(4, 25);
			this->OrderPage3->Margin = System::Windows::Forms::Padding(4);
			this->OrderPage3->Name = L"OrderPage3";
			this->OrderPage3->Size = System::Drawing::Size(1808, 925);
			this->OrderPage3->TabIndex = 2;
			this->OrderPage3->Text = L"OrderPage3";
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::Maroon;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button27->Location = System::Drawing::Point(1387, 36);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(203, 42);
			this->button27->TabIndex = 10;
			this->button27->Text = L"Очистити фільтр";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &Main::button27_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::Black;
			this->panel9->Controls->Add(this->label27);
			this->panel9->Location = System::Drawing::Point(958, 213);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(873, 46);
			this->panel9->TabIndex = 4;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label27->Location = System::Drawing::Point(294, 10);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(295, 29);
			this->label27->TabIndex = 4;
			this->label27->Text = L"Оформлені повернення";
			// 
			// dataGridView4
			// 
			this->dataGridView4->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn1,
					this->Column20, this->Column21, this->Column22, this->Column23, this->Column24
			});
			this->dataGridView4->Location = System::Drawing::Point(958, 255);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(873, 516);
			this->dataGridView4->TabIndex = 5;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Код повернення";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 60;
			// 
			// Column20
			// 
			this->Column20->HeaderText = L"Дата повернення";
			this->Column20->MinimumWidth = 6;
			this->Column20->Name = L"Column20";
			this->Column20->Width = 125;
			// 
			// Column21
			// 
			this->Column21->HeaderText = L"Кількість путівок";
			this->Column21->MinimumWidth = 6;
			this->Column21->Name = L"Column21";
			this->Column21->Width = 90;
			// 
			// Column22
			// 
			this->Column22->HeaderText = L"Загальна ціна";
			this->Column22->MinimumWidth = 6;
			this->Column22->Name = L"Column22";
			this->Column22->Width = 125;
			// 
			// Column23
			// 
			this->Column23->HeaderText = L"Причина повернення";
			this->Column23->MinimumWidth = 6;
			this->Column23->Name = L"Column23";
			this->Column23->Width = 130;
			// 
			// Column24
			// 
			this->Column24->HeaderText = L"Код замовлення";
			this->Column24->MinimumWidth = 6;
			this->Column24->Name = L"Column24";
			this->Column24->Width = 90;
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::DarkGray;
			this->groupBox4->Controls->Add(this->button26);
			this->groupBox4->Controls->Add(this->textBox5);
			this->groupBox4->Controls->Add(this->textBox4);
			this->groupBox4->Controls->Add(this->dateTimePicker2);
			this->groupBox4->Controls->Add(this->dateTimePicker1);
			this->groupBox4->Controls->Add(this->comboBox2);
			this->groupBox4->Controls->Add(this->label33);
			this->groupBox4->Controls->Add(this->label32);
			this->groupBox4->Controls->Add(this->label31);
			this->groupBox4->Controls->Add(this->label30);
			this->groupBox4->Controls->Add(this->label29);
			this->groupBox4->Controls->Add(this->panel10);
			this->groupBox4->Location = System::Drawing::Point(114, 88);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(1519, 100);
			this->groupBox4->TabIndex = 9;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"groupBox4";
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::Black;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button26->Location = System::Drawing::Point(1339, 49);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(138, 35);
			this->button26->TabIndex = 19;
			this->button26->Text = L"Знайти";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &Main::button26_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(1187, 57);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 18;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(979, 56);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 17;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker2->Location = System::Drawing::Point(625, 56);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(135, 22);
			this->dateTimePicker2->TabIndex = 16;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(443, 55);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(136, 22);
			this->dateTimePicker1->TabIndex = 15;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Замовлення", L"Повернення" });
			this->comboBox2->Location = System::Drawing::Point(183, 54);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(152, 24);
			this->comboBox2->TabIndex = 14;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(1085, 57);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(107, 20);
			this->label33->TabIndex = 13;
			this->label33->Text = L"максимум - ";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(766, 55);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(216, 20);
			this->label32->TabIndex = 12;
			this->label32->Text = L"Загальна ціна: мінімум - ";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(584, 55);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(47, 20);
			this->label31->TabIndex = 11;
			this->label31->Text = L"до - ";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(341, 55);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(104, 20);
			this->label30->TabIndex = 10;
			this->label30->Text = L"Дата: від - ";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(25, 55);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(157, 20);
			this->label29->TabIndex = 9;
			this->label29->Text = L"Тип оформлення:";
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::Black;
			this->panel10->Controls->Add(this->label28);
			this->panel10->Location = System::Drawing::Point(0, 0);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(1519, 38);
			this->panel10->TabIndex = 8;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Verdana", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label28->Location = System::Drawing::Point(601, 7);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(219, 23);
			this->label28->TabIndex = 0;
			this->label28->Text = L"Пошук за критеріями";
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Brown;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button14->Location = System::Drawing::Point(1095, 794);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(358, 54);
			this->button14->TabIndex = 7;
			this->button14->Text = L"Оформити повернення путівок";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Main::button14_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Green;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(368, 794);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(358, 54);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Оформити замовлення";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Main::button4_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(38, 41);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(528, 32);
			this->label25->TabIndex = 2;
			this->label25->Text = L"Облік замовлень та повернень путівок";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Black;
			this->panel8->Controls->Add(this->label26);
			this->panel8->Location = System::Drawing::Point(44, 213);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(859, 46);
			this->panel8->TabIndex = 1;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label26->Location = System::Drawing::Point(276, 10);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(296, 29);
			this->label26->TabIndex = 3;
			this->label26->Text = L"Оформлені замовлення";
			// 
			// dataGridView3
			// 
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column41,
					this->Column14, this->Column15, this->Column16, this->Column17, this->Column18, this->Column19
			});
			this->dataGridView3->Location = System::Drawing::Point(44, 255);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(859, 520);
			this->dataGridView3->TabIndex = 0;
			// 
			// ToursPage5
			// 
			this->ToursPage5->BackColor = System::Drawing::Color::Gainsboro;
			this->ToursPage5->Controls->Add(this->panel19);
			this->ToursPage5->Controls->Add(this->button25);
			this->ToursPage5->Controls->Add(this->panel18);
			this->ToursPage5->Controls->Add(this->groupBox7);
			this->ToursPage5->Controls->Add(this->panel17);
			this->ToursPage5->Controls->Add(this->groupBox6);
			this->ToursPage5->Controls->Add(this->button21);
			this->ToursPage5->Controls->Add(this->button20);
			this->ToursPage5->Controls->Add(this->button19);
			this->ToursPage5->Controls->Add(this->panel16);
			this->ToursPage5->Controls->Add(this->dataGridView6);
			this->ToursPage5->Controls->Add(this->label46);
			this->ToursPage5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ToursPage5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->ToursPage5->Location = System::Drawing::Point(4, 25);
			this->ToursPage5->Margin = System::Windows::Forms::Padding(4);
			this->ToursPage5->Name = L"ToursPage5";
			this->ToursPage5->Size = System::Drawing::Size(1808, 925);
			this->ToursPage5->TabIndex = 4;
			this->ToursPage5->Text = L"ToursPage5";
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::DarkGray;
			this->panel19->Controls->Add(this->linkLabel1);
			this->panel19->Controls->Add(this->label55);
			this->panel19->Location = System::Drawing::Point(1427, 25);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(389, 54);
			this->panel19->TabIndex = 10;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::Brown;
			this->linkLabel1->Location = System::Drawing::Point(176, 15);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(176, 24);
			this->linkLabel1->TabIndex = 1;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"http://travelstart.if.ua/";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Main::linkLabel1_LinkClicked);
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label55->Location = System::Drawing::Point(69, 15);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(101, 24);
			this->label55->TabIndex = 0;
			this->label55->Text = L"Веб-сайт: ";
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Maroon;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button25->Location = System::Drawing::Point(1348, 823);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(223, 43);
			this->button25->TabIndex = 9;
			this->button25->Text = L"Очистити фільтр";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &Main::button25_Click);
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::DarkRed;
			this->panel18->Controls->Add(this->label49);
			this->panel18->Location = System::Drawing::Point(918, 104);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(759, 46);
			this->panel18->TabIndex = 7;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label49->Location = System::Drawing::Point(310, 9);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(155, 25);
			this->label49->TabIndex = 0;
			this->label49->Text = L"Швидкий пошук";
			// 
			// groupBox7
			// 
			this->groupBox7->BackColor = System::Drawing::Color::Silver;
			this->groupBox7->Controls->Add(this->button24);
			this->groupBox7->Controls->Add(this->button23);
			this->groupBox7->Controls->Add(this->button22);
			this->groupBox7->Location = System::Drawing::Point(918, 104);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(759, 136);
			this->groupBox7->TabIndex = 8;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"groupBox7";
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::Black;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button24->Location = System::Drawing::Point(563, 68);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(175, 40);
			this->button24->TabIndex = 2;
			this->button24->Text = L"ТОП-5 турів";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &Main::button24_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::Black;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button23->Location = System::Drawing::Point(304, 68);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(175, 40);
			this->button23->TabIndex = 1;
			this->button23->Text = L"Тури для двох";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &Main::button23_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Black;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button22->Location = System::Drawing::Point(46, 68);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(175, 40);
			this->button22->TabIndex = 0;
			this->button22->Text = L"Гарячі тури";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &Main::button22_Click);
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::Olive;
			this->panel17->Controls->Add(this->label48);
			this->panel17->Location = System::Drawing::Point(104, 104);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(754, 46);
			this->panel17->TabIndex = 3;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label48->Location = System::Drawing::Point(286, 9);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(170, 25);
			this->label48->TabIndex = 0;
			this->label48->Text = L"Загальний пошук";
			// 
			// groupBox6
			// 
			this->groupBox6->BackColor = System::Drawing::Color::Silver;
			this->groupBox6->Controls->Add(this->button16);
			this->groupBox6->Controls->Add(this->dateTimePicker4);
			this->groupBox6->Controls->Add(this->dateTimePicker3);
			this->groupBox6->Controls->Add(this->textBox8);
			this->groupBox6->Controls->Add(this->textBox7);
			this->groupBox6->Controls->Add(this->textBox6);
			this->groupBox6->Controls->Add(this->label54);
			this->groupBox6->Controls->Add(this->label53);
			this->groupBox6->Controls->Add(this->label52);
			this->groupBox6->Controls->Add(this->label51);
			this->groupBox6->Controls->Add(this->label50);
			this->groupBox6->Location = System::Drawing::Point(103, 104);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(755, 136);
			this->groupBox6->TabIndex = 6;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"groupBox6";
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Black;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button16->Location = System::Drawing::Point(539, 93);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(154, 34);
			this->button16->TabIndex = 10;
			this->button16->Text = L"Знайти";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Main::searchGeneralTours);
			// 
			// dateTimePicker4
			// 
			this->dateTimePicker4->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker4->Location = System::Drawing::Point(367, 99);
			this->dateTimePicker4->Name = L"dateTimePicker4";
			this->dateTimePicker4->Size = System::Drawing::Size(113, 22);
			this->dateTimePicker4->TabIndex = 9;
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker3->Location = System::Drawing::Point(192, 99);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(113, 22);
			this->dateTimePicker3->TabIndex = 8;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(640, 61);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(92, 22);
			this->textBox8->TabIndex = 7;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(361, 63);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(92, 22);
			this->textBox7->TabIndex = 6;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(88, 63);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(148, 22);
			this->textBox6->TabIndex = 5;
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->BackColor = System::Drawing::Color::Transparent;
			this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label54->Location = System::Drawing::Point(471, 63);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(172, 20);
			this->label54->TabIndex = 4;
			this->label54->Text = L"Кількість туристів: ";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->BackColor = System::Drawing::Color::Transparent;
			this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label53->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label53->Location = System::Drawing::Point(253, 63);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(112, 20);
			this->label53->TabIndex = 3;
			this->label53->Text = L"Тривалість: ";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->BackColor = System::Drawing::Color::Transparent;
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label52->Location = System::Drawing::Point(317, 99);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(52, 20);
			this->label52->TabIndex = 2;
			this->label52->Text = L"до -  ";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->BackColor = System::Drawing::Color::Transparent;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label51->Location = System::Drawing::Point(16, 99);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(181, 20);
			this->label51->TabIndex = 1;
			this->label51->Text = L"Дата початку: від -  ";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->BackColor = System::Drawing::Color::Transparent;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label50->Location = System::Drawing::Point(16, 63);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(76, 20);
			this->label50->TabIndex = 0;
			this->label50->Text = L"Країна: ";
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Brown;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button21->Location = System::Drawing::Point(964, 823);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(184, 43);
			this->button21->TabIndex = 5;
			this->button21->Text = L"Видалити";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &Main::button21_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Olive;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button20->Location = System::Drawing::Point(728, 823);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(184, 43);
			this->button20->TabIndex = 4;
			this->button20->Text = L"Редагувати";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &Main::button20_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Green;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button19->Location = System::Drawing::Point(490, 823);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(184, 43);
			this->button19->TabIndex = 3;
			this->button19->Text = L"Додати";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Main::button19_Click);
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::Black;
			this->panel16->Controls->Add(this->label47);
			this->panel16->Location = System::Drawing::Point(48, 288);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(1719, 46);
			this->panel16->TabIndex = 2;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label47->Location = System::Drawing::Point(686, 12);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(129, 25);
			this->label47->TabIndex = 0;
			this->label47->Text = L"Список турів";
			// 
			// dataGridView6
			// 
			this->dataGridView6->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Column40,
					this->Column29, this->Column30, this->Column31, this->Column32, this->Column33, this->Column34, this->Column35, this->Column36,
					this->Column37
			});
			this->dataGridView6->Location = System::Drawing::Point(48, 331);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->RowHeadersWidth = 51;
			this->dataGridView6->RowTemplate->Height = 24;
			this->dataGridView6->Size = System::Drawing::Size(1719, 477);
			this->dataGridView6->TabIndex = 1;
			// 
			// Column40
			// 
			this->Column40->HeaderText = L"Код туру";
			this->Column40->MinimumWidth = 6;
			this->Column40->Name = L"Column40";
			this->Column40->Width = 60;
			// 
			// Column29
			// 
			this->Column29->HeaderText = L"Назва туру";
			this->Column29->MinimumWidth = 6;
			this->Column29->Name = L"Column29";
			this->Column29->Width = 140;
			// 
			// Column30
			// 
			this->Column30->HeaderText = L"Тип туру";
			this->Column30->MinimumWidth = 6;
			this->Column30->Name = L"Column30";
			this->Column30->Width = 125;
			// 
			// Column31
			// 
			this->Column31->HeaderText = L"Сезон туру";
			this->Column31->MinimumWidth = 6;
			this->Column31->Name = L"Column31";
			this->Column31->Width = 125;
			// 
			// Column32
			// 
			this->Column32->HeaderText = L"Ціна";
			this->Column32->MinimumWidth = 6;
			this->Column32->Name = L"Column32";
			this->Column32->Width = 125;
			// 
			// Column33
			// 
			this->Column33->HeaderText = L"Тривалість";
			this->Column33->MinimumWidth = 6;
			this->Column33->Name = L"Column33";
			this->Column33->Width = 125;
			// 
			// Column34
			// 
			this->Column34->HeaderText = L"Кількість туристів";
			this->Column34->MinimumWidth = 6;
			this->Column34->Name = L"Column34";
			this->Column34->Width = 125;
			// 
			// Column35
			// 
			this->Column35->HeaderText = L"Країна";
			this->Column35->MinimumWidth = 6;
			this->Column35->Name = L"Column35";
			this->Column35->Width = 125;
			// 
			// Column36
			// 
			this->Column36->HeaderText = L"Код готелю";
			this->Column36->MinimumWidth = 6;
			this->Column36->Name = L"Column36";
			this->Column36->Width = 125;
			// 
			// Column37
			// 
			this->Column37->HeaderText = L"Дата туру";
			this->Column37->MinimumWidth = 6;
			this->Column37->Name = L"Column37";
			this->Column37->Width = 125;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label46->Location = System::Drawing::Point(32, 48);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(397, 32);
			this->label46->TabIndex = 0;
			this->label46->Text = L"Тури, які пропонує агентство";
			// 
			// HotelsPage6
			// 
			this->HotelsPage6->BackColor = System::Drawing::Color::Gainsboro;
			this->HotelsPage6->Controls->Add(this->button18);
			this->HotelsPage6->Controls->Add(this->button17);
			this->HotelsPage6->Controls->Add(this->button15);
			this->HotelsPage6->Controls->Add(this->groupBox5);
			this->HotelsPage6->Controls->Add(this->dataGridView5);
			this->HotelsPage6->Controls->Add(this->panel13);
			this->HotelsPage6->Controls->Add(this->label34);
			this->HotelsPage6->Location = System::Drawing::Point(4, 25);
			this->HotelsPage6->Margin = System::Windows::Forms::Padding(4);
			this->HotelsPage6->Name = L"HotelsPage6";
			this->HotelsPage6->Size = System::Drawing::Size(1808, 925);
			this->HotelsPage6->TabIndex = 5;
			this->HotelsPage6->Text = L"HotelsPage6";
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Brown;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button18->Location = System::Drawing::Point(597, 804);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(186, 44);
			this->button18->TabIndex = 6;
			this->button18->Text = L"Видалити";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Main::button18_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Olive;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button17->Location = System::Drawing::Point(341, 804);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(186, 44);
			this->button17->TabIndex = 5;
			this->button17->Text = L"Редагувати";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Main::button17_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Green;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button15->Location = System::Drawing::Point(88, 804);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(186, 44);
			this->button15->TabIndex = 4;
			this->button15->Text = L"Додати";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Main::button15_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox5->Controls->Add(this->label44);
			this->groupBox5->Controls->Add(this->label43);
			this->groupBox5->Controls->Add(this->label42);
			this->groupBox5->Controls->Add(this->label41);
			this->groupBox5->Controls->Add(this->label40);
			this->groupBox5->Controls->Add(this->label39);
			this->groupBox5->Controls->Add(this->panel15);
			this->groupBox5->Controls->Add(this->pictureBox4);
			this->groupBox5->Controls->Add(this->panel14);
			this->groupBox5->Location = System::Drawing::Point(911, 119);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(777, 653);
			this->groupBox5->TabIndex = 3;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"groupBox5";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(253, 458);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(0, 24);
			this->label44->TabIndex = 10;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(618, 405);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(0, 24);
			this->label43->TabIndex = 9;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(203, 405);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(0, 24);
			this->label42->TabIndex = 8;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(77, 457);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(171, 24);
			this->label41->TabIndex = 7;
			this->label41->Text = L"Номер телефону: ";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(479, 405);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(132, 24);
			this->label40->TabIndex = 6;
			this->label40->Text = L"Клас готелю: ";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(77, 405);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(124, 24);
			this->label39->TabIndex = 5;
			this->label39->Text = L"Тип готелю: ";
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::LightGray;
			this->panel15->Controls->Add(this->comboBox3);
			this->panel15->Controls->Add(this->label45);
			this->panel15->Location = System::Drawing::Point(49, 515);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(678, 104);
			this->panel15->TabIndex = 4;
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(253, 33);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(343, 30);
			this->comboBox3->TabIndex = 1;
			this->comboBox3->TextChanged += gcnew System::EventHandler(this, &Main::searchHotel);
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(85, 38);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(144, 24);
			this->label45->TabIndex = 0;
			this->label45->Text = L"Назва готелю: ";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(124, 69);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(562, 307);
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::Black;
			this->panel14->Controls->Add(this->label38);
			this->panel14->Location = System::Drawing::Point(0, 0);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(777, 46);
			this->panel14->TabIndex = 2;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label38->Location = System::Drawing::Point(290, 11);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(233, 25);
			this->label38->TabIndex = 0;
			this->label38->Text = L"Детальна інформація";
			// 
			// dataGridView5
			// 
			this->dataGridView5->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column39,
					this->Column25, this->Column26, this->Column27, this->Column28, this->Column38
			});
			this->dataGridView5->Location = System::Drawing::Point(61, 165);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->RowTemplate->Height = 24;
			this->dataGridView5->Size = System::Drawing::Size(788, 607);
			this->dataGridView5->TabIndex = 2;
			// 
			// Column39
			// 
			this->Column39->HeaderText = L"Код готелю";
			this->Column39->MinimumWidth = 6;
			this->Column39->Name = L"Column39";
			this->Column39->Width = 65;
			// 
			// Column25
			// 
			this->Column25->HeaderText = L"Назва готелю";
			this->Column25->MinimumWidth = 6;
			this->Column25->Name = L"Column25";
			this->Column25->Width = 160;
			// 
			// Column26
			// 
			this->Column26->HeaderText = L"Тип готелю";
			this->Column26->MinimumWidth = 6;
			this->Column26->Name = L"Column26";
			this->Column26->Width = 90;
			// 
			// Column27
			// 
			this->Column27->HeaderText = L"Клас готелю";
			this->Column27->MinimumWidth = 6;
			this->Column27->Name = L"Column27";
			this->Column27->Width = 125;
			// 
			// Column28
			// 
			this->Column28->HeaderText = L"Номер телефону";
			this->Column28->MinimumWidth = 6;
			this->Column28->Name = L"Column28";
			this->Column28->Width = 95;
			// 
			// Column38
			// 
			this->Column38->HeaderText = L"Фото";
			this->Column38->MinimumWidth = 6;
			this->Column38->Name = L"Column38";
			this->Column38->Visible = false;
			this->Column38->Width = 125;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::Black;
			this->panel13->Controls->Add(this->label37);
			this->panel13->Location = System::Drawing::Point(61, 119);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(788, 46);
			this->panel13->TabIndex = 1;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label37->Location = System::Drawing::Point(325, 11);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(167, 25);
			this->label37->TabIndex = 0;
			this->label37->Text = L"Список готелів";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(42, 51);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(511, 32);
			this->label34->TabIndex = 0;
			this->label34->Text = L"Готелі, з якими співпрацює агентство";
			// 
			// WorkersPage7
			// 
			this->WorkersPage7->BackColor = System::Drawing::Color::Silver;
			this->WorkersPage7->Controls->Add(this->panel12);
			this->WorkersPage7->Controls->Add(this->button13);
			this->WorkersPage7->Controls->Add(this->button12);
			this->WorkersPage7->Controls->Add(this->button11);
			this->WorkersPage7->Controls->Add(this->groupBox3);
			this->WorkersPage7->Controls->Add(this->label12);
			this->WorkersPage7->Controls->Add(this->dataGridView2);
			this->WorkersPage7->Location = System::Drawing::Point(4, 25);
			this->WorkersPage7->Margin = System::Windows::Forms::Padding(4);
			this->WorkersPage7->Name = L"WorkersPage7";
			this->WorkersPage7->Size = System::Drawing::Size(1808, 925);
			this->WorkersPage7->TabIndex = 6;
			this->WorkersPage7->Text = L"WorkersPage7";
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::Black;
			this->panel12->Controls->Add(this->label36);
			this->panel12->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel12->Location = System::Drawing::Point(660, 108);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(1236, 55);
			this->panel12->TabIndex = 1;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label36->Location = System::Drawing::Point(426, 15);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(358, 25);
			this->label36->TabIndex = 0;
			this->label36->Text = L"Список працівників агентства";
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::DarkRed;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button13->Location = System::Drawing::Point(1473, 801);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(216, 47);
			this->button13->TabIndex = 6;
			this->button13->Text = L"Видалити";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Main::button13_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Olive;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button12->Location = System::Drawing::Point(1184, 801);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(216, 47);
			this->button12->TabIndex = 5;
			this->button12->Text = L"Редагувати";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Main::button12_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Green;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button11->Location = System::Drawing::Point(880, 801);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(216, 47);
			this->button11->TabIndex = 4;
			this->button11->Text = L"Додати";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Main::button11_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->groupBox3->Controls->Add(this->panel7);
			this->groupBox3->Controls->Add(this->label23);
			this->groupBox3->Controls->Add(this->label22);
			this->groupBox3->Controls->Add(this->label21);
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->panel6);
			this->groupBox3->Controls->Add(this->pictureBox3);
			this->groupBox3->Location = System::Drawing::Point(5, 108);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(637, 670);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"groupBox3";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Silver;
			this->panel7->Controls->Add(this->comboBox1);
			this->panel7->Controls->Add(this->label24);
			this->panel7->Location = System::Drawing::Point(93, 519);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(437, 100);
			this->panel7->TabIndex = 13;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(129, 55);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(190, 30);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->TextChanged += gcnew System::EventHandler(this, &Main::searchWorker);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(125, 20);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(208, 24);
			this->label24->TabIndex = 0;
			this->label24->Text = L"Вибір ПІБ працівника: ";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(36, 442);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(0, 24);
			this->label23->TabIndex = 12;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(349, 348);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(0, 24);
			this->label22->TabIndex = 11;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(350, 277);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(0, 24);
			this->label21->TabIndex = 10;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(350, 211);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(0, 24);
			this->label20->TabIndex = 9;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(350, 137);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(0, 24);
			this->label19->TabIndex = 8;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(348, 315);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(171, 24);
			this->label18->TabIndex = 7;
			this->label18->Text = L"Номер телефону: ";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(36, 404);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(87, 24);
			this->label17->TabIndex = 6;
			this->label17->Text = L"Адреса: ";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(348, 246);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(183, 24);
			this->label16->TabIndex = 5;
			this->label16->Text = L"Електронна пошта:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(349, 177);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(181, 24);
			this->label15->TabIndex = 4;
			this->label15->Text = L"Дата народження: ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(348, 105);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(86, 24);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Посада: ";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Black;
			this->panel6->Controls->Add(this->label13);
			this->panel6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel6->Location = System::Drawing::Point(0, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(637, 55);
			this->panel6->TabIndex = 0;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label13->Location = System::Drawing::Point(163, 15);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(304, 25);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Персональна інформація";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Silver;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(24, 89);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(276, 287);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(25, 40);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(304, 32);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Працівники агентства";
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column6,
					this->Column7, this->Column8, this->Column9, this->Column10, this->Column11, this->Column12, this->Column13
			});
			this->dataGridView2->Location = System::Drawing::Point(660, 162);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(1172, 616);
			this->dataGridView2->TabIndex = 0;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Номер";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 50;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"ПІБ працівника";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 150;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Дата народження";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 125;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Пошта";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->Width = 125;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Телефон";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->Width = 125;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Адреса";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->Width = 125;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"Посада";
			this->Column12->MinimumWidth = 6;
			this->Column12->Name = L"Column12";
			this->Column12->Width = 125;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"src";
			this->Column13->MinimumWidth = 6;
			this->Column13->Name = L"Column13";
			this->Column13->Visible = false;
			this->Column13->Width = 125;
			// 
			// MainPage1
			// 
			this->MainPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MainPage1.BackgroundImage")));
			this->MainPage1->Location = System::Drawing::Point(4, 25);
			this->MainPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MainPage1->Name = L"MainPage1";
			this->MainPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MainPage1->Size = System::Drawing::Size(1808, 925);
			this->MainPage1->TabIndex = 0;
			this->MainPage1->Text = L"MainPage1";
			this->MainPage1->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Black;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->файлToolStripMenuItem,
					this->видToolStripMenuItem, this->довідкаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1924, 28);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->туриToolStripMenuItem,
					this->готеліToolStripMenuItem, this->toolStripSeparator1, this->друкToolStripMenuItem, this->вихідToolStripMenuItem
			});
			this->файлToolStripMenuItem->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// туриToolStripMenuItem
			// 
			this->туриToolStripMenuItem->BackColor = System::Drawing::Color::White;
			this->туриToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"туриToolStripMenuItem.Image")));
			this->туриToolStripMenuItem->Name = L"туриToolStripMenuItem";
			this->туриToolStripMenuItem->Size = System::Drawing::Size(175, 26);
			this->туриToolStripMenuItem->Text = L"Тури";
			this->туриToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::button5_Click);
			// 
			// готеліToolStripMenuItem
			// 
			this->готеліToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"готеліToolStripMenuItem.Image")));
			this->готеліToolStripMenuItem->Name = L"готеліToolStripMenuItem";
			this->готеліToolStripMenuItem->Size = System::Drawing::Size(175, 26);
			this->готеліToolStripMenuItem->Text = L"Готелі";
			this->готеліToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::button6_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(172, 6);
			// 
			// друкToolStripMenuItem
			// 
			this->друкToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"друкToolStripMenuItem.Image")));
			this->друкToolStripMenuItem->Name = L"друкToolStripMenuItem";
			this->друкToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::P));
			this->друкToolStripMenuItem->Size = System::Drawing::Size(175, 26);
			this->друкToolStripMenuItem->Text = L"Друк";
			this->друкToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::друкToolStripMenuItem_Click);
			// 
			// вихідToolStripMenuItem
			// 
			this->вихідToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"вихідToolStripMenuItem.Image")));
			this->вихідToolStripMenuItem->Name = L"вихідToolStripMenuItem";
			this->вихідToolStripMenuItem->Size = System::Drawing::Size(175, 26);
			this->вихідToolStripMenuItem->Text = L"Вихід";
			this->вихідToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::button8_Click);
			// 
			// видToolStripMenuItem
			// 
			this->видToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->приховативідобразитиToolStripMenuItem });
			this->видToolStripMenuItem->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->видToolStripMenuItem->Name = L"видToolStripMenuItem";
			this->видToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->видToolStripMenuItem->Text = L"Вид";
			// 
			// приховативідобразитиToolStripMenuItem
			// 
			this->приховативідобразитиToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"приховативідобразитиToolStripMenuItem.Image")));
			this->приховативідобразитиToolStripMenuItem->Name = L"приховативідобразитиToolStripMenuItem";
			this->приховативідобразитиToolStripMenuItem->Size = System::Drawing::Size(268, 26);
			this->приховативідобразитиToolStripMenuItem->Text = L"Приховати (відобразити)";
			this->приховативідобразитиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::приховативідобразитиToolStripMenuItem_Click);
			// 
			// довідкаToolStripMenuItem
			// 
			this->довідкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->проПрограмуToolStripMenuItem });
			this->довідкаToolStripMenuItem->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->довідкаToolStripMenuItem->Name = L"довідкаToolStripMenuItem";
			this->довідкаToolStripMenuItem->Size = System::Drawing::Size(77, 24);
			this->довідкаToolStripMenuItem->Text = L"Довідка";
			// 
			// проПрограмуToolStripMenuItem
			// 
			this->проПрограмуToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"проПрограмуToolStripMenuItem.Image")));
			this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
			this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(193, 26);
			this->проПрограмуToolStripMenuItem->Text = L"Про програму";
			this->проПрограмуToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::проПрограмуToolStripMenuItem_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Main::timer1_Tick);
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// Column41
			// 
			this->Column41->HeaderText = L"Код замовлення";
			this->Column41->MinimumWidth = 6;
			this->Column41->Name = L"Column41";
			this->Column41->Width = 70;
			// 
			// Column14
			// 
			this->Column14->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Column14->HeaderText = L"Дата замовлення";
			this->Column14->MinimumWidth = 6;
			this->Column14->Name = L"Column14";
			this->Column14->Width = 125;
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"Кількість путівок";
			this->Column15->MinimumWidth = 6;
			this->Column15->Name = L"Column15";
			this->Column15->Width = 70;
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"Загальна ціна";
			this->Column16->MinimumWidth = 6;
			this->Column16->Name = L"Column16";
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"Код працівника";
			this->Column17->MinimumWidth = 6;
			this->Column17->Name = L"Column17";
			this->Column17->Width = 70;
			// 
			// Column18
			// 
			this->Column18->HeaderText = L"Код клієнта";
			this->Column18->MinimumWidth = 6;
			this->Column18->Name = L"Column18";
			this->Column18->Width = 70;
			// 
			// Column19
			// 
			this->Column19->HeaderText = L"Код туру";
			this->Column19->MinimumWidth = 6;
			this->Column19->Name = L"Column19";
			this->Column19->Width = 60;
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1924, 1018);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Туристичне агентство \"Travel Start\" | Адміністрація";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Main::Form1_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->ClientsPage2->ResumeLayout(false);
			this->ClientsPage2->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->OrderPage3->ResumeLayout(false);
			this->OrderPage3->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ToursPage5->ResumeLayout(false);
			this->ToursPage5->PerformLayout();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			this->HotelsPage6->ResumeLayout(false);
			this->HotelsPage6->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->WorkersPage7->ResumeLayout(false);
			this->WorkersPage7->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:

	//
	// additional functions (clients)
	//

		void getDataClient() {
			connection->Open();
			SqlCeCommand^ command = connection->CreateCommand();
			command->CommandText = "SELECT * FROM Clients";
			SqlCeDataReader^ sqlRead = command->ExecuteReader();
			clients->Clear();
			while (sqlRead->Read()) {
				clients->Add(gcnew ClassClients(
					System::Convert::ToInt32(sqlRead["IdClient"]),
					System::Convert::ToString(sqlRead["SurNameClient"]),
					System::Convert::ToString(sqlRead["BirthClient"]),
					System::Convert::ToString(sqlRead["PhoneClient"]),
					System::Convert::ToString(sqlRead["PassportClient"])
				));
			}
			connection->Close();
			this->updateTable();
		}

		//метод передачі запиту до БД на виконання
		void execute(String^ query) {
			connection->Open();
			SqlCeCommand^ command = gcnew SqlCeCommand(query, connection);
			command->ExecuteNonQuery();
			connection->Close();
		}

		// метод повернення результатів виконання запиту
		void getQueryClients(String^ query) {
			connection->Open();
			SqlCeCommand^ command = gcnew SqlCeCommand(query, connection);
			SqlCeDataReader^ sqlRead = command->ExecuteReader();
			clients->Clear();
			while (sqlRead->Read()) {
				clients->Add(gcnew ClassClients(
					System::Convert::ToInt32(sqlRead["IdClient"]),
					System::Convert::ToString(sqlRead["SurNameClient"]),
					System::Convert::ToString(sqlRead["BirthClient"]),
					System::Convert::ToString(sqlRead["PhoneClient"]),
					System::Convert::ToString(sqlRead["PassportClient"])
				));
			}
			sqlRead->Close();
			connection->Close();
			this->updateTable();
		}

		// метод оновлення таблиці dataGridView
		void updateTable() {
			int i = 0;
			dataGridView1->Rows->Clear();
			for each (ClassClients ^ dep in clients) {
				this->dataGridView1->Rows->Add();
				this->dataGridView1->Rows[i]->Cells[0]->Value = dep -> getId();
				this->dataGridView1->Rows[i]->Cells[1]->Value = dep -> getName();
				this->dataGridView1->Rows[i]->Cells[2]->Value = dep -> getBirth();
				this->dataGridView1->Rows[i]->Cells[3]->Value = dep -> getPhone();
				this->dataGridView1->Rows[i]->Cells[4]->Value = dep -> getPassport();
				++i;
			}
			if (dataGridView1->Rows->Count > 0)
			{
				buttonEditClient->Enabled = true;
				buttonRemoveClient->Enabled = true;
			}
			else
			{
				buttonEditClient->Enabled = false;
				buttonRemoveClient->Enabled = false;
			}
		}

	//
	// additional functions (workers)
	//

		void getDataWorker() {
			connection->Open();
			SqlCeCommand^ command = connection->CreateCommand();
			command->CommandText = "SELECT * FROM Workers";
			SqlCeDataReader^ sqlRead = command->ExecuteReader();
			comboBox1->Items->Clear();
			workers->Clear();
			while (sqlRead->Read()) {
				workers->Add(gcnew ClassWorkers(
					System::Convert::ToInt32(sqlRead["IdWorker"]),
					System::Convert::ToString(sqlRead["SurNameWorker"]),
					System::Convert::ToString(sqlRead["BirthWorker"]),
					System::Convert::ToString(sqlRead["EmailWorker"]),
					System::Convert::ToString(sqlRead["AddressWorker"]),
					System::Convert::ToString(sqlRead["PhoneWorker"]),
					System::Convert::ToString(sqlRead["Position"]),
					System::Convert::ToString(sqlRead["srcImage"])
				));
				comboBox1->Items->Add(System::Convert::ToString(sqlRead["SurNameWorker"])); 
			}
			connection->Close();
			this->updateTableWorker();
		}

		void getQueryWorkers(String^ query) {
			connection->Open();
			SqlCeCommand^ command = gcnew SqlCeCommand(query, connection);
			SqlCeDataReader^ sqlRead = command->ExecuteReader();
			while (sqlRead->Read()) {
				pictureBox3->ImageLocation = System::Convert::ToString(sqlRead["srcImage"]);
				pictureBox3->SizeMode = PictureBoxSizeMode::StretchImage;
				label19->Text = System::Convert::ToString(sqlRead["Position"]);
				label20->Text = System::Convert::ToString(sqlRead["BirthWorker"]);
				label21->Text = System::Convert::ToString(sqlRead["EmailWorker"]);
				label22->Text = System::Convert::ToString(sqlRead["PhoneWorker"]);
				label23->Text = System::Convert::ToString(sqlRead["AddressWorker"]);
			}
			sqlRead->Close();
			connection->Close();
		}

		void updateTableWorker() {
			int i = 0;
			dataGridView2->Rows->Clear();
			for each (ClassWorkers ^ dep in workers) {
				this->dataGridView2->Rows->Add();
				this->dataGridView2->Rows[i]->Cells[0]->Value = dep->getId();
				this->dataGridView2->Rows[i]->Cells[1]->Value = dep->getName();
				this->dataGridView2->Rows[i]->Cells[2]->Value = dep->getBirth();
				this->dataGridView2->Rows[i]->Cells[3]->Value = dep->getEmail();
				this->dataGridView2->Rows[i]->Cells[4]->Value = dep->getAddress();
				this->dataGridView2->Rows[i]->Cells[5]->Value = dep->getPhone();
				this->dataGridView2->Rows[i]->Cells[6]->Value = dep->getPosition();
				this->dataGridView2->Rows[i]->Cells[7]->Value = dep->getSRC();
				++i;
			}
			if (dataGridView2->Rows->Count > 0)
			{
				button12->Enabled = true;
				button13->Enabled = true;
			}
			else
			{
				button12->Enabled = false;
				button13->Enabled = false;
			}
		}

	//
	// additional functions (hotels)
	//

		void getDataHotel() {
			connection->Open();
			SqlCeCommand^ command = connection->CreateCommand();
			command->CommandText = "SELECT * FROM Hotel";
			SqlCeDataReader^ sqlRead = command->ExecuteReader();
			comboBox3->Items->Clear();
			hotels->Clear();
			while (sqlRead->Read()) {
				hotels->Add(gcnew ClassHotel(
					System::Convert::ToInt32(sqlRead["IdHotel"]),
					System::Convert::ToString(sqlRead["NameHotel"]),
					System::Convert::ToString(sqlRead["TypeHotel"]),
					System::Convert::ToString(sqlRead["ClassHotel"]),
					System::Convert::ToString(sqlRead["PhoneHotel"]),
					System::Convert::ToString(sqlRead["srcImage"])
				));
				comboBox3->Items->Add(System::Convert::ToString(sqlRead["NameHotel"])); 
			}
			connection->Close();
			this->updateTableHotel();
		}

		void getQueryHotels(String^ query) {
			connection->Open();
			SqlCeCommand^ command = gcnew SqlCeCommand(query, connection);
			SqlCeDataReader^ sqlRead = command->ExecuteReader();
			while (sqlRead->Read()) {
				pictureBox4->ImageLocation = System::Convert::ToString(sqlRead["srcImage"]);
				pictureBox4->SizeMode = PictureBoxSizeMode::StretchImage;
				label42->Text = System::Convert::ToString(sqlRead["TypeHotel"]);
				label43->Text = System::Convert::ToString(sqlRead["ClassHotel"]);
				label44->Text = System::Convert::ToString(sqlRead["PhoneHotel"]);
			}
			sqlRead->Close();
			connection->Close();
		}

		void updateTableHotel() {
			int i = 0;
			dataGridView5->Rows->Clear();
			for each (ClassHotel ^ dep in hotels) {
				this->dataGridView5->Rows->Add();
				this->dataGridView5->Rows[i]->Cells[0]->Value = dep->getId();
				this->dataGridView5->Rows[i]->Cells[1]->Value = dep->getName();
				this->dataGridView5->Rows[i]->Cells[2]->Value = dep->getType();
				this->dataGridView5->Rows[i]->Cells[3]->Value = dep->getClassOfHotel();
				this->dataGridView5->Rows[i]->Cells[4]->Value = dep->getPhone();
				this->dataGridView5->Rows[i]->Cells[5]->Value = dep->getSRC();
				++i;
			}
			if (dataGridView5->Rows->Count > 0)
			{
				button17->Enabled = true;
				button18->Enabled = true;
			}
			else
			{
				button17->Enabled = false;
				button18->Enabled = false;
			}
		}

	//
	// additional functions (tours)
	//

		void getDataTour() {
			connection->Open();
			SqlCeCommand^ command = connection->CreateCommand();
			command->CommandText = "SELECT * FROM Tours";
			SqlCeDataReader^ sqlRead = command->ExecuteReader();
			tours->Clear();
			while (sqlRead->Read()) {
				tours->Add(gcnew ClassTours(
					System::Convert::ToInt32(sqlRead["IdTours"]),
					System::Convert::ToString(sqlRead["NameTours"]),
					System::Convert::ToString(sqlRead["TypeTours"]),
					System::Convert::ToString(sqlRead["SeasonTours"]),
					System::Convert::ToDouble(sqlRead["PriceTours"]),
					System::Convert::ToInt32(sqlRead["DurationTours"]),
					System::Convert::ToInt32(sqlRead["CountTourists"]),
					System::Convert::ToString(sqlRead["CountriesTours"]),
					System::Convert::ToInt32(sqlRead["IdHotel"]),
					System::Convert::ToString(sqlRead["DateTours"])
				));
			}
			connection->Close();
			this->updateTableTour();
		}

		void getQueryTours(String^ query) {
			connection->Open();
			SqlCeCommand^ command = gcnew SqlCeCommand(query, connection);
			SqlCeDataReader^ sqlRead = command->ExecuteReader();
			tours->Clear();
			while (sqlRead->Read()) {
				tours->Add(gcnew ClassTours(
					System::Convert::ToInt32(sqlRead["IdTours"]),
					System::Convert::ToString(sqlRead["NameTours"]),
					System::Convert::ToString(sqlRead["TypeTours"]),
					System::Convert::ToString(sqlRead["SeasonTours"]),
					System::Convert::ToDouble(sqlRead["PriceTours"]),
					System::Convert::ToInt32(sqlRead["DurationTours"]),
					System::Convert::ToInt32(sqlRead["CountTourists"]),
					System::Convert::ToString(sqlRead["CountriesTours"]),
					System::Convert::ToInt32(sqlRead["IdHotel"]),
					System::Convert::ToString(sqlRead["DateTours"])
				));
			}
			sqlRead->Close();
			connection->Close();
			this->updateTableTour();
		}

		void updateTableTour() {
			int i = 0;
			dataGridView6->Rows->Clear();
			for each (ClassTours ^ dep in tours) {
				this->dataGridView6->Rows->Add();
				this->dataGridView6->Rows[i]->Cells[0]->Value = dep->getId();
				this->dataGridView6->Rows[i]->Cells[1]->Value = dep->getName();
				this->dataGridView6->Rows[i]->Cells[2]->Value = dep->getType();
				this->dataGridView6->Rows[i]->Cells[3]->Value = dep->getSeason();
				this->dataGridView6->Rows[i]->Cells[4]->Value = dep->getPrice();
				this->dataGridView6->Rows[i]->Cells[5]->Value = dep->getDuration();
				this->dataGridView6->Rows[i]->Cells[6]->Value = dep->getCountTourists();
				this->dataGridView6->Rows[i]->Cells[7]->Value = dep->getCountries();
				this->dataGridView6->Rows[i]->Cells[8]->Value = dep->getHotel();
				this->dataGridView6->Rows[i]->Cells[9]->Value = dep->getDate();
				++i;
			}
			if (dataGridView6->Rows->Count > 0)
			{
				button20->Enabled = true;
				button21->Enabled = true;
			}
			else
			{
				button20->Enabled = false;
				button21->Enabled = false;
			}
		}

	//
	// additional functions (orders)
	//

		void getDataOrder() {
			connection->Open();
			SqlCeCommand^ command = connection->CreateCommand();
			command->CommandText = "SELECT * FROM Orders";
			SqlCeDataReader^ sqlRead = command->ExecuteReader();
			orders->Clear();
			while (sqlRead->Read()) {
				orders->Add(gcnew ClassOrders(
					System::Convert::ToInt32(sqlRead["IdOrder"]),
					System::Convert::ToString(sqlRead["DateTimeOrder"]),
					System::Convert::ToInt32(sqlRead["CountOrders"]),
					System::Convert::ToDouble(sqlRead["GeneralPriceOrder"]),
					System::Convert::ToInt32(sqlRead["IdWorker"]),
					System::Convert::ToInt32(sqlRead["IdClient"]),
					System::Convert::ToInt32(sqlRead["IdTours"])
				));
			}
			connection->Close();
			this->updateTableOrder();
		}

		void getQueryOrders(String^ query) {
			connection->Open();
			SqlCeCommand^ command = gcnew SqlCeCommand(query, connection);
			SqlCeDataReader^ sqlRead = command->ExecuteReader();
			orders->Clear();
			while (sqlRead->Read()) {
				orders->Add(gcnew ClassOrders(
					System::Convert::ToInt32(sqlRead["IdOrder"]),
					System::Convert::ToString(sqlRead["DateTimeOrder"]),
					System::Convert::ToInt32(sqlRead["CountOrders"]),
					System::Convert::ToDouble(sqlRead["GeneralPriceOrder"]),
					System::Convert::ToInt32(sqlRead["IdWorker"]),
					System::Convert::ToInt32(sqlRead["IdClient"]),
					System::Convert::ToInt32(sqlRead["IdTours"])
				));
			}
			sqlRead->Close();
			connection->Close();
			this->updateTableOrder();
		}

		void updateTableOrder() {
			int i = 0;
			dataGridView3->Rows->Clear();
			for each (ClassOrders ^ dep in orders) {
				this->dataGridView3->Rows->Add();
				this->dataGridView3->Rows[i]->Cells[0]->Value = dep->getId();
				this->dataGridView3->Rows[i]->Cells[1]->Value = dep->getDateTime();
				this->dataGridView3->Rows[i]->Cells[2]->Value = dep->getCountOrders();
				this->dataGridView3->Rows[i]->Cells[3]->Value = dep->getGeneralPriceOrder();
				this->dataGridView3->Rows[i]->Cells[4]->Value = dep->getWorker();
				this->dataGridView3->Rows[i]->Cells[5]->Value = dep->getClient();
				this->dataGridView3->Rows[i]->Cells[6]->Value = dep->getTours();
				++i;
			}
			if (dataGridView3->Rows->Count > 0)
			{
				button4->Enabled = true;
			}
			else
			{
				button4->Enabled = false;
			}
		}

	//
	// additional functions (comebacks)
	//

		void getDataComeback() {
			connection->Open();
			SqlCeCommand^ command = connection->CreateCommand();
			command->CommandText = "SELECT * FROM Comeback";
			SqlCeDataReader^ sqlRead = command->ExecuteReader();
			comebacks->Clear();
			while (sqlRead->Read()) {
				comebacks->Add(gcnew ClassComeback(
					System::Convert::ToInt32(sqlRead["IdComeback"]),
					System::Convert::ToString(sqlRead["DateTimeComeback"]),
					System::Convert::ToInt32(sqlRead["CountComeback"]),
					System::Convert::ToDouble(sqlRead["PriceGiveComeback"]),
					System::Convert::ToString(sqlRead["ReasonComeback"]),
					System::Convert::ToInt32(sqlRead["IdOrder"])
				));
			}
			connection->Close();
			this->updateTableComeback();
		}

		void getQueryComeback(String^ query) {
			connection->Open();
			SqlCeCommand^ command = gcnew SqlCeCommand(query, connection);
			SqlCeDataReader^ sqlRead = command->ExecuteReader();
			comebacks->Clear();
			while (sqlRead->Read()) {
				comebacks->Add(gcnew ClassComeback(
					System::Convert::ToInt32(sqlRead["IdComeback"]),
					System::Convert::ToString(sqlRead["DateTimeComeback"]),
					System::Convert::ToInt32(sqlRead["CountComeback"]),
					System::Convert::ToDouble(sqlRead["PriceGiveComeback"]),
					System::Convert::ToString(sqlRead["ReasonComeback"]),
					System::Convert::ToInt32(sqlRead["IdOrder"])
				));
			}
			sqlRead->Close();
			connection->Close();
			this->updateTableComeback();
		}

		void updateTableComeback() {
			int i = 0;
			dataGridView4->Rows->Clear();
			for each (ClassComeback ^ dep in comebacks) {
				this->dataGridView4->Rows->Add();
				this->dataGridView4->Rows[i]->Cells[0]->Value = dep->getId();
				this->dataGridView4->Rows[i]->Cells[1]->Value = dep->getDateTime();
				this->dataGridView4->Rows[i]->Cells[2]->Value = dep->getCountComeback();
				this->dataGridView4->Rows[i]->Cells[3]->Value = dep->getPriceGiveComeback();
				this->dataGridView4->Rows[i]->Cells[4]->Value = dep->getReasonComeback();
				this->dataGridView4->Rows[i]->Cells[5]->Value = dep->getOrder();
				++i;
			}
			if (dataGridView4->Rows->Count > 0)
			{
				button14->Enabled = true;
			}
			else
			{
				button14->Enabled = false;
			}
		}
	
	//
	// functions for menu
	//

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void приховативідобразитиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		toolStrip1->Visible = !toolStrip1->Visible;
		приховативідобразитиToolStripMenuItem->Checked = !приховативідобразитиToolStripMenuItem->Checked;
	}

	private: System::Void друкToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		printPreviewDialog1->ShowDialog();
	}

	private: System::Void prints(System::Object^ sender, PrintPageEventArgs^ e) {
		int height = this->dataGridView3->Height;
		int width = this->dataGridView3->Width;
		int selectedRow = this->dataGridView3->CurrentCell->RowIndex;
		this->dataGridView3->Height = this->dataGridView3->RowCount * this->dataGridView3->RowTemplate->Height + this->dataGridView3->Columns[0]->HeaderCell->Size.Height + 3;
		this->dataGridView3->Width = 630;
		this->dataGridView3->ClearSelection();
		Bitmap^ bmp = gcnew Bitmap(this->dataGridView3->Width, this->dataGridView3->Height);
		this->dataGridView3->DrawToBitmap(bmp, *gcnew R(0, 0, this->dataGridView3->Width, this->dataGridView3->Height));
		this->dataGridView3->Height = height;
		this->dataGridView3->Width = width;
		this->dataGridView3->Rows[selectedRow]->Selected = true;
		e->Graphics->DrawImage(bmp, *gcnew R(90, 50, this->dataGridView3->Width, this->dataGridView3->Height));
	}

	private: System::Void проПрограмуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		About^ about = gcnew About();
		about->ShowDialog();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->SelectedIndex = 5;
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->SelectedIndex = 0;
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->SelectedIndex = 1;
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->SelectedIndex = 2;
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->SelectedIndex = 3;
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->SelectedIndex = 4;
	}

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->SelectedIndex = 5;
		this->getDataClient();
		this->getDataWorker();
		this->getDataHotel();
		this->getDataTour();
		this->getDataOrder();
		this->getDataComeback();
	}
	
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		label11->Text = DateTime::Now.ToString();
	}

	//
	// functions for page about clients
	//

	private: System::Void buttonAddClient_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		connection->Open();
		String^ query = "INSERT INTO Clients([SurNameClient], [BirthClient], [PhoneClient], [PassportClient])" +
			"VALUES('" + textBox1->Text + "','" + maskedTextBox3->Text + "','" + maskedTextBox1->Text +
			"','" + maskedTextBox2->Text + "');";
		SqlCeCommand^ command = connection->CreateCommand();
		command->CommandText = query;
		if (command->ExecuteNonQuery() > 0) {
			MessageBox::Show("Inserted success!");
		}
		connection->Close();
		this->getDataClient();
	}

	private: System::Void buttonEditClient_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		EditClient^ edit = gcnew EditClient(
			System::Convert::ToInt32(dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[0]->Value)
		);
		edit->ShowDialog();
		this->getDataClient();
	}

	private: System::Void buttonRemoveClient_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try {
			connection->Open();
			String^ query = "DELETE FROM Clients WHERE [IdClient]=" +
				System::Convert::ToString(dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[0]->Value);
			SqlCeCommand^ command = gcnew SqlCeCommand(query, connection);
			if (command->ExecuteNonQuery() > 0) {
				MessageBox::Show("Success!");
			}
			connection->Close();
			this->getDataClient();
		}
		catch (...) {
			MessageBox::Show("Choose correct item!");
		}
	}

	private: System::Void search(System::Object^ sender, System::EventArgs^ e) {
		String^ query = "SELECT * FROM Clients WHERE SurNameClient LIKE'%" + textBox2->Text +
			"%' and PhoneClient LIKE'%" + textBox3->Text + "%';";
		this->getQueryClients(query);
	}

	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		this->getDataClient();
	}

	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		int massInt[5] = { 0 }, i = 0;
		connection->Open();
		SqlCeCommand^ command = connection->CreateCommand();
		command->CommandText =
			"SELECT TOP(5) Orders.IdClient, COUNT(Orders.IdOrder) AS counts FROM Orders INNER JOIN Clients" +
			" ON Orders.IdClient = Clients.IdClient GROUP BY Orders.IdClient ORDER BY counts DESC;";
		SqlCeDataReader^ sqlRead = command->ExecuteReader();
		while (sqlRead->Read()) {
			massInt[i] = System::Convert::ToInt32(sqlRead["IdClient"]);
			i++;
		}
		connection->Close();
		connection->Open();
		SqlCeCommand^ command2 = connection->CreateCommand();
		command2->CommandText = "SELECT * FROM Clients WHERE IdClient IN(" + massInt[0] + "," + massInt[1] +
			"," + massInt[2] + "," + massInt[3] + "," + massInt[4] + ");";
		SqlCeDataReader^ sqlRead2 = command2->ExecuteReader();
		clients->Clear();
		while (sqlRead2->Read()) {
			clients->Add(gcnew ClassClients(
				System::Convert::ToInt32(sqlRead2["IdClient"]),
				System::Convert::ToString(sqlRead2["SurNameClient"]),
				System::Convert::ToString(sqlRead2["BirthClient"]),
				System::Convert::ToString(sqlRead2["PhoneClient"]),
				System::Convert::ToString(sqlRead2["PassportClient"])
			));
		}
		connection->Close();
		this->updateTable();
	}

	//
	// functions for page about workers
	//

	private: System::Void searchWorker(System::Object^ sender, System::EventArgs^ e) {
		String^ query = "SELECT * FROM Workers WHERE SurNameWorker LIKE'%" + comboBox1->Text + "%';";
		this->getQueryWorkers(query);
	}

	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		EditWorker^ edit = gcnew EditWorker(-1);
		edit->ShowDialog();
		this->getDataWorker();
	}

	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		EditWorker^ edit = gcnew EditWorker(
			System::Convert::ToInt32(dataGridView2 -> Rows[dataGridView2->CurrentCell->RowIndex]->Cells[0]->Value)
		);
		edit->ShowDialog();
		this->getDataWorker();
	}

	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			connection->Open();
			String^ query = "DELETE FROM Workers WHERE [IdWorker]=" +
				System::Convert::ToString(dataGridView2->Rows[dataGridView2->CurrentCell->RowIndex] -> Cells[0]->Value);
			SqlCeCommand^ command = gcnew SqlCeCommand(query, connection);
			if (command->ExecuteNonQuery() > 0) {
				MessageBox::Show("Deleted!");
			}
			connection->Close();
			this->getDataWorker();
		}
		catch (...) {
			MessageBox::Show("Choose correct item");
		}
	}

	//
	// functions for page about hotels
	//

	private: System::Void searchHotel(System::Object^ sender, System::EventArgs^ e) {
		String^ query = "SELECT * FROM Hotel WHERE NameHotel LIKE'%" + comboBox3->Text + "%';";
		this->getQueryHotels(query);
	}

	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		EditHotel^ edit = gcnew EditHotel(-1);
		edit->ShowDialog();
		this->getDataHotel();
	}

	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		EditHotel^ edit = gcnew EditHotel(
			System::Convert::ToInt32(dataGridView5->Rows[dataGridView5->CurrentCell->RowIndex]->Cells[0]->Value)
		);
		edit->ShowDialog();
		this->getDataHotel();
	}

	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			connection->Open();
			String^ query = "DELETE FROM Hotel WHERE [IdHotel]=" +
				System::Convert::ToString(dataGridView5->Rows[dataGridView5->CurrentCell->RowIndex]->Cells[0]->Value);
			SqlCeCommand^ command = gcnew SqlCeCommand(query, connection);
			if (command->ExecuteNonQuery() > 0) {
				MessageBox::Show("Deleted!");
			}
			connection->Close();
			this->getDataHotel();
		}
		catch (...) {
			MessageBox::Show("Choose correct item");
		}
	}

	//
	// functions for page about tours
	//

	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		try
		{
			linkLabel1->LinkVisited = true;
			System::Diagnostics::Process::Start("http://travelstart.if.ua/");
		}
		catch (...)
		{
			MessageBox::Show("Unable to open link that was clicked");
		}
	}

	private: System::Void searchGeneralTours(System::Object^ sender, System::EventArgs^ e) {
		String^ query = "SELECT * FROM Tours WHERE CountriesTours LIKE'%" + textBox6->Text +
			"%' and DurationTours = " + textBox7->Text + " and CountTourists = " + textBox8->Text +
			" and DateTours BETWEEN '" + dateTimePicker3->Text + "' and '" + dateTimePicker4->Text + "';";
		this->getQueryTours(query);
	}

	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
		this->getDataTour();
		textBox6->Text = "";
		textBox7->Text = "";
		textBox8->Text = "";
	}

	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ query = "SELECT * FROM Tours WHERE CountTourists = 2;";
		this->getQueryTours(query);
	}

	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
		int massInt[5] = { 0 }, i = 0;
		connection->Open();
		SqlCeCommand^ command = connection->CreateCommand();
		command->CommandText =
			"SELECT TOP(5) Orders.IdTours, COUNT(Orders.IdOrder) AS counts FROM Orders INNER JOIN Tours " +
			"ON Orders.IdTours = Tours.IdTours GROUP BY Orders.IdTours ORDER BY counts DESC;";
		SqlCeDataReader^ sqlRead = command->ExecuteReader();
		while (sqlRead->Read()) {
			massInt[i] = System::Convert::ToInt32(sqlRead["IdTours"]);
			i++;
		}
		connection->Close();
		connection->Open();
		SqlCeCommand^ command2 = connection->CreateCommand();
		command2->CommandText = "SELECT * FROM Tours WHERE IdTours IN(" + massInt[0] + "," + massInt[1] +
			"," + massInt[2] + "," + massInt[3] + "," + massInt[4] + ");";
		SqlCeDataReader^ sqlRead2 = command2->ExecuteReader();
		tours->Clear();
		while (sqlRead2->Read()) {
			tours->Add(gcnew ClassTours(
				System::Convert::ToInt32(sqlRead2["IdTours"]),
				System::Convert::ToString(sqlRead2["NameTours"]),
				System::Convert::ToString(sqlRead2["TypeTours"]),
				System::Convert::ToString(sqlRead2["SeasonTours"]),
				System::Convert::ToDouble(sqlRead2["PriceTours"]),
				System::Convert::ToInt32(sqlRead2["DurationTours"]),
				System::Convert::ToInt32(sqlRead2["CountTourists"]),
				System::Convert::ToString(sqlRead2["CountriesTours"]),
				System::Convert::ToInt32(sqlRead2["IdHotel"]),
				System::Convert::ToString(sqlRead2["DateTours"])
			));
		}
		connection->Close();
		this->updateTableTour();
	}

	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ query = "SELECT * FROM Tours WHERE DateTours <= '" + DateTime::Now.AddDays(5).Date +"'; ";
		this->getQueryTours(query);
	}

	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		EditTours^ edit = gcnew EditTours(-1);
		edit->ShowDialog();
		this->getDataTour();
	}

	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		EditTours^ edit = gcnew EditTours(
			System::Convert::ToInt32(dataGridView6->Rows[dataGridView6->CurrentCell->RowIndex]->Cells[0]->Value)
		);
		edit->ShowDialog();
		this->getDataTour();
	}

	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			connection->Open();
			String^ query = "DELETE FROM Tours WHERE [IdTours]=" +
				System::Convert::ToString(dataGridView6->Rows[dataGridView6->CurrentCell->RowIndex]->Cells[0]->Value);
			SqlCeCommand^ command = gcnew SqlCeCommand(query, connection);
			if (command->ExecuteNonQuery() > 0) {
				MessageBox::Show("Deleted!");
			}
			connection->Close();
			this->getDataTour();
		}
		catch (...) {
			MessageBox::Show("Choose correct item");
		}
	}

	//
	// functions for page about orders and comebacks
	//

	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
		this->getDataOrder();
		this->getDataComeback();
		comboBox2->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
	}

	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox2->SelectedIndex == 0)
		{
			String^ query = "SELECT * FROM Orders WHERE DateTimeOrder BETWEEN '" 
				+ dateTimePicker1->Text + "' and '" + dateTimePicker2->Text + "' and GeneralPriceOrder BETWEEN '" + 
				textBox4->Text + "' and '" + textBox5->Text + "'; ";
			this->getQueryOrders(query);
		}
		else
		{
			String^ query = "SELECT * FROM Comeback WHERE DateTimeComeback BETWEEN '"
				+ dateTimePicker1->Text + "' and '" + dateTimePicker2->Text + "' and PriceGiveComeback BETWEEN '" +
				textBox4->Text + "' and '" + textBox5->Text + "'; ";
			this->getQueryComeback(query);
		}
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		EditOrders^ edit = gcnew EditOrders(-1);
		edit->ShowDialog();
		this->getDataOrder();
	}

	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		EditComebacks^ edit = gcnew EditComebacks(-1);
		edit->ShowDialog();
		this->getDataComeback();
	}
};
}
