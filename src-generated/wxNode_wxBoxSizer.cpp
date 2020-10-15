
#include <sstream>
#include "wxNode_wxBoxSizer.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxSizer.h"
#include "wxNode_wxSizerItem.h"
#include "wxNode_wxSize.h"
#include "wxNode_wxClassInfo.h"

/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxBoxSizer::s_ct;

/*
 * id: _26654
 */
wxNode_wxBoxSizer::wxNode_wxBoxSizer(wxBoxSizer& arg0)
  : wxBoxSizer(arg0)
{

}
/*
 * id: _26655
 */
wxNode_wxBoxSizer::wxNode_wxBoxSizer(int orient)
  : wxBoxSizer(orient)
{

}


/*static*/ void wxNode_wxBoxSizer::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("BoxSizer"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("BoxSizer"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxBoxSizer::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxSizer::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "addSpacer", _AddSpacer);
NODE_SET_PROTOTYPE_METHOD(target, "getOrientation", _GetOrientation);
NODE_SET_PROTOTYPE_METHOD(target, "isVertical", _IsVertical);
NODE_SET_PROTOTYPE_METHOD(target, "setOrientation", _SetOrientation);
NODE_SET_PROTOTYPE_METHOD(target, "calcMin", _CalcMin);
NODE_SET_PROTOTYPE_METHOD(target, "recalcSizes", _RecalcSizes);
NODE_SET_PROTOTYPE_METHOD(target, "getClassInfo", _GetClassInfo);
  }

/*static*/ v8::Handle<v8::Value> wxNode_wxBoxSizer::New(const wxNode_wxBoxSizer* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("BoxSizer"));
  wxNode_wxBoxSizer::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();

  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxBoxSizer*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBoxSizer::New(const wxBoxSizer* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("BoxSizer"));
  wxNode_wxBoxSizer::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBoxSizer::NewCopy(const wxBoxSizer& obj) {
  v8::HandleScope scope;
  wxNode_wxBoxSizer* returnVal = new wxNode_wxBoxSizer(*((wxBoxSizer*)&obj));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxBoxSizer::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxBoxSizer::AssignableFrom(const char* className) {
  if(!strcmp("BoxSizer", className)) { return true; }
  
  if(!strcmp("StaticBoxSizer", className)) { return true; }
  if(!strcmp("WrapSizer", className)) { return true; }
  if(!strcmp("StdDialogButtonSizer", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBoxSizer::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  /*
   * id: _26654
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxBoxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxBoxSizer* arg0 = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBoxSizer>(args[0]->ToObject()); /* type: _60552  */

    wxNode_wxBoxSizer *self = new wxNode_wxBoxSizer(*arg0);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _26655
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int orient = (int)args[0]->ToInt32()->Value(); /* type: _142  */

    wxNode_wxBoxSizer *self = new wxNode_wxBoxSizer(orient);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxBoxSizer).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBoxSizer::_AddSpacer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBoxSizer* self = unwrap<wxNode_wxBoxSizer>(args.This());

  /*
   * id: _26656
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int size = (int)args[0]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->AddSpacer(size);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBoxSizer::AddSpacer).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBoxSizer::_GetOrientation(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBoxSizer* self = unwrap<wxNode_wxBoxSizer>(args.This());

  /*
   * id: _26657
   */
  if(args.Length() == 0) {
    
    int returnVal = self->GetOrientation();

    return scope.Close(v8::Number::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBoxSizer::GetOrientation).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBoxSizer::_IsVertical(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBoxSizer* self = unwrap<wxNode_wxBoxSizer>(args.This());

  /*
   * id: _26658
   */
  if(args.Length() == 0) {
    
    bool returnVal = self->IsVertical();

    return scope.Close(v8::Boolean::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBoxSizer::IsVertical).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBoxSizer::_SetOrientation(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBoxSizer* self = unwrap<wxNode_wxBoxSizer>(args.This());

  /*
   * id: _26659
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int orient = (int)args[0]->ToInt32()->Value(); /* type: _142  */

    self->SetOrientation(orient);

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBoxSizer::SetOrientation).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBoxSizer::_CalcMin(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBoxSizer* self = unwrap<wxNode_wxBoxSizer>(args.This());

  /*
   * id: _26660
   */
  if(args.Length() == 0) {
    
    wxSize returnVal = self->CalcMin();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBoxSizer::CalcMin).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBoxSizer::_RecalcSizes(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBoxSizer* self = unwrap<wxNode_wxBoxSizer>(args.This());

  /*
   * id: _26661
   */
  if(args.Length() == 0) {
    
    self->RecalcSizes();

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBoxSizer::RecalcSizes).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxBoxSizer::_GetClassInfo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBoxSizer* self = unwrap<wxNode_wxBoxSizer>(args.This());

  /*
   * id: _26669
   */
  if(args.Length() == 0) {
    
    wxClassInfo* returnVal = self->GetClassInfo();

    return scope.Close(wxNode_wxClassInfo::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBoxSizer::GetClassInfo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

