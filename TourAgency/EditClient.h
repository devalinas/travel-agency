#pragma once

namespace TourAgency {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlServerCe;

	/// <summary>
	/// Summary for EditClient
	/// </summary>
	public ref class EditClient : public System::Windows::Forms::Form
	{
	private:
		System::Data::SqlServerCe::SqlCeConnection^ connect;
		int clientID;

	public:
		EditClient(void)
		{
			InitializeComponent();
		}

		EditClient(int cID)
		{
			InitializeComponent();
			SqlCeEngine^ dbEngine = gcnew SqlCeEngine();
			dbEngine->LocalConnectionString = "Data Source = TourAgency.sdf";
			connect = gcnew SqlCeConnection("Data Source = TourAgency.sdf");
			connect->Open();
			this->clientID = cID;
			SqlCeCommand^ command = connect->CreateCommand();
			command->CommandText = "SELECT * FROM Clients WHERE [IdClient] = @cID";
			command->Parameters->AddWithValue(
				"@cID",
				cID
			);
			SqlCeDataReader^ sqlRead = command->ExecuteReader();
			while (sqlRead->Read()) {
				textBox1->Text = System::Convert::ToString(sqlRead["SurNameClient"]);
				maskedTextBox1->Text = System::Convert::ToString(sqlRead["BirthClient"]);
				maskedTextBox2->Text = System::Convert::ToString(sqlRead["PhoneClient"]);
				maskedTextBox3->Text = System::Convert::ToString(sqlRead["PassportClient"]);
			}
			connect->Close();
			sqlRead->Close();
		}

	protected:
		~EditClient()
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditClient::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(65, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ПІБ клієнта";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(165, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Дата народження";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(23, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Номер телефону";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(26, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Номер паспорта";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Silver;
			this->textBox1->Location = System::Drawing::Point(224, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(149, 22);
			this->textBox1->TabIndex = 4;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->BackColor = System::Drawing::Color::Silver;
			this->maskedTextBox1->Location = System::Drawing::Point(224, 63);
			this->maskedTextBox1->Mask = L"00/00/0000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(149, 22);
			this->maskedTextBox1->TabIndex = 5;
			this->maskedTextBox1->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->BackColor = System::Drawing::Color::Silver;
			this->maskedTextBox2->Location = System::Drawing::Point(224, 102);
			this->maskedTextBox2->Mask = L"(999) 000-0000";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(149, 22);
			this->maskedTextBox2->TabIndex = 6;
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->BackColor = System::Drawing::Color::Silver;
			this->maskedTextBox3->Location = System::Drawing::Point(224, 141);
			this->maskedTextBox3->Mask = L"0000000000";
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->Size = System::Drawing::Size(149, 22);
			this->maskedTextBox3->TabIndex = 7;
			this->maskedTextBox3->ValidatingType = System::Int32::typeid;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(40, 200);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 43);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Зберегти";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &EditClient::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(235, 200);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 43);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Скасувати";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &EditClient::button2_Click);
			// 
			// EditClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(403, 266);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->maskedTextBox3);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"EditClient";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Редагування даних клієнтів";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private:
		void update() {
			connect->Open();
			String^ query = "UPDATE Clients SET [SurNameClient]='" + textBox1->Text + "', [BirthClient]='" +
				maskedTextBox1->Text + "', [PhoneClient]='" + maskedTextBox2->Text + "', [PassportClient]='" +
				maskedTextBox3->Text + "' WHERE [IdClient]=" + this->clientID + ";";
			SqlCeCommand^ command = connect->CreateCommand();
			command->CommandText = query;
			if (command->ExecuteNonQuery() == 0) {
				MessageBox::Show("Successfully updated!");
			}
			connect->Close();
		}

		void insert() {
			connect->Open();
			String^ query = "INSERT INTO Clients([SurNameClient], [BirthClient], [PhoneClient], [PassportClient])" +
				"VALUES('" + textBox1->Text + "','" + maskedTextBox1->Text + "','" + maskedTextBox2->Text +
				"','" + maskedTextBox3->Text + "');";
			SqlCeCommand^ command = connect->CreateCommand();
			command->CommandText = query;
			if (command->ExecuteNonQuery() > 0) {
				MessageBox::Show("Successfully inserted!");
			}
			connect->Close();
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length != 0 && maskedTextBox1->Text->Length != 0 && 
			maskedTextBox2->Text->Length != 0 && maskedTextBox3->Text->Length != 0) {
			if (this->clientID == -1) insert();
			else update();
			this->Close();
		}
		else MessageBox::Show("Add more data!");
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

};
}
