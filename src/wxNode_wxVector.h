
#ifndef _wxNode_wxVector_
#define _wxNode_wxVector_

#include "wxnode.h"
#include <wx/vector.h>

template<typename T>
class wxNode_wxVector : public wxVector<T>, public wxNodeObject {
public:
    static void AddMethods(v8::Handle<v8::FunctionTemplate> target) { wxNodeObject::AddMethods(target); }
    static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
    static bool AssignableFrom(const char* className) { return false; }
    static v8::Handle<v8::Value> New(wxVector<T>* obj) { return v8::Undefined(); }
    static v8::Handle<v8::Value> NewCopy(wxVector<T>& obj) {
        v8::HandleScope scope;

        v8::Local<v8::Array> result = v8::Array::New();

        return scope.Close(result);
    }
};

#endif
