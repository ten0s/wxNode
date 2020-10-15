
#include <sstream>
#include "wxNode_wxRealPoint.h"
#include "wxNode_wxPoint.h"

/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxRealPoint::s_ct;

/*
 * id: _38839
 */
wxNode_wxRealPoint::wxNode_wxRealPoint(wxRealPoint& arg0)
  : wxRealPoint(arg0)
{

}
/*
 * id: _38840
 */
wxNode_wxRealPoint::wxNode_wxRealPoint()
  : wxRealPoint()
{

}
/*
 * id: _38842
 */
wxNode_wxRealPoint::wxNode_wxRealPoint(wxPoint& pt)
  : wxRealPoint(pt)
{

}


/*static*/ void wxNode_wxRealPoint::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("RealPoint"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("RealPoint"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxRealPoint::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxEvtHandler::AddMethods(target);
    target->PrototypeTemplate()->SetAccessor(v8::String::New("x"), _xGet, _xSet);
target->PrototypeTemplate()->SetAccessor(v8::String::New("y"), _yGet, _ySet);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxRealPoint::New(const wxNode_wxRealPoint* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("RealPoint"));
  wxNode_wxRealPoint::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();

  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxRealPoint*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxRealPoint::New(const wxRealPoint* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("RealPoint"));
  wxNode_wxRealPoint::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxRealPoint::NewCopy(const wxRealPoint& obj) {
  v8::HandleScope scope;
  wxNode_wxRealPoint* returnVal = new wxNode_wxRealPoint();
  memcpy(dynamic_cast<wxRealPoint*>(returnVal), &obj, sizeof(wxRealPoint));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxRealPoint::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxRealPoint::AssignableFrom(const char* className) {
  if(!strcmp("RealPoint", className)) { return true; }
  

  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxRealPoint::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  /*
   * id: _38839
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxRealPoint::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxRealPoint* arg0 = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRealPoint>(args[0]->ToObject()); /* type: _19094  */

    wxNode_wxRealPoint *self = new wxNode_wxRealPoint(*arg0);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _38840
   */
  if(args.Length() == 0) {
    
    wxNode_wxRealPoint *self = new wxNode_wxRealPoint();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  /*
   * id: _38842
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxPoint::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _18992  */

    wxNode_wxRealPoint *self = new wxNode_wxRealPoint(*pt);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxRealPoint).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxRealPoint::_xGet(v8::Local<v8::String> name, const v8::AccessorInfo& info) {
  v8::HandleScope scope;
  wxNode_wxRealPoint* self = unwrap<wxNode_wxRealPoint>(info.This());

  return scope.Close(v8::Number::New(self->x));
}

/*static*/ void wxNode_wxRealPoint::_xSet(v8::Local<v8::String> name, v8::Local<v8::Value> val, const v8::AccessorInfo& info) {
  v8::HandleScope scope;
  wxNode_wxRealPoint* self = unwrap<wxNode_wxRealPoint>(info.This());

  self->x = val->ToNumber()->Value();
}
/*static*/ v8::Handle<v8::Value> wxNode_wxRealPoint::_yGet(v8::Local<v8::String> name, const v8::AccessorInfo& info) {
  v8::HandleScope scope;
  wxNode_wxRealPoint* self = unwrap<wxNode_wxRealPoint>(info.This());

  return scope.Close(v8::Number::New(self->y));
}

/*static*/ void wxNode_wxRealPoint::_ySet(v8::Local<v8::String> name, v8::Local<v8::Value> val, const v8::AccessorInfo& info) {
  v8::HandleScope scope;
  wxNode_wxRealPoint* self = unwrap<wxNode_wxRealPoint>(info.This());

  self->y = val->ToNumber()->Value();
}
