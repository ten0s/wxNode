
#include <sstream>
#include "wxNode_wxBitmap.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxGDIObject.h"
#include "wxNode_wxSize.h"
#include "wxNode_wxImage.h"
#include "wxNode_wxMask.h"
#include "wxNode_wxRect.h"
#include "wxNode_wxPalette.h"
#include "wxNode_wxIcon.h"
#include "wxNode_wxList.h"
#include "wxNode_wxBitmapHandler.h"
#include "wxNode_wxColour.h"
#include "wxNode_wxClassInfo.h"

/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxBitmap::s_ct;

/*
 * id: _36620
 */
wxNode_wxBitmap::wxNode_wxBitmap(wxBitmap& arg0)
  : wxBitmap(arg0)
{

}
/*
 * id: _36621
 */
wxNode_wxBitmap::wxNode_wxBitmap()
  : wxBitmap()
{

}
/*
 * id: _36622
 */
wxNode_wxBitmap::wxNode_wxBitmap(int width, int height, int depth)
  : wxBitmap(width, height, depth)
{

}
/*
 * id: _36622
 */
wxNode_wxBitmap::wxNode_wxBitmap(int width, int height)
  : wxBitmap(width, height)
{

}
/*
 * id: _36623
 */
wxNode_wxBitmap::wxNode_wxBitmap(wxSize& sz, int depth)
  : wxBitmap(sz, depth)
{

}
/*
 * id: _36623
 */
wxNode_wxBitmap::wxNode_wxBitmap(wxSize& sz)
  : wxBitmap(sz)
{

}
/*
 * id: _36624
 */
wxNode_wxBitmap::wxNode_wxBitmap(const char* bits, int width, int height, int depth)
  : wxBitmap(bits, width, height, depth)
{

}
/*
 * id: _36624
 */
wxNode_wxBitmap::wxNode_wxBitmap(const char* bits, int width, int height)
  : wxBitmap(bits, width, height)
{

}
/*
 * id: _36625
 */
wxNode_wxBitmap::wxNode_wxBitmap(const char** bits)
  : wxBitmap(bits)
{

}
/*
 * id: _36626
 */
wxNode_wxBitmap::wxNode_wxBitmap(const wxString& filename, wxBitmapType type)
  : wxBitmap(filename, type)
{

}
/*
 * id: _36626
 */
wxNode_wxBitmap::wxNode_wxBitmap(const wxString& filename)
  : wxBitmap(filename)
{

}
/*
 * id: _36627
 */
wxNode_wxBitmap::wxNode_wxBitmap(wxImage& image, int depth)
  : wxBitmap(image, depth)
{

}
/*
 * id: _36627
 */
wxNode_wxBitmap::wxNode_wxBitmap(wxImage& image)
  : wxBitmap(image)
{

}


/*static*/ void wxNode_wxBitmap::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("Bitmap"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("Bitmap"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxBitmap::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxGDIObject::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "create", _Create);
NODE_SET_PROTOTYPE_METHOD(target, "getHeight", _GetHeight);
NODE_SET_PROTOTYPE_METHOD(target, "getWidth", _GetWidth);
NODE_SET_PROTOTYPE_METHOD(target, "getDepth", _GetDepth);
NODE_SET_PROTOTYPE_METHOD(target, "getSize", _GetSize);
NODE_SET_PROTOTYPE_METHOD(target, "convertToImage", _ConvertToImage);
NODE_SET_PROTOTYPE_METHOD(target, "convertToDisabled", _ConvertToDisabled);
NODE_SET_PROTOTYPE_METHOD(target, "getMask", _GetMask);
NODE_SET_PROTOTYPE_METHOD(target, "setMask", _SetMask);
NODE_SET_PROTOTYPE_METHOD(target, "getSubBitmap", _GetSubBitmap);
NODE_SET_PROTOTYPE_METHOD(target, "saveFile", _SaveFile);
NODE_SET_PROTOTYPE_METHOD(target, "loadFile", _LoadFile);
NODE_SET_PROTOTYPE_METHOD(target, "getPalette", _GetPalette);
NODE_SET_PROTOTYPE_METHOD(target, "setPalette", _SetPalette);
NODE_SET_PROTOTYPE_METHOD(target, "copyFromIcon", _CopyFromIcon);
NODE_SET_PROTOTYPE_METHOD(target, "setHeight", _SetHeight);
NODE_SET_PROTOTYPE_METHOD(target, "setWidth", _SetWidth);
NODE_SET_PROTOTYPE_METHOD(target, "setDepth", _SetDepth);
NODE_SET_METHOD(target, "getHandlers", _GetHandlers);
NODE_SET_METHOD(target, "addHandler", _AddHandler);
NODE_SET_METHOD(target, "insertHandler", _InsertHandler);
NODE_SET_METHOD(target, "removeHandler", _RemoveHandler);
NODE_SET_METHOD(target, "findHandler", _FindHandler);
NODE_SET_METHOD(target, "cleanUpHandlers", _CleanUpHandlers);
NODE_SET_PROTOTYPE_METHOD(target, "quantizeColour", _QuantizeColour);
NODE_SET_PROTOTYPE_METHOD(target, "getClassInfo", _GetClassInfo);
  }

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::New(const wxNode_wxBitmap* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("Bitmap"));
  wxNode_wxBitmap::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();

  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxBitmap*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::New(const wxBitmap* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("Bitmap"));
  wxNode_wxBitmap::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::NewCopy(const wxBitmap& obj) {
  v8::HandleScope scope;
  wxNode_wxBitmap* returnVal = new wxNode_wxBitmap();
  memcpy(dynamic_cast<wxBitmap*>(returnVal), &obj, sizeof(wxBitmap));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxBitmap::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxBitmap::AssignableFrom(const char* className) {
  if(!strcmp("Bitmap", className)) { return true; }
  
  if(!strcmp("Bitmap", className)) { return true; }

  if(!strcmp("Icon", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  /*
   * id: _36620
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxBitmap* arg0 = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[0]->ToObject()); /* type: _14243  */

    wxNode_wxBitmap *self = new wxNode_wxBitmap(*arg0);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _36621
   */
  if(args.Length() == 0) {
    
    wxNode_wxBitmap *self = new wxNode_wxBitmap();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _36622
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int depth = (int)args[2]->ToInt32()->Value(); /* type: _142  */

    wxNode_wxBitmap *self = new wxNode_wxBitmap(width, height, depth);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _36622
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[1]->ToInt32()->Value(); /* type: _142  */

    wxNode_wxBitmap *self = new wxNode_wxBitmap(width, height);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _36623
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxSize* sz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _19093  */
int depth = (int)args[1]->ToInt32()->Value(); /* type: _142  */

    wxNode_wxBitmap *self = new wxNode_wxBitmap(*sz, depth);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _36623
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* sz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _19093  */

    wxNode_wxBitmap *self = new wxNode_wxBitmap(*sz);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _36624
   */
  if(args.Length() == 4 && args[0]->IsString() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    char* bits; /* type: _13235 * */
int width = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int depth = (int)args[3]->ToInt32()->Value(); /* type: _142  */

    wxNode_wxBitmap *self = new wxNode_wxBitmap(bits, width, height, depth);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _36624
   */
  if(args.Length() == 3 && args[0]->IsString() && args[1]->IsNumber() && args[2]->IsNumber()) {
    char* bits; /* type: _13235 * */
int width = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[2]->ToInt32()->Value(); /* type: _142  */

    wxNode_wxBitmap *self = new wxNode_wxBitmap(bits, width, height);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _36625
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue bits(args[0]->ToString()); /* type: _57236 ** */

    wxNode_wxBitmap *self = new wxNode_wxBitmap(*bits);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _36626
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsNumber()) {
    v8::String::AsciiValue filename(args[0]->ToString()); /* type: _13556  */
wxBitmapType type = static_cast<wxBitmapType>(args[1]->ToInt32()->Value()); /* type: _2379  */

    wxNode_wxBitmap *self = new wxNode_wxBitmap(*filename, type);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _36626
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue filename(args[0]->ToString()); /* type: _13556  */

    wxNode_wxBitmap *self = new wxNode_wxBitmap(*filename);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _36627
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxImage::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxImage* image = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxImage>(args[0]->ToObject()); /* type: _14245  */
int depth = (int)args[1]->ToInt32()->Value(); /* type: _142  */

    wxNode_wxBitmap *self = new wxNode_wxBitmap(*image, depth);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _36627
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxImage::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxImage* image = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxImage>(args[0]->ToObject()); /* type: _14245  */

    wxNode_wxBitmap *self = new wxNode_wxBitmap(*image);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxBitmap).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_Create(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  /*
   * id: _15506
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int depth = (int)args[2]->ToInt32()->Value(); /* type: _142  */

    bool returnVal = self->Create(width, height, depth);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _15506
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[1]->ToInt32()->Value(); /* type: _142  */

    bool returnVal = self->Create(width, height);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _15507
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxSize* sz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _19093  */
int depth = (int)args[1]->ToInt32()->Value(); /* type: _142  */

    bool returnVal = self->Create(*sz, depth);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _15507
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* sz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _19093  */

    bool returnVal = self->Create(*sz);

    return scope.Close(v8::Boolean::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::Create).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_GetHeight(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  /*
   * id: _15508
   */
  if(args.Length() == 0) {
    
    int returnVal = self->GetHeight();

    return scope.Close(v8::Number::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::GetHeight).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_GetWidth(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  /*
   * id: _15509
   */
  if(args.Length() == 0) {
    
    int returnVal = self->GetWidth();

    return scope.Close(v8::Number::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::GetWidth).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_GetDepth(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  /*
   * id: _15510
   */
  if(args.Length() == 0) {
    
    int returnVal = self->GetDepth();

    return scope.Close(v8::Number::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::GetDepth).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_GetSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  /*
   * id: _15511
   */
  if(args.Length() == 0) {
    
    wxSize returnVal = self->GetSize();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::GetSize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_ConvertToImage(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  /*
   * id: _15512
   */
  if(args.Length() == 0) {
    
    wxImage returnVal = self->ConvertToImage();

    return scope.Close(wxNode_wxImage::NewCopy(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::ConvertToImage).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_ConvertToDisabled(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  /*
   * id: _15513
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned char brightness = args[0]->ToInt32()->Value(); /* type: _1831  */

    wxBitmap returnVal = self->ConvertToDisabled(brightness);

    return scope.Close(wxNode_wxBitmap::NewCopy(returnVal));
  }
  /*
   * id: _15513
   */
  if(args.Length() == 0) {
    
    wxBitmap returnVal = self->ConvertToDisabled();

    return scope.Close(wxNode_wxBitmap::NewCopy(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::ConvertToDisabled).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_GetMask(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  /*
   * id: _15514
   */
  if(args.Length() == 0) {
    
    wxMask* returnVal = self->GetMask();

    return scope.Close(wxNode_wxMask::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::GetMask).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_SetMask(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  /*
   * id: _15515
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMask::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxMask* mask = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMask>(args[0]->ToObject()); /* type: _57288 * */

    self->SetMask(mask);

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::SetMask).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_GetSubBitmap(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  /*
   * id: _15516
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxRect::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxRect* rect = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRect>(args[0]->ToObject()); /* type: _22745  */

    wxBitmap returnVal = self->GetSubBitmap(*rect);

    return scope.Close(wxNode_wxBitmap::NewCopy(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::GetSubBitmap).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_SaveFile(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  /*
   * id: _15517
   */
  if(args.Length() == 3 && args[0]->IsString() && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPalette::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _13556  */
wxBitmapType type = static_cast<wxBitmapType>(args[1]->ToInt32()->Value()); /* type: _2379  */
wxNode_wxPalette* palette = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPalette>(args[2]->ToObject()); /* type: _57289 * */

    bool returnVal = self->SaveFile(*name, type, palette);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _15517
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsNumber()) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _13556  */
wxBitmapType type = static_cast<wxBitmapType>(args[1]->ToInt32()->Value()); /* type: _2379  */

    bool returnVal = self->SaveFile(*name, type);

    return scope.Close(v8::Boolean::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::SaveFile).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_LoadFile(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  /*
   * id: _15518
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsNumber()) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _13556  */
wxBitmapType type = static_cast<wxBitmapType>(args[1]->ToInt32()->Value()); /* type: _2379  */

    bool returnVal = self->LoadFile(*name, type);

    return scope.Close(v8::Boolean::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::LoadFile).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_GetPalette(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  /*
   * id: _15519
   */
  if(args.Length() == 0) {
    
    const wxPalette* returnVal = self->GetPalette();

    return scope.Close(wxNode_wxPalette::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::GetPalette).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_SetPalette(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  /*
   * id: _15520
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxPalette::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxPalette* palette = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPalette>(args[0]->ToObject()); /* type: _57291  */

    self->SetPalette(*palette);

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::SetPalette).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_CopyFromIcon(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  /*
   * id: _15521
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxIcon::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxIcon* icon = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxIcon>(args[0]->ToObject()); /* type: _14241  */

    bool returnVal = self->CopyFromIcon(*icon);

    return scope.Close(v8::Boolean::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::CopyFromIcon).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_SetHeight(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  /*
   * id: _15522
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int height = (int)args[0]->ToInt32()->Value(); /* type: _142  */

    self->SetHeight(height);

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::SetHeight).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_SetWidth(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  /*
   * id: _15523
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _142  */

    self->SetWidth(width);

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::SetWidth).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_SetDepth(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  /*
   * id: _15524
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int depth = (int)args[0]->ToInt32()->Value(); /* type: _142  */

    self->SetDepth(depth);

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::SetDepth).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_GetHandlers(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  /*
   * id: _15525
   */
  if(args.Length() == 0) {
    
    wxList returnVal = wxBitmap::GetHandlers();

    return scope.Close(wxNode_wxList::NewCopy(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::GetHandlers).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_AddHandler(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  /*
   * id: _15526
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxBitmapHandler::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxBitmapHandler* handler = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmapHandler>(args[0]->ToObject()); /* type: _57293 * */

    wxBitmap::AddHandler(handler);

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::AddHandler).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_InsertHandler(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  /*
   * id: _15527
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxBitmapHandler::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxBitmapHandler* handler = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmapHandler>(args[0]->ToObject()); /* type: _57293 * */

    wxBitmap::InsertHandler(handler);

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::InsertHandler).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_RemoveHandler(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  /*
   * id: _15528
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _13556  */

    bool returnVal = wxBitmap::RemoveHandler(*name);

    return scope.Close(v8::Boolean::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::RemoveHandler).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_FindHandler(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  /*
   * id: _15529
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _13556  */

    wxBitmapHandler* returnVal = wxBitmap::FindHandler(*name);

    return scope.Close(wxNode_wxBitmapHandler::New(returnVal));
  }
  /*
   * id: _15530
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsNumber()) {
    v8::String::AsciiValue extension(args[0]->ToString()); /* type: _13556  */
wxBitmapType bitmapType = static_cast<wxBitmapType>(args[1]->ToInt32()->Value()); /* type: _2379  */

    wxBitmapHandler* returnVal = wxBitmap::FindHandler(*extension, bitmapType);

    return scope.Close(wxNode_wxBitmapHandler::New(returnVal));
  }
  /*
   * id: _15531
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxBitmapType bitmapType = static_cast<wxBitmapType>(args[0]->ToInt32()->Value()); /* type: _2379  */

    wxBitmapHandler* returnVal = wxBitmap::FindHandler(bitmapType);

    return scope.Close(wxNode_wxBitmapHandler::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::FindHandler).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_CleanUpHandlers(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  /*
   * id: _15532
   */
  if(args.Length() == 0) {
    
    wxBitmap::CleanUpHandlers();

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::CleanUpHandlers).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_QuantizeColour(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  /*
   * id: _15533
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxColour::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxColour* colour = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxColour>(args[0]->ToObject()); /* type: _14247  */

    wxColour returnVal = self->QuantizeColour(*colour);

    return scope.Close(wxNode_wxColour::NewCopy(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::QuantizeColour).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_GetClassInfo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  /*
   * id: _15534
   */
  if(args.Length() == 0) {
    
    wxClassInfo* returnVal = self->GetClassInfo();

    return scope.Close(wxNode_wxClassInfo::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::GetClassInfo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

