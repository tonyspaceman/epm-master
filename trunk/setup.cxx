// generated by Fast Light User Interface Designer (fluid) version 1.0011

#include "setup.h"

static void cb_ESP(Fl_Window*, void*) {
  if (CancelButton->active())
  exit(0);
}

Fl_Button *NextButton=(Fl_Button *)0;

#include <FL/Fl_Bitmap.H>
static unsigned char bits_next[] =
"\0\0\0\0\0\0\0\0\0\0\0\0\f\2\0\0\4\0\24\2\0\b\f\0\24\2\0\b\34\0$\342\31\37<\
\0$2\23\t|\0""D\22\242\b\374\0""D\362""C\b\374\0\204\22@\b|\0\204\22\240\b<\0\
\4""3\23\t\34\0\4\343\31""3\f\0\0\0\0\0\4\0\0\0\0\0\0\0\0\0\0\0\0\0";
static Fl_Bitmap bitmap_next(bits_next, 42, 16);

Fl_Button *CancelButton=(Fl_Button *)0;

static void cb_CancelButton(Fl_Button*, void*) {
  exit(0);
}

Fl_Wizard *Wizard=(Fl_Wizard *)0;

Fl_Group *WelcomePane=(Fl_Group *)0;

Fl_Box *WelcomeImage=(Fl_Box *)0;

Fl_Group *TypePane=(Fl_Group *)0;

CheckButton *TypeButton[8]={(CheckButton *)0};

Fl_Group *SoftwarePane=(Fl_Group *)0;

Fl_Check_Browser *SoftwareList=(Fl_Check_Browser *)0;

Fl_Button *InstallAllButton=(Fl_Button *)0;

static void cb_InstallAllButton(Fl_Button*, void*) {
  SoftwareList->check_all();
list_cb(0,0);
}

Fl_Button *InstallNoneButton=(Fl_Button *)0;

static void cb_InstallNoneButton(Fl_Button*, void*) {
  SoftwareList->check_none();
list_cb(0,0);
}

Fl_Box *SoftwareSize=(Fl_Box *)0;

Fl_Group *ConfirmPane=(Fl_Group *)0;

Fl_Browser *ConfirmList=(Fl_Browser *)0;

Fl_Group *LicensePane=(Fl_Group *)0;

Fl_Box *LicenseLabel=(Fl_Box *)0;

Fl_Browser *LicenseBrowser=(Fl_Browser *)0;

CheckButton *LicenseAccept=(CheckButton *)0;

static void cb_LicenseAccept(CheckButton*, void*) {
  NextButton->activate();
}

CheckButton *LicenseDecline=(CheckButton *)0;

static void cb_LicenseDecline(CheckButton*, void*) {
  NextButton->activate();
}

Fl_Group *InstallPane=(Fl_Group *)0;

Fl_Slider *InstallPercent=(Fl_Slider *)0;

Fl_Browser *InstallLog=(Fl_Browser *)0;

Fl_Button *PrevButton=(Fl_Button *)0;

static void cb_PrevButton(Fl_Button*, void*) {
  Wizard->prev();
}

static unsigned char bits_prev[] =
"\0\0\0\0\0\0\0\0\0\0\0\0@\370\1\0\b\0`\b\3\0\b\0p\b\2\0\b\0x\b\342\341\211\0|\
\b13K\0~\370\0\22(\0~\b\341\23\30\0|\b2\22(\0x\b\22\22J\0p\b33\213\0`\370\341\
\346\t\1@\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
static Fl_Bitmap bitmap_prev(bits_prev, 42, 16);

Fl_Window* make_window() {
  Fl_Window* w;
  { Fl_Window* o = new Fl_Window(580, 345, "ESP Software Wizard");
    w = o;
    o->callback((Fl_Callback*)cb_ESP);
    { Fl_Button* o = NextButton = new Fl_Button(445, 310, 55, 25);
      bitmap_next.label(o);
      o->callback((Fl_Callback*)next_cb);
    }
    { Fl_Button* o = CancelButton = new Fl_Button(510, 310, 60, 25, "Cancel");
      o->callback((Fl_Callback*)cb_CancelButton);
    }
    { Fl_Wizard* o = Wizard = new Fl_Wizard(0, 0, 580, 300);
      { Fl_Group* o = WelcomePane = new Fl_Group(10, 10, 560, 280);
        o->box(FL_FLAT_BOX);
        o->hide();
        { Fl_Box* o = new Fl_Box(10, 10, 560, 25, "Welcome to Setup");
          o->labelfont(1);
          o->labelsize(18);
          o->labelcolor(4);
          o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
        }
        { Fl_Box* o = new Fl_Box(40, 235, 500, 55, "This wizard will install the software you select on your system.\n\nTo select\
 software for installation, please click on the \"Next\" button below.");
          o->align(133|FL_ALIGN_INSIDE);
        }
        { Fl_Box* o = WelcomeImage = new Fl_Box(40, 50, 500, 180);
          o->align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE);
        }
        o->end();
      }
      { Fl_Group* o = TypePane = new Fl_Group(10, 10, 555, 280);
        o->box(FL_FLAT_BOX);
        o->hide();
        { Fl_Box* o = new Fl_Box(10, 10, 555, 25, "Installation Type");
          o->labelfont(1);
          o->labelsize(18);
          o->labelcolor(4);
          o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
        }
        { Fl_Box* o = new Fl_Box(40, 55, 475, 35, "Please select the type of software installation and click on the \"Next\" but\
ton below.");
          o->align(133|FL_ALIGN_INSIDE);
        }
        { Fl_Group* o = new Fl_Group(65, 100, 305, 185);
          { CheckButton* o = TypeButton[0] = new CheckButton(70, 100, 300, 20);
            o->type(102);
            o->down_box(FL_ROUND_DOWN_BOX);
            o->callback((Fl_Callback*)type_cb);
          }
          { CheckButton* o = TypeButton[1] = new CheckButton(70, 120, 300, 20);
            o->type(102);
            o->down_box(FL_ROUND_DOWN_BOX);
            o->callback((Fl_Callback*)type_cb);
          }
          { CheckButton* o = TypeButton[2] = new CheckButton(70, 140, 300, 20);
            o->type(102);
            o->down_box(FL_ROUND_DOWN_BOX);
            o->callback((Fl_Callback*)type_cb);
          }
          { CheckButton* o = TypeButton[3] = new CheckButton(70, 160, 300, 20);
            o->type(102);
            o->down_box(FL_ROUND_DOWN_BOX);
            o->callback((Fl_Callback*)type_cb);
          }
          { CheckButton* o = TypeButton[4] = new CheckButton(70, 180, 300, 20);
            o->type(102);
            o->down_box(FL_ROUND_DOWN_BOX);
            o->callback((Fl_Callback*)type_cb);
          }
          { CheckButton* o = TypeButton[5] = new CheckButton(70, 200, 300, 20);
            o->type(102);
            o->down_box(FL_ROUND_DOWN_BOX);
            o->callback((Fl_Callback*)type_cb);
          }
          { CheckButton* o = TypeButton[6] = new CheckButton(70, 220, 300, 20);
            o->type(102);
            o->down_box(FL_ROUND_DOWN_BOX);
            o->callback((Fl_Callback*)type_cb);
          }
          { CheckButton* o = TypeButton[7] = new CheckButton(70, 240, 300, 20);
            o->type(102);
            o->down_box(FL_ROUND_DOWN_BOX);
            o->callback((Fl_Callback*)type_cb);
          }
          o->end();
        }
        o->end();
      }
      { Fl_Group* o = SoftwarePane = new Fl_Group(10, 10, 560, 285);
        o->box(FL_FLAT_BOX);
        o->hide();
        { Fl_Box* o = new Fl_Box(10, 10, 560, 25, "Software Selection");
          o->labelfont(1);
          o->labelsize(18);
          o->labelcolor(4);
          o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
        }
        { Fl_Box* o = new Fl_Box(40, 55, 370, 35, "Please select the software you would like to install and click on the \"Next\
\" button below.");
          o->align(133|FL_ALIGN_INSIDE);
        }
        { Fl_Check_Browser* o = SoftwareList = new Fl_Check_Browser(40, 120, 500, 135, " Available Software:");
          o->type(3);
          o->box(FL_DOWN_BOX);
          o->selection_color(7);
          o->callback((Fl_Callback*)list_cb);
          o->align(FL_ALIGN_TOP_LEFT);
          o->when(3);
        }
        { Fl_Button* o = InstallAllButton = new Fl_Button(365, 265, 75, 25, "Install All");
          o->callback((Fl_Callback*)cb_InstallAllButton);
        }
        { Fl_Button* o = InstallNoneButton = new Fl_Button(450, 265, 90, 25, "Install None");
          o->callback((Fl_Callback*)cb_InstallNoneButton);
        }
        { Fl_Box* o = SoftwareSize = new Fl_Box(40, 260, 320, 35, "0k marked for installation.");
          o->box(FL_FLAT_BOX);
          o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
        }
        o->end();
      }
      { Fl_Group* o = ConfirmPane = new Fl_Group(10, 10, 560, 280);
        o->box(FL_FLAT_BOX);
        { Fl_Box* o = new Fl_Box(10, 10, 560, 25, "Confirm Installation");
          o->labelfont(1);
          o->labelsize(18);
          o->labelcolor(4);
          o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
        }
        { Fl_Box* o = new Fl_Box(40, 55, 500, 50, "You have selected the software below for installation. Click on the \"Next\" \
button to start the software installation. Click on the \"Back\" button to cha\
nge your selections.");
          o->align(133|FL_ALIGN_INSIDE);
        }
        ConfirmList = new Fl_Browser(40, 110, 500, 180);
        o->end();
      }
      { Fl_Group* o = LicensePane = new Fl_Group(10, 10, 560, 280);
        o->box(FL_FLAT_BOX);
        o->hide();
        { Fl_Box* o = LicenseLabel = new Fl_Box(10, 10, 560, 40, "License Agreement for Some Product");
          o->labelfont(1);
          o->labelsize(18);
          o->labelcolor(4);
          o->align(133|FL_ALIGN_INSIDE);
        }
        { Fl_Browser* o = LicenseBrowser = new Fl_Browser(10, 55, 560, 185);
          o->textfont(4);
          o->textsize(12);
          Fl_Group::current()->resizable(o);
        }
        { Fl_Group* o = new Fl_Group(10, 245, 560, 45);
          o->box(FL_FLAT_BOX);
          { CheckButton* o = LicenseAccept = new CheckButton(10, 245, 560, 20, "Yes, I accept the terms and conditions of the software license agreement.");
            o->type(102);
            o->down_box(FL_ROUND_DOWN_BOX);
            o->callback((Fl_Callback*)cb_LicenseAccept);
          }
          { CheckButton* o = LicenseDecline = new CheckButton(10, 270, 560, 20, "No, I do not accept the terms and conditions of the software license agreemen\
t.");
            o->type(102);
            o->down_box(FL_ROUND_DOWN_BOX);
            o->callback((Fl_Callback*)cb_LicenseDecline);
          }
          o->end();
        }
        o->end();
      }
      { Fl_Group* o = InstallPane = new Fl_Group(10, 10, 555, 280);
        o->box(FL_FLAT_BOX);
        o->hide();
        { Fl_Box* o = new Fl_Box(10, 10, 430, 25, "Installing Software...");
          o->labelfont(1);
          o->labelsize(18);
          o->labelcolor(4);
          o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
        }
        { Fl_Slider* o = InstallPercent = new Fl_Slider(40, 75, 525, 15, "Progress Label...");
          o->type(3);
          o->selection_color(63);
          o->labelfont(2);
          o->maximum(100);
          o->value(50);
          o->align(FL_ALIGN_TOP_LEFT);
        }
        InstallLog = new Fl_Browser(40, 100, 525, 190);
        o->end();
      }
      o->end();
    }
    { Fl_Button* o = PrevButton = new Fl_Button(380, 310, 55, 25);
      bitmap_prev.label(o);
      o->callback((Fl_Callback*)cb_PrevButton);
    }
    o->end();
  }
  return w;
}
