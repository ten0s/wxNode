
#include <sstream>
#include "wxNode_wxClassInfo.h"
#include "wxNode_wxObject.h"

/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxClassInfo::s_ct;



/*static*/ void wxNode_wxClassInfo::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("ClassInfo"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("ClassInfo"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxClassInfo::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxEvtHandler::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "createObject", _CreateObject);
NODE_SET_PROTOTYPE_METHOD(target, "isDynamic", _IsDynamic);
NODE_SET_PROTOTYPE_METHOD(target, "getClassName", _GetClassName);
NODE_SET_PROTOTYPE_METHOD(target, "getBaseClassName1", _GetBaseClassName1);
NODE_SET_PROTOTYPE_METHOD(target, "getBaseClassName2", _GetBaseClassName2);
NODE_SET_PROTOTYPE_METHOD(target, "getBaseClass1", _GetBaseClass1);
NODE_SET_PROTOTYPE_METHOD(target, "getBaseClass2", _GetBaseClass2);
NODE_SET_PROTOTYPE_METHOD(target, "getSize", _GetSize);
NODE_SET_PROTOTYPE_METHOD(target, "getConstructor", _GetConstructor);
NODE_SET_METHOD(target, "getFirst", _GetFirst);
NODE_SET_PROTOTYPE_METHOD(target, "getNext", _GetNext);
NODE_SET_METHOD(target, "findClass", _FindClass);
NODE_SET_PROTOTYPE_METHOD(target, "isKindOf", _IsKindOf);
NODE_SET_METHOD(target, "begin_classinfo", _begin_classinfo);
NODE_SET_METHOD(target, "end_classinfo", _end_classinfo);
  }

/*static*/ v8::Handle<v8::Value> wxNode_wxClassInfo::New(const wxNode_wxClassInfo* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("ClassInfo"));
  wxNode_wxClassInfo::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();

  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxClassInfo*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxClassInfo::New(const wxClassInfo* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("ClassInfo"));
  wxNode_wxClassInfo::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxClassInfo::NewCopy(const wxClassInfo& obj) {
  return v8::Undefined();
}

/*static*/ bool wxNode_wxClassInfo::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxClassInfo::AssignableFrom(const char* className) {
  if(!strcmp("ClassInfo", className)) { return true; }
  

  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxClassInfo::_init(const v8::Arguments& args) {
  v8::HandleScope scope;


  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxClassInfo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxClassInfo::_CreateObject(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxClassInfo* self = unwrap<wxNode_wxClassInfo>(args.This());

  /*
   * id: _45926
   */
  if(args.Length() == 0) {
    
    const wxObject* returnVal = self->CreateObject();

    return scope.Close(wxNode_wxObject::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxClassInfo::CreateObject).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxClassInfo::_IsDynamic(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxClassInfo* self = unwrap<wxNode_wxClassInfo>(args.This());

  /*
   * id: _45927
   */
  if(args.Length() == 0) {
    
    bool returnVal = self->IsDynamic();

    return scope.Close(v8::Boolean::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxClassInfo::IsDynamic).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxClassInfo::_GetClassName(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxClassInfo* self = unwrap<wxNode_wxClassInfo>(args.This());

  /*
   * id: _45928
   */
  if(args.Length() == 0) {
    
    const wchar_t* returnVal = self->GetClassName();

    return scope.Close(v8::String::New((uint16_t*)returnVal, wcslen(returnVal)));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxClassInfo::GetClassName).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxClassInfo::_GetBaseClassName1(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxClassInfo* self = unwrap<wxNode_wxClassInfo>(args.This());

  /*
   * id: _45929
   */
  if(args.Length() == 0) {
    
    const wchar_t* returnVal = self->GetBaseClassName1();

    return scope.Close(v8::String::New((uint16_t*)returnVal, wcslen(returnVal)));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxClassInfo::GetBaseClassName1).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxClassInfo::_GetBaseClassName2(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxClassInfo* self = unwrap<wxNode_wxClassInfo>(args.This());

  /*
   * id: _45930
   */
  if(args.Length() == 0) {
    
    const wchar_t* returnVal = self->GetBaseClassName2();

    return scope.Close(v8::String::New((uint16_t*)returnVal, wcslen(returnVal)));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxClassInfo::GetBaseClassName2).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxClassInfo::_GetBaseClass1(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxClassInfo* self = unwrap<wxNode_wxClassInfo>(args.This());

  /*
   * id: _45931
   */
  if(args.Length() == 0) {
    
    const wxClassInfo* returnVal = self->GetBaseClass1();

    return scope.Close(wxNode_wxClassInfo::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxClassInfo::GetBaseClass1).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxClassInfo::_GetBaseClass2(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxClassInfo* self = unwrap<wxNode_wxClassInfo>(args.This());

  /*
   * id: _45932
   */
  if(args.Length() == 0) {
    
    const wxClassInfo* returnVal = self->GetBaseClass2();

    return scope.Close(wxNode_wxClassInfo::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxClassInfo::GetBaseClass2).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxClassInfo::_GetSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxClassInfo* self = unwrap<wxNode_wxClassInfo>(args.This());

  /*
   * id: _45933
   */
  if(args.Length() == 0) {
    
    int returnVal = self->GetSize();

    return scope.Close(v8::Number::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxClassInfo::GetSize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxClassInfo::_GetConstructor(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxClassInfo* self = unwrap<wxNode_wxClassInfo>(args.This());

  /*
   * id: _45934
   */
  if(args.Length() == 0) {
    
    self->GetConstructor();

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxClassInfo::GetConstructor).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxClassInfo::_GetFirst(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxClassInfo* self = unwrap<wxNode_wxClassInfo>(args.This());

  /*
   * id: _45935
   */
  if(args.Length() == 0) {
    
    const wxClassInfo* returnVal = wxClassInfo::GetFirst();

    return scope.Close(wxNode_wxClassInfo::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxClassInfo::GetFirst).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxClassInfo::_GetNext(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxClassInfo* self = unwrap<wxNode_wxClassInfo>(args.This());

  /*
   * id: _45936
   */
  if(args.Length() == 0) {
    
    const wxClassInfo* returnVal = self->GetNext();

    return scope.Close(wxNode_wxClassInfo::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxClassInfo::GetNext).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxClassInfo::_FindClass(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxClassInfo* self = unwrap<wxNode_wxClassInfo>(args.This());

  /*
   * id: _45937
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue className(args[0]->ToString()); /* type: _13556  */

    const wxClassInfo* returnVal = wxClassInfo::FindClass(*className);

    return scope.Close(wxNode_wxClassInfo::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxClassInfo::FindClass).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxClassInfo::_IsKindOf(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxClassInfo* self = unwrap<wxNode_wxClassInfo>(args.This());

  /*
   * id: _45938
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxClassInfo::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxClassInfo* info = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxClassInfo>(args[0]->ToObject()); /* type: _61193 * */

    bool returnVal = self->IsKindOf(info);

    return scope.Close(v8::Boolean::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxClassInfo::IsKindOf).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxClassInfo::_begin_classinfo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxClassInfo* self = unwrap<wxNode_wxClassInfo>(args.This());

  /*
   * id: _45939
   */
  if(args.Length() == 0) {
    
    wxClassInfo::begin_classinfo();

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxClassInfo::begin_classinfo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxClassInfo::_end_classinfo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxClassInfo* self = unwrap<wxNode_wxClassInfo>(args.This());

  /*
   * id: _45940
   */
  if(args.Length() == 0) {
    
    wxClassInfo::end_classinfo();

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxClassInfo::end_classinfo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

