#pragma once

namespace ImageViewerDemo {

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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ btnRestart;
	private: System::Windows::Forms::Button^ btnZoomReset;
	private: System::Windows::Forms::Button^ btnCloseImage;
	private: System::Windows::Forms::Button^ btnOpenImage;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::Button^ btnZoomIn;
	private: System::Windows::Forms::Button^ btnFront;
	private: System::Windows::Forms::Button^ btnZoomOut;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::OpenFileDialog^ ofd;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnRestart = (gcnew System::Windows::Forms::Button());
			this->btnZoomReset = (gcnew System::Windows::Forms::Button());
			this->btnCloseImage = (gcnew System::Windows::Forms::Button());
			this->btnOpenImage = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnZoomIn = (gcnew System::Windows::Forms::Button());
			this->btnFront = (gcnew System::Windows::Forms::Button());
			this->btnZoomOut = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ofd = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Controls->Add(this->btnRestart);
			this->panel1->Controls->Add(this->btnZoomReset);
			this->panel1->Controls->Add(this->btnCloseImage);
			this->panel1->Controls->Add(this->btnOpenImage);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnBack);
			this->panel1->Controls->Add(this->btnZoomIn);
			this->panel1->Controls->Add(this->btnFront);
			this->panel1->Controls->Add(this->btnZoomOut);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 306);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(622, 64);
			this->panel1->TabIndex = 0;
			// 
			// btnRestart
			// 
			this->btnRestart->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnRestart->Location = System::Drawing::Point(20, 10);
			this->btnRestart->Name = L"btnRestart";
			this->btnRestart->Size = System::Drawing::Size(74, 45);
			this->btnRestart->TabIndex = 18;
			this->btnRestart->Text = L"Reset All";
			this->btnRestart->UseVisualStyleBackColor = true;
			this->btnRestart->Click += gcnew System::EventHandler(this, &MyForm::btnRestart_Click);
			// 
			// btnZoomReset
			// 
			this->btnZoomReset->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnZoomReset->Location = System::Drawing::Point(363, 10);
			this->btnZoomReset->Name = L"btnZoomReset";
			this->btnZoomReset->Size = System::Drawing::Size(41, 46);
			this->btnZoomReset->TabIndex = 17;
			this->btnZoomReset->Text = L"=";
			this->btnZoomReset->UseVisualStyleBackColor = true;
			this->btnZoomReset->Click += gcnew System::EventHandler(this, &MyForm::btnZoomReset_Click);
			// 
			// btnCloseImage
			// 
			this->btnCloseImage->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnCloseImage->Location = System::Drawing::Point(437, 9);
			this->btnCloseImage->Name = L"btnCloseImage";
			this->btnCloseImage->Size = System::Drawing::Size(74, 45);
			this->btnCloseImage->TabIndex = 16;
			this->btnCloseImage->Text = L"Close";
			this->btnCloseImage->UseVisualStyleBackColor = true;
			this->btnCloseImage->Click += gcnew System::EventHandler(this, &MyForm::btnCloseImage_Click);
			// 
			// btnOpenImage
			// 
			this->btnOpenImage->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnOpenImage->Location = System::Drawing::Point(517, 10);
			this->btnOpenImage->Name = L"btnOpenImage";
			this->btnOpenImage->Size = System::Drawing::Size(85, 45);
			this->btnOpenImage->TabIndex = 12;
			this->btnOpenImage->Text = L"Open";
			this->btnOpenImage->UseVisualStyleBackColor = true;
			this->btnOpenImage->Click += gcnew System::EventHandler(this, &MyForm::btnOpenImage_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(207, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 17);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Zoom : ";
			// 
			// btnBack
			// 
			this->btnBack->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnBack->Location = System::Drawing::Point(97, 9);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(41, 46);
			this->btnBack->TabIndex = 10;
			this->btnBack->Text = L"<";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &MyForm::btnBack_Click);
			// 
			// btnZoomIn
			// 
			this->btnZoomIn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnZoomIn->Location = System::Drawing::Point(316, 9);
			this->btnZoomIn->Name = L"btnZoomIn";
			this->btnZoomIn->Size = System::Drawing::Size(41, 46);
			this->btnZoomIn->TabIndex = 14;
			this->btnZoomIn->Text = L"+";
			this->btnZoomIn->UseVisualStyleBackColor = true;
			this->btnZoomIn->Click += gcnew System::EventHandler(this, &MyForm::btnZoomIn_Click);
			// 
			// btnFront
			// 
			this->btnFront->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnFront->Location = System::Drawing::Point(143, 9);
			this->btnFront->Name = L"btnFront";
			this->btnFront->Size = System::Drawing::Size(41, 46);
			this->btnFront->TabIndex = 11;
			this->btnFront->Text = L">";
			this->btnFront->UseVisualStyleBackColor = true;
			this->btnFront->Click += gcnew System::EventHandler(this, &MyForm::btnFront_Click);
			// 
			// btnZoomOut
			// 
			this->btnZoomOut->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnZoomOut->Location = System::Drawing::Point(269, 10);
			this->btnZoomOut->Name = L"btnZoomOut";
			this->btnZoomOut->Size = System::Drawing::Size(41, 46);
			this->btnZoomOut->TabIndex = 13;
			this->btnZoomOut->Text = L"-";
			this->btnZoomOut->UseVisualStyleBackColor = true;
			this->btnZoomOut->Click += gcnew System::EventHandler(this, &MyForm::btnZoomOut_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(622, 306);
			this->panel2->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(598, 288);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// ofd
			// 
			this->ofd->Filter = L"\"JPEG|*.jpg|All Files|*.*\"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(622, 370);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->MinimumSize = System::Drawing::Size(640, 417);
			this->Name = L"MyForm";
			this->Text = L"Picture Viewer";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		array<String^>^ files; //for storing the filenames in the directory chosen (path).
		String^ path; //the path of the file chosen
		int currentIndex; //index storing which file it is now showing from the files array
		Point^ p; //for zooming purposes
		const int zoomLevel = 200; //storing the zoomlevel. Adjust to make zooming when clicked zoom in or out.
		int Zooms = 0; //tracks the number of + and – button clicks. 

		//Restart Button
	private: System::Void btnRestart_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Restart();

	}

		   //Image Open Button
	private: System::Void btnOpenImage_Click(System::Object^ sender, System::EventArgs^ e) {

		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			pictureBox1->ImageLocation = ofd->FileName; //set the picture box image to the file chosen 
			path = System::IO::Path::GetDirectoryName(ofd->FileName); //get the path of the file chosen. So that we can get a list of the files in that directory

			files = System::IO::Directory::GetFiles(path); //getting the list of files

			for (int i = 0; i < files->Length; i++) //iterating through the array an getting the index of the file chosen from the complete list of files. So that when we move forward or backward we know which file to show next.
			{
				if (files[i] == ofd->FileName)
				{
					currentIndex = i;
					break;
				}
			}
		}

	}
		   //Forward
	private: System::Void btnFront_Click(System::Object^ sender, System::EventArgs^ e) {

		if (currentIndex != files->Length - 1) //checking to see whether it is not the last file in the folder
		{
			currentIndex++; //if not increment the index because it is safe right?
		}
		pictureBox1->ImageLocation = files[currentIndex]; //and then by using that index, set the image of the picture box.

	}

		   //Backward
	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {

		if (currentIndex != 0)
		{
			currentIndex--;

		}
		pictureBox1->ImageLocation = files[currentIndex];
	}

		   //Zoom in
	private: System::Void btnZoomIn_Click(System::Object^ sender, System::EventArgs^ e) {

		pictureBox1->Top -= zoomLevel / 2; //pushes the picture box 100px to the top
		pictureBox1->Left -= zoomLevel / 2; //pushes the picture box 100px to the left
		pictureBox1->Height += zoomLevel; //increase the size of the picture box by 200px
		pictureBox1->Width += zoomLevel; //increase the width by 200px

		Zooms++;

	}

		   //Zoom Out
	private: System::Void btnZoomOut_Click(System::Object^ sender, System::EventArgs^ e) {

		pictureBox1->Top += zoomLevel / 2; //pushes the picture box 100px to the bottom
		pictureBox1->Left += zoomLevel / 2; //pushes the picture box 100px to the right
		pictureBox1->Height -= zoomLevel; //decrease the height of the picture box by 200px
		pictureBox1->Width -= zoomLevel; //decrease the width by 200px

		Zooms--;

	}

		   //Close Button
	private: System::Void btnCloseImage_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->ImageLocation = "";
	}

		   //Zoom Reset
	private: System::Void btnZoomReset_Click(System::Object^ sender, System::EventArgs^ e) {
		int newZoom = Zooms; //creates a temporary copy of the variable because when zooming Zoom variable is changed. Thus, when performing click events same thing happens.

		if (Zooms > 0) //checking whether the image is zoomed in
		{
			for (int i = 0; i < newZoom; i++) //iterating to perform zoom outs to match original size
			{
				btnZoomOut->PerformClick();
			}
		}
		else if (Zooms < 0) //checking whether the image is zoomed out
		{

			for (int i = 0; i > newZoom; i--) //iterating to perform zoom ins to match original size
			{
				btnZoomIn->PerformClick();
			}
		}

		//resetting zoom level at the end of the day
		Zooms = 0;

	}
	};
}
