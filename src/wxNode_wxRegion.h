
#ifndef _wxNode_wxRegion_
#define _wxNode_wxRegion_

class  wxNode_wxRegion : public wxRegion {
  public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }

};

#endif
