// generated by Fast Light User Interface Designer (fluid) version 1.0107

#ifndef GUI_h
#define GUI_h
#include <FL/Fl.H>
#include "glob.h"
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Value_Output.H>
#include <FL/Fl_Progress.H>
#include <FL/Fl_Value_Input.H>
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Check_Button.H>
#include <FL/Fl_File_Chooser.H>
#include <FL/Fl_Return_Button.H>
#include "display.h"

class demtkGUI {
public:
  demtkGUI();
  Fl_Double_Window *ControlWindow;
  Fl_Button *ComputeButton;
private:
  void cb_ComputeButton_i(Fl_Button*, void*);
  static void cb_ComputeButton(Fl_Button*, void*);
public:
  Fl_Group *PanelsGrp;
  Fl_Button *AlgoButton;
private:
  void cb_AlgoButton_i(Fl_Button*, void*);
  static void cb_AlgoButton(Fl_Button*, void*);
public:
  Fl_Button *SampleButton;
private:
  void cb_SampleButton_i(Fl_Button*, void*);
  static void cb_SampleButton(Fl_Button*, void*);
public:
  Fl_Button *SystemButton;
  Fl_Button *MechanicalButton;
private:
  void cb_MechanicalButton_i(Fl_Button*, void*);
  static void cb_MechanicalButton(Fl_Button*, void*);
public:
  Fl_Button *AlteractionButton;
  Fl_Button *NetworkButton;
private:
  void cb_NetworkButton_i(Fl_Button*, void*);
  static void cb_NetworkButton(Fl_Button*, void*);
public:
  Fl_Value_Output *niterOutput;
  Fl_Progress *SimuProgressBar;
  Fl_Button *OneStepButton;
private:
  void cb_OneStepButton_i(Fl_Button*, void*);
  static void cb_OneStepButton(Fl_Button*, void*);
public:
  Fl_Button *StopButton;
private:
  void cb_StopButton_i(Fl_Button*, void*);
  static void cb_StopButton(Fl_Button*, void*);
public:
  Fl_Value_Input *nverInput;
private:
  void cb_nverInput_i(Fl_Value_Input*, void*);
  static void cb_nverInput(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *nwiterInput;
private:
  void cb_nwiterInput_i(Fl_Value_Input*, void*);
  static void cb_nwiterInput(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *ioutInput;
private:
  void cb_ioutInput_i(Fl_Value_Input*, void*);
  static void cb_ioutInput(Fl_Value_Input*, void*);
  void cb_Save_i(Fl_Light_Button*, void*);
  static void cb_Save(Fl_Light_Button*, void*);
public:
  Fl_Value_Input *NextNumberinput;
private:
  void cb_Change_i(Fl_Button*, void*);
  static void cb_Change(Fl_Button*, void*);
public:
  Fl_Choice *FormatChoose;
  Fl_Output *WorkPathNameOutput;
  Fl_Check_Button *saveNetworkCheckBox;
private:
  void cb_saveNetworkCheckBox_i(Fl_Check_Button*, void*);
  static void cb_saveNetworkCheckBox(Fl_Check_Button*, void*);
public:
  Fl_Button *QuitButton;
private:
  void cb_QuitButton_i(Fl_Button*, void*);
  static void cb_QuitButton(Fl_Button*, void*);
public:
  Fl_Button *SaveDataButton;
private:
  void cb_SaveDataButton_i(Fl_Button*, void*);
  static void cb_SaveDataButton(Fl_Button*, void*);
public:
  Fl_Value_Input *analyzeInput;
private:
  void cb_analyzeInput_i(Fl_Value_Input*, void*);
  static void cb_analyzeInput(Fl_Value_Input*, void*);
public:
  Fl_Light_Button *saveAnalyse;
private:
  void cb_saveAnalyse_i(Fl_Light_Button*, void*);
  static void cb_saveAnalyse(Fl_Light_Button*, void*);
public:
  Fl_Double_Window *AlgoWindow;
  Fl_Value_Input *dtInput;
private:
  void cb_dtInput_i(Fl_Value_Input*, void*);
  static void cb_dtInput(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *nsInput;
private:
  void cb_nsInput_i(Fl_Value_Input*, void*);
  static void cb_nsInput(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *nsfInput;
private:
  void cb_nsfInput_i(Fl_Value_Input*, void*);
  static void cb_nsfInput(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *tInput;
  Fl_Value_Input *nitermnInput;
private:
  void cb_nitermnInput_i(Fl_Value_Input*, void*);
  static void cb_nitermnInput(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *nitermxInput;
private:
  void cb_nitermxInput_i(Fl_Value_Input*, void*);
  static void cb_nitermxInput(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *epsfInput;
private:
  void cb_epsfInput_i(Fl_Value_Input*, void*);
  static void cb_epsfInput(Fl_Value_Input*, void*);
public:
  Fl_Return_Button *AlgoCloseButton;
private:
  void cb_AlgoCloseButton_i(Fl_Return_Button*, void*);
  static void cb_AlgoCloseButton(Fl_Return_Button*, void*);
public:
  Fl_Double_Window *SampleWindow;
  Display *DisplayArea;
  Fl_Button *dispOptButton;
private:
  void cb_dispOptButton_i(Fl_Button*, void*);
  static void cb_dispOptButton(Fl_Button*, void*);
public:
  Fl_Value_Input *zoomInput;
private:
  void cb_zoomInput_i(Fl_Value_Input*, void*);
  static void cb_zoomInput(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *xshiftInput;
private:
  void cb_xshiftInput_i(Fl_Value_Input*, void*);
  static void cb_xshiftInput(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *yshiftInput;
private:
  void cb_yshiftInput_i(Fl_Value_Input*, void*);
  static void cb_yshiftInput(Fl_Value_Input*, void*);
public:
  Fl_Button *fitButton;
private:
  void cb_fitButton_i(Fl_Button*, void*);
  static void cb_fitButton(Fl_Button*, void*);
public:
  Fl_Button *UpButton;
private:
  void cb_UpButton_i(Fl_Button*, void*);
  static void cb_UpButton(Fl_Button*, void*);
public:
  Fl_Button *DownButton;
private:
  void cb_DownButton_i(Fl_Button*, void*);
  static void cb_DownButton(Fl_Button*, void*);
public:
  Fl_Button *RightButton;
private:
  void cb_RightButton_i(Fl_Button*, void*);
  static void cb_RightButton(Fl_Button*, void*);
public:
  Fl_Button *LeftButton;
private:
  void cb_LeftButton_i(Fl_Button*, void*);
  static void cb_LeftButton(Fl_Button*, void*);
public:
  Fl_Button *ZoomButton;
private:
  void cb_ZoomButton_i(Fl_Button*, void*);
  static void cb_ZoomButton(Fl_Button*, void*);
public:
  Fl_Button *deZoomButton;
private:
  void cb_deZoomButton_i(Fl_Button*, void*);
  static void cb_deZoomButton(Fl_Button*, void*);
public:
  Fl_Value_Output *zoomOutput;
private:
  void cb_zoomOutput_i(Fl_Value_Output*, void*);
  static void cb_zoomOutput(Fl_Value_Output*, void*);
public:
  Fl_Value_Output *xshiftOutput;
  Fl_Value_Output *yshiftOutput;
  Fl_Value_Input *BodyToTrack;
private:
  void cb_BodyToTrack_i(Fl_Value_Input*, void*);
  static void cb_BodyToTrack(Fl_Value_Input*, void*);
public:
  Fl_Check_Button *BodyButton;
private:
  void cb_BodyButton_i(Fl_Check_Button*, void*);
  static void cb_BodyButton(Fl_Check_Button*, void*);
public:
  Fl_Value_Input *ClusterToTrack;
private:
  void cb_ClusterToTrack_i(Fl_Value_Input*, void*);
  static void cb_ClusterToTrack(Fl_Value_Input*, void*);
public:
  Fl_Check_Button *ClusterButton;
private:
  void cb_ClusterButton_i(Fl_Check_Button*, void*);
  static void cb_ClusterButton(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *FillButton;
private:
  void cb_FillButton_i(Fl_Check_Button*, void*);
  static void cb_FillButton(Fl_Check_Button*, void*);
public:
  Fl_Double_Window *DispOptionsWindow;
  Fl_Group *dispOptSample;
  Fl_Check_Button *shapesCheck;
private:
  void cb_shapesCheck_i(Fl_Check_Button*, void*);
  static void cb_shapesCheck(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *orientCheck;
private:
  void cb_orientCheck_i(Fl_Check_Button*, void*);
  static void cb_orientCheck(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *velCheck;
private:
  void cb_velCheck_i(Fl_Check_Button*, void*);
  static void cb_velCheck(Fl_Check_Button*, void*);
  void cb_clusters_i(Fl_Check_Button*, void*);
  static void cb_clusters(Fl_Check_Button*, void*);
public:
  Fl_Group *dispOptNetwork;
  Fl_Check_Button *fnCheck;
private:
  void cb_fnCheck_i(Fl_Check_Button*, void*);
  static void cb_fnCheck(Fl_Check_Button*, void*);
//modif du 10/03/09
/*public:
	  Fl_Check_Button *fresNormalCheck;
private:
	void cb_fresNormalCheck_i(Fl_Check_Button*, void*);
	static void cb_fresNormalCheck(Fl_Check_Button*, void*);*/
//------------------------------------------------------------------------
public:
  Fl_Check_Button *ftCheck;
private:
  void cb_ftCheck_i(Fl_Check_Button*, void*);
  static void cb_ftCheck(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *forcesScaledCheck;
private:
  void cb_forcesScaledCheck_i(Fl_Check_Button*, void*);
  static void cb_forcesScaledCheck(Fl_Check_Button*, void*);
public:
  Fl_Value_Input *scalfInput;
private:
  void cb_scalfInput_i(Fl_Value_Input*, void*);
  static void cb_scalfInput(Fl_Value_Input*, void*);
public:
  Fl_Check_Button *locFrameCheck;
private:
  void cb_locFrameCheck_i(Fl_Check_Button*, void*);
  static void cb_locFrameCheck(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *verletCheck;
private:
  void cb_verletCheck_i(Fl_Check_Button*, void*);
  static void cb_verletCheck(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *fnposCheck;
private:
  void cb_fnposCheck_i(Fl_Check_Button*, void*);
  static void cb_fnposCheck(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *fnnegCheck;
private:
  void cb_fnnegCheck_i(Fl_Check_Button*, void*);
  static void cb_fnnegCheck(Fl_Check_Button*, void*);
  
//modif du 10/03/09
/*public:
	Fl_Check_Button * fresNormalposCheck;
private:
	void cb_fresNormalposCheck_i(Fl_Check_Button*, void*);
	static void cb_fresNormalposCheck(Fl_Check_Button*, void*);*/
//-----------------------------------------------------------------
public:
  Fl_Button *DispOptCloseButton;
private:
  void cb_DispOptCloseButton_i(Fl_Button*, void*);
  static void cb_DispOptCloseButton(Fl_Button*, void*);
  void cb_Save1_i(Fl_Button*, void*);
  static void cb_Save1(Fl_Button*, void*);
public:
  Fl_Double_Window *MechanicalWindow;
  Fl_Choice *parChoice;
  Fl_Choice *g1Choice;
  Fl_Choice *g2Choice;
  Fl_Value_Input *parValueInput;
  Fl_Double_Window *NetworkWindow;
  Fl_Value_Input *dverletInput;
private:
  void cb_dverletInput_i(Fl_Value_Input*, void*);
  static void cb_dverletInput(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *dsuperInput;
private:
  void cb_dsuperInput_i(Fl_Value_Input*, void*);
  static void cb_dsuperInput(Fl_Value_Input*, void*);
public:
  Fl_Return_Button *NetworkCloseButton;
private:
  void cb_NetworkCloseButton_i(Fl_Return_Button*, void*);
  static void cb_NetworkCloseButton(Fl_Return_Button*, void*);
public:
  Fl_Check_Button *SuperButton;
private:
  void cb_SuperButton_i(Fl_Check_Button*, void*);
  static void cb_SuperButton(Fl_Check_Button*, void*);
public:
  void updateAlgoValues();
  void updateControlValues();
  void updateDispOptionsValues();
  
};
int main(int argc,char **argv);
#endif
