#pragma once
#include "ClassClients.h"
#include "ClassWorkers.h"
#include "ClassTours.h"

namespace TourAgency {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlServerCe;

	/// <summary>
	/// Summary for EditOrders
	/// </summary>
	public ref class EditOrders : public System::Windows::Forms::Form
	{
	private:
		System::Data::SqlServerCe::SqlCeConnection^ connect;
		int orderID;

	public:
		EditOrders(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		EditOrders(int oID)
		{
			InitializeComponent();
			SqlCeEngine^ dbEngine = gcnew SqlCeEngine();
			dbEngine->LocalConnectionString = "Data Source = TourAgency.sdf";
			connect = gcnew SqlCeConnection("Data Source = TourAgency.sdf");
			connect->Open();
			this->orderID = oID;
			SqlCeCommand^ command = connect->CreateCommand();
			command->CommandText = "SELECT * FROM Orders WHERE [IdOrder] = @oID";
			command->Parameters->AddWithValue(
				"@oID",
				oID
			);
			SqlCeDataReader^ sqlRead = command->ExecuteReader();
			while (sqlRead->Read()) {
				dateTimePicker1->Text = System::Convert::ToString(sqlRead["DateTimeOrder"]);
				textBox1->Text = System::Convert::ToString(sqlRead["CountOrders"]);
				comboBox1->Text = System::Convert::ToString(sqlRead["IdWorker"]);
				comboBox2->Text = System::Convert::ToString(sqlRead["IdClient"]);
			}
			connect->Close();
			sqlRead->Close();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditOrders()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditOrders::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Дата замовлення";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(33, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Кількість путівок";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(45, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Код працівника";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(76, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Код клієнта";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(102, 177);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Код туру";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(209, 25);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 27);
			this->dateTimePicker1->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(209, 58);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(200, 27);
			this->textBox1->TabIndex = 6;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(209, 97);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(200, 28);
			this->comboBox1->TabIndex = 7;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(209, 140);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(200, 28);
			this->comboBox2->TabIndex = 8;
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(209, 177);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(200, 28);
			this->comboBox3->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(39, 217);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 33);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Зберегти";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &EditOrders::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(251, 217);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 33);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Скасувати";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &EditOrders::button2_Click);
			// 
			// EditOrders
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(436, 271);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"EditOrders";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Редагування замовлень";
			this->Load += gcnew System::EventHandler(this, &EditOrders::EditOrders_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:

		void comboBoxLoad() {
			connect->Open();
			SqlCeCommand^ command = connect->CreateCommand();
			command->CommandText = "SELECT IdWorker FROM Workers";
			SqlCeDataReader^ dataReader = command->ExecuteReader();
			comboBox1->Items->Clear();
			while (dataReader->Read())
			{
				comboBox1->Items->Add(System::Convert::ToString(dataReader["IdWorker"]));
			}
			command->CommandText = "SELECT IdClient FROM Clients";
			dataReader = command->ExecuteReader();
			comboBox2->Items->Clear();
			while (dataReader->Read())
			{
				comboBox2->Items->Add(System::Convert::ToString(dataReader["IdClient"]));
			}
			command->CommandText = "SELECT IdTours FROM Tours";
			dataReader = command->ExecuteReader();
			comboBox3->Items->Clear();
			while (dataReader->Read())
			{
				comboBox3->Items->Add(System::Convert::ToString(dataReader["IdTours"]));
			}
			connect->Close();
		}

		void update() {
			String^ tb1;
			double priceTour = 0, generalPrice = 0;
			int convertCount = 0;
			connect->Open();
			SqlCeCommand^ command = connect->CreateCommand();
			command->CommandText = "SELECT PriceTours FROM Tours WHERE IdTours = " + comboBox3->Text + ";";
			SqlCeDataReader^ dataReader = command->ExecuteReader();
			while (dataReader->Read())
			{
				priceTour = System::Convert::ToDouble(dataReader["PriceTours"]);
			}
			tb1 = textBox1->Text;
			convertCount = System::Convert::ToInt32(tb1);
			generalPrice = priceTour * convertCount;
			String^ query = "UPDATE Orders SET [DateTimeOrder]='" + dateTimePicker1->Text + "', [CountOrders]='" +
				textBox1->Text + "', [GeneralPriceOrder]='" + generalPrice + "', [IdWorker]='" + comboBox1->Text + "', [IdClient]='" + comboBox2->Text +
				"', [IdTours]='" + comboBox3->Text + "' WHERE [IdOrder]=" + this->orderID + ";";
			command = connect->CreateCommand();
			command->CommandText = query;
			if (command->ExecuteNonQuery() == 0) {
				MessageBox::Show("Successfully updated!");
			}
			connect->Close();
		}

		void insert() {
			String^ tb1;
			double priceTour = 0, generalPrice = 0;
			int convertCount = 0;
			connect->Open();
			SqlCeCommand^ command = connect->CreateCommand();
			command->CommandText = "SELECT PriceTours FROM Tours WHERE IdTours = " + comboBox3->Text + ";";
			SqlCeDataReader^ dataReader = command->ExecuteReader();
			while (dataReader->Read())
			{
				priceTour = System::Convert::ToDouble(dataReader["PriceTours"]);
			}
			tb1 = textBox1->Text;
			convertCount = System::Convert::ToInt32(tb1);
			generalPrice = priceTour * convertCount;
			String^ query = "INSERT INTO Orders([DateTimeOrder], [CountOrders], [GeneralPriceOrder], [IdWorker], [IdClient], [IdTours])" +
				"VALUES('" + dateTimePicker1->Text + "','" + textBox1->Text + "', '" + generalPrice + "', '" 
				+ comboBox1->Text + "','" + comboBox2->Text + "','" + comboBox3->Text + "');";
			command = connect->CreateCommand();
			command->CommandText = query;
			if (command->ExecuteNonQuery() > 0) {
				MessageBox::Show("Successfully inserted!");
			}
			connect->Close();
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dateTimePicker1->Text->Length !=0 && textBox1->Text->Length != 0 && comboBox1->Text->Length != 0 &&
			comboBox2->Text->Length != 0 && comboBox3->Text->Length != 0) {
			if (this->orderID == -1) insert();
			else update();
			this->Close();
		}
		else MessageBox::Show("Add more data!");
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void EditOrders_Load(System::Object^ sender, System::EventArgs^ e) {
		this->comboBoxLoad();
	}
};
}
