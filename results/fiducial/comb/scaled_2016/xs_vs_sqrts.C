void xs_vs_sqrts()
{
//=========Macro generated from canvas: c/xs_vs_sqrts
//=========  (Tue Jan 29 03:01:48 2019) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "xs_vs_sqrts",0,0,1000,1000);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(2.784842,-1.588462,15.66905,7.001282);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.18);
   c->SetRightMargin(0.06);
   c->SetTopMargin(0.07);
   c->SetBottomMargin(0.15);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx3001[2] = {
   6,
   14};
   Double_t _fy3001[2] = {
   0,
   6};
   Double_t _felx3001[2] = {
   0,
   0};
   Double_t _fely3001[2] = {
   0,
   0};
   Double_t _fehx3001[2] = {
   0,
   0};
   Double_t _fehy3001[2] = {
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1);
   grae->SetLineColor(0);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,5.2,14.8);
   Graph_Graph3001->SetMinimum(-0.3);
   Graph_Graph3001->SetMaximum(6.4);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineStyle(0);
   Graph_Graph3001->GetXaxis()->SetTitle("#sqrt{s} (TeV) ");
   Graph_Graph3001->GetXaxis()->SetRange(0,101);
   Graph_Graph3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph3001->GetYaxis()->SetTitle("#sigma_{fid} (fb)");
   Graph_Graph3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("al");
   
   Double_t Graph0_fx1[4] = {
   6,
   7,
   8,
   9};
   Double_t Graph0_fy1[4] = {
   0.7743,
   1.0309,
   1.2769,
   1.512};
   TGraph *graph = new TGraph(4,Graph0_fx1,Graph0_fy1);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066cc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,5.7,9.3);
   Graph_Graph1->SetMinimum(0.70053);
   Graph_Graph1->SetMaximum(1.58577);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->SetLineStyle(0);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("l ");
   
   Double_t Graph1_fx2[3] = {
   12,
   13,
   14};
   Double_t Graph1_fy2[3] = {
   2.471,
   2.761,
   3.084};
   graph = new TGraph(3,Graph1_fx2,Graph1_fy2);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0066cc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,11.8,14.2);
   Graph_Graph2->SetMinimum(2.4097);
   Graph_Graph2->SetMaximum(3.1453);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);
   Graph_Graph2->SetLineStyle(0);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph2->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph2->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   graph->Draw("l ");
   
   Double_t _fx3[4] = {
   6,
   7,
   7,
   6};
   Double_t _fy3[4] = {
   0.815,
   1.0851,
   0.9767,
   0.7336};
   graph = new TGraph(4,_fx3,_fy3);
   graph->SetName("");
   graph->SetTitle("");

   ci = TColor::GetColor("#0066cc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3004);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","",100,5.9,7.1);
   Graph_Graph3->SetMinimum(0.69845);
   Graph_Graph3->SetMaximum(1.12025);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);
   Graph_Graph3->SetLineStyle(0);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   graph->Draw("f ");
   
   Double_t _fx4[4] = {
   7,
   8,
   8,
   7};
   Double_t _fy4[4] = {
   1.0851,
   1.3441,
   1.2097,
   0.9767};
   graph = new TGraph(4,_fx4,_fy4);
   graph->SetName("");
   graph->SetTitle("");

   ci = TColor::GetColor("#0066cc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3004);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","",100,6.9,8.1);
   Graph_Graph4->SetMinimum(0.93996);
   Graph_Graph4->SetMaximum(1.38084);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);
   Graph_Graph4->SetLineStyle(0);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph4->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph4->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph4);
   
   graph->Draw("f ");
   
   Double_t _fx5[4] = {
   8,
   9,
   9,
   8};
   Double_t _fy5[4] = {
   1.3441,
   1.5915,
   1.4325,
   1.2097};
   graph = new TGraph(4,_fx5,_fy5);
   graph->SetName("");
   graph->SetTitle("");

   ci = TColor::GetColor("#0066cc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3004);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","",100,7.9,9.1);
   Graph_Graph5->SetMinimum(1.17152);
   Graph_Graph5->SetMaximum(1.62968);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);
   Graph_Graph5->SetLineStyle(0);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph5->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph5->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph5);
   
   graph->Draw("f ");
   
   Double_t _fx6[4] = {
   6,
   6,
   7,
   7};
   Double_t _fy6[4] = {
   0.7336,
   0.815,
   1.0851,
   0.9767};
   graph = new TGraph(4,_fx6,_fy6);
   graph->SetName("");
   graph->SetTitle("");

   ci = TColor::GetColor("#0066cc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3004);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","",100,5.9,7.1);
   Graph_Graph6->SetMinimum(0.69845);
   Graph_Graph6->SetMaximum(1.12025);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);
   Graph_Graph6->SetLineStyle(0);
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph6->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph6->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph6->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph6->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph6->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph6->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph6->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph6->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph6);
   
   graph->Draw("f ");
   
   Double_t _fx7[4] = {
   7,
   7,
   8,
   8};
   Double_t _fy7[4] = {
   0.9767,
   1.0851,
   1.3441,
   1.2097};
   graph = new TGraph(4,_fx7,_fy7);
   graph->SetName("");
   graph->SetTitle("");

   ci = TColor::GetColor("#0066cc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3004);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","",100,6.9,8.1);
   Graph_Graph7->SetMinimum(0.93996);
   Graph_Graph7->SetMaximum(1.38084);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);
   Graph_Graph7->SetLineStyle(0);
   Graph_Graph7->GetXaxis()->SetLabelFont(42);
   Graph_Graph7->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph7->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph7->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph7->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph7->GetXaxis()->SetTitleFont(42);
   Graph_Graph7->GetYaxis()->SetLabelFont(42);
   Graph_Graph7->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph7->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph7->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph7->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph7->GetYaxis()->SetTitleFont(42);
   Graph_Graph7->GetZaxis()->SetLabelFont(42);
   Graph_Graph7->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph7->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph7->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph7);
   
   graph->Draw("f ");
   
   Double_t _fx8[4] = {
   8,
   8,
   9,
   9};
   Double_t _fy8[4] = {
   1.2097,
   1.3441,
   1.5915,
   1.4325};
   graph = new TGraph(4,_fx8,_fy8);
   graph->SetName("");
   graph->SetTitle("");

   ci = TColor::GetColor("#0066cc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3004);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","",100,7.9,9.1);
   Graph_Graph8->SetMinimum(1.17152);
   Graph_Graph8->SetMaximum(1.62968);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);
   Graph_Graph8->SetLineStyle(0);
   Graph_Graph8->GetXaxis()->SetLabelFont(42);
   Graph_Graph8->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph8->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph8->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph8->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph8->GetXaxis()->SetTitleFont(42);
   Graph_Graph8->GetYaxis()->SetLabelFont(42);
   Graph_Graph8->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph8->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph8->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph8->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph8->GetYaxis()->SetTitleFont(42);
   Graph_Graph8->GetZaxis()->SetLabelFont(42);
   Graph_Graph8->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph8->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph8->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph8->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph8);
   
   graph->Draw("f ");
   
   Double_t _fx9[4] = {
   7,
   6,
   6,
   7};
   Double_t _fy9[4] = {
   0.9767,
   0.7336,
   0.815,
   1.0851};
   graph = new TGraph(4,_fx9,_fy9);
   graph->SetName("");
   graph->SetTitle("");

   ci = TColor::GetColor("#0066cc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3004);
   
   TH1F *Graph_Graph9 = new TH1F("Graph_Graph9","",100,5.9,7.1);
   Graph_Graph9->SetMinimum(0.69845);
   Graph_Graph9->SetMaximum(1.12025);
   Graph_Graph9->SetDirectory(0);
   Graph_Graph9->SetStats(0);
   Graph_Graph9->SetLineStyle(0);
   Graph_Graph9->GetXaxis()->SetLabelFont(42);
   Graph_Graph9->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph9->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph9->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph9->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph9->GetXaxis()->SetTitleFont(42);
   Graph_Graph9->GetYaxis()->SetLabelFont(42);
   Graph_Graph9->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph9->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph9->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph9->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph9->GetYaxis()->SetTitleFont(42);
   Graph_Graph9->GetZaxis()->SetLabelFont(42);
   Graph_Graph9->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph9->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph9->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph9->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph9);
   
   graph->Draw("f ");
   
   Double_t _fx10[4] = {
   8,
   7,
   7,
   8};
   Double_t _fy10[4] = {
   1.2097,
   0.9767,
   1.0851,
   1.3441};
   graph = new TGraph(4,_fx10,_fy10);
   graph->SetName("");
   graph->SetTitle("");

   ci = TColor::GetColor("#0066cc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3004);
   
   TH1F *Graph_Graph10 = new TH1F("Graph_Graph10","",100,6.9,8.1);
   Graph_Graph10->SetMinimum(0.93996);
   Graph_Graph10->SetMaximum(1.38084);
   Graph_Graph10->SetDirectory(0);
   Graph_Graph10->SetStats(0);
   Graph_Graph10->SetLineStyle(0);
   Graph_Graph10->GetXaxis()->SetLabelFont(42);
   Graph_Graph10->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph10->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph10->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph10->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph10->GetXaxis()->SetTitleFont(42);
   Graph_Graph10->GetYaxis()->SetLabelFont(42);
   Graph_Graph10->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph10->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph10->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph10->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph10->GetYaxis()->SetTitleFont(42);
   Graph_Graph10->GetZaxis()->SetLabelFont(42);
   Graph_Graph10->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph10->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph10->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph10->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph10);
   
   graph->Draw("f ");
   
   Double_t _fx11[4] = {
   9,
   8,
   8,
   9};
   Double_t _fy11[4] = {
   1.4325,
   1.2097,
   1.3441,
   1.5915};
   graph = new TGraph(4,_fx11,_fy11);
   graph->SetName("");
   graph->SetTitle("");

   ci = TColor::GetColor("#0066cc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3004);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","",100,7.9,9.1);
   Graph_Graph11->SetMinimum(1.17152);
   Graph_Graph11->SetMaximum(1.62968);
   Graph_Graph11->SetDirectory(0);
   Graph_Graph11->SetStats(0);
   Graph_Graph11->SetLineStyle(0);
   Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph11->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph11->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph11->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph11->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph11->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph11->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph11->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph11->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph11);
   
   graph->Draw("f ");
   
   Double_t _fx12[4] = {
   7,
   7,
   6,
   6};
   Double_t _fy12[4] = {
   1.0851,
   0.9767,
   0.7336,
   0.815};
   graph = new TGraph(4,_fx12,_fy12);
   graph->SetName("");
   graph->SetTitle("");

   ci = TColor::GetColor("#0066cc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3004);
   
   TH1F *Graph_Graph12 = new TH1F("Graph_Graph12","",100,5.9,7.1);
   Graph_Graph12->SetMinimum(0.69845);
   Graph_Graph12->SetMaximum(1.12025);
   Graph_Graph12->SetDirectory(0);
   Graph_Graph12->SetStats(0);
   Graph_Graph12->SetLineStyle(0);
   Graph_Graph12->GetXaxis()->SetLabelFont(42);
   Graph_Graph12->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph12->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph12->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph12->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph12->GetXaxis()->SetTitleFont(42);
   Graph_Graph12->GetYaxis()->SetLabelFont(42);
   Graph_Graph12->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph12->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph12->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph12->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph12->GetYaxis()->SetTitleFont(42);
   Graph_Graph12->GetZaxis()->SetLabelFont(42);
   Graph_Graph12->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph12->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph12->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph12);
   
   graph->Draw("f ");
   
   Double_t _fx13[4] = {
   8,
   8,
   7,
   7};
   Double_t _fy13[4] = {
   1.3441,
   1.2097,
   0.9767,
   1.0851};
   graph = new TGraph(4,_fx13,_fy13);
   graph->SetName("");
   graph->SetTitle("");

   ci = TColor::GetColor("#0066cc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3004);
   
   TH1F *Graph_Graph13 = new TH1F("Graph_Graph13","",100,6.9,8.1);
   Graph_Graph13->SetMinimum(0.93996);
   Graph_Graph13->SetMaximum(1.38084);
   Graph_Graph13->SetDirectory(0);
   Graph_Graph13->SetStats(0);
   Graph_Graph13->SetLineStyle(0);
   Graph_Graph13->GetXaxis()->SetLabelFont(42);
   Graph_Graph13->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph13->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph13->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph13->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph13->GetXaxis()->SetTitleFont(42);
   Graph_Graph13->GetYaxis()->SetLabelFont(42);
   Graph_Graph13->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph13->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph13->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph13->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph13->GetYaxis()->SetTitleFont(42);
   Graph_Graph13->GetZaxis()->SetLabelFont(42);
   Graph_Graph13->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph13->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph13->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph13->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph13);
   
   graph->Draw("f ");
   
   Double_t _fx14[4] = {
   9,
   9,
   8,
   8};
   Double_t _fy14[4] = {
   1.5915,
   1.4325,
   1.2097,
   1.3441};
   graph = new TGraph(4,_fx14,_fy14);
   graph->SetName("");
   graph->SetTitle("");

   ci = TColor::GetColor("#0066cc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3004);
   
   TH1F *Graph_Graph14 = new TH1F("Graph_Graph14","",100,7.9,9.1);
   Graph_Graph14->SetMinimum(1.17152);
   Graph_Graph14->SetMaximum(1.62968);
   Graph_Graph14->SetDirectory(0);
   Graph_Graph14->SetStats(0);
   Graph_Graph14->SetLineStyle(0);
   Graph_Graph14->GetXaxis()->SetLabelFont(42);
   Graph_Graph14->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph14->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph14->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph14->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph14->GetXaxis()->SetTitleFont(42);
   Graph_Graph14->GetYaxis()->SetLabelFont(42);
   Graph_Graph14->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph14->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph14->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph14->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph14->GetYaxis()->SetTitleFont(42);
   Graph_Graph14->GetZaxis()->SetLabelFont(42);
   Graph_Graph14->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph14->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph14->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph14->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph14);
   
   graph->Draw("f ");
   
   Double_t _fx15[4] = {
   6,
   7,
   8,
   9};
   Double_t _fy15[4] = {
   0.7336,
   0.9767,
   1.2097,
   1.4325};
   graph = new TGraph(4,_fx15,_fy15);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0066cc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   
   TH1F *Graph_Graph15 = new TH1F("Graph_Graph15","",100,5.7,9.3);
   Graph_Graph15->SetMinimum(0.66371);
   Graph_Graph15->SetMaximum(1.50239);
   Graph_Graph15->SetDirectory(0);
   Graph_Graph15->SetStats(0);
   Graph_Graph15->SetLineStyle(0);
   Graph_Graph15->GetXaxis()->SetLabelFont(42);
   Graph_Graph15->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph15->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph15->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph15->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph15->GetXaxis()->SetTitleFont(42);
   Graph_Graph15->GetYaxis()->SetLabelFont(42);
   Graph_Graph15->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph15->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph15->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph15->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph15->GetYaxis()->SetTitleFont(42);
   Graph_Graph15->GetZaxis()->SetLabelFont(42);
   Graph_Graph15->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph15->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph15->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph15->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph15);
   
   graph->Draw("l ");
   
   Double_t _fx16[4] = {
   6,
   7,
   8,
   9};
   Double_t _fy16[4] = {
   0.815,
   1.0851,
   1.3441,
   1.5915};
   graph = new TGraph(4,_fx16,_fy16);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0066cc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   
   TH1F *Graph_Graph16 = new TH1F("Graph_Graph16","",100,5.7,9.3);
   Graph_Graph16->SetMinimum(0.73735);
   Graph_Graph16->SetMaximum(1.66915);
   Graph_Graph16->SetDirectory(0);
   Graph_Graph16->SetStats(0);
   Graph_Graph16->SetLineStyle(0);
   Graph_Graph16->GetXaxis()->SetLabelFont(42);
   Graph_Graph16->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph16->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph16->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph16->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph16->GetXaxis()->SetTitleFont(42);
   Graph_Graph16->GetYaxis()->SetLabelFont(42);
   Graph_Graph16->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph16->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph16->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph16->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph16->GetYaxis()->SetTitleFont(42);
   Graph_Graph16->GetZaxis()->SetLabelFont(42);
   Graph_Graph16->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph16->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph16->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph16->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph16);
   
   graph->Draw("l ");
   
   TH1F *Graph_copy = new TH1F("Graph_copy","",100,5.2,14.8);
   Graph_copy->SetMinimum(-0.3);
   Graph_copy->SetMaximum(6.4);
   Graph_copy->SetDirectory(0);
   Graph_copy->SetStats(0);
   Graph_copy->SetLineStyle(0);
   Graph_copy->GetXaxis()->SetTitle("#sqrt{s} (TeV) ");
   Graph_copy->GetXaxis()->SetRange(0,101);
   Graph_copy->GetXaxis()->SetLabelFont(42);
   Graph_copy->GetXaxis()->SetLabelOffset(0.007);
   Graph_copy->GetXaxis()->SetLabelSize(0.05);
   Graph_copy->GetXaxis()->SetTitleSize(0.06);
   Graph_copy->GetXaxis()->SetTitleOffset(0.9);
   Graph_copy->GetXaxis()->SetTitleFont(42);
   Graph_copy->GetYaxis()->SetTitle("#sigma_{fid} (fb)");
   Graph_copy->GetYaxis()->SetLabelFont(42);
   Graph_copy->GetYaxis()->SetLabelOffset(0.007);
   Graph_copy->GetYaxis()->SetLabelSize(0.05);
   Graph_copy->GetYaxis()->SetTitleSize(0.06);
   Graph_copy->GetYaxis()->SetTitleFont(42);
   Graph_copy->GetZaxis()->SetLabelFont(42);
   Graph_copy->GetZaxis()->SetLabelOffset(0.007);
   Graph_copy->GetZaxis()->SetLabelSize(0.05);
   Graph_copy->GetZaxis()->SetTitleSize(0.06);
   Graph_copy->GetZaxis()->SetTitleFont(42);
   Graph_copy->Draw("sameaxis");
   
   Double_t _fx17[4] = {
   12,
   13,
   13,
   12};
   Double_t _fy17[4] = {
   2.597,
   2.905,
   2.617,
   2.345};
   graph = new TGraph(4,_fx17,_fy17);
   graph->SetName("");
   graph->SetTitle("");

   ci = TColor::GetColor("#0066cc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3004);
   
   TH1F *Graph_Graph17 = new TH1F("Graph_Graph17","",100,11.9,13.1);
   Graph_Graph17->SetMinimum(2.289);
   Graph_Graph17->SetMaximum(2.961);
   Graph_Graph17->SetDirectory(0);
   Graph_Graph17->SetStats(0);
   Graph_Graph17->SetLineStyle(0);
   Graph_Graph17->GetXaxis()->SetLabelFont(42);
   Graph_Graph17->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph17->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph17->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph17->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph17->GetXaxis()->SetTitleFont(42);
   Graph_Graph17->GetYaxis()->SetLabelFont(42);
   Graph_Graph17->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph17->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph17->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph17->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph17->GetYaxis()->SetTitleFont(42);
   Graph_Graph17->GetZaxis()->SetLabelFont(42);
   Graph_Graph17->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph17->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph17->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph17->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph17);
   
   graph->Draw("f ");
   
   Double_t _fx18[4] = {
   13,
   14,
   14,
   13};
   Double_t _fy18[4] = {
   2.905,
   3.241,
   2.927,
   2.617};
   graph = new TGraph(4,_fx18,_fy18);
   graph->SetName("");
   graph->SetTitle("");

   ci = TColor::GetColor("#0066cc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3004);
   
   TH1F *Graph_Graph18 = new TH1F("Graph_Graph18","",100,12.9,14.1);
   Graph_Graph18->SetMinimum(2.5546);
   Graph_Graph18->SetMaximum(3.3034);
   Graph_Graph18->SetDirectory(0);
   Graph_Graph18->SetStats(0);
   Graph_Graph18->SetLineStyle(0);
   Graph_Graph18->GetXaxis()->SetLabelFont(42);
   Graph_Graph18->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph18->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph18->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph18->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph18->GetXaxis()->SetTitleFont(42);
   Graph_Graph18->GetYaxis()->SetLabelFont(42);
   Graph_Graph18->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph18->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph18->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph18->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph18->GetYaxis()->SetTitleFont(42);
   Graph_Graph18->GetZaxis()->SetLabelFont(42);
   Graph_Graph18->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph18->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph18->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph18->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph18);
   
   graph->Draw("f ");
   
   Double_t _fx19[4] = {
   12,
   12,
   13,
   13};
   Double_t _fy19[4] = {
   2.345,
   2.597,
   2.905,
   2.617};
   graph = new TGraph(4,_fx19,_fy19);
   graph->SetName("");
   graph->SetTitle("");

   ci = TColor::GetColor("#0066cc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3004);
   
   TH1F *Graph_Graph19 = new TH1F("Graph_Graph19","",100,11.9,13.1);
   Graph_Graph19->SetMinimum(2.289);
   Graph_Graph19->SetMaximum(2.961);
   Graph_Graph19->SetDirectory(0);
   Graph_Graph19->SetStats(0);
   Graph_Graph19->SetLineStyle(0);
   Graph_Graph19->GetXaxis()->SetLabelFont(42);
   Graph_Graph19->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph19->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph19->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph19->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph19->GetXaxis()->SetTitleFont(42);
   Graph_Graph19->GetYaxis()->SetLabelFont(42);
   Graph_Graph19->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph19->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph19->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph19->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph19->GetYaxis()->SetTitleFont(42);
   Graph_Graph19->GetZaxis()->SetLabelFont(42);
   Graph_Graph19->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph19->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph19->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph19->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph19);
   
   graph->Draw("f ");
   
   Double_t _fx20[4] = {
   13,
   13,
   14,
   14};
   Double_t _fy20[4] = {
   2.617,
   2.905,
   3.241,
   2.927};
   graph = new TGraph(4,_fx20,_fy20);
   graph->SetName("");
   graph->SetTitle("");

   ci = TColor::GetColor("#0066cc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3004);
   
   TH1F *Graph_Graph20 = new TH1F("Graph_Graph20","",100,12.9,14.1);
   Graph_Graph20->SetMinimum(2.5546);
   Graph_Graph20->SetMaximum(3.3034);
   Graph_Graph20->SetDirectory(0);
   Graph_Graph20->SetStats(0);
   Graph_Graph20->SetLineStyle(0);
   Graph_Graph20->GetXaxis()->SetLabelFont(42);
   Graph_Graph20->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph20->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph20->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph20->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph20->GetXaxis()->SetTitleFont(42);
   Graph_Graph20->GetYaxis()->SetLabelFont(42);
   Graph_Graph20->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph20->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph20->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph20->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph20->GetYaxis()->SetTitleFont(42);
   Graph_Graph20->GetZaxis()->SetLabelFont(42);
   Graph_Graph20->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph20->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph20->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph20->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph20);
   
   graph->Draw("f ");
   
   Double_t _fx21[4] = {
   13,
   12,
   12,
   13};
   Double_t _fy21[4] = {
   2.617,
   2.345,
   2.597,
   2.905};
   graph = new TGraph(4,_fx21,_fy21);
   graph->SetName("");
   graph->SetTitle("");

   ci = TColor::GetColor("#0066cc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3004);
   
   TH1F *Graph_Graph21 = new TH1F("Graph_Graph21","",100,11.9,13.1);
   Graph_Graph21->SetMinimum(2.289);
   Graph_Graph21->SetMaximum(2.961);
   Graph_Graph21->SetDirectory(0);
   Graph_Graph21->SetStats(0);
   Graph_Graph21->SetLineStyle(0);
   Graph_Graph21->GetXaxis()->SetLabelFont(42);
   Graph_Graph21->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph21->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph21->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph21->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph21->GetXaxis()->SetTitleFont(42);
   Graph_Graph21->GetYaxis()->SetLabelFont(42);
   Graph_Graph21->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph21->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph21->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph21->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph21->GetYaxis()->SetTitleFont(42);
   Graph_Graph21->GetZaxis()->SetLabelFont(42);
   Graph_Graph21->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph21->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph21->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph21->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph21);
   
   graph->Draw("f ");
   
   Double_t _fx22[4] = {
   14,
   13,
   13,
   14};
   Double_t _fy22[4] = {
   2.927,
   2.617,
   2.905,
   3.241};
   graph = new TGraph(4,_fx22,_fy22);
   graph->SetName("");
   graph->SetTitle("");

   ci = TColor::GetColor("#0066cc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3004);
   
   TH1F *Graph_Graph22 = new TH1F("Graph_Graph22","",100,12.9,14.1);
   Graph_Graph22->SetMinimum(2.5546);
   Graph_Graph22->SetMaximum(3.3034);
   Graph_Graph22->SetDirectory(0);
   Graph_Graph22->SetStats(0);
   Graph_Graph22->SetLineStyle(0);
   Graph_Graph22->GetXaxis()->SetLabelFont(42);
   Graph_Graph22->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph22->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph22->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph22->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph22->GetXaxis()->SetTitleFont(42);
   Graph_Graph22->GetYaxis()->SetLabelFont(42);
   Graph_Graph22->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph22->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph22->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph22->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph22->GetYaxis()->SetTitleFont(42);
   Graph_Graph22->GetZaxis()->SetLabelFont(42);
   Graph_Graph22->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph22->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph22->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph22->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph22);
   
   graph->Draw("f ");
   
   Double_t _fx23[4] = {
   13,
   13,
   12,
   12};
   Double_t _fy23[4] = {
   2.905,
   2.617,
   2.345,
   2.597};
   graph = new TGraph(4,_fx23,_fy23);
   graph->SetName("");
   graph->SetTitle("");

   ci = TColor::GetColor("#0066cc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3004);
   
   TH1F *Graph_Graph23 = new TH1F("Graph_Graph23","",100,11.9,13.1);
   Graph_Graph23->SetMinimum(2.289);
   Graph_Graph23->SetMaximum(2.961);
   Graph_Graph23->SetDirectory(0);
   Graph_Graph23->SetStats(0);
   Graph_Graph23->SetLineStyle(0);
   Graph_Graph23->GetXaxis()->SetLabelFont(42);
   Graph_Graph23->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph23->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph23->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph23->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph23->GetXaxis()->SetTitleFont(42);
   Graph_Graph23->GetYaxis()->SetLabelFont(42);
   Graph_Graph23->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph23->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph23->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph23->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph23->GetYaxis()->SetTitleFont(42);
   Graph_Graph23->GetZaxis()->SetLabelFont(42);
   Graph_Graph23->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph23->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph23->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph23->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph23);
   
   graph->Draw("f ");
   
   Double_t _fx24[4] = {
   14,
   14,
   13,
   13};
   Double_t _fy24[4] = {
   3.241,
   2.927,
   2.617,
   2.905};
   graph = new TGraph(4,_fx24,_fy24);
   graph->SetName("");
   graph->SetTitle("");

   ci = TColor::GetColor("#0066cc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3004);
   
   TH1F *Graph_Graph24 = new TH1F("Graph_Graph24","",100,12.9,14.1);
   Graph_Graph24->SetMinimum(2.5546);
   Graph_Graph24->SetMaximum(3.3034);
   Graph_Graph24->SetDirectory(0);
   Graph_Graph24->SetStats(0);
   Graph_Graph24->SetLineStyle(0);
   Graph_Graph24->GetXaxis()->SetLabelFont(42);
   Graph_Graph24->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph24->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph24->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph24->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph24->GetXaxis()->SetTitleFont(42);
   Graph_Graph24->GetYaxis()->SetLabelFont(42);
   Graph_Graph24->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph24->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph24->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph24->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph24->GetYaxis()->SetTitleFont(42);
   Graph_Graph24->GetZaxis()->SetLabelFont(42);
   Graph_Graph24->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph24->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph24->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph24->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph24);
   
   graph->Draw("f ");
   
   Double_t _fx25[3] = {
   12,
   13,
   14};
   Double_t _fy25[3] = {
   2.345,
   2.617,
   2.927};
   graph = new TGraph(3,_fx25,_fy25);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0066cc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   
   TH1F *Graph_Graph25 = new TH1F("Graph_Graph25","",100,11.8,14.2);
   Graph_Graph25->SetMinimum(2.2868);
   Graph_Graph25->SetMaximum(2.9852);
   Graph_Graph25->SetDirectory(0);
   Graph_Graph25->SetStats(0);
   Graph_Graph25->SetLineStyle(0);
   Graph_Graph25->GetXaxis()->SetLabelFont(42);
   Graph_Graph25->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph25->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph25->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph25->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph25->GetXaxis()->SetTitleFont(42);
   Graph_Graph25->GetYaxis()->SetLabelFont(42);
   Graph_Graph25->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph25->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph25->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph25->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph25->GetYaxis()->SetTitleFont(42);
   Graph_Graph25->GetZaxis()->SetLabelFont(42);
   Graph_Graph25->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph25->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph25->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph25->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph25);
   
   graph->Draw("l ");
   
   Double_t _fx26[3] = {
   12,
   13,
   14};
   Double_t _fy26[3] = {
   2.597,
   2.905,
   3.241};
   graph = new TGraph(3,_fx26,_fy26);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0066cc");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   
   TH1F *Graph_Graph26 = new TH1F("Graph_Graph26","",100,11.8,14.2);
   Graph_Graph26->SetMinimum(2.5326);
   Graph_Graph26->SetMaximum(3.3054);
   Graph_Graph26->SetDirectory(0);
   Graph_Graph26->SetStats(0);
   Graph_Graph26->SetLineStyle(0);
   Graph_Graph26->GetXaxis()->SetLabelFont(42);
   Graph_Graph26->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph26->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph26->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph26->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph26->GetXaxis()->SetTitleFont(42);
   Graph_Graph26->GetYaxis()->SetLabelFont(42);
   Graph_Graph26->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph26->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph26->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph26->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph26->GetYaxis()->SetTitleFont(42);
   Graph_Graph26->GetZaxis()->SetLabelFont(42);
   Graph_Graph26->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph26->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph26->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph26->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph26);
   
   graph->Draw("l ");
   
   TH1F *Graph_copy = new TH1F("Graph_copy","",100,5.2,14.8);
   Graph_copy->SetMinimum(-0.3);
   Graph_copy->SetMaximum(6.4);
   Graph_copy->SetDirectory(0);
   Graph_copy->SetStats(0);
   Graph_copy->SetLineStyle(0);
   Graph_copy->GetXaxis()->SetTitle("#sqrt{s} (TeV) ");
   Graph_copy->GetXaxis()->SetRange(0,101);
   Graph_copy->GetXaxis()->SetLabelFont(42);
   Graph_copy->GetXaxis()->SetLabelOffset(0.007);
   Graph_copy->GetXaxis()->SetLabelSize(0.05);
   Graph_copy->GetXaxis()->SetTitleSize(0.06);
   Graph_copy->GetXaxis()->SetTitleOffset(0.9);
   Graph_copy->GetXaxis()->SetTitleFont(42);
   Graph_copy->GetYaxis()->SetTitle("#sigma_{fid} (fb)");
   Graph_copy->GetYaxis()->SetLabelFont(42);
   Graph_copy->GetYaxis()->SetLabelOffset(0.007);
   Graph_copy->GetYaxis()->SetLabelSize(0.05);
   Graph_copy->GetYaxis()->SetTitleSize(0.06);
   Graph_copy->GetYaxis()->SetTitleFont(42);
   Graph_copy->GetZaxis()->SetLabelFont(42);
   Graph_copy->GetZaxis()->SetLabelOffset(0.007);
   Graph_copy->GetZaxis()->SetLabelSize(0.05);
   Graph_copy->GetZaxis()->SetTitleSize(0.06);
   Graph_copy->GetZaxis()->SetTitleFont(42);
   Graph_copy->Draw("sameaxis");
   
   Double_t _fx3002[3] = {
   7,
   8,
   13};
   Double_t _fy3002[3] = {
   0.557,
   1.111,
   2.736};
   Double_t _felx3002[3] = {
   0,
   0,
   0};
   Double_t _fely3002[3] = {
   0.444,
   0.36,
   0.292};
   Double_t _fehx3002[3] = {
   0,
   0,
   0};
   Double_t _fehy3002[3] = {
   0.7,
   0.431,
   0.324};
   grae = new TGraphAsymmErrors(3,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,6.4,13.6);
   Graph_Graph3002->SetMinimum(-0.3);
   Graph_Graph3002->SetMaximum(6.4);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineStyle(0);
   Graph_Graph3002->GetXaxis()->SetTitle("#sqrt{s} (TeV) ");
   Graph_Graph3002->GetXaxis()->SetRange(0,101);
   Graph_Graph3002->GetXaxis()->SetLabelFont(42);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3002->GetXaxis()->SetTitleFont(42);
   Graph_Graph3002->GetYaxis()->SetTitle("#sigma_{fid} (fb)");
   Graph_Graph3002->GetYaxis()->SetLabelFont(42);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3002->GetYaxis()->SetTitleFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("pz");
   
   Double_t _fx3003[3] = {
   7,
   8,
   13};
   Double_t _fy3003[3] = {
   0.557,
   1.111,
   2.736};
   Double_t _felx3003[3] = {
   0,
   0,
   0};
   Double_t _fely3003[3] = {
   0.059,
   0.090408,
   0.186};
   Double_t _fehx3003[3] = {
   0,
   0,
   0};
   Double_t _fehy3003[3] = {
   0.211,
   0.136224,
   0.223};
   grae = new TGraphAsymmErrors(3,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);
   grae->SetLineWidth(4);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,6.4,13.6);
   Graph_Graph3003->SetMinimum(-0.3);
   Graph_Graph3003->SetMaximum(6.4);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineStyle(0);
   Graph_Graph3003->GetXaxis()->SetTitle("#sqrt{s} (TeV) ");
   Graph_Graph3003->GetXaxis()->SetRange(0,101);
   Graph_Graph3003->GetXaxis()->SetLabelFont(42);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3003->GetXaxis()->SetTitleFont(42);
   Graph_Graph3003->GetYaxis()->SetTitle("#sigma_{fid} (fb)");
   Graph_Graph3003->GetYaxis()->SetLabelFont(42);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetYaxis()->SetTitleFont(42);
   Graph_Graph3003->GetZaxis()->SetLabelFont(42);
   Graph_Graph3003->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("pz");
   
   TLegend *leg = new TLegend(0.22,0.59,0.6,0.84,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.03);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("","Data (stat. #oplus sys. unc.)","EP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Systematic uncertainty","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Standard model","fl");

   ci = TColor::GetColor("#0066cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#0066cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","LHC HXSWG YR4, m_{H}=125.09 GeV","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.94,0.94,"5.1 fb^{-1} (7 TeV), 19.7 fb^{-1} (8 TeV), 136 fb^{-1} (13 TeV) ");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.0315);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.85,"CMS");
tex->SetNDC();
   tex->SetTextSize(0.056);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.48,0.22,"pp #rightarrow (H #rightarrow 4l) + X");
tex->SetNDC();
   tex->SetTextSize(0.049);
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
