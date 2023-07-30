#pragma once
#include "ClassHotel.h"

namespace TourAgency {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlServerCe;
	using namespace System::IO;

	/// <summary>
	/// Summary for EditTours
	/// </summary>
	public ref class EditTours : public System::Windows::Forms::Form
	{
	private:
		System::Data::SqlServerCe::SqlCeConnection^ connect;
	private: System::Windows::Forms::ComboBox^ comboBox3;

		   int tourID;

	public:
		EditTours(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		EditTours(int tID)
		{
			InitializeComponent();
			SqlCeEngine^ dbEngine = gcnew SqlCeEngine();
			dbEngine->LocalConnectionString = "Data Source = TourAgency.sdf";
			connect = gcnew SqlCeConnection("Data Source = TourAgency.sdf");
			connect->Open();
			this->tourID = tID;
			SqlCeCommand^ command = connect->CreateCommand();
			command->CommandText = "SELECT * FROM Tours WHERE [IdTours] = @tID";
			command->Parameters->AddWithValue(
				"@tID",
				tID
			);
			SqlCeDataReader^ sqlRead = command->ExecuteReader();
			while (sqlRead->Read()) {
				textBox1->Text = System::Convert::ToString(sqlRead["NameTours"]);
				comboBox1->Text = System::Convert::ToString(sqlRead["TypeTours"]);
				comboBox2->Text = System::Convert::ToString(sqlRead["SeasonTours"]);
				textBox2->Text = System::Convert::ToString(sqlRead["PriceTours"]);
				textBox3->Text = System::Convert::ToString(sqlRead["DurationTours"]);
				textBox4->Text = System::Convert::ToString(sqlRead["CountTourists"]);
				textBox5->Text = System::Convert::ToString(sqlRead["CountriesTours"]);
				comboBox3->Text = System::Convert::ToString(sqlRead["IdHotel"]);
				dateTimePicker1->Text = System::Convert::ToString(sqlRead["DateTours"]);
			}
			connect->Close();
			sqlRead->Close();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditTours()
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
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditTours::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(68, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Назва туру";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(88, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Тип туру";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(110, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Сезон";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(85, 139);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 24);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Ціна туру";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(66, 180);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 24);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Тривалість";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(4, 218);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(172, 24);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Кількість туристів";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(108, 258);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(68, 24);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Країна";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(61, 300);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(115, 24);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Код готелю";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(78, 339);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(98, 24);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Дата туру";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(203, 24);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(177, 29);
			this->textBox1->TabIndex = 9;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Пляжний", L"Екзотичний", L"Весільний", L"Раннє бронювання",
					L"Екскурсійний"
			});
			this->comboBox1->Location = System::Drawing::Point(203, 64);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(177, 28);
			this->comboBox1->TabIndex = 10;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Зима", L"Осінь", L"Літо", L"Весна" });
			this->comboBox2->Location = System::Drawing::Point(203, 99);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(177, 28);
			this->comboBox2->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(203, 139);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(177, 29);
			this->textBox2->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(203, 177);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(177, 29);
			this->textBox3->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(203, 212);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(177, 29);
			this->textBox4->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(203, 253);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(177, 29);
			this->textBox5->TabIndex = 15;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(203, 339);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(177, 27);
			this->dateTimePicker1->TabIndex = 17;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(34, 381);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 41);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Зберегти";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &EditTours::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(240, 380);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 41);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Скасувати";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &EditTours::button2_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Зима", L"Осінь", L"Літо", L"Весна" });
			this->comboBox3->Location = System::Drawing::Point(203, 299);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(177, 28);
			this->comboBox3->TabIndex = 20;
			// 
			// EditTours
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(397, 438);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"EditTours";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Редагування даних турів";
			this->Load += gcnew System::EventHandler(this, &EditTours::EditTours_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:

		void comboBoxLoad() {
			connect->Open();
			SqlCeCommand^ command = connect->CreateCommand();
			command->CommandText = "SELECT IdHotel FROM Hotel";
			SqlCeDataReader^ dataReader = command->ExecuteReader();
			comboBox3->Items->Clear();
			while (dataReader->Read())
			{
				comboBox3->Items->Add(System::Convert::ToString(dataReader["IdHotel"]));
			}
		}

		void update() {
			connect->Open();
			String^ query = "UPDATE Tours SET [NameTours]='" + textBox1->Text + "', [TypeTours]='" +
				comboBox1->Text + "', [SeasonTours]='" + comboBox2->Text + "', [PriceTours]='" +
				textBox2->Text + "', [DurationTours]='" + textBox3->Text + "', [CountTourists]='" + textBox4->Text + 
				"', [CountriesTours]='" + textBox5->Text + "', [IdHotel]='" + comboBox3->Text +
				"', [DateTours]='" + dateTimePicker1->Text + "' WHERE [IdTours]=" + this->tourID + ";";
			SqlCeCommand^ command = connect->CreateCommand();
			command->CommandText = query;
			if (command->ExecuteNonQuery() == 0) {
				MessageBox::Show("Successfully updated!");
			}
			connect->Close();
		}

		void insert() {
			connect->Open();
			String^ query = "INSERT INTO Tours([NameTours], [TypeTours], [SeasonTours], [PriceTours], [DurationTours], [CountTourists], [CountriesTours], [IdHotel], [DateTours])" +
				"VALUES('" + textBox1->Text + "','" + comboBox1->Text + "','" + comboBox2->Text +
				"','" + textBox2->Text + "','" + textBox3->Text + "','" + textBox4->Text + "','" + textBox5->Text +
				"','" + comboBox3->Text + "','" + dateTimePicker1->Text + "');";
			SqlCeCommand^ command = connect->CreateCommand();
			command->CommandText = query;
			if (command->ExecuteNonQuery() > 0) {
				MessageBox::Show("Successfully inserted!");
			}
			connect->Close();
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length != 0 && textBox2->Text->Length != 0 && textBox3->Text->Length != 0 &&
			textBox4->Text->Length != 0 && textBox5->Text->Length != 0 && comboBox3->Text->Length != 0 &&
			comboBox1->Text->Length != 0 && comboBox2->Text->Length != 0 && dateTimePicker1->Text->Length != 0) {
			if (this->tourID == -1) insert();
			else update();
			this->Close();
		}
		else MessageBox::Show("Add more data!");
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void EditTours_Load(System::Object^ sender, System::EventArgs^ e) {
		this->comboBoxLoad();
	}
};
}
