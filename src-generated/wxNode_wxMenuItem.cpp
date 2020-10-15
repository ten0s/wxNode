
#include <sstream>
#include "wxNode_wxMenuItem.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxObject.h"
#include "wxNode_wxMenu.h"
#include "wxNode_wxAcceleratorEntry.h"

/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxMenuItem::s_ct;

/*
 * id: _16372
 */
wxNode_wxMenuItem::wxNode_wxMenuItem(wxMenu* parentMenu, int id, const wxString& text, const wxString& help, wxItemKind kind, wxMenu* subMenu)
  : wxMenuItem(parentMenu, id, text, help, kind, subMenu)
{

}
/*
 * id: _16372
 */
wxNode_wxMenuItem::wxNode_wxMenuItem(wxMenu* parentMenu, int id, const wxString& text, const wxString& help, wxItemKind kind)
  : wxMenuItem(parentMenu, id, text, help, kind)
{

}
/*
 * id: _16372
 */
wxNode_wxMenuItem::wxNode_wxMenuItem(wxMenu* parentMenu, int id, const wxString& text, const wxString& help)
  : wxMenuItem(parentMenu, id, text, help)
{

}
/*
 * id: _16372
 */
wxNode_wxMenuItem::wxNode_wxMenuItem(wxMenu* parentMenu, int id, const wxString& text)
  : wxMenuItem(parentMenu, id, text)
{

}
/*
 * id: _16372
 */
wxNode_wxMenuItem::wxNode_wxMenuItem(wxMenu* parentMenu, int id)
  : wxMenuItem(parentMenu, id)
{

}
/*
 * id: _16372
 */
wxNode_wxMenuItem::wxNode_wxMenuItem(wxMenu* parentMenu)
  : wxMenuItem(parentMenu)
{

}
/*
 * id: _16372
 */
wxNode_wxMenuItem::wxNode_wxMenuItem()
  : wxMenuItem()
{

}


/*static*/ void wxNode_wxMenuItem::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("MenuItem"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("MenuItem"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxMenuItem::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxObject::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "getMenu", _GetMenu);
NODE_SET_PROTOTYPE_METHOD(target, "setMenu", _SetMenu);
NODE_SET_PROTOTYPE_METHOD(target, "setId", _SetId);
NODE_SET_PROTOTYPE_METHOD(target, "getId", _GetId);
NODE_SET_PROTOTYPE_METHOD(target, "setItemLabel", _SetItemLabel);
NODE_SET_PROTOTYPE_METHOD(target, "getItemLabel", _GetItemLabel);
NODE_SET_PROTOTYPE_METHOD(target, "getItemLabelText", _GetItemLabelText);
NODE_SET_METHOD(target, "getLabelText", _GetLabelText);
NODE_SET_PROTOTYPE_METHOD(target, "getKind", _GetKind);
NODE_SET_PROTOTYPE_METHOD(target, "setKind", _SetKind);
NODE_SET_PROTOTYPE_METHOD(target, "isSeparator", _IsSeparator);
NODE_SET_PROTOTYPE_METHOD(target, "setCheckable", _SetCheckable);
NODE_SET_PROTOTYPE_METHOD(target, "isCheckable", _IsCheckable);
NODE_SET_PROTOTYPE_METHOD(target, "isSubMenu", _IsSubMenu);
NODE_SET_PROTOTYPE_METHOD(target, "setSubMenu", _SetSubMenu);
NODE_SET_PROTOTYPE_METHOD(target, "getSubMenu", _GetSubMenu);
NODE_SET_PROTOTYPE_METHOD(target, "enable", _Enable);
NODE_SET_PROTOTYPE_METHOD(target, "isEnabled", _IsEnabled);
NODE_SET_PROTOTYPE_METHOD(target, "check", _Check);
NODE_SET_PROTOTYPE_METHOD(target, "isChecked", _IsChecked);
NODE_SET_PROTOTYPE_METHOD(target, "toggle", _Toggle);
NODE_SET_PROTOTYPE_METHOD(target, "setHelp", _SetHelp);
NODE_SET_PROTOTYPE_METHOD(target, "getHelp", _GetHelp);
NODE_SET_METHOD(target, "getAccelFromString", _GetAccelFromString);
NODE_SET_PROTOTYPE_METHOD(target, "getAccel", _GetAccel);
NODE_SET_PROTOTYPE_METHOD(target, "setAccel", _SetAccel);
  }

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::New(const wxNode_wxMenuItem* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("MenuItem"));
  wxNode_wxMenuItem::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();

  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxMenuItem*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::New(const wxMenuItem* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("MenuItem"));
  wxNode_wxMenuItem::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::NewCopy(const wxMenuItem& obj) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* returnVal = new wxNode_wxMenuItem();
  memcpy(dynamic_cast<wxMenuItem*>(returnVal), &obj, sizeof(wxMenuItem));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxMenuItem::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxMenuItem::AssignableFrom(const char* className) {
  if(!strcmp("MenuItem", className)) { return true; }
  
  if(!strcmp("MenuItem", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  /*
   * id: _16372
   */
  if(args.Length() == 6 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenu::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsString() && args[4]->IsNumber() && (args[5]->IsNull() || (args[5]->IsObject() && wxNode_wxMenu::AssignableFrom(args[5]->ToObject()->GetConstructorName())))) {
    wxNode_wxMenu* parentMenu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _51102 * */
int id = (int)args[1]->ToInt32()->Value(); /* type: _142  */
v8::String::AsciiValue text(args[2]->ToString()); /* type: _13556  */
v8::String::AsciiValue help(args[3]->ToString()); /* type: _13556  */
wxItemKind kind = static_cast<wxItemKind>(args[4]->ToInt32()->Value()); /* type: _4315  */
wxNode_wxMenu* subMenu = args[5]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[5]->ToObject()); /* type: _51102 * */

    wxNode_wxMenuItem *self = new wxNode_wxMenuItem(parentMenu, id, *text, *help, kind, subMenu);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _16372
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenu::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsString() && args[4]->IsNumber()) {
    wxNode_wxMenu* parentMenu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _51102 * */
int id = (int)args[1]->ToInt32()->Value(); /* type: _142  */
v8::String::AsciiValue text(args[2]->ToString()); /* type: _13556  */
v8::String::AsciiValue help(args[3]->ToString()); /* type: _13556  */
wxItemKind kind = static_cast<wxItemKind>(args[4]->ToInt32()->Value()); /* type: _4315  */

    wxNode_wxMenuItem *self = new wxNode_wxMenuItem(parentMenu, id, *text, *help, kind);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _16372
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenu::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsString()) {
    wxNode_wxMenu* parentMenu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _51102 * */
int id = (int)args[1]->ToInt32()->Value(); /* type: _142  */
v8::String::AsciiValue text(args[2]->ToString()); /* type: _13556  */
v8::String::AsciiValue help(args[3]->ToString()); /* type: _13556  */

    wxNode_wxMenuItem *self = new wxNode_wxMenuItem(parentMenu, id, *text, *help);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _16372
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenu::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString()) {
    wxNode_wxMenu* parentMenu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _51102 * */
int id = (int)args[1]->ToInt32()->Value(); /* type: _142  */
v8::String::AsciiValue text(args[2]->ToString()); /* type: _13556  */

    wxNode_wxMenuItem *self = new wxNode_wxMenuItem(parentMenu, id, *text);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _16372
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenu::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxMenu* parentMenu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _51102 * */
int id = (int)args[1]->ToInt32()->Value(); /* type: _142  */

    wxNode_wxMenuItem *self = new wxNode_wxMenuItem(parentMenu, id);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _16372
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenu::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxMenu* parentMenu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _51102 * */

    wxNode_wxMenuItem *self = new wxNode_wxMenuItem(parentMenu);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _16372
   */
  if(args.Length() == 0) {
    
    wxNode_wxMenuItem *self = new wxNode_wxMenuItem();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxMenuItem).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_GetMenu(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* self = unwrap<wxNode_wxMenuItem>(args.This());

  /*
   * id: _28270
   */
  if(args.Length() == 0) {
    
    wxMenu* returnVal = self->GetMenu();

    return scope.Close(wxNode_wxMenu::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenuItem::GetMenu).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_SetMenu(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* self = unwrap<wxNode_wxMenuItem>(args.This());

  /*
   * id: _28271
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenu::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxMenu* menu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _51102 * */

    self->SetMenu(menu);

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenuItem::SetMenu).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_SetId(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* self = unwrap<wxNode_wxMenuItem>(args.This());

  /*
   * id: _28272
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _142  */

    self->SetId(itemid);

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenuItem::SetId).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_GetId(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* self = unwrap<wxNode_wxMenuItem>(args.This());

  /*
   * id: _28273
   */
  if(args.Length() == 0) {
    
    int returnVal = self->GetId();

    return scope.Close(v8::Number::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenuItem::GetId).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_SetItemLabel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* self = unwrap<wxNode_wxMenuItem>(args.This());

  /*
   * id: _28274
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue str(args[0]->ToString()); /* type: _13556  */

    self->SetItemLabel(*str);

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenuItem::SetItemLabel).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_GetItemLabel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* self = unwrap<wxNode_wxMenuItem>(args.This());

  /*
   * id: _28275
   */
  if(args.Length() == 0) {
    
    wxString returnVal = self->GetItemLabel();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenuItem::GetItemLabel).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_GetItemLabelText(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* self = unwrap<wxNode_wxMenuItem>(args.This());

  /*
   * id: _28276
   */
  if(args.Length() == 0) {
    
    wxString returnVal = self->GetItemLabelText();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenuItem::GetItemLabelText).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_GetLabelText(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* self = unwrap<wxNode_wxMenuItem>(args.This());

  /*
   * id: _28277
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue label(args[0]->ToString()); /* type: _13556  */

    wxString returnVal = wxMenuItem::GetLabelText(*label);

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenuItem::GetLabelText).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_GetKind(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* self = unwrap<wxNode_wxMenuItem>(args.This());

  /*
   * id: _28278
   */
  if(args.Length() == 0) {
    
    int returnVal = (int)self->GetKind();

    return scope.Close(v8::Number::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenuItem::GetKind).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_SetKind(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* self = unwrap<wxNode_wxMenuItem>(args.This());

  /*
   * id: _28279
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxItemKind kind = static_cast<wxItemKind>(args[0]->ToInt32()->Value()); /* type: _4315  */

    self->SetKind(kind);

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenuItem::SetKind).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_IsSeparator(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* self = unwrap<wxNode_wxMenuItem>(args.This());

  /*
   * id: _28280
   */
  if(args.Length() == 0) {
    
    bool returnVal = self->IsSeparator();

    return scope.Close(v8::Boolean::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenuItem::IsSeparator).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_SetCheckable(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* self = unwrap<wxNode_wxMenuItem>(args.This());

  /*
   * id: _28281
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool checkable = args[0]->ToBoolean()->Value(); /* type: _13422  */

    self->SetCheckable(checkable);

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenuItem::SetCheckable).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_IsCheckable(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* self = unwrap<wxNode_wxMenuItem>(args.This());

  /*
   * id: _28282
   */
  if(args.Length() == 0) {
    
    bool returnVal = self->IsCheckable();

    return scope.Close(v8::Boolean::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenuItem::IsCheckable).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_IsSubMenu(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* self = unwrap<wxNode_wxMenuItem>(args.This());

  /*
   * id: _28283
   */
  if(args.Length() == 0) {
    
    bool returnVal = self->IsSubMenu();

    return scope.Close(v8::Boolean::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenuItem::IsSubMenu).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_SetSubMenu(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* self = unwrap<wxNode_wxMenuItem>(args.This());

  /*
   * id: _28284
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenu::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxMenu* menu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _51102 * */

    self->SetSubMenu(menu);

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenuItem::SetSubMenu).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_GetSubMenu(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* self = unwrap<wxNode_wxMenuItem>(args.This());

  /*
   * id: _28285
   */
  if(args.Length() == 0) {
    
    wxMenu* returnVal = self->GetSubMenu();

    return scope.Close(wxNode_wxMenu::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenuItem::GetSubMenu).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_Enable(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* self = unwrap<wxNode_wxMenuItem>(args.This());

  /*
   * id: _28286
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool enable = args[0]->ToBoolean()->Value(); /* type: _13422  */

    self->Enable(enable);

    return v8::Undefined();
  }
  /*
   * id: _28286
   */
  if(args.Length() == 0) {
    
    self->Enable();

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenuItem::Enable).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_IsEnabled(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* self = unwrap<wxNode_wxMenuItem>(args.This());

  /*
   * id: _28287
   */
  if(args.Length() == 0) {
    
    bool returnVal = self->IsEnabled();

    return scope.Close(v8::Boolean::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenuItem::IsEnabled).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_Check(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* self = unwrap<wxNode_wxMenuItem>(args.This());

  /*
   * id: _28288
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool check = args[0]->ToBoolean()->Value(); /* type: _13422  */

    self->Check(check);

    return v8::Undefined();
  }
  /*
   * id: _28288
   */
  if(args.Length() == 0) {
    
    self->Check();

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenuItem::Check).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_IsChecked(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* self = unwrap<wxNode_wxMenuItem>(args.This());

  /*
   * id: _28289
   */
  if(args.Length() == 0) {
    
    bool returnVal = self->IsChecked();

    return scope.Close(v8::Boolean::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenuItem::IsChecked).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_Toggle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* self = unwrap<wxNode_wxMenuItem>(args.This());

  /*
   * id: _28290
   */
  if(args.Length() == 0) {
    
    self->Toggle();

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenuItem::Toggle).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_SetHelp(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* self = unwrap<wxNode_wxMenuItem>(args.This());

  /*
   * id: _28291
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue str(args[0]->ToString()); /* type: _13556  */

    self->SetHelp(*str);

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenuItem::SetHelp).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_GetHelp(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* self = unwrap<wxNode_wxMenuItem>(args.This());

  /*
   * id: _28292
   */
  if(args.Length() == 0) {
    
    wxString returnVal = self->GetHelp();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenuItem::GetHelp).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_GetAccelFromString(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* self = unwrap<wxNode_wxMenuItem>(args.This());

  /*
   * id: _28293
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue label(args[0]->ToString()); /* type: _13556  */

    wxAcceleratorEntry* returnVal = wxMenuItem::GetAccelFromString(*label);

    return scope.Close(wxNode_wxAcceleratorEntry::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenuItem::GetAccelFromString).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_GetAccel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* self = unwrap<wxNode_wxMenuItem>(args.This());

  /*
   * id: _28294
   */
  if(args.Length() == 0) {
    
    wxAcceleratorEntry* returnVal = self->GetAccel();

    return scope.Close(wxNode_wxAcceleratorEntry::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenuItem::GetAccel).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxMenuItem::_SetAccel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuItem* self = unwrap<wxNode_wxMenuItem>(args.This());

  /*
   * id: _28295
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxAcceleratorEntry::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxAcceleratorEntry* accel = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxAcceleratorEntry>(args[0]->ToObject()); /* type: _60848 * */

    self->SetAccel(accel);

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenuItem::SetAccel).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

