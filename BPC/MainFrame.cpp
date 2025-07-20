#include "MainFrame.h"
#include <wx/wx.h>


MainFrame::MainFrame() : wxFrame(nullptr, wxID_ANY, "Blue Physics Calculator", wxPoint(200, 200), wxSize(800, 600)) {
	//wxInitAllImageHandlers();

	wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);

	wxPanel* headerPanel = new wxPanel(this, wxID_ANY);
	headerPanel->SetBackgroundColour(wxColor(70, 130, 180));

	wxBitmap logoBitmap("images/logo.bmp", wxBITMAP_TYPE_BMP);
	wxStaticBitmap* logo = new wxStaticBitmap(headerPanel, wxID_ANY, logoBitmap);

	wxBoxSizer* headerSizer = new wxBoxSizer(wxHORIZONTAL);
	headerSizer->Add(logo, 0, wxALIGN_CENTER | wxALL, 10);
	headerPanel->SetSizer(headerSizer);

	

	
}