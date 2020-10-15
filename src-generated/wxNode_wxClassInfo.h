
#ifndef _wxNode_wxClassInfo_h_
#define _wxNode_wxClassInfo_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxClassInfo;

class wxNode_wxClassInfo : public wxClassInfo, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxClassInfo* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxClassInfo* obj);
  static v8::Handle<v8::Value> NewCopy(const wxClassInfo& obj);


private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _CreateObject(const v8::Arguments& args);
static v8::Handle<v8::Value> _IsDynamic(const v8::Arguments& args);
static v8::Handle<v8::Value> _GetClassName(const v8::Arguments& args);
static v8::Handle<v8::Value> _GetBaseClassName1(const v8::Arguments& args);
static v8::Handle<v8::Value> _GetBaseClassName2(const v8::Arguments& args);
static v8::Handle<v8::Value> _GetBaseClass1(const v8::Arguments& args);
static v8::Handle<v8::Value> _GetBaseClass2(const v8::Arguments& args);
static v8::Handle<v8::Value> _GetSize(const v8::Arguments& args);
static v8::Handle<v8::Value> _GetConstructor(const v8::Arguments& args);
static v8::Handle<v8::Value> _GetFirst(const v8::Arguments& args);
static v8::Handle<v8::Value> _GetNext(const v8::Arguments& args);
static v8::Handle<v8::Value> _FindClass(const v8::Arguments& args);
static v8::Handle<v8::Value> _IsKindOf(const v8::Arguments& args);
static v8::Handle<v8::Value> _begin_classinfo(const v8::Arguments& args);
static v8::Handle<v8::Value> _end_classinfo(const v8::Arguments& args);
  
  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
