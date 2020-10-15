
#ifndef _wxNode_wxRefCounter_h_
#define _wxNode_wxRefCounter_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"

class wxNode_wxRefCounter : public wxRefCounter, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxRefCounter* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxRefCounter* obj);
  static v8::Handle<v8::Value> NewCopy(const wxRefCounter& obj);


private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _GetRefCount(const v8::Arguments& args);
static v8::Handle<v8::Value> _IncRef(const v8::Arguments& args);
static v8::Handle<v8::Value> _DecRef(const v8::Arguments& args);
  
  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
