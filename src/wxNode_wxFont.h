
#ifndef _wxNode_wxFont_
#define _wxNode_wxFont_

class wxNode_wxFont : public wxFont {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxFont* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxFont& obj) { return v8::Undefined(); }

};

#endif
