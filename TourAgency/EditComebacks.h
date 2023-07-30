#pragma once
#include "ClassOrders.h"

namespace TourAgency {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlServerCe;

	/// <summary>
	/// Summary for EditComebacks
	/// </summary>
	public ref class EditComebacks : public System::Windows::Forms::Form
	{
	private:
		System::Data::SqlServerCe::SqlCeConnection^ connect;
		int comebackID;

	public:
		EditComebacks(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		EditComebacks(int cID)
		{
			InitializeComponent();
			SqlCeEngine^ dbEngine = gcnew SqlCeEngine();
			dbEngine->LocalConnectionString = "Data Source = TourAgency.sdf";
			connect = gcnew SqlCeConnection("Data Source = TourAgency.sdf");
			connect->Open();
			this->comebackID = cID;
			SqlCeCommand^ command = connect->CreateCommand();
			command->CommandText = "SELECT * FROM Comeback WHERE [IdComeback] = @cID";
			command->Parameters->AddWithValue(
				"@cID",
				cID
			);
			SqlCeDataReader^ sqlRead = command->ExecuteReader();
			while (sqlRead->Read()) {
				dateTimePicker1->Text = System::Convert::ToString(sqlRead["DateTimeComeback"]);
				textBox1->Text = System::Convert::ToString(sqlRead["CountComeback"]);
				textBox2->Text = System::Convert::ToString(sqlRead["ReasonComeback"]);
				comboBox1->Text = System::Convert::ToString(sqlRead["IdOrder"]);
			}
			connect->Close();
			sqlRead->Close();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditComebacks()
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
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditComebacks::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(43, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Дата повернення";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(48, 76);
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
			this->label3->Location = System::Drawing::Point(13, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(187, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Причина повернення";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(52, 161);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(148, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Код замовлення";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(227, 33);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(141, 27);
			this->dateTimePicker1->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(227, 73);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(141, 27);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(227, 115);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(141, 27);
			this->textBox2->TabIndex = 6;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(227, 161);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(141, 28);
			this->comboBox1->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(30, 213);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 37);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Зберегти";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &EditComebacks::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(212, 213);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 37);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Скасувати";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &EditComebacks::button2_Click);
			// 
			// EditComebacks
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(390, 273);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"EditComebacks";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Редагування даних щодо повернень";
			this->Load += gcnew System::EventHandler(this, &EditComebacks::EditComebacks_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:

		void comboBoxLoad() {
			connect->Open();
			SqlCeCommand^ command = connect->CreateCommand();
			command->CommandText = "SELECT IdOrder FROM Orders";
			SqlCeDataReader^ dataReader = command->ExecuteReader();
			comboBox1->Items->Clear();
			while (dataReader->Read())
			{
				comboBox1->Items->Add(System::Convert::ToString(dataReader["IdOrder"]));
			}
			connect->Close();
		}

		void update() {
			String^ tb1;
			double priceTour = 0, generalPrice = 0;
			int convertCount = 0;
			connect->Open();
			SqlCeCommand^ command = connect->CreateCommand();
			command->CommandText = "SELECT PriceTours FROM Tours INNER JOIN Orders ON Tours.IdTours = Orders.IdTours" +
				"INNER JOIN Comeback ON Orders.IdOrder = Comeback.IdOrder WHERE Orders.IdOrder = " + comboBox1->Text + ";";
			SqlCeDataReader^ dataReader = command->ExecuteReader();
			while (dataReader->Read())
			{
				priceTour = System::Convert::ToDouble(dataReader["PriceTours"]);
			}
			tb1 = textBox1->Text;
			convertCount = System::Convert::ToInt32(tb1);
			generalPrice = priceTour * convertCount;
			String^ query = "UPDATE Comeback SET [DateTimeComeback]='" + dateTimePicker1->Text + "', [CountComeback]='" +
				textBox1->Text + "', [PriceGiveComeback]='" + generalPrice + "', [ReasonComeback]='" + textBox2->Text + 
				"', [IdOrder]='" + comboBox1->Text + "' WHERE [IdComeback]=" + this->comebackID + ";";
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
			command->CommandText = "SELECT PriceTours FROM Tours INNER JOIN Orders ON Tours.IdTours = Orders.IdTours" +
				"INNER JOIN Comeback ON Orders.IdOrder = Comeback.IdOrder WHERE Orders.IdOrder = " + comboBox1->Text + ";";
			SqlCeDataReader^ dataReader = command->ExecuteReader();
			while (dataReader->Read())
			{
				priceTour = System::Convert::ToDouble(dataReader["PriceTours"]);
			}
			tb1 = textBox1->Text;
			convertCount = System::Convert::ToInt32(tb1);
			generalPrice = priceTour * convertCount;
			String^ query = "INSERT INTO Comeback([DateTimeComeback], [CountComeback], [PriceGiveComeback], [ReasonComeback], [IdOrder])" +
				"VALUES('" + dateTimePicker1->Text + "','" + textBox1->Text + "', '" + generalPrice + "', " + 
				textBox2->Text + "','" + comboBox1->Text + "');";
			command = connect->CreateCommand();
			command->CommandText = query;
			if (command->ExecuteNonQuery() > 0) {
				MessageBox::Show("Successfully inserted!");
			}
			connect->Close();
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dateTimePicker1->Text->Length != 0 && textBox1->Text->Length != 0 && 
			textBox2->Text->Length != 0 && comboBox1->Text->Length != 0) {
			if (this->comebackID == -1) insert();
			else update();
			this->Close();
		}
		else MessageBox::Show("Add more data!");
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void EditComebacks_Load(System::Object^ sender, System::EventArgs^ e) {
		this->comboBoxLoad();
	}
};
}
