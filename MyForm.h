#pragma once

namespace MenuGrafico {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ BoxMenudeInicio;

	private: System::Windows::Forms::PictureBox^ pictureBoxLogoUDC;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->BoxMenudeInicio = (gcnew System::Windows::Forms::GroupBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBoxLogoUDC = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->BoxMenudeInicio->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLogoUDC))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->menuToolStripMenuItem,
					this->salirToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(760, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->menuToolStripMenuItem->Text = L"Inicio";
			this->menuToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::menuToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(41, 20);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::salirToolStripMenuItem_Click);
			// 
			// BoxMenudeInicio
			// 
			this->BoxMenudeInicio->BackColor = System::Drawing::Color::White;
			this->BoxMenudeInicio->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BoxMenudeInicio.BackgroundImage")));
			this->BoxMenudeInicio->Controls->Add(this->button8);
			this->BoxMenudeInicio->Controls->Add(this->button7);
			this->BoxMenudeInicio->Controls->Add(this->button6);
			this->BoxMenudeInicio->Controls->Add(this->button5);
			this->BoxMenudeInicio->Controls->Add(this->button4);
			this->BoxMenudeInicio->Controls->Add(this->button3);
			this->BoxMenudeInicio->Controls->Add(this->button2);
			this->BoxMenudeInicio->Controls->Add(this->button1);
			this->BoxMenudeInicio->Location = System::Drawing::Point(224, 106);
			this->BoxMenudeInicio->Name = L"BoxMenudeInicio";
			this->BoxMenudeInicio->Size = System::Drawing::Size(268, 404);
			this->BoxMenudeInicio->TabIndex = 1;
			this->BoxMenudeInicio->TabStop = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->Cursor = System::Windows::Forms::Cursors::Default;
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(53, 295);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(165, 38);
			this->button8->TabIndex = 3;
			this->button8->Text = L"Convertir Decimal-Binario";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->Cursor = System::Windows::Forms::Cursors::Default;
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(53, 339);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(165, 38);
			this->button7->TabIndex = 3;
			this->button7->Text = L"Convertir Decimal-Binario";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->Cursor = System::Windows::Forms::Cursors::Default;
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(53, 119);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(165, 38);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Convertir Decimal-Binario";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->Cursor = System::Windows::Forms::Cursors::Default;
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(53, 75);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(165, 38);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Convertir Decimal-Binario";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Cursor = System::Windows::Forms::Cursors::Default;
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(53, 251);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(165, 38);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Convertir Decimal-Binario";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Default;
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(53, 207);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(165, 38);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Convertir Decimal-Binario";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Default;
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(53, 163);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(165, 38);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Convertir Decimal-Binario";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(53, 31);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Convertir Decimal-Binario";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBoxLogoUDC
			// 
			this->pictureBoxLogoUDC->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxLogoUDC.BackgroundImage")));
			this->pictureBoxLogoUDC->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBoxLogoUDC->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxLogoUDC->Location = System::Drawing::Point(651, 27);
			this->pictureBoxLogoUDC->Name = L"pictureBoxLogoUDC";
			this->pictureBoxLogoUDC->Size = System::Drawing::Size(101, 80);
			this->pictureBoxLogoUDC->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxLogoUDC->TabIndex = 2;
			this->pictureBoxLogoUDC->TabStop = false;
			this->pictureBoxLogoUDC->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(16, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(629, 30);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Proyector: Convertidor de Sistemas Númericos Materias: Programación y Logica Mate"
				L"maticas.";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(760, 532);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBoxLogoUDC);
			this->Controls->Add(this->BoxMenudeInicio);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Convertidora de Sistemas Nuemricos";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->BoxMenudeInicio->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLogoUDC))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void menuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		BoxMenudeInicio->Visible = true;

	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::Close();
}
};
}
