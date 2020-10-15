
#ifndef _wxNode_wxControl_h_
#define _wxNode_wxControl_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxWindow;
class wxNode_wxPoint;
class wxNode_wxSize;
class wxNode_wxValidator;
class wxNode_wxCommandEvent;
class wxNode_wxFont;
class wxNode_wxUpdateUIEvent;
class wxNode_wxDC;

class wxNode_wxControl : public wxControl, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxControl* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxControl* obj);
  static v8::Handle<v8::Value> NewCopy(const wxControl& obj);

  wxNode_wxControl();
  wxNode_wxControl(wxWindow* parent, int id, wxPoint& pos, wxSize& size, long int style, wxValidator& validator, const wxString& name);
  wxNode_wxControl(wxWindow* parent, int id, wxPoint& pos, wxSize& size, long int style, wxValidator& validator);
  wxNode_wxControl(wxWindow* parent, int id, wxPoint& pos, wxSize& size, long int style);
  wxNode_wxControl(wxWindow* parent, int id, wxPoint& pos, wxSize& size);
  wxNode_wxControl(wxWindow* parent, int id, wxPoint& pos);
  wxNode_wxControl(wxWindow* parent, int id);

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _Create(const v8::Arguments& args);
static v8::Handle<v8::Value> _GetAlignment(const v8::Arguments& args);
static v8::Handle<v8::Value> _SetLabel(const v8::Arguments& args);
static v8::Handle<v8::Value> _GetLabel(const v8::Arguments& args);
static v8::Handle<v8::Value> _SetLabelText(const v8::Arguments& args);
static v8::Handle<v8::Value> _GetLabelText(const v8::Arguments& args);
static v8::Handle<v8::Value> _SetLabelMarkup(const v8::Arguments& args);
static v8::Handle<v8::Value> _ShouldInheritColours(const v8::Arguments& args);
static v8::Handle<v8::Value> _Command(const v8::Arguments& args);
static v8::Handle<v8::Value> _SetFont(const v8::Arguments& args);
static v8::Handle<v8::Value> _DoUpdateWindowUI(const v8::Arguments& args);
static v8::Handle<v8::Value> _RemoveMnemonics(const v8::Arguments& args);
static v8::Handle<v8::Value> _EscapeMnemonics(const v8::Arguments& args);
static v8::Handle<v8::Value> _Ellipsize(const v8::Arguments& args);
static v8::Handle<v8::Value> _FindAccelIndex(const v8::Arguments& args);
static v8::Handle<v8::Value> _GetCompositeControlsDefaultAttributes(const v8::Arguments& args);
  
  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
