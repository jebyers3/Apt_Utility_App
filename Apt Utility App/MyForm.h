#include<fstream>

#pragma once

namespace AptUtilityApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
//namespaces I have added
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label12;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(169, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Utility Calculator";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(15, 304);
			this->button1->Name = L"button1";
			this->button1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(190, 62);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(116, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"0.00";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(209, 353);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"0.00";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 353);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Total Utilities Expense: ";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(190, 101);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(116, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"0.00";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(9, 66);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Gas: ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(9, 105);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(153, 16);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Electricity/Water/Etc.";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(9, 184);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 16);
			this->label6->TabIndex = 8;
			this->label6->Text = L"# of Tenants";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(190, 180);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(116, 20);
			this->textBox3->TabIndex = 9;
			this->textBox3->Text = L"1";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(12, 567);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(15, 383);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(108, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Expense/Person: ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(209, 383);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"0.00";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(209, 567);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(63, 4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 29);
			this->textBox4->TabIndex = 14;
			this->textBox4->Text = L"[month]";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(190, 353);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 13);
			this->label10->TabIndex = 15;
			this->label10->Text = L"$";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(190, 383);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 13);
			this->label11->TabIndex = 16;
			this->label11->Text = L"$";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(190, 139);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(116, 20);
			this->textBox5->TabIndex = 17;
			this->textBox5->Text = L"0.00";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(9, 143);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(116, 16);
			this->label12->TabIndex = 18;
			this->label12->Text = L"Misc. Expenses";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(489, 602);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Apt Utility App";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {


		String ^ in = textBox1->Text;
		String ^ in2 = textBox2->Text;
		String ^ in3 = textBox3->Text;
		String ^ in4 = textBox5->Text;

		double gas = System::Convert::ToDouble(in),
			elec_wat_etc = System::Convert::ToDouble(in2),
			num_tenants = System::Convert::ToDouble(in3),
			misc = System::Convert::ToDouble(in4);

//code to calculate and display Cost of Utilities
		double total = gas + elec_wat_etc + misc,
			per_person = total / num_tenants;

// how I converted a double to a 2 decimal place string
		in = total.ToString("N2");


//how the example converted a double to string Below		
//		in = System::Convert::ToString( total);
		label2->Text = in;

//how the example converted a double to string Below		
//		in = System::Convert::ToString(per_person);
		in = per_person.ToString("N2");
		label8->Text = in;

		


	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
//Save button 
	//function is to send month, Gas, Electricity, and Expense/Person to a textfile
	/*format of saving
	-Month
	-Gas
	-Electricity
	-Expense/Person
	*/

	bool is_found = true; // create the file or not
	String^ fileName = "UtilityHistory.txt";
	String^ line = textBox4->Text; //gets month


	try //attempt to locate file
	{

		Console::WriteLine("trying to open file {0}...", fileName);
		StreamReader^ din = File::OpenText(fileName);

		String^ str;
		int count = 0;
		while ((str = din->ReadLine()) != nullptr)
		{
			count++;
			Console::WriteLine("line {0}: {1}", count, str);
		}
		din->Close();//close file opened so there isn't a conflict when trying to write to it
	}
	catch (Exception^ e)
	{
		if (dynamic_cast<FileNotFoundException^>(e))
					is_found = false;
		else
			Console::WriteLine("problem reading file '{0}'", fileName);
	} //end trying to open file

	
	if (!is_found)//create file
	{
		StreamWriter^ sw = gcnew StreamWriter(fileName);

		sw->WriteLine(line);
		line = textBox1->Text;
		sw->WriteLine(line);
		line = textBox2->Text;
		sw->WriteLine(line);
		line = label8->Text;
		sw->WriteLine(line);
		sw->Close();

	}
	else //append existing file
	{
		StreamWriter^ sw = gcnew StreamWriter(fileName, true);

		sw->WriteLine(line);
		line = textBox1->Text;
		sw->WriteLine(line);
		line = textBox2->Text;
		sw->WriteLine(line);
		line = label8->Text;
		sw->WriteLine(line);
		sw->Close();
	}
	


	label9->Text = "Saved";  //print 'saved' to application
}

private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
