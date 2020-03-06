void rapidity4l_unfoldwith_SMup_125_logscale_asimov()
{
//=========Macro generated from canvas: c/rapidity4l
//=========  (Thu Feb  7 16:15:12 2019) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "rapidity4l",0,0,1400,1400);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-0.5769231,-3.675234,2.628205,2.465649);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLogy();
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.18);
   c->SetRightMargin(0.04);
   c->SetTopMargin(0.07);
   c->SetBottomMargin(0.35);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   
   TH1D *dummy1 = new TH1D("dummy1","dummy",2,0,2.5);
   dummy1->SetBinContent(0,4.92745);
   dummy1->SetBinContent(1,4.92745);
   dummy1->SetMinimum(0.02979033);
   dummy1->SetMaximum(108.5893);
   dummy1->SetEntries(2);
   dummy1->SetLineColor(0);
   dummy1->SetLineStyle(0);
   dummy1->SetLineWidth(0);
   dummy1->SetMarkerColor(0);
   dummy1->SetMarkerSize(0);
   dummy1->GetXaxis()->SetLabelFont(42);
   dummy1->GetXaxis()->SetLabelOffset(0.007);
   dummy1->GetXaxis()->SetLabelSize(0);
   dummy1->GetXaxis()->SetTitleSize(0);
   dummy1->GetXaxis()->SetTitleOffset(0.9);
   dummy1->GetXaxis()->SetTitleFont(42);
   dummy1->GetYaxis()->SetTitle("d#sigma_{fid }/d|y(H)| (fb)");
   dummy1->GetYaxis()->SetLabelFont(42);
   dummy1->GetYaxis()->SetLabelOffset(0.007);
   dummy1->GetYaxis()->SetTitleSize(0.06);
   dummy1->GetYaxis()->SetTitleOffset(1.4);
   dummy1->GetYaxis()->SetTitleFont(42);
   dummy1->GetZaxis()->SetLabelFont(42);
   dummy1->GetZaxis()->SetLabelOffset(0.007);
   dummy1->GetZaxis()->SetLabelSize(0.05);
   dummy1->GetZaxis()->SetTitleSize(0.06);
   dummy1->GetZaxis()->SetTitleFont(42);
   dummy1->Draw("hist");
   
   TLegend *leg = new TLegend(0.28,0.65,0.85,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.025);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Toy Data (stat. #oplus sys. unc.)","ep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Systematic uncertainty","l");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","gg#rightarrowH (NNLOPS) + XH","lf");

   ci = TColor::GetColor("#cc6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3245);

   ci = TColor::GetColor("#cc6600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","gg#rightarrowH (POWHEG) + XH","lf");

   ci = TColor::GetColor("#0066cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3254);

   ci = TColor::GetColor("#0066cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_XH","XH = VBF + VH + ttH (POWHEG)","f");

   ci = TColor::GetColor("#99cc99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3344);
   entry->SetLineColor(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("dummy","(LHC HXSWG YR4, m_{H}=125.09 GeV)","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   Double_t xAxis1[7] = {0, 0.15, 0.3, 0.6, 0.9, 1.2, 2.5}; 
   
   TH1D *h_ggH_powheg2 = new TH1D("h_ggH_powheg2","h_ggH_powheg",6, xAxis1);
   h_ggH_powheg2->SetBinContent(1,1.97098);
   h_ggH_powheg2->SetBinContent(2,1.953562);
   h_ggH_powheg2->SetBinContent(3,1.900168);
   h_ggH_powheg2->SetBinContent(4,1.738145);
   h_ggH_powheg2->SetBinContent(5,1.493774);
   h_ggH_powheg2->SetBinContent(6,0.4948656);
   h_ggH_powheg2->SetEntries(6);

   ci = TColor::GetColor("#0066cc");
   h_ggH_powheg2->SetLineColor(ci);
   h_ggH_powheg2->SetLineStyle(0);
   h_ggH_powheg2->SetLineWidth(2);
   h_ggH_powheg2->GetXaxis()->SetLabelFont(42);
   h_ggH_powheg2->GetXaxis()->SetLabelOffset(0.007);
   h_ggH_powheg2->GetXaxis()->SetLabelSize(0.05);
   h_ggH_powheg2->GetXaxis()->SetTitleSize(0.06);
   h_ggH_powheg2->GetXaxis()->SetTitleOffset(0.9);
   h_ggH_powheg2->GetXaxis()->SetTitleFont(42);
   h_ggH_powheg2->GetYaxis()->SetLabelFont(42);
   h_ggH_powheg2->GetYaxis()->SetLabelOffset(0.007);
   h_ggH_powheg2->GetYaxis()->SetLabelSize(0.05);
   h_ggH_powheg2->GetYaxis()->SetTitleSize(0.06);
   h_ggH_powheg2->GetYaxis()->SetTitleOffset(1.25);
   h_ggH_powheg2->GetYaxis()->SetTitleFont(42);
   h_ggH_powheg2->GetZaxis()->SetLabelFont(42);
   h_ggH_powheg2->GetZaxis()->SetLabelOffset(0.007);
   h_ggH_powheg2->GetZaxis()->SetLabelSize(0.05);
   h_ggH_powheg2->GetZaxis()->SetTitleSize(0.06);
   h_ggH_powheg2->GetZaxis()->SetTitleFont(42);
   h_ggH_powheg2->Draw("histsame");
   Double_t xAxis2[7] = {0, 0.15, 0.3, 0.6, 0.9, 1.2, 2.5}; 
   
   TH1D *h_ggH_minloHJ3 = new TH1D("h_ggH_minloHJ3","h_ggH_minloHJ",6, xAxis2);
   h_ggH_minloHJ3->SetBinContent(1,2.190071);
   h_ggH_minloHJ3->SetBinContent(2,2.169781);
   h_ggH_minloHJ3->SetBinContent(3,2.068823);
   h_ggH_minloHJ3->SetBinContent(4,1.893531);
   h_ggH_minloHJ3->SetBinContent(5,1.603348);
   h_ggH_minloHJ3->SetBinContent(6,0.5225361);
   h_ggH_minloHJ3->SetEntries(6);

   ci = TColor::GetColor("#cc6600");
   h_ggH_minloHJ3->SetLineColor(ci);
   h_ggH_minloHJ3->SetLineStyle(0);
   h_ggH_minloHJ3->SetLineWidth(2);
   h_ggH_minloHJ3->GetXaxis()->SetLabelFont(42);
   h_ggH_minloHJ3->GetXaxis()->SetLabelOffset(0.007);
   h_ggH_minloHJ3->GetXaxis()->SetLabelSize(0.05);
   h_ggH_minloHJ3->GetXaxis()->SetTitleSize(0.06);
   h_ggH_minloHJ3->GetXaxis()->SetTitleOffset(0.9);
   h_ggH_minloHJ3->GetXaxis()->SetTitleFont(42);
   h_ggH_minloHJ3->GetYaxis()->SetLabelFont(42);
   h_ggH_minloHJ3->GetYaxis()->SetLabelOffset(0.007);
   h_ggH_minloHJ3->GetYaxis()->SetLabelSize(0.05);
   h_ggH_minloHJ3->GetYaxis()->SetTitleSize(0.06);
   h_ggH_minloHJ3->GetYaxis()->SetTitleOffset(1.25);
   h_ggH_minloHJ3->GetYaxis()->SetTitleFont(42);
   h_ggH_minloHJ3->GetZaxis()->SetLabelFont(42);
   h_ggH_minloHJ3->GetZaxis()->SetLabelOffset(0.007);
   h_ggH_minloHJ3->GetZaxis()->SetLabelSize(0.05);
   h_ggH_minloHJ3->GetZaxis()->SetTitleSize(0.06);
   h_ggH_minloHJ3->GetZaxis()->SetTitleFont(42);
   h_ggH_minloHJ3->Draw("histsame");
   
   Double_t _fx3001[6] = {
   0.075,
   0.225,
   0.45,
   0.75,
   1.05,
   1.85};
   Double_t _fy3001[6] = {
   1.97098,
   1.953562,
   1.900168,
   1.738145,
   1.493774,
   0.4948656};
   Double_t _felx3001[6] = {
   0.01875,
   0.01875,
   0.0375,
   0.0375,
   0.0375,
   0.1625};
   Double_t _fely3001[6] = {
   0.2784914,
   0.2751094,
   0.2673754,
   0.2444149,
   0.20997,
   0.06852851};
   Double_t _fehx3001[6] = {
   0.01875,
   0.01875,
   0.0375,
   0.0375,
   0.0375,
   0.1625};
   Double_t _fehy3001[6] = {
   0.361537,
   0.3569637,
   0.3466409,
   0.3169865,
   0.2726054,
   0.08879165};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#0066cc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3254);

   ci = TColor::GetColor("#0066cc");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   grae->SetMarkerColor(ci);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,2.208125);
   Graph_Graph3001->SetMinimum(0.2357191);
   Graph_Graph3001->SetMaximum(2.523135);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineStyle(0);
   Graph_Graph3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("5");
   
   Double_t _fx3002[6] = {
   0.075,
   0.225,
   0.45,
   0.75,
   1.05,
   1.85};
   Double_t _fy3002[6] = {
   1.97098,
   1.953562,
   1.900168,
   1.738145,
   1.493774,
   0.4948656};
   Double_t _felx3002[6] = {
   0.01875,
   0.01875,
   0.0375,
   0.0375,
   0.0375,
   0.1625};
   Double_t _fely3002[6] = {
   0.2784914,
   0.2751094,
   0.2673754,
   0.2444149,
   0.20997,
   0.06852851};
   Double_t _fehx3002[6] = {
   0.01875,
   0.01875,
   0.0375,
   0.0375,
   0.0375,
   0.1625};
   Double_t _fehy3002[6] = {
   0.361537,
   0.3569637,
   0.3466409,
   0.3169865,
   0.2726054,
   0.08879165};
   grae = new TGraphAsymmErrors(6,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#0066cc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#0066cc");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0066cc");
   grae->SetMarkerColor(ci);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,2.208125);
   Graph_Graph3002->SetMinimum(0.2357191);
   Graph_Graph3002->SetMaximum(2.523135);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineStyle(0);
   Graph_Graph3002->GetXaxis()->SetLabelFont(42);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3002->GetXaxis()->SetTitleFont(42);
   Graph_Graph3002->GetYaxis()->SetLabelFont(42);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3002->GetYaxis()->SetTitleFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("5");
   
   Double_t _fx3003[6] = {
   0.075,
   0.225,
   0.45,
   0.75,
   1.05,
   1.85};
   Double_t _fy3003[6] = {
   2.190071,
   2.169781,
   2.068823,
   1.893531,
   1.603348,
   0.5225361};
   Double_t _felx3003[6] = {
   0.01875,
   0.01875,
   0.0375,
   0.0375,
   0.0375,
   0.1625};
   Double_t _fely3003[6] = {
   0.2638023,
   0.2921728,
   0.2084869,
   0.2466885,
   0.2230794,
   0.08210849};
   Double_t _fehx3003[6] = {
   0.01875,
   0.01875,
   0.0375,
   0.0375,
   0.0375,
   0.1625};
   Double_t _fehy3003[6] = {
   0.2240861,
   0.1838201,
   0.1841873,
   0.173004,
   0.1675047,
   0.04760994};
   grae = new TGraphAsymmErrors(6,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#cc6600");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3245);

   ci = TColor::GetColor("#cc6600");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#cc6600");
   grae->SetMarkerColor(ci);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,2.208125);
   Graph_Graph3003->SetMinimum(0.2430547);
   Graph_Graph3003->SetMaximum(2.61153);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineStyle(0);
   Graph_Graph3003->GetXaxis()->SetLabelFont(42);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3003->GetXaxis()->SetTitleFont(42);
   Graph_Graph3003->GetYaxis()->SetLabelFont(42);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3003->GetYaxis()->SetTitleFont(42);
   Graph_Graph3003->GetZaxis()->SetLabelFont(42);
   Graph_Graph3003->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("5");
   
   Double_t _fx3004[6] = {
   0.075,
   0.225,
   0.45,
   0.75,
   1.05,
   1.85};
   Double_t _fy3004[6] = {
   2.190071,
   2.169781,
   2.068823,
   1.893531,
   1.603348,
   0.5225361};
   Double_t _felx3004[6] = {
   0.01875,
   0.01875,
   0.0375,
   0.0375,
   0.0375,
   0.1625};
   Double_t _fely3004[6] = {
   0.2638023,
   0.2921728,
   0.2084869,
   0.2466885,
   0.2230794,
   0.08210849};
   Double_t _fehx3004[6] = {
   0.01875,
   0.01875,
   0.0375,
   0.0375,
   0.0375,
   0.1625};
   Double_t _fehy3004[6] = {
   0.2240861,
   0.1838201,
   0.1841873,
   0.173004,
   0.1675047,
   0.04760994};
   grae = new TGraphAsymmErrors(6,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#cc6600");
   grae->SetFillColor(ci);
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#cc6600");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#cc6600");
   grae->SetMarkerColor(ci);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,2.208125);
   Graph_Graph3004->SetMinimum(0.2430547);
   Graph_Graph3004->SetMaximum(2.61153);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineStyle(0);
   Graph_Graph3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3004->GetYaxis()->SetTitleFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("5");
   Double_t xAxis3[7] = {0, 0.15, 0.3, 0.6, 0.9, 1.2, 2.5}; 
   
   TH1D *h_XH4 = new TH1D("h_XH4","h_XH",6, xAxis3);
   h_XH4->SetBinContent(1,0.2213414);
   h_XH4->SetBinContent(2,0.2229453);
   h_XH4->SetBinContent(3,0.2139882);
   h_XH4->SetBinContent(4,0.1970766);
   h_XH4->SetBinContent(5,0.1726651);
   h_XH4->SetBinContent(6,0.0627605);
   h_XH4->SetEntries(6);

   ci = TColor::GetColor("#99cc99");
   h_XH4->SetFillColor(ci);
   h_XH4->SetFillStyle(3344);
   h_XH4->SetLineStyle(0);
   h_XH4->GetXaxis()->SetLabelFont(42);
   h_XH4->GetXaxis()->SetLabelOffset(0.007);
   h_XH4->GetXaxis()->SetLabelSize(0.05);
   h_XH4->GetXaxis()->SetTitleSize(0.06);
   h_XH4->GetXaxis()->SetTitleOffset(0.9);
   h_XH4->GetXaxis()->SetTitleFont(42);
   h_XH4->GetYaxis()->SetLabelFont(42);
   h_XH4->GetYaxis()->SetLabelOffset(0.007);
   h_XH4->GetYaxis()->SetLabelSize(0.05);
   h_XH4->GetYaxis()->SetTitleSize(0.06);
   h_XH4->GetYaxis()->SetTitleOffset(1.25);
   h_XH4->GetYaxis()->SetTitleFont(42);
   h_XH4->GetZaxis()->SetLabelFont(42);
   h_XH4->GetZaxis()->SetLabelOffset(0.007);
   h_XH4->GetZaxis()->SetLabelSize(0.05);
   h_XH4->GetZaxis()->SetTitleSize(0.06);
   h_XH4->GetZaxis()->SetTitleFont(42);
   h_XH4->Draw("histsame");
   
   Double_t _fx3005[6] = {
   0.075,
   0.225,
   0.45,
   0.75,
   1.05,
   1.85};
   Double_t _fy3005[6] = {
   1.97435,
   1.956914,
   1.903217,
   1.741115,
   1.49627,
   0.4956793};
   Double_t _felx3005[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fely3005[6] = {
   0.6486867,
   0.65458,
   0.4673833,
   0.45378,
   0.4244367,
   0.1256023};
   Double_t _fehx3005[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehy3005[6] = {
   0.80398,
   0.8110867,
   0.5492833,
   0.5365533,
   0.5123967,
   0.1487054};
   grae = new TGraphAsymmErrors(6,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,2.0275);
   Graph_Graph3005->SetMinimum(0.1292516);
   Graph_Graph3005->SetMaximum(3.019156);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineStyle(0);
   Graph_Graph3005->GetXaxis()->SetLabelFont(42);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3005->GetXaxis()->SetTitleFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3005->GetYaxis()->SetTitleFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("pz0");
   
   Double_t _fx3006[6] = {
   0.075,
   0.225,
   0.45,
   0.75,
   1.05,
   1.85};
   Double_t _fy3006[6] = {
   1.97435,
   1.956914,
   1.903217,
   1.741115,
   1.49627,
   0.4956793};
   Double_t _felx3006[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fely3006[6] = {
   0.09943717,
   0.1020259,
   0.123091,
   0.1144367,
   0.09006848,
   0.03428275};
   Double_t _fehx3006[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehy3006[6] = {
   0.2053481,
   0.2024278,
   0.1785606,
   0.1670481,
   0.1496271,
   0.05031068};
   grae = new TGraphAsymmErrors(6,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ff0000");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);
   grae->SetLineWidth(5);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,2.0275);
   Graph_Graph3006->SetMinimum(0.2895663);
   Graph_Graph3006->SetMaximum(2.351529);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineStyle(0);
   Graph_Graph3006->GetXaxis()->SetLabelFont(42);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3006->GetXaxis()->SetTitleFont(42);
   Graph_Graph3006->GetYaxis()->SetLabelFont(42);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3006->GetYaxis()->SetTitleFont(42);
   Graph_Graph3006->GetZaxis()->SetLabelFont(42);
   Graph_Graph3006->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("pz0");
   
   Double_t _fx3007[6] = {
   0.075,
   0.225,
   0.45,
   0.75,
   1.05,
   1.85};
   Double_t _fy3007[6] = {
   1.97435,
   1.956914,
   1.903217,
   1.741115,
   1.49627,
   0.4956793};
   Double_t _felx3007[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fely3007[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3007[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehy3007[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(6,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,2.0275);
   Graph_Graph3007->SetMinimum(0.3478122);
   Graph_Graph3007->SetMaximum(2.122218);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineStyle(0);
   Graph_Graph3007->GetXaxis()->SetLabelFont(42);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3007->GetXaxis()->SetTitleFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3007->GetYaxis()->SetTitleFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("p");
   TLatex *   tex = new TLatex(0.94,0.94,"136 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.19,0.94,"CMS");
tex->SetNDC();
   tex->SetTextSize(0.049);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1D *dummy5 = new TH1D("dummy5","dummy",2,0,2.5);
   dummy5->SetBinContent(0,4.92745);
   dummy5->SetBinContent(1,4.92745);
   dummy5->SetMinimum(0.02979033);
   dummy5->SetMaximum(108.5893);
   dummy5->SetEntries(2);
   dummy5->SetLineColor(0);
   dummy5->SetLineStyle(0);
   dummy5->SetLineWidth(0);
   dummy5->SetMarkerColor(0);
   dummy5->SetMarkerSize(0);
   dummy5->GetXaxis()->SetLabelFont(42);
   dummy5->GetXaxis()->SetLabelOffset(0.007);
   dummy5->GetXaxis()->SetLabelSize(0);
   dummy5->GetXaxis()->SetTitleSize(0);
   dummy5->GetXaxis()->SetTitleOffset(0.9);
   dummy5->GetXaxis()->SetTitleFont(42);
   dummy5->GetYaxis()->SetTitle("d#sigma_{fid }/d|y(H)| (fb)");
   dummy5->GetYaxis()->SetLabelFont(42);
   dummy5->GetYaxis()->SetLabelOffset(0.007);
   dummy5->GetYaxis()->SetTitleSize(0.06);
   dummy5->GetYaxis()->SetTitleOffset(1.4);
   dummy5->GetYaxis()->SetTitleFont(42);
   dummy5->GetZaxis()->SetLabelFont(42);
   dummy5->GetZaxis()->SetLabelOffset(0.007);
   dummy5->GetZaxis()->SetLabelSize(0.05);
   dummy5->GetZaxis()->SetTitleSize(0.06);
   dummy5->GetZaxis()->SetTitleFont(42);
   dummy5->Draw("axissame");
  
// ------------>Primitives in pad: pad
   TPad *pad = new TPad("pad", "pad",0,0,1,1);
   pad->Draw();
   pad->cd();
   pad->Range(-0.5769231,-0.8292084,2.628205,5.549318);
   pad->SetFillColor(0);
   pad->SetFillStyle(4000);
   pad->SetBorderMode(0);
   pad->SetBorderSize(2);
   pad->SetGridy();
   pad->SetTickx(1);
   pad->SetTicky(1);
   pad->SetLeftMargin(0.18);
   pad->SetRightMargin(0.04);
   pad->SetTopMargin(0.65);
   pad->SetBottomMargin(0.13);
   pad->SetFrameFillStyle(0);
   pad->SetFrameBorderMode(0);
   pad->SetFrameFillStyle(0);
   pad->SetFrameBorderMode(0);
   
   TH1D *dummy26 = new TH1D("dummy26","dummy2",2,0,2.5);
   dummy26->SetBinContent(0,1.02);
   dummy26->SetBinContent(1,1.02);
   dummy26->SetMinimum(0);
   dummy26->SetMaximum(1.403276);
   dummy26->SetEntries(2);
   dummy26->SetLineColor(0);
   dummy26->SetLineStyle(0);
   dummy26->SetLineWidth(0);
   dummy26->SetMarkerColor(0);
   dummy26->SetMarkerSize(0);
   dummy26->GetXaxis()->SetTitle("|y(H)|");
   dummy26->GetXaxis()->SetLabelFont(42);
   dummy26->GetXaxis()->SetLabelOffset(0.007);
   dummy26->GetXaxis()->SetTitleSize(0.06);
   dummy26->GetXaxis()->SetTitleOffset(0.9);
   dummy26->GetXaxis()->SetTitleFont(42);
   dummy26->GetYaxis()->SetTitle("Ratio to NNLOPS(2016)");
   dummy26->GetYaxis()->CenterTitle(true);
   dummy26->GetYaxis()->SetNdivisions(10);
   dummy26->GetYaxis()->SetLabelFont(42);
   dummy26->GetYaxis()->SetLabelOffset(0.007);
   dummy26->GetYaxis()->SetLabelSize(0.03);
   dummy26->GetYaxis()->SetTitleSize(0.03);
   dummy26->GetYaxis()->SetTitleOffset(2);
   dummy26->GetYaxis()->SetTitleFont(42);
   dummy26->GetZaxis()->SetLabelFont(42);
   dummy26->GetZaxis()->SetLabelOffset(0.007);
   dummy26->GetZaxis()->SetLabelSize(0.05);
   dummy26->GetZaxis()->SetTitleSize(0.06);
   dummy26->GetZaxis()->SetTitleFont(42);
   dummy26->Draw("hist");
   Double_t xAxis4[7] = {0, 0.15, 0.3, 0.6, 0.9, 1.2, 2.5}; 
   
   TH1D *h_ratio_powheg7 = new TH1D("h_ratio_powheg7","h_ratio_powheg",6, xAxis4);
   h_ratio_powheg7->SetBinContent(1,0.8999618);
   h_ratio_powheg7->SetBinContent(2,0.90035);
   h_ratio_powheg7->SetBinContent(3,0.9184778);
   h_ratio_powheg7->SetBinContent(4,0.9179381);
   h_ratio_powheg7->SetBinContent(5,0.9316592);
   h_ratio_powheg7->SetBinContent(6,0.9470458);
   h_ratio_powheg7->SetEntries(6);

   ci = TColor::GetColor("#0066cc");
   h_ratio_powheg7->SetLineColor(ci);
   h_ratio_powheg7->SetLineStyle(0);
   h_ratio_powheg7->SetLineWidth(2);
   h_ratio_powheg7->GetXaxis()->SetLabelFont(42);
   h_ratio_powheg7->GetXaxis()->SetLabelOffset(0.007);
   h_ratio_powheg7->GetXaxis()->SetLabelSize(0.05);
   h_ratio_powheg7->GetXaxis()->SetTitleSize(0.06);
   h_ratio_powheg7->GetXaxis()->SetTitleOffset(0.9);
   h_ratio_powheg7->GetXaxis()->SetTitleFont(42);
   h_ratio_powheg7->GetYaxis()->SetLabelFont(42);
   h_ratio_powheg7->GetYaxis()->SetLabelOffset(0.007);
   h_ratio_powheg7->GetYaxis()->SetLabelSize(0.05);
   h_ratio_powheg7->GetYaxis()->SetTitleSize(0.06);
   h_ratio_powheg7->GetYaxis()->SetTitleOffset(1.25);
   h_ratio_powheg7->GetYaxis()->SetTitleFont(42);
   h_ratio_powheg7->GetZaxis()->SetLabelFont(42);
   h_ratio_powheg7->GetZaxis()->SetLabelOffset(0.007);
   h_ratio_powheg7->GetZaxis()->SetLabelSize(0.05);
   h_ratio_powheg7->GetZaxis()->SetTitleSize(0.06);
   h_ratio_powheg7->GetZaxis()->SetTitleFont(42);
   h_ratio_powheg7->Draw("histsame");
   Double_t xAxis5[7] = {0, 0.15, 0.3, 0.6, 0.9, 1.2, 2.5}; 
   
   TH1D *h_ratio_minloHJ8 = new TH1D("h_ratio_minloHJ8","h_ratio_minloHJ",6, xAxis5);
   h_ratio_minloHJ8->SetBinContent(1,1);
   h_ratio_minloHJ8->SetBinContent(2,1);
   h_ratio_minloHJ8->SetBinContent(3,1);
   h_ratio_minloHJ8->SetBinContent(4,1);
   h_ratio_minloHJ8->SetBinContent(5,1);
   h_ratio_minloHJ8->SetBinContent(6,1);
   h_ratio_minloHJ8->SetEntries(6);

   ci = TColor::GetColor("#cc6600");
   h_ratio_minloHJ8->SetLineColor(ci);
   h_ratio_minloHJ8->SetLineStyle(0);
   h_ratio_minloHJ8->SetLineWidth(2);
   h_ratio_minloHJ8->GetXaxis()->SetLabelFont(42);
   h_ratio_minloHJ8->GetXaxis()->SetLabelOffset(0.007);
   h_ratio_minloHJ8->GetXaxis()->SetLabelSize(0.05);
   h_ratio_minloHJ8->GetXaxis()->SetTitleSize(0.06);
   h_ratio_minloHJ8->GetXaxis()->SetTitleOffset(0.9);
   h_ratio_minloHJ8->GetXaxis()->SetTitleFont(42);
   h_ratio_minloHJ8->GetYaxis()->SetLabelFont(42);
   h_ratio_minloHJ8->GetYaxis()->SetLabelOffset(0.007);
   h_ratio_minloHJ8->GetYaxis()->SetLabelSize(0.05);
   h_ratio_minloHJ8->GetYaxis()->SetTitleSize(0.06);
   h_ratio_minloHJ8->GetYaxis()->SetTitleOffset(1.25);
   h_ratio_minloHJ8->GetYaxis()->SetTitleFont(42);
   h_ratio_minloHJ8->GetZaxis()->SetLabelFont(42);
   h_ratio_minloHJ8->GetZaxis()->SetLabelOffset(0.007);
   h_ratio_minloHJ8->GetZaxis()->SetLabelSize(0.05);
   h_ratio_minloHJ8->GetZaxis()->SetTitleSize(0.06);
   h_ratio_minloHJ8->GetZaxis()->SetTitleFont(42);
   h_ratio_minloHJ8->Draw("histsame");
   
   Double_t _fx3008[6] = {
   0.075,
   0.225,
   0.45,
   0.75,
   1.05,
   1.85};
   Double_t _fy3008[6] = {
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3008[6] = {
   0.01875,
   0.01875,
   0.0375,
   0.0375,
   0.0375,
   0.1625};
   Double_t _fely3008[6] = {
   0.1204538,
   0.1346554,
   0.1007756,
   0.1302796,
   0.1391335,
   0.1571346};
   Double_t _fehx3008[6] = {
   0.01875,
   0.01875,
   0.0375,
   0.0375,
   0.0375,
   0.1625};
   Double_t _fehy3008[6] = {
   0.1023191,
   0.08471826,
   0.08903002,
   0.0913658,
   0.1044718,
   0.09111321};
   grae = new TGraphAsymmErrors(6,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#cc6600");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3245);

   ci = TColor::GetColor("#cc6600");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#cc6600");
   grae->SetMarkerColor(ci);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,2.208125);
   Graph_Graph3008->SetMinimum(0.8167048);
   Graph_Graph3008->SetMaximum(1.130632);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineStyle(0);
   Graph_Graph3008->GetXaxis()->SetLabelFont(42);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3008->GetXaxis()->SetTitleFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3008->GetYaxis()->SetTitleFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("5");
   
   Double_t _fx3009[6] = {
   0.075,
   0.225,
   0.45,
   0.75,
   1.05,
   1.85};
   Double_t _fy3009[6] = {
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3009[6] = {
   0.01875,
   0.01875,
   0.0375,
   0.0375,
   0.0375,
   0.1625};
   Double_t _fely3009[6] = {
   0.1204538,
   0.1346554,
   0.1007756,
   0.1302796,
   0.1391335,
   0.1571346};
   Double_t _fehx3009[6] = {
   0.01875,
   0.01875,
   0.0375,
   0.0375,
   0.0375,
   0.1625};
   Double_t _fehy3009[6] = {
   0.1023191,
   0.08471826,
   0.08903002,
   0.0913658,
   0.1044718,
   0.09111321};
   grae = new TGraphAsymmErrors(6,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#cc6600");
   grae->SetFillColor(ci);
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#cc6600");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#cc6600");
   grae->SetMarkerColor(ci);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,2.208125);
   Graph_Graph3009->SetMinimum(0.8167048);
   Graph_Graph3009->SetMaximum(1.130632);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineStyle(0);
   Graph_Graph3009->GetXaxis()->SetLabelFont(42);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3009->GetXaxis()->SetTitleFont(42);
   Graph_Graph3009->GetYaxis()->SetLabelFont(42);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3009->GetYaxis()->SetTitleFont(42);
   Graph_Graph3009->GetZaxis()->SetLabelFont(42);
   Graph_Graph3009->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("5");
   
   Double_t _fx3010[6] = {
   0.075,
   0.225,
   0.45,
   0.75,
   1.05,
   1.85};
   Double_t _fy3010[6] = {
   0.8999618,
   0.90035,
   0.9184778,
   0.9179381,
   0.9316592,
   0.9470458};
   Double_t _felx3010[6] = {
   0.01875,
   0.01875,
   0.0375,
   0.0375,
   0.0375,
   0.1625};
   Double_t _fely3010[6] = {
   0.1271609,
   0.1267913,
   0.1292404,
   0.1290789,
   0.1309572,
   0.131146};
   Double_t _fehx3010[6] = {
   0.01875,
   0.01875,
   0.0375,
   0.0375,
   0.0375,
   0.1625};
   Double_t _fehy3010[6] = {
   0.1650801,
   0.164516,
   0.1675547,
   0.1674049,
   0.1700226,
   0.1699244};
   grae = new TGraphAsymmErrors(6,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#0066cc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3254);

   ci = TColor::GetColor("#0066cc");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#0066cc");
   grae->SetMarkerColor(ci);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,2.208125);
   Graph_Graph3010->SetMinimum(0.7383839);
   Graph_Graph3010->SetMaximum(1.151387);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineStyle(0);
   Graph_Graph3010->GetXaxis()->SetLabelFont(42);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3010->GetXaxis()->SetTitleFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3010->GetYaxis()->SetTitleFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("5");
   
   Double_t _fx3011[6] = {
   0.075,
   0.225,
   0.45,
   0.75,
   1.05,
   1.85};
   Double_t _fy3011[6] = {
   0.8999618,
   0.90035,
   0.9184778,
   0.9179381,
   0.9316592,
   0.9470458};
   Double_t _felx3011[6] = {
   0.01875,
   0.01875,
   0.0375,
   0.0375,
   0.0375,
   0.1625};
   Double_t _fely3011[6] = {
   0.1271609,
   0.1267913,
   0.1292404,
   0.1290789,
   0.1309572,
   0.131146};
   Double_t _fehx3011[6] = {
   0.01875,
   0.01875,
   0.0375,
   0.0375,
   0.0375,
   0.1625};
   Double_t _fehy3011[6] = {
   0.1650801,
   0.164516,
   0.1675547,
   0.1674049,
   0.1700226,
   0.1699244};
   grae = new TGraphAsymmErrors(6,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#0066cc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#0066cc");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0066cc");
   grae->SetMarkerColor(ci);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,2.208125);
   Graph_Graph3011->SetMinimum(0.7383839);
   Graph_Graph3011->SetMaximum(1.151387);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineStyle(0);
   Graph_Graph3011->GetXaxis()->SetLabelFont(42);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3011->GetXaxis()->SetTitleFont(42);
   Graph_Graph3011->GetYaxis()->SetLabelFont(42);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3011->GetYaxis()->SetTitleFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("5");
   
   Double_t _fx3012[6] = {
   0.075,
   0.225,
   0.45,
   0.75,
   1.05,
   1.85};
   Double_t _fy3012[6] = {
   0.9015008,
   0.901895,
   0.9199515,
   0.9195066,
   0.9332157,
   0.948603};
   Double_t _felx3012[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fely3012[6] = {
   0.2961944,
   0.3016802,
   0.2259175,
   0.2396475,
   0.264719,
   0.2403706};
   Double_t _fehx3012[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehy3012[6] = {
   0.3671023,
   0.3738104,
   0.2655052,
   0.2833612,
   0.3195792,
   0.284584};
   grae = new TGraphAsymmErrors(6,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,2.0275);
   Graph_Graph3012->SetMinimum(0.5326657);
   Graph_Graph3012->SetMaximum(1.343255);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineStyle(0);
   Graph_Graph3012->GetXaxis()->SetLabelFont(42);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3012->GetXaxis()->SetTitleFont(42);
   Graph_Graph3012->GetYaxis()->SetLabelFont(42);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3012->GetYaxis()->SetTitleFont(42);
   Graph_Graph3012->GetZaxis()->SetLabelFont(42);
   Graph_Graph3012->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("pz0");
   
   Double_t _fx3013[6] = {
   0.075,
   0.225,
   0.45,
   0.75,
   1.05,
   1.85};
   Double_t _fy3013[6] = {
   0.9015008,
   0.901895,
   0.9199515,
   0.9195066,
   0.9332157,
   0.948603};
   Double_t _felx3013[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fely3013[6] = {
   0.04540364,
   0.04702128,
   0.0594981,
   0.06043562,
   0.05617525,
   0.0656084};
   Double_t _fehx3013[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehy3013[6] = {
   0.09376321,
   0.09329411,
   0.08631023,
   0.0882204,
   0.09332166,
   0.09628173};
   grae = new TGraphAsymmErrors(6,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ff0000");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);
   grae->SetLineWidth(5);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,2.0275);
   Graph_Graph3013->SetMinimum(0.8358726);
   Graph_Graph3013->SetMaximum(1.063886);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineStyle(0);
   Graph_Graph3013->GetXaxis()->SetLabelFont(42);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3013->GetXaxis()->SetTitleFont(42);
   Graph_Graph3013->GetYaxis()->SetLabelFont(42);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3013->GetYaxis()->SetTitleFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3013->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("pz0");
   
   Double_t _fx3014[6] = {
   0.075,
   0.225,
   0.45,
   0.75,
   1.05,
   1.85};
   Double_t _fy3014[6] = {
   0.9015008,
   0.901895,
   0.9199515,
   0.9195066,
   0.9332157,
   0.948603};
   Double_t _felx3014[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fely3014[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3014[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehy3014[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(6,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,2.0275);
   Graph_Graph3014->SetMinimum(0.8967906);
   Graph_Graph3014->SetMaximum(0.9533132);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineStyle(0);
   Graph_Graph3014->GetXaxis()->SetLabelFont(42);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3014->GetXaxis()->SetTitleFont(42);
   Graph_Graph3014->GetYaxis()->SetLabelFont(42);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3014->GetYaxis()->SetTitleFont(42);
   Graph_Graph3014->GetZaxis()->SetLabelFont(42);
   Graph_Graph3014->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("p");
   
   TH1D *dummy29 = new TH1D("dummy29","dummy2",2,0,2.5);
   dummy29->SetBinContent(0,1.02);
   dummy29->SetBinContent(1,1.02);
   dummy29->SetMinimum(0);
   dummy29->SetMaximum(1.403276);
   dummy29->SetEntries(2);
   dummy29->SetLineColor(0);
   dummy29->SetLineStyle(0);
   dummy29->SetLineWidth(0);
   dummy29->SetMarkerColor(0);
   dummy29->SetMarkerSize(0);
   dummy29->GetXaxis()->SetTitle("|y(H)|");
   dummy29->GetXaxis()->SetLabelFont(42);
   dummy29->GetXaxis()->SetLabelOffset(0.007);
   dummy29->GetXaxis()->SetTitleSize(0.06);
   dummy29->GetXaxis()->SetTitleOffset(0.9);
   dummy29->GetXaxis()->SetTitleFont(42);
   dummy29->GetYaxis()->SetTitle("Ratio to NNLOPS(2016)");
   dummy29->GetYaxis()->CenterTitle(true);
   dummy29->GetYaxis()->SetNdivisions(10);
   dummy29->GetYaxis()->SetLabelFont(42);
   dummy29->GetYaxis()->SetLabelOffset(0.007);
   dummy29->GetYaxis()->SetLabelSize(0.03);
   dummy29->GetYaxis()->SetTitleSize(0.03);
   dummy29->GetYaxis()->SetTitleOffset(2);
   dummy29->GetYaxis()->SetTitleFont(42);
   dummy29->GetZaxis()->SetLabelFont(42);
   dummy29->GetZaxis()->SetLabelOffset(0.007);
   dummy29->GetZaxis()->SetLabelSize(0.05);
   dummy29->GetZaxis()->SetTitleSize(0.06);
   dummy29->GetZaxis()->SetTitleFont(42);
   dummy29->Draw("axissame");
   pad->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
