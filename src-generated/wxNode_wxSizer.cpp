
#include <sstream>
#include "wxNode_wxSizer.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxObject.h"
#include "wxNode_wxSizerItem.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxSizerFlags.h"
#include "wxNode_wxSize.h"
#include "wxNode_wxPoint.h"
#include "wxNode_wxSizerItemList.h"
#include "wxNode_wxClassInfo.h"

/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxSizer::s_ct;



/*static*/ void wxNode_wxSizer::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("Sizer"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("Sizer"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxSizer::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxObject::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "add", _Add);
NODE_SET_PROTOTYPE_METHOD(target, "addSpacer", _AddSpacer);
NODE_SET_PROTOTYPE_METHOD(target, "addStretchSpacer", _AddStretchSpacer);
NODE_SET_PROTOTYPE_METHOD(target, "insert", _Insert);
NODE_SET_PROTOTYPE_METHOD(target, "insertSpacer", _InsertSpacer);
NODE_SET_PROTOTYPE_METHOD(target, "insertStretchSpacer", _InsertStretchSpacer);
NODE_SET_PROTOTYPE_METHOD(target, "prepend", _Prepend);
NODE_SET_PROTOTYPE_METHOD(target, "prependSpacer", _PrependSpacer);
NODE_SET_PROTOTYPE_METHOD(target, "prependStretchSpacer", _PrependStretchSpacer);
NODE_SET_PROTOTYPE_METHOD(target, "setContainingWindow", _SetContainingWindow);
NODE_SET_PROTOTYPE_METHOD(target, "getContainingWindow", _GetContainingWindow);
NODE_SET_PROTOTYPE_METHOD(target, "remove", _Remove);
NODE_SET_PROTOTYPE_METHOD(target, "detach", _Detach);
NODE_SET_PROTOTYPE_METHOD(target, "replace", _Replace);
NODE_SET_PROTOTYPE_METHOD(target, "clear", _Clear);
NODE_SET_PROTOTYPE_METHOD(target, "deleteWindows", _DeleteWindows);
NODE_SET_PROTOTYPE_METHOD(target, "informFirstDirection", _InformFirstDirection);
NODE_SET_PROTOTYPE_METHOD(target, "setMinSize", _SetMinSize);
NODE_SET_PROTOTYPE_METHOD(target, "setItemMinSize", _SetItemMinSize);
NODE_SET_PROTOTYPE_METHOD(target, "getSize", _GetSize);
NODE_SET_PROTOTYPE_METHOD(target, "getPosition", _GetPosition);
NODE_SET_PROTOTYPE_METHOD(target, "getMinSize", _GetMinSize);
NODE_SET_PROTOTYPE_METHOD(target, "calcMin", _CalcMin);
NODE_SET_PROTOTYPE_METHOD(target, "recalcSizes", _RecalcSizes);
NODE_SET_PROTOTYPE_METHOD(target, "layout", _Layout);
NODE_SET_PROTOTYPE_METHOD(target, "computeFittingClientSize", _ComputeFittingClientSize);
NODE_SET_PROTOTYPE_METHOD(target, "computeFittingWindowSize", _ComputeFittingWindowSize);
NODE_SET_PROTOTYPE_METHOD(target, "fit", _Fit);
NODE_SET_PROTOTYPE_METHOD(target, "fitInside", _FitInside);
NODE_SET_PROTOTYPE_METHOD(target, "setSizeHints", _SetSizeHints);
NODE_SET_PROTOTYPE_METHOD(target, "getChildren", _GetChildren);
NODE_SET_PROTOTYPE_METHOD(target, "setDimension", _SetDimension);
NODE_SET_PROTOTYPE_METHOD(target, "getItemCount", _GetItemCount);
NODE_SET_PROTOTYPE_METHOD(target, "isEmpty", _IsEmpty);
NODE_SET_PROTOTYPE_METHOD(target, "getItem", _GetItem);
NODE_SET_PROTOTYPE_METHOD(target, "getItemById", _GetItemById);
NODE_SET_PROTOTYPE_METHOD(target, "show", _Show);
NODE_SET_PROTOTYPE_METHOD(target, "hide", _Hide);
NODE_SET_PROTOTYPE_METHOD(target, "isShown", _IsShown);
NODE_SET_PROTOTYPE_METHOD(target, "showItems", _ShowItems);
NODE_SET_PROTOTYPE_METHOD(target, "getClassInfo", _GetClassInfo);
  }

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::New(const wxNode_wxSizer* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("Sizer"));
  wxNode_wxSizer::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();

  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxSizer*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::New(const wxSizer* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("Sizer"));
  wxNode_wxSizer::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::NewCopy(const wxSizer& obj) {
  return v8::Undefined();
}

/*static*/ bool wxNode_wxSizer::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxSizer::AssignableFrom(const char* className) {
  if(!strcmp("Sizer", className)) { return true; }
  
  if(!strcmp("BoxSizer", className)) { return true; }

  if(!strcmp("StaticBoxSizer", className)) { return true; }
  if(!strcmp("WrapSizer", className)) { return true; }
  if(!strcmp("StdDialogButtonSizer", className)) { return true; }
  if(!strcmp("GridSizer", className)) { return true; }

  if(!strcmp("FlexGridSizer", className)) { return true; }

  if(!strcmp("GridBagSizer", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_init(const v8::Arguments& args) {
  v8::HandleScope scope;


  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxSizer).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_Add(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26339
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxObject::AssignableFrom(args[4]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */
int proportion = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int border = (int)args[3]->ToInt32()->Value(); /* type: _142  */
wxNode_wxObject* userData = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[4]->ToObject()); /* type: _14327 * */

    wxSizerItem* returnVal = self->Add(window, proportion, flag, border, userData);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26339
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */
int proportion = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int border = (int)args[3]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Add(window, proportion, flag, border);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26339
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */
int proportion = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[2]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Add(window, proportion, flag);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26339
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */
int proportion = (int)args[1]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Add(window, proportion);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26339
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */

    wxSizerItem* returnVal = self->Add(window);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26340
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxObject::AssignableFrom(args[4]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _56752 * */
int proportion = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int border = (int)args[3]->ToInt32()->Value(); /* type: _142  */
wxNode_wxObject* userData = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[4]->ToObject()); /* type: _14327 * */

    wxSizerItem* returnVal = self->Add(sizer, proportion, flag, border, userData);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26340
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _56752 * */
int proportion = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int border = (int)args[3]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Add(sizer, proportion, flag, border);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26340
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _56752 * */
int proportion = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[2]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Add(sizer, proportion, flag);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26340
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _56752 * */
int proportion = (int)args[1]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Add(sizer, proportion);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26340
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _56752 * */

    wxSizerItem* returnVal = self->Add(sizer);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26341
   */
  if(args.Length() == 6 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber() && (args[5]->IsNull() || (args[5]->IsObject() && wxNode_wxObject::AssignableFrom(args[5]->ToObject()->GetConstructorName())))) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int proportion = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[3]->ToInt32()->Value(); /* type: _142  */
int border = (int)args[4]->ToInt32()->Value(); /* type: _142  */
wxNode_wxObject* userData = args[5]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[5]->ToObject()); /* type: _14327 * */

    wxSizerItem* returnVal = self->Add(width, height, proportion, flag, border, userData);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26341
   */
  if(args.Length() == 5 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int proportion = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[3]->ToInt32()->Value(); /* type: _142  */
int border = (int)args[4]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Add(width, height, proportion, flag, border);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26341
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int proportion = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[3]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Add(width, height, proportion, flag);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26341
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int proportion = (int)args[2]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Add(width, height, proportion);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26341
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[1]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Add(width, height);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26342
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizerFlags::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */
wxNode_wxSizerFlags* flags = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[1]->ToObject()); /* type: _56751  */

    wxSizerItem* returnVal = self->Add(window, *flags);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26343
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizerFlags::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _56752 * */
wxNode_wxSizerFlags* flags = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[1]->ToObject()); /* type: _56751  */

    wxSizerItem* returnVal = self->Add(sizer, *flags);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26344
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxSizerFlags::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[1]->ToInt32()->Value(); /* type: _142  */
wxNode_wxSizerFlags* flags = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[2]->ToObject()); /* type: _56751  */

    wxSizerItem* returnVal = self->Add(width, height, *flags);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26345
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizerItem::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizerItem* item = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerItem>(args[0]->ToObject()); /* type: _52191 * */

    wxSizerItem* returnVal = self->Add(item);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::Add).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_AddSpacer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26346
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int size = (int)args[0]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->AddSpacer(size);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::AddSpacer).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_AddStretchSpacer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26347
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int prop = (int)args[0]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->AddStretchSpacer(prop);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26347
   */
  if(args.Length() == 0) {
    
    wxSizerItem* returnVal = self->AddStretchSpacer();

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::AddStretchSpacer).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_Insert(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26348
   */
  if(args.Length() == 6 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxWindow::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber() && (args[5]->IsNull() || (args[5]->IsObject() && wxNode_wxObject::AssignableFrom(args[5]->ToObject()->GetConstructorName())))) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */
wxNode_wxWindow* window = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _920 * */
int proportion = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[3]->ToInt32()->Value(); /* type: _142  */
int border = (int)args[4]->ToInt32()->Value(); /* type: _142  */
wxNode_wxObject* userData = args[5]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[5]->ToObject()); /* type: _14327 * */

    wxSizerItem* returnVal = self->Insert(index, window, proportion, flag, border, userData);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26348
   */
  if(args.Length() == 5 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxWindow::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber()) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */
wxNode_wxWindow* window = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _920 * */
int proportion = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[3]->ToInt32()->Value(); /* type: _142  */
int border = (int)args[4]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Insert(index, window, proportion, flag, border);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26348
   */
  if(args.Length() == 4 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxWindow::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsNumber() && args[3]->IsNumber()) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */
wxNode_wxWindow* window = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _920 * */
int proportion = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[3]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Insert(index, window, proportion, flag);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26348
   */
  if(args.Length() == 3 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxWindow::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsNumber()) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */
wxNode_wxWindow* window = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _920 * */
int proportion = (int)args[2]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Insert(index, window, proportion);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26348
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxWindow::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */
wxNode_wxWindow* window = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _920 * */

    wxSizerItem* returnVal = self->Insert(index, window);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26349
   */
  if(args.Length() == 6 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizer::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber() && (args[5]->IsNull() || (args[5]->IsObject() && wxNode_wxObject::AssignableFrom(args[5]->ToObject()->GetConstructorName())))) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */
wxNode_wxSizer* sizer = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[1]->ToObject()); /* type: _56752 * */
int proportion = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[3]->ToInt32()->Value(); /* type: _142  */
int border = (int)args[4]->ToInt32()->Value(); /* type: _142  */
wxNode_wxObject* userData = args[5]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[5]->ToObject()); /* type: _14327 * */

    wxSizerItem* returnVal = self->Insert(index, sizer, proportion, flag, border, userData);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26349
   */
  if(args.Length() == 5 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizer::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber()) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */
wxNode_wxSizer* sizer = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[1]->ToObject()); /* type: _56752 * */
int proportion = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[3]->ToInt32()->Value(); /* type: _142  */
int border = (int)args[4]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Insert(index, sizer, proportion, flag, border);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26349
   */
  if(args.Length() == 4 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizer::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsNumber() && args[3]->IsNumber()) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */
wxNode_wxSizer* sizer = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[1]->ToObject()); /* type: _56752 * */
int proportion = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[3]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Insert(index, sizer, proportion, flag);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26349
   */
  if(args.Length() == 3 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizer::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsNumber()) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */
wxNode_wxSizer* sizer = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[1]->ToObject()); /* type: _56752 * */
int proportion = (int)args[2]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Insert(index, sizer, proportion);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26349
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizer::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */
wxNode_wxSizer* sizer = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[1]->ToObject()); /* type: _56752 * */

    wxSizerItem* returnVal = self->Insert(index, sizer);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26350
   */
  if(args.Length() == 7 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber() && args[5]->IsNumber() && (args[6]->IsNull() || (args[6]->IsObject() && wxNode_wxObject::AssignableFrom(args[6]->ToObject()->GetConstructorName())))) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */
int width = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int proportion = (int)args[3]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[4]->ToInt32()->Value(); /* type: _142  */
int border = (int)args[5]->ToInt32()->Value(); /* type: _142  */
wxNode_wxObject* userData = args[6]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[6]->ToObject()); /* type: _14327 * */

    wxSizerItem* returnVal = self->Insert(index, width, height, proportion, flag, border, userData);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26350
   */
  if(args.Length() == 6 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber() && args[5]->IsNumber()) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */
int width = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int proportion = (int)args[3]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[4]->ToInt32()->Value(); /* type: _142  */
int border = (int)args[5]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Insert(index, width, height, proportion, flag, border);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26350
   */
  if(args.Length() == 5 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber()) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */
int width = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int proportion = (int)args[3]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[4]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Insert(index, width, height, proportion, flag);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26350
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */
int width = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int proportion = (int)args[3]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Insert(index, width, height, proportion);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26350
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */
int width = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[2]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Insert(index, width, height);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26351
   */
  if(args.Length() == 3 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxWindow::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxSizerFlags::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */
wxNode_wxWindow* window = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _920 * */
wxNode_wxSizerFlags* flags = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[2]->ToObject()); /* type: _56751  */

    wxSizerItem* returnVal = self->Insert(index, window, *flags);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26352
   */
  if(args.Length() == 3 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizer::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxSizerFlags::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */
wxNode_wxSizer* sizer = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[1]->ToObject()); /* type: _56752 * */
wxNode_wxSizerFlags* flags = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[2]->ToObject()); /* type: _56751  */

    wxSizerItem* returnVal = self->Insert(index, sizer, *flags);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26353
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSizerFlags::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */
int width = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[2]->ToInt32()->Value(); /* type: _142  */
wxNode_wxSizerFlags* flags = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[3]->ToObject()); /* type: _56751  */

    wxSizerItem* returnVal = self->Insert(index, width, height, *flags);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26354
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizerItem::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */
wxNode_wxSizerItem* item = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerItem>(args[1]->ToObject()); /* type: _52191 * */

    wxSizerItem* returnVal = self->Insert(index, item);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::Insert).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_InsertSpacer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26355
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */
int size = (int)args[1]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->InsertSpacer(index, size);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::InsertSpacer).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_InsertStretchSpacer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26356
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */
int prop = (int)args[1]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->InsertStretchSpacer(index, prop);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26356
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */

    wxSizerItem* returnVal = self->InsertStretchSpacer(index);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::InsertStretchSpacer).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_Prepend(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26357
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxObject::AssignableFrom(args[4]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */
int proportion = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int border = (int)args[3]->ToInt32()->Value(); /* type: _142  */
wxNode_wxObject* userData = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[4]->ToObject()); /* type: _14327 * */

    wxSizerItem* returnVal = self->Prepend(window, proportion, flag, border, userData);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26357
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */
int proportion = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int border = (int)args[3]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Prepend(window, proportion, flag, border);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26357
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */
int proportion = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[2]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Prepend(window, proportion, flag);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26357
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */
int proportion = (int)args[1]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Prepend(window, proportion);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26357
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */

    wxSizerItem* returnVal = self->Prepend(window);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26358
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxObject::AssignableFrom(args[4]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _56752 * */
int proportion = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int border = (int)args[3]->ToInt32()->Value(); /* type: _142  */
wxNode_wxObject* userData = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[4]->ToObject()); /* type: _14327 * */

    wxSizerItem* returnVal = self->Prepend(sizer, proportion, flag, border, userData);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26358
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _56752 * */
int proportion = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int border = (int)args[3]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Prepend(sizer, proportion, flag, border);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26358
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _56752 * */
int proportion = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[2]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Prepend(sizer, proportion, flag);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26358
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _56752 * */
int proportion = (int)args[1]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Prepend(sizer, proportion);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26358
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _56752 * */

    wxSizerItem* returnVal = self->Prepend(sizer);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26359
   */
  if(args.Length() == 6 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber() && (args[5]->IsNull() || (args[5]->IsObject() && wxNode_wxObject::AssignableFrom(args[5]->ToObject()->GetConstructorName())))) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int proportion = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[3]->ToInt32()->Value(); /* type: _142  */
int border = (int)args[4]->ToInt32()->Value(); /* type: _142  */
wxNode_wxObject* userData = args[5]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[5]->ToObject()); /* type: _14327 * */

    wxSizerItem* returnVal = self->Prepend(width, height, proportion, flag, border, userData);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26359
   */
  if(args.Length() == 5 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int proportion = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[3]->ToInt32()->Value(); /* type: _142  */
int border = (int)args[4]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Prepend(width, height, proportion, flag, border);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26359
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int proportion = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int flag = (int)args[3]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Prepend(width, height, proportion, flag);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26359
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int proportion = (int)args[2]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Prepend(width, height, proportion);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26359
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[1]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->Prepend(width, height);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26360
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizerFlags::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */
wxNode_wxSizerFlags* flags = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[1]->ToObject()); /* type: _56751  */

    wxSizerItem* returnVal = self->Prepend(window, *flags);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26361
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizerFlags::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _56752 * */
wxNode_wxSizerFlags* flags = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[1]->ToObject()); /* type: _56751  */

    wxSizerItem* returnVal = self->Prepend(sizer, *flags);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26362
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxSizerFlags::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[1]->ToInt32()->Value(); /* type: _142  */
wxNode_wxSizerFlags* flags = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[2]->ToObject()); /* type: _56751  */

    wxSizerItem* returnVal = self->Prepend(width, height, *flags);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26363
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizerItem::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizerItem* item = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerItem>(args[0]->ToObject()); /* type: _52191 * */

    wxSizerItem* returnVal = self->Prepend(item);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::Prepend).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_PrependSpacer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26364
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int size = (int)args[0]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->PrependSpacer(size);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::PrependSpacer).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_PrependStretchSpacer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26365
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int prop = (int)args[0]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->PrependStretchSpacer(prop);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26365
   */
  if(args.Length() == 0) {
    
    wxSizerItem* returnVal = self->PrependStretchSpacer();

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::PrependStretchSpacer).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_SetContainingWindow(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26366
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */

    self->SetContainingWindow(window);

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::SetContainingWindow).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_GetContainingWindow(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26367
   */
  if(args.Length() == 0) {
    
    const wxWindow* returnVal = self->GetContainingWindow();

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::GetContainingWindow).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_Remove(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26368
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _56752 * */

    bool returnVal = self->Remove(sizer);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _26369
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int index = (int)args[0]->ToInt32()->Value(); /* type: _142  */

    bool returnVal = self->Remove(index);

    return scope.Close(v8::Boolean::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::Remove).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_Detach(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26370
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */

    bool returnVal = self->Detach(window);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _26371
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _56752 * */

    bool returnVal = self->Detach(sizer);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _26372
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int index = (int)args[0]->ToInt32()->Value(); /* type: _142  */

    bool returnVal = self->Detach(index);

    return scope.Close(v8::Boolean::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::Detach).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_Replace(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26373
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxWindow::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsBoolean()) {
    wxNode_wxWindow* oldwin = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */
wxNode_wxWindow* newwin = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _920 * */
bool recursive = args[2]->ToBoolean()->Value(); /* type: _13422  */

    bool returnVal = self->Replace(oldwin, newwin, recursive);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _26373
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxWindow::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* oldwin = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */
wxNode_wxWindow* newwin = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _920 * */

    bool returnVal = self->Replace(oldwin, newwin);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _26374
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizer::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsBoolean()) {
    wxNode_wxSizer* oldsz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _56752 * */
wxNode_wxSizer* newsz = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[1]->ToObject()); /* type: _56752 * */
bool recursive = args[2]->ToBoolean()->Value(); /* type: _13422  */

    bool returnVal = self->Replace(oldsz, newsz, recursive);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _26374
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizer::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* oldsz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _56752 * */
wxNode_wxSizer* newsz = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[1]->ToObject()); /* type: _56752 * */

    bool returnVal = self->Replace(oldsz, newsz);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _26375
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizerItem::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */
wxNode_wxSizerItem* newitem = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerItem>(args[1]->ToObject()); /* type: _52191 * */

    bool returnVal = self->Replace(index, newitem);

    return scope.Close(v8::Boolean::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::Replace).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_Clear(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26376
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool delete_windows = args[0]->ToBoolean()->Value(); /* type: _13422  */

    self->Clear(delete_windows);

    return v8::Undefined();
  }
  /*
   * id: _26376
   */
  if(args.Length() == 0) {
    
    self->Clear();

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::Clear).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_DeleteWindows(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26377
   */
  if(args.Length() == 0) {
    
    self->DeleteWindows();

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::DeleteWindows).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_InformFirstDirection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26378
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    int arg0 = (int)args[0]->ToInt32()->Value(); /* type: _142  */
int arg1 = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int arg2 = (int)args[2]->ToInt32()->Value(); /* type: _142  */

    bool returnVal = self->InformFirstDirection(arg0, arg1, arg2);

    return scope.Close(v8::Boolean::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::InformFirstDirection).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_SetMinSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26379
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[1]->ToInt32()->Value(); /* type: _142  */

    self->SetMinSize(width, height);

    return v8::Undefined();
  }
  /*
   * id: _26380
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _19093  */

    self->SetMinSize(*size);

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::SetMinSize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_SetItemMinSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26381
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */
int width = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[2]->ToInt32()->Value(); /* type: _142  */

    bool returnVal = self->SetItemMinSize(window, width, height);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _26382
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSize::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */
wxNode_wxSize* size = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[1]->ToObject()); /* type: _19093  */

    bool returnVal = self->SetItemMinSize(window, *size);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _26383
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _56752 * */
int width = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[2]->ToInt32()->Value(); /* type: _142  */

    bool returnVal = self->SetItemMinSize(sizer, width, height);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _26384
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSize::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _56752 * */
wxNode_wxSize* size = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[1]->ToObject()); /* type: _19093  */

    bool returnVal = self->SetItemMinSize(sizer, *size);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _26385
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */
int width = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[2]->ToInt32()->Value(); /* type: _142  */

    bool returnVal = self->SetItemMinSize(index, width, height);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _26386
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSize::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */
wxNode_wxSize* size = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[1]->ToObject()); /* type: _19093  */

    bool returnVal = self->SetItemMinSize(index, *size);

    return scope.Close(v8::Boolean::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::SetItemMinSize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_GetSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26387
   */
  if(args.Length() == 0) {
    
    wxSize returnVal = self->GetSize();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::GetSize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_GetPosition(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26388
   */
  if(args.Length() == 0) {
    
    wxPoint returnVal = self->GetPosition();

    return scope.Close(wxNode_wxPoint::NewCopy(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::GetPosition).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_GetMinSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26389
   */
  if(args.Length() == 0) {
    
    wxSize returnVal = self->GetMinSize();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::GetMinSize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_CalcMin(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26390
   */
  if(args.Length() == 0) {
    
    wxSize returnVal = self->CalcMin();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::CalcMin).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_RecalcSizes(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26391
   */
  if(args.Length() == 0) {
    
    self->RecalcSizes();

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::RecalcSizes).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_Layout(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26392
   */
  if(args.Length() == 0) {
    
    self->Layout();

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::Layout).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_ComputeFittingClientSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26393
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */

    wxSize returnVal = self->ComputeFittingClientSize(window);

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::ComputeFittingClientSize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_ComputeFittingWindowSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26394
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */

    wxSize returnVal = self->ComputeFittingWindowSize(window);

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::ComputeFittingWindowSize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_Fit(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26395
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */

    wxSize returnVal = self->Fit(window);

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::Fit).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_FitInside(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26396
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */

    self->FitInside(window);

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::FitInside).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_SetSizeHints(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26397
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */

    self->SetSizeHints(window);

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::SetSizeHints).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_GetChildren(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26399
   */
  if(args.Length() == 0) {
    
    wxSizerItemList returnVal = self->GetChildren();

    return scope.Close(wxNode_wxSizerItemList::NewCopy(returnVal));
  }
  /*
   * id: _26400
   */
  if(args.Length() == 0) {
    
    wxSizerItemList returnVal = self->GetChildren();

    return scope.Close(wxNode_wxSizerItemList::NewCopy(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::GetChildren).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_SetDimension(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26401
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxPoint::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSize::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    wxNode_wxPoint* pos = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _18992  */
wxNode_wxSize* size = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[1]->ToObject()); /* type: _19093  */

    self->SetDimension(*pos, *size);

    return v8::Undefined();
  }
  /*
   * id: _26402
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _142  */
int y = (int)args[1]->ToInt32()->Value(); /* type: _142  */
int width = (int)args[2]->ToInt32()->Value(); /* type: _142  */
int height = (int)args[3]->ToInt32()->Value(); /* type: _142  */

    self->SetDimension(x, y, width, height);

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::SetDimension).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_GetItemCount(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26403
   */
  if(args.Length() == 0) {
    
    self->GetItemCount();

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::GetItemCount).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_IsEmpty(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26404
   */
  if(args.Length() == 0) {
    
    bool returnVal = self->IsEmpty();

    return scope.Close(v8::Boolean::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::IsEmpty).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_GetItem(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26405
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsBoolean()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */
bool recursive = args[1]->ToBoolean()->Value(); /* type: _13422  */

    wxSizerItem* returnVal = self->GetItem(window, recursive);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26405
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */

    wxSizerItem* returnVal = self->GetItem(window);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26406
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsBoolean()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _56752 * */
bool recursive = args[1]->ToBoolean()->Value(); /* type: _13422  */

    wxSizerItem* returnVal = self->GetItem(sizer, recursive);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26406
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _56752 * */

    wxSizerItem* returnVal = self->GetItem(sizer);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26407
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */

    wxSizerItem* returnVal = self->GetItem(index);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::GetItem).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_GetItemById(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26408
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsBoolean()) {
    int id = (int)args[0]->ToInt32()->Value(); /* type: _142  */
bool recursive = args[1]->ToBoolean()->Value(); /* type: _13422  */

    wxSizerItem* returnVal = self->GetItemById(id, recursive);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  /*
   * id: _26408
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int id = (int)args[0]->ToInt32()->Value(); /* type: _142  */

    wxSizerItem* returnVal = self->GetItemById(id);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::GetItemById).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_Show(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26409
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsBoolean() && args[2]->IsBoolean()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */
bool show = args[1]->ToBoolean()->Value(); /* type: _13422  */
bool recursive = args[2]->ToBoolean()->Value(); /* type: _13422  */

    bool returnVal = self->Show(window, show, recursive);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _26409
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsBoolean()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */
bool show = args[1]->ToBoolean()->Value(); /* type: _13422  */

    bool returnVal = self->Show(window, show);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _26409
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */

    bool returnVal = self->Show(window);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _26410
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsBoolean() && args[2]->IsBoolean()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _56752 * */
bool show = args[1]->ToBoolean()->Value(); /* type: _13422  */
bool recursive = args[2]->ToBoolean()->Value(); /* type: _13422  */

    bool returnVal = self->Show(sizer, show, recursive);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _26410
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsBoolean()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _56752 * */
bool show = args[1]->ToBoolean()->Value(); /* type: _13422  */

    bool returnVal = self->Show(sizer, show);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _26410
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _56752 * */

    bool returnVal = self->Show(sizer);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _26411
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsBoolean()) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */
bool show = args[1]->ToBoolean()->Value(); /* type: _13422  */

    bool returnVal = self->Show(index, show);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _26411
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */

    bool returnVal = self->Show(index);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _26419
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool show = args[0]->ToBoolean()->Value(); /* type: _13422  */

    self->Show(show);

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::Show).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_Hide(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26412
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsBoolean()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _56752 * */
bool recursive = args[1]->ToBoolean()->Value(); /* type: _13422  */

    bool returnVal = self->Hide(sizer, recursive);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _26412
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _56752 * */

    bool returnVal = self->Hide(sizer);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _26413
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsBoolean()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */
bool recursive = args[1]->ToBoolean()->Value(); /* type: _13422  */

    bool returnVal = self->Hide(window, recursive);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _26413
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */

    bool returnVal = self->Hide(window);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _26414
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */

    bool returnVal = self->Hide(index);

    return scope.Close(v8::Boolean::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::Hide).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_IsShown(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26415
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _920 * */

    bool returnVal = self->IsShown(window);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _26416
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _56752 * */

    bool returnVal = self->IsShown(sizer);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  /*
   * id: _26417
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long unsigned int index = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _7931  */

    bool returnVal = self->IsShown(index);

    return scope.Close(v8::Boolean::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::IsShown).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_ShowItems(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26418
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool show = args[0]->ToBoolean()->Value(); /* type: _13422  */

    self->ShowItems(show);

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::ShowItems).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_GetClassInfo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  /*
   * id: _26428
   */
  if(args.Length() == 0) {
    
    wxClassInfo* returnVal = self->GetClassInfo();

    return scope.Close(wxNode_wxClassInfo::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::GetClassInfo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

