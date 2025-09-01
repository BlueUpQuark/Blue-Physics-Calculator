#include "MainFrame.h"
#include <wx/wx.h>


MainFrame::MainFrame() : wxFrame(nullptr, wxID_ANY, "Blue Physics Calculator", wxPoint(200, 200), wxSize(800, 600)) {
	// New Panel
	wxPanel* m_panel = new wxPanel(this);
	m_panel->SetDoubleBuffered(true);

	// Load the logo
	m_origImg.LoadFile("C:\\Users\\justi\\source\\repos\\Blue-Physics-Calculator\\BPC\\images\\logo.bmp", wxBITMAP_TYPE_BMP);

	// Create the bitmap control (the GUI element that will display the logo)
	wxStaticBitmap* m_bitmap = new wxStaticBitmap(m_panel, wxID_ANY, wxNullBitmap);

	// 2 sizers. root is the main vertical sizer, topRow is the top row's horizontal sizer
	wxBoxSizer* root = new wxBoxSizer(wxVERTICAL);
	wxBoxSizer* topRow = new wxBoxSizer(wxHORIZONTAL);

	topRow->AddStretchSpacer(1);
	topRow->Add(m_bitmap, 0, wxALIGN_TOP | wxRIGHT | wxTOP, 12);

	root->Add(topRow, 0, wxEXPAND);
	root->AddStretchSpacer(1);

	m_panel->SetSizer(root);
}