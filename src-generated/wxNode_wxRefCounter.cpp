
#include <sstream>
#include "wxNode_wxRefCounter.h"

/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxRefCounter::s_ct;



/*static*/ void wxNode_wxRefCounter::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("RefCounter"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("RefCounter"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxRefCounter::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxEvtHandler::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "getRefCount", _GetRefCount);
NODE_SET_PROTOTYPE_METHOD(target, "incRef", _IncRef);
NODE_SET_PROTOTYPE_METHOD(target, "decRef", _DecRef);
  }

/*static*/ v8::Handle<v8::Value> wxNode_wxRefCounter::New(const wxNode_wxRefCounter* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("RefCounter"));
  wxNode_wxRefCounter::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();

  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxRefCounter*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxRefCounter::New(const wxRefCounter* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("RefCounter"));
  wxNode_wxRefCounter::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxRefCounter::NewCopy(const wxRefCounter& obj) {
  return v8::Undefined();
}

/*static*/ bool wxNode_wxRefCounter::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxRefCounter::AssignableFrom(const char* className) {
  if(!strcmp("RefCounter", className)) { return true; }
  
  if(!strcmp("DataViewModel", className)) { return true; }

  if(!strcmp("DataViewTreeStore", className)) { return true; }
  if(!strcmp("DataViewListModel", className)) { return true; }

  if(!strcmp("DataViewIndexListModel", className)) { return true; }

  if(!strcmp("DataViewListStore", className)) { return true; }
  if(!strcmp("DataViewVirtualListModel", className)) { return true; }
  if(!strcmp("AnimationDecoder", className)) { return true; }

  if(!strcmp("ANIDecoder", className)) { return true; }
  if(!strcmp("GIFDecoder", className)) { return true; }
  if(!strcmp("GridCellAttr", className)) { return true; }
  if(!strcmp("GridCellWorker", className)) { return true; }

  if(!strcmp("GridCellEditor", className)) { return true; }

  if(!strcmp("GridCellChoiceEditor", className)) { return true; }

  if(!strcmp("GridCellEnumEditor", className)) { return true; }
  if(!strcmp("GridCellBoolEditor", className)) { return true; }
  if(!strcmp("GridCellTextEditor", className)) { return true; }

  if(!strcmp("GridCellNumberEditor", className)) { return true; }
  if(!strcmp("GridCellFloatEditor", className)) { return true; }
  if(!strcmp("GridCellAutoWrapStringEditor", className)) { return true; }
  if(!strcmp("GridCellRenderer", className)) { return true; }

  if(!strcmp("GridCellStringRenderer", className)) { return true; }

  if(!strcmp("GridCellEnumRenderer", className)) { return true; }
  if(!strcmp("GridCellNumberRenderer", className)) { return true; }
  if(!strcmp("GridCellDateTimeRenderer", className)) { return true; }
  if(!strcmp("GridCellFloatRenderer", className)) { return true; }
  if(!strcmp("GridCellAutoWrapStringRenderer", className)) { return true; }
  if(!strcmp("GridCellBoolRenderer", className)) { return true; }
  if(!strcmp("VariantData", className)) { return true; }
  if(!strcmp("GDIRefData", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxRefCounter::_init(const v8::Arguments& args) {
  v8::HandleScope scope;


  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxRefCounter).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxRefCounter::_GetRefCount(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxRefCounter* self = unwrap<wxNode_wxRefCounter>(args.This());

  /*
   * id: _27458
   */
  if(args.Length() == 0) {
    
    int returnVal = self->GetRefCount();

    return scope.Close(v8::Number::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxRefCounter::GetRefCount).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxRefCounter::_IncRef(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxRefCounter* self = unwrap<wxNode_wxRefCounter>(args.This());

  /*
   * id: _27459
   */
  if(args.Length() == 0) {
    
    self->IncRef();

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxRefCounter::IncRef).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxRefCounter::_DecRef(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxRefCounter* self = unwrap<wxNode_wxRefCounter>(args.This());

  /*
   * id: _27460
   */
  if(args.Length() == 0) {
    
    self->DecRef();

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxRefCounter::DecRef).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

