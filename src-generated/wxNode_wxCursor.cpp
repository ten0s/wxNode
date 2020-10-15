
#include <sstream>
#include "wxNode_wxCursor.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxGDIObject.h"
#include "wxNode_wxImage.h"
#include "wxNode_wxColour.h"
#include "wxNode_wxClassInfo.h"
#include "wxNode_wxObject.h"

/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxCursor::s_ct;

/*
 * id: _43517
 */
wxNode_wxCursor::wxNode_wxCursor(wxCursor& arg0)
  : wxCursor(arg0)
{

}
/*
 * id: _43518
 */
wxNode_wxCursor::wxNode_wxCursor()
  : wxCursor()
{

}
/*
 * id: _43519
 */
wxNode_wxCursor::wxNode_wxCursor(wxStockCursor id)
  : wxCursor(id)
{

}
/*
 * id: _43520
 */
wxNode_wxCursor::wxNode_wxCursor(int id)
  : wxCursor(id)
{

}
/*
 * id: _43521
 */
wxNode_wxCursor::wxNode_wxCursor(wxImage& image)
  : wxCursor(image)
{

}
/*
 * id: _43522
 */
wxNode_wxCursor::wxNode_wxCursor(const wxString& name, wxBitmapType type, int hotSpotX, int hotSpotY)
  : wxCursor(name, type, hotSpotX, hotSpotY)
{

}
/*
 * id: _43522
 */
wxNode_wxCursor::wxNode_wxCursor(const wxString& name, wxBitmapType type, int hotSpotX)
  : wxCursor(name, type, hotSpotX)
{

}
/*
 * id: _43522
 */
wxNode_wxCursor::wxNode_wxCursor(const wxString& name, wxBitmapType type)
  : wxCursor(name, type)
{

}
/*
 * id: _43522
 */
wxNode_wxCursor::wxNode_wxCursor(const wxString& name)
  : wxCursor(name)
{

}
/*
 * id: _43523
 */
wxNode_wxCursor::wxNode_wxCursor(const char* bits, int width, int height, int hotSpotX, int hotSpotY, const char* maskBits, wxColour* fg, wxColour* bg)
  : wxCursor(bits, width, height, hotSpotX, hotSpotY, maskBits, fg, bg)
{

}
/*
 * id: _43523
 */
wxNode_wxCursor::wxNode_wxCursor(const char* bits, int width, int height, int hotSpotX, int hotSpotY, const char* maskBits, wxColour* fg)
  : wxCursor(bits, width, height, hotSpotX, hotSpotY, maskBits, fg)
{

}
/*
 * id: _43523
 */
wxNode_wxCursor::wxNode_wxCursor(const char* bits, int width, int height, int hotSpotX, int hotSpotY, const char* maskBits)
  : wxCursor(bits, width, height, hotSpotX, hotSpotY, maskBits)
{

}
/*
 * id: _43523
 */
wxNode_wxCursor::wxNode_wxCursor(const char* bits, int width, int height, int hotSpotX, int hotSpotY)
  : wxCursor(bits, width, height, hotSpotX, hotSpotY)
{

}
/*
 * id: _43523
 */
wxNode_wxCursor::wxNode_wxCursor(const char* bits, int width, int height, int hotSpotX)
  : wxCursor(bits, width, height, hotSpotX)
{

}
/*
 * id: _43523
 */
wxNode_wxCursor::wxNode_wxCursor(const char* bits, int width, int height)
  : wxCursor(bits, width, height)
{

}


/*static*/ void wxNode_wxCursor::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("Cursor"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("Cursor"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxCursor::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxGDIObject::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "getCursor", _GetCursor);
NODE_SET_PROTOTYPE_METHOD(target, "getClassInfo", _GetClassInfo);
NODE_SET_METHOD(target, "wxCreateObject", _wxCreateObject);
  }

/*static*/ v8::Handle<v8::Value> wxNode_wxCursor::New(const wxNode_wxCursor* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("Cursor"));
  wxNode_wxCursor::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();

  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxCursor*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxCursor::New(const wxCursor* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("Cursor"));
  wxNode_wxCursor::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxCursor::NewCopy(const wxCursor& obj) {
  v8::HandleScope scope;
  wxNode_wxCursor* returnVal = new wxNode_wxCursor();
  memcpy(dynamic_cast<wxCursor*>(returnVal), &obj, sizeof(wxCursor));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxCursor::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxCursor::AssignableFrom(const char* className) {
  if(!strcmp("Cursor", className)) { return true; }
  

  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxCursor::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  /*
   * id: _43517
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxCursor::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxCursor* arg0 = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxCursor>(args[0]->ToObject()); /* type: _40127  */

    wxNode_wxCursor *self = new wxNode_wxCursor(*arg0);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _43518
   */
  if(args.Length() == 0) {
    
    wxNode_wxCursor *self = new wxNode_wxCursor();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _43519
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxStockCursor id = static_cast<wxStockCursor>(args[0]->ToInt32()->Value()); /* type: _8057  */

    wxNode_wxCursor *self = new wxNode_wxCursor(id);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _43520
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int id = (int)args[0]->ToInt32()->Value(); /* type: _142  */

    wxNode_wxCursor *self = new wxNode_wxCursor(id);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _43521
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxImage::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxImage* image = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxImage>(args[0]->ToObject()); /* type: _14245  */

    wxNode_wxCursor *self = new wxNode_wxCursor(*image);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _43522
   */
  if(args.Length() == 4 && args[0]->IsString() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _13556  */
wxBitmapType type = static_cast<wxBitmapType>(args[1]->ToInt32()->Value()); /* type: _2379  */
int hotSpotX = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int hotSpotY = (int)args[3]->ToInt32()->Value(); /* type: _142  */

    wxNode_wxCursor *self = new wxNode_wxCursor(*name, type, hotSpotX, hotSpotY);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _43522
   */
  if(args.Length() == 3 && args[0]->IsString() && args[1]->IsNumber() && args[2]->IsNumber()) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _13556  */
wxBitmapType type = static_cast<wxBitmapType>(args[1]->ToInt32()->Value()); /* type: _2379  */
int hotSpotX = (int)args[2]->ToInt32()->Value(); /* type: _142  */

    wxNode_wxCursor *self = new wxNode_wxCursor(*name, type, hotSpotX);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _43522
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsNumber()) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _13556  */
wxBitmapType type = static_cast<wxBitmapType>(args[1]->ToInt32()->Value()); /* type: _2379  */

    wxNode_wxCursor *self = new wxNode_wxCursor(*name, type);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _43522
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _13556  */

    wxNode_wxCursor *self = new wxNode_wxCursor(*name);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _43523
   */
  if(args.Length() == 8 && args[0]->IsString() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber() && args[5]->IsString() && (args[6]->IsNull() || (args[6]->IsObject() && wxNode_wxColour::AssignableFrom(args[6]->ToObject()->GetConstructorName()))) && (args[7]->IsNull() || (args[7]->IsObject() && wxNode_wxColour::AssignableFrom(args[7]->ToObject()->GetConstructorName())))) {
    char* bits; /* type: _13235 * */
int width = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int hotSpotX = (int)args[3]->ToInt32()->Value(); /* type: _142  */
int hotSpotY = (int)args[4]->ToInt32()->Value(); /* type: _142  */
char* maskBits; /* type: _13235 * */
wxNode_wxColour* fg = args[6]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxColour>(args[6]->ToObject()); /* type: _35904 * */
wxNode_wxColour* bg = args[7]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxColour>(args[7]->ToObject()); /* type: _35904 * */

    wxNode_wxCursor *self = new wxNode_wxCursor(bits, width, height, hotSpotX, hotSpotY, maskBits, fg, bg);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _43523
   */
  if(args.Length() == 7 && args[0]->IsString() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber() && args[5]->IsString() && (args[6]->IsNull() || (args[6]->IsObject() && wxNode_wxColour::AssignableFrom(args[6]->ToObject()->GetConstructorName())))) {
    char* bits; /* type: _13235 * */
int width = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int hotSpotX = (int)args[3]->ToInt32()->Value(); /* type: _142  */
int hotSpotY = (int)args[4]->ToInt32()->Value(); /* type: _142  */
char* maskBits; /* type: _13235 * */
wxNode_wxColour* fg = args[6]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxColour>(args[6]->ToObject()); /* type: _35904 * */

    wxNode_wxCursor *self = new wxNode_wxCursor(bits, width, height, hotSpotX, hotSpotY, maskBits, fg);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _43523
   */
  if(args.Length() == 6 && args[0]->IsString() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber() && args[5]->IsString()) {
    char* bits; /* type: _13235 * */
int width = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int hotSpotX = (int)args[3]->ToInt32()->Value(); /* type: _142  */
int hotSpotY = (int)args[4]->ToInt32()->Value(); /* type: _142  */
char* maskBits; /* type: _13235 * */

    wxNode_wxCursor *self = new wxNode_wxCursor(bits, width, height, hotSpotX, hotSpotY, maskBits);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _43523
   */
  if(args.Length() == 5 && args[0]->IsString() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber()) {
    char* bits; /* type: _13235 * */
int width = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int hotSpotX = (int)args[3]->ToInt32()->Value(); /* type: _142  */
int hotSpotY = (int)args[4]->ToInt32()->Value(); /* type: _142  */

    wxNode_wxCursor *self = new wxNode_wxCursor(bits, width, height, hotSpotX, hotSpotY);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _43523
   */
  if(args.Length() == 4 && args[0]->IsString() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    char* bits; /* type: _13235 * */
int width = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int hotSpotX = (int)args[3]->ToInt32()->Value(); /* type: _142  */

    wxNode_wxCursor *self = new wxNode_wxCursor(bits, width, height, hotSpotX);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _43523
   */
  if(args.Length() == 3 && args[0]->IsString() && args[1]->IsNumber() && args[2]->IsNumber()) {
    char* bits; /* type: _13235 * */
int width = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[2]->ToInt32()->Value(); /* type: _142  */

    wxNode_wxCursor *self = new wxNode_wxCursor(bits, width, height);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxCursor).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxCursor::_GetCursor(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxCursor* self = unwrap<wxNode_wxCursor>(args.This());


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxCursor::GetCursor).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxCursor::_GetClassInfo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxCursor* self = unwrap<wxNode_wxCursor>(args.This());

  /*
   * id: _43530
   */
  if(args.Length() == 0) {
    
    wxClassInfo* returnVal = self->GetClassInfo();

    return scope.Close(wxNode_wxClassInfo::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxCursor::GetClassInfo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxCursor::_wxCreateObject(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxCursor* self = unwrap<wxNode_wxCursor>(args.This());

  /*
   * id: _43531
   */
  if(args.Length() == 0) {
    
    wxObject* returnVal = wxCursor::wxCreateObject();

    return scope.Close(wxNode_wxObject::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxCursor::wxCreateObject).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

