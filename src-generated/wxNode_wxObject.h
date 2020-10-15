
#ifndef _wxNode_wxObject_h_
#define _wxNode_wxObject_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxClassInfo;
class wxNode_wxRefCounter;
class wxNode_wxObject;

class wxNode_wxObject : public wxObject, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxObject* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxObject* obj);
  static v8::Handle<v8::Value> NewCopy(const wxObject& obj);


private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _GetClassInfo(const v8::Arguments& args);
static v8::Handle<v8::Value> _IsKindOf(const v8::Arguments& args);
static v8::Handle<v8::Value> _GetRefData(const v8::Arguments& args);
static v8::Handle<v8::Value> _SetRefData(const v8::Arguments& args);
static v8::Handle<v8::Value> _Ref(const v8::Arguments& args);
static v8::Handle<v8::Value> _UnRef(const v8::Arguments& args);
static v8::Handle<v8::Value> _UnShare(const v8::Arguments& args);
static v8::Handle<v8::Value> _IsSameAs(const v8::Arguments& args);
  
  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
