#pragma once
#include "resource.h"
namespace GUI1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		int times = 0;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			/*
			ListViewItem listViewItem;
			listViewItem.Name = "test";
			Image img = System::Drawing::Image::FromFile('kahoot.PNG');
			lst_MyView->SmallImageList->Images->Add(img);
			lst_MyView->Items->Add("hello",2);
			*/
			ImageList^ imageListSmall = gcnew ImageList;
			
			
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
	private: System::Windows::Forms::ListView^  lst_MyView;
	protected:

	protected:
	private: System::Windows::Forms::ColumnHeader^  Name;
	private: System::Windows::Forms::ColumnHeader^  Address;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  copyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pasteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem1;
	private: System::Windows::Forms::TextBox^  txt_output;
	private: System::Windows::Forms::TextBox^  textBox1;




	protected:

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
			System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(L"Hello"));
			this->lst_MyView = (gcnew System::Windows::Forms::ListView());
			this->Name = (gcnew System::Windows::Forms::ColumnHeader());
			this->Address = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txt_output = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lst_MyView
			// 
			this->lst_MyView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->Name, this->Address });
			this->lst_MyView->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) { listViewItem1 });
			this->lst_MyView->Location = System::Drawing::Point(12, 81);
			this->lst_MyView->Name = L"lst_MyView";
			this->lst_MyView->Size = System::Drawing::Size(121, 97);
			this->lst_MyView->TabIndex = 0;
			this->lst_MyView->UseCompatibleStateImageBehavior = false;
			this->lst_MyView->View = System::Windows::Forms::View::SmallIcon;
			// 
			// Name
			// 
			this->Name->Text = L"MyForm";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 184);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 210);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(184, 81);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 95);
			this->listBox1->TabIndex = 3;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem, this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(400, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->saveToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(35, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->saveToolStripMenuItem->Text = L"save";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->exitToolStripMenuItem->Text = L"exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->copyToolStripMenuItem,
					this->pasteToolStripMenuItem
			});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// copyToolStripMenuItem
			// 
			this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
			this->copyToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->copyToolStripMenuItem->Text = L"Copy";
			// 
			// pasteToolStripMenuItem
			// 
			this->pasteToolStripMenuItem->Name = L"pasteToolStripMenuItem";
			this->pasteToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->pasteToolStripMenuItem->Text = L"Paste";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem1 });
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// aboutToolStripMenuItem1
			// 
			this->aboutToolStripMenuItem1->Name = L"aboutToolStripMenuItem1";
			this->aboutToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->aboutToolStripMenuItem1->Text = L"About";
			// 
			// txt_output
			// 
			this->txt_output->Location = System::Drawing::Point(15, 240);
			this->txt_output->Multiline = true;
			this->txt_output->Name = L"txt_output";
			this->txt_output->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt_output->Size = System::Drawing::Size(376, 165);
			this->txt_output->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 42);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(400, 422);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->txt_output);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lst_MyView);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Proj 4: Kevin Hansen";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		
		
	}
	
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		times++;
		
		txt_output->Text = txt_output->Text + "button1 was clicked " + times +" times\r\n";
		button1->Text = "I was clicked";
		txt_output->ScrollToCaret();
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
