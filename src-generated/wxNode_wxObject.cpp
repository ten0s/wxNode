
#include <sstream>
#include "wxNode_wxObject.h"
#include "wxNode_wxClassInfo.h"
#include "wxNode_wxRefCounter.h"

/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxObject::s_ct;



/*static*/ void wxNode_wxObject::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("Object"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("Object"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxObject::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxEvtHandler::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "getClassInfo", _GetClassInfo);
NODE_SET_PROTOTYPE_METHOD(target, "isKindOf", _IsKindOf);
NODE_SET_PROTOTYPE_METHOD(target, "getRefData", _GetRefData);
NODE_SET_PROTOTYPE_METHOD(target, "setRefData", _SetRefData);
NODE_SET_PROTOTYPE_METHOD(target, "ref", _Ref);
NODE_SET_PROTOTYPE_METHOD(target, "unRef", _UnRef);
NODE_SET_PROTOTYPE_METHOD(target, "unShare", _UnShare);
NODE_SET_PROTOTYPE_METHOD(target, "isSameAs", _IsSameAs);
  }

/*static*/ v8::Handle<v8::Value> wxNode_wxObject::New(const wxNode_wxObject* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("Object"));
  wxNode_wxObject::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();

  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxObject*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxObject::New(const wxObject* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("Object"));
  wxNode_wxObject::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxObject::NewCopy(const wxObject& obj) {
  return v8::Undefined();
}

/*static*/ bool wxNode_wxObject::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxObject::AssignableFrom(const char* className) {
  if(!strcmp("Object", className)) { return true; }
  
  if(!strcmp("FileSystem", className)) { return true; }
  if(!strcmp("SizerItem", className)) { return true; }

  if(!strcmp("GBSizerItem", className)) { return true; }
  if(!strcmp("RichTextRenderer", className)) { return true; }

  if(!strcmp("RichTextStdRenderer", className)) { return true; }
  if(!strcmp("Event", className)) { return true; }

  if(!strcmp("PaletteChangedEvent", className)) { return true; }
  if(!strcmp("EraseEvent", className)) { return true; }
  if(!strcmp("MouseEvent", className)) { return true; }
  if(!strcmp("CommandEvent", className)) { return true; }

  if(!strcmp("ContextMenuEvent", className)) { return true; }
  if(!strcmp("WindowModalDialogEvent", className)) { return true; }
  if(!strcmp("TextUrlEvent", className)) { return true; }
  if(!strcmp("ClipboardTextEvent", className)) { return true; }
  if(!strcmp("WindowCreateEvent", className)) { return true; }
  if(!strcmp("HyperlinkEvent", className)) { return true; }
  if(!strcmp("NotifyEvent", className)) { return true; }

  if(!strcmp("BookCtrlEvent", className)) { return true; }

  if(!strcmp("AuiNotebookEvent", className)) { return true; }
  if(!strcmp("SplitterEvent", className)) { return true; }
  if(!strcmp("HeaderCtrlEvent", className)) { return true; }
  if(!strcmp("TreeEvent", className)) { return true; }
  if(!strcmp("GridEvent", className)) { return true; }
  if(!strcmp("SpinEvent", className)) { return true; }
  if(!strcmp("TreeListEvent", className)) { return true; }
  if(!strcmp("RichTextEvent", className)) { return true; }
  if(!strcmp("DataViewEvent", className)) { return true; }
  if(!strcmp("GridSizeEvent", className)) { return true; }
  if(!strcmp("WizardEvent", className)) { return true; }
  if(!strcmp("AuiToolBarEvent", className)) { return true; }
  if(!strcmp("ListEvent", className)) { return true; }
  if(!strcmp("GridRangeSelectEvent", className)) { return true; }
  if(!strcmp("SpinDoubleEvent", className)) { return true; }
  if(!strcmp("GridEditorCreatedEvent", className)) { return true; }
  if(!strcmp("FileCtrlEvent", className)) { return true; }
  if(!strcmp("HtmlLinkEvent", className)) { return true; }
  if(!strcmp("FileDirPickerEvent", className)) { return true; }
  if(!strcmp("FindDialogEvent", className)) { return true; }
  if(!strcmp("ColourPickerEvent", className)) { return true; }
  if(!strcmp("ChildFocusEvent", className)) { return true; }
  if(!strcmp("DateEvent", className)) { return true; }

  if(!strcmp("CalendarEvent", className)) { return true; }
  if(!strcmp("ScrollEvent", className)) { return true; }
  if(!strcmp("HtmlCellEvent", className)) { return true; }
  if(!strcmp("StyledTextEvent", className)) { return true; }
  if(!strcmp("SashEvent", className)) { return true; }
  if(!strcmp("HelpEvent", className)) { return true; }
  if(!strcmp("CollapsiblePaneEvent", className)) { return true; }
  if(!strcmp("WindowDestroyEvent", className)) { return true; }
  if(!strcmp("FontPickerEvent", className)) { return true; }
  if(!strcmp("UpdateUIEvent", className)) { return true; }
  if(!strcmp("ClipboardEvent", className)) { return true; }
  if(!strcmp("MouseCaptureChangedEvent", className)) { return true; }
  if(!strcmp("DialUpEvent", className)) { return true; }
  if(!strcmp("CloseEvent", className)) { return true; }
  if(!strcmp("PaintEvent", className)) { return true; }
  if(!strcmp("MaximizeEvent", className)) { return true; }
  if(!strcmp("FocusEvent", className)) { return true; }
  if(!strcmp("SocketEvent", className)) { return true; }
  if(!strcmp("MouseCaptureLostEvent", className)) { return true; }
  if(!strcmp("IdleEvent", className)) { return true; }
  if(!strcmp("ScrollWinEvent", className)) { return true; }
  if(!strcmp("TaskBarIconEvent", className)) { return true; }
  if(!strcmp("DropFilesEvent", className)) { return true; }
  if(!strcmp("IconizeEvent", className)) { return true; }
  if(!strcmp("CalculateLayoutEvent", className)) { return true; }
  if(!strcmp("QueryNewPaletteEvent", className)) { return true; }
  if(!strcmp("SizeEvent", className)) { return true; }
  if(!strcmp("InitDialogEvent", className)) { return true; }
  if(!strcmp("SetCursorEvent", className)) { return true; }
  if(!strcmp("FileSystemWatcherEvent", className)) { return true; }
  if(!strcmp("SysColourChangedEvent", className)) { return true; }
  if(!strcmp("ProcessEvent", className)) { return true; }
  if(!strcmp("TimerEvent", className)) { return true; }
  if(!strcmp("QueryLayoutInfoEvent", className)) { return true; }
  if(!strcmp("KeyEvent", className)) { return true; }
  if(!strcmp("JoystickEvent", className)) { return true; }
  if(!strcmp("MenuEvent", className)) { return true; }
  if(!strcmp("DisplayChangedEvent", className)) { return true; }
  if(!strcmp("ShowEvent", className)) { return true; }
  if(!strcmp("MoveEvent", className)) { return true; }
  if(!strcmp("NcPaintEvent", className)) { return true; }
  if(!strcmp("NavigationKeyEvent", className)) { return true; }
  if(!strcmp("ActivateEvent", className)) { return true; }
  if(!strcmp("ThreadEvent", className)) { return true; }
  if(!strcmp("AuiManagerEvent", className)) { return true; }
  if(!strcmp("FindReplaceData", className)) { return true; }
  if(!strcmp("Module", className)) { return true; }

  if(!strcmp("HtmlTagsModule", className)) { return true; }
  if(!strcmp("ClipboardBase", className)) { return true; }

  if(!strcmp("Clipboard", className)) { return true; }
  if(!strcmp("Command", className)) { return true; }

  if(!strcmp("RichTextCommand", className)) { return true; }
  if(!strcmp("ToolBarToolBase", className)) { return true; }
  if(!strcmp("LayoutAlgorithm", className)) { return true; }
  if(!strcmp("Quantize", className)) { return true; }
  if(!strcmp("HtmlSearchEngine", className)) { return true; }
  if(!strcmp("SoundBase", className)) { return true; }

  if(!strcmp("Sound", className)) { return true; }
  if(!strcmp("GraphicsObject", className)) { return true; }

  if(!strcmp("GraphicsBitmap", className)) { return true; }
  if(!strcmp("GraphicsPath", className)) { return true; }
  if(!strcmp("GraphicsBrush", className)) { return true; }
  if(!strcmp("GraphicsPen", className)) { return true; }
  if(!strcmp("GraphicsMatrix", className)) { return true; }
  if(!strcmp("GraphicsFont", className)) { return true; }
  if(!strcmp("GraphicsContext", className)) { return true; }
  if(!strcmp("HtmlDCRenderer", className)) { return true; }
  if(!strcmp("PrintDialogData", className)) { return true; }
  if(!strcmp("Joystick", className)) { return true; }
  if(!strcmp("HtmlEntitiesParser", className)) { return true; }
  if(!strcmp("HtmlTagHandler", className)) { return true; }

  if(!strcmp("HtmlWinTagHandler", className)) { return true; }
  if(!strcmp("DialogLayoutAdapter", className)) { return true; }

  if(!strcmp("StandardDialogLayoutAdapter", className)) { return true; }
  if(!strcmp("PrintPreviewBase", className)) { return true; }

  if(!strcmp("PrintPreview", className)) { return true; }
  if(!strcmp("PostScriptPrintPreview", className)) { return true; }
  if(!strcmp("GenericImageList", className)) { return true; }

  if(!strcmp("ImageList", className)) { return true; }
  if(!strcmp("ImageHandler", className)) { return true; }

  if(!strcmp("TIFFHandler", className)) { return true; }
  if(!strcmp("TGAHandler", className)) { return true; }
  if(!strcmp("BMPHandler", className)) { return true; }

  if(!strcmp("ICOHandler", className)) { return true; }

  if(!strcmp("CURHandler", className)) { return true; }

  if(!strcmp("ANIHandler", className)) { return true; }
  if(!strcmp("PCXHandler", className)) { return true; }
  if(!strcmp("PNGHandler", className)) { return true; }
  if(!strcmp("GIFHandler", className)) { return true; }
  if(!strcmp("JPEGHandler", className)) { return true; }
  if(!strcmp("XPMHandler", className)) { return true; }
  if(!strcmp("IFFHandler", className)) { return true; }
  if(!strcmp("PNMHandler", className)) { return true; }
  if(!strcmp("HtmlCell", className)) { return true; }

  if(!strcmp("HtmlFontCell", className)) { return true; }
  if(!strcmp("HtmlWidgetCell", className)) { return true; }
  if(!strcmp("HtmlContainerCell", className)) { return true; }
  if(!strcmp("HtmlWordCell", className)) { return true; }

  if(!strcmp("HtmlWordWithTabsCell", className)) { return true; }
  if(!strcmp("HtmlColourCell", className)) { return true; }
  if(!strcmp("LayoutConstraints", className)) { return true; }
  if(!strcmp("HtmlHelpData", className)) { return true; }
  if(!strcmp("Image", className)) { return true; }
  if(!strcmp("PageSetupDialogData", className)) { return true; }
  if(!strcmp("RichTextFileHandler", className)) { return true; }

  if(!strcmp("RichTextPlainTextHandler", className)) { return true; }
  if(!strcmp("RichTextXMLHandler", className)) { return true; }
  if(!strcmp("RichTextHTMLHandler", className)) { return true; }
  if(!strcmp("EffectsImpl", className)) { return true; }
  if(!strcmp("RichTextStyleSheet", className)) { return true; }
  if(!strcmp("GraphicsRenderer", className)) { return true; }
  if(!strcmp("Sizer", className)) { return true; }

  if(!strcmp("BoxSizer", className)) { return true; }

  if(!strcmp("StaticBoxSizer", className)) { return true; }
  if(!strcmp("WrapSizer", className)) { return true; }
  if(!strcmp("StdDialogButtonSizer", className)) { return true; }
  if(!strcmp("GridSizer", className)) { return true; }

  if(!strcmp("FlexGridSizer", className)) { return true; }

  if(!strcmp("GridBagSizer", className)) { return true; }
  if(!strcmp("XmlResourceHandler", className)) { return true; }

  if(!strcmp("PanelXmlHandler", className)) { return true; }
  if(!strcmp("ListBoxXmlHandler", className)) { return true; }
  if(!strcmp("MdiXmlHandler", className)) { return true; }
  if(!strcmp("BitmapComboBoxXmlHandler", className)) { return true; }
  if(!strcmp("ColourPickerCtrlXmlHandler", className)) { return true; }
  if(!strcmp("TimeCtrlXmlHandler", className)) { return true; }
  if(!strcmp("EditableListBoxXmlHandler", className)) { return true; }
  if(!strcmp("StaticTextXmlHandler", className)) { return true; }
  if(!strcmp("ListCtrlXmlHandler", className)) { return true; }
  if(!strcmp("BitmapButtonXmlHandler", className)) { return true; }
  if(!strcmp("GridXmlHandler", className)) { return true; }
  if(!strcmp("FrameXmlHandler", className)) { return true; }
  if(!strcmp("SpinCtrlXmlHandler", className)) { return true; }
  if(!strcmp("SliderXmlHandler", className)) { return true; }
  if(!strcmp("ToolBarXmlHandler", className)) { return true; }
  if(!strcmp("DirPickerCtrlXmlHandler", className)) { return true; }
  if(!strcmp("ScrollBarXmlHandler", className)) { return true; }
  if(!strcmp("AnimationCtrlXmlHandler", className)) { return true; }
  if(!strcmp("ComboBoxXmlHandler", className)) { return true; }
  if(!strcmp("BannerWindowXmlHandler", className)) { return true; }
  if(!strcmp("StaticLineXmlHandler", className)) { return true; }
  if(!strcmp("ChoiceXmlHandler", className)) { return true; }
  if(!strcmp("RadioBoxXmlHandler", className)) { return true; }
  if(!strcmp("ChoicebookXmlHandler", className)) { return true; }
  if(!strcmp("TreeCtrlXmlHandler", className)) { return true; }
  if(!strcmp("StdDialogButtonSizerXmlHandler", className)) { return true; }
  if(!strcmp("MenuBarXmlHandler", className)) { return true; }
  if(!strcmp("WizardXmlHandler", className)) { return true; }
  if(!strcmp("ToolbookXmlHandler", className)) { return true; }
  if(!strcmp("CollapsiblePaneXmlHandler", className)) { return true; }
  if(!strcmp("SplitterWindowXmlHandler", className)) { return true; }
  if(!strcmp("StatusBarXmlHandler", className)) { return true; }
  if(!strcmp("HyperlinkCtrlXmlHandler", className)) { return true; }
  if(!strcmp("TreebookXmlHandler", className)) { return true; }
  if(!strcmp("SearchCtrlXmlHandler", className)) { return true; }
  if(!strcmp("ComboCtrlXmlHandler", className)) { return true; }
  if(!strcmp("SpinButtonXmlHandler", className)) { return true; }
  if(!strcmp("ListbookXmlHandler", className)) { return true; }
  if(!strcmp("ToggleButtonXmlHandler", className)) { return true; }
  if(!strcmp("MenuXmlHandler", className)) { return true; }
  if(!strcmp("FilePickerCtrlXmlHandler", className)) { return true; }
  if(!strcmp("ScrolledWindowXmlHandler", className)) { return true; }
  if(!strcmp("DateCtrlXmlHandler", className)) { return true; }
  if(!strcmp("CalendarCtrlXmlHandler", className)) { return true; }
  if(!strcmp("RadioButtonXmlHandler", className)) { return true; }
  if(!strcmp("StaticBitmapXmlHandler", className)) { return true; }
  if(!strcmp("TextCtrlXmlHandler", className)) { return true; }
  if(!strcmp("CheckBoxXmlHandler", className)) { return true; }
  if(!strcmp("OwnerDrawnComboBoxXmlHandler", className)) { return true; }
  if(!strcmp("FontPickerCtrlXmlHandler", className)) { return true; }
  if(!strcmp("UnknownWidgetXmlHandler", className)) { return true; }
  if(!strcmp("SizerXmlHandler", className)) { return true; }
  if(!strcmp("ButtonXmlHandler", className)) { return true; }
  if(!strcmp("IconXmlHandler", className)) { return true; }
  if(!strcmp("CommandLinkButtonXmlHandler", className)) { return true; }
  if(!strcmp("NotebookXmlHandler", className)) { return true; }
  if(!strcmp("FileCtrlXmlHandler", className)) { return true; }
  if(!strcmp("SimpleHtmlListBoxXmlHandler", className)) { return true; }
  if(!strcmp("PropertySheetDialogXmlHandler", className)) { return true; }
  if(!strcmp("DialogXmlHandler", className)) { return true; }
  if(!strcmp("HtmlWindowXmlHandler", className)) { return true; }
  if(!strcmp("BitmapXmlHandler", className)) { return true; }
  if(!strcmp("RichTextCtrlXmlHandler", className)) { return true; }
  if(!strcmp("GenericDirCtrlXmlHandler", className)) { return true; }
  if(!strcmp("StaticBoxXmlHandler", className)) { return true; }
  if(!strcmp("CheckListBoxXmlHandler", className)) { return true; }
  if(!strcmp("GaugeXmlHandler", className)) { return true; }
  if(!strcmp("BitmapHandler", className)) { return true; }
  if(!strcmp("RichTextPrinting", className)) { return true; }
  if(!strcmp("MenuItemBase", className)) { return true; }

  if(!strcmp("MenuItem", className)) { return true; }
  if(!strcmp("HtmlLinkInfo", className)) { return true; }
  if(!strcmp("Printout", className)) { return true; }

  if(!strcmp("HtmlPrintout", className)) { return true; }
  if(!strcmp("DocPrintout", className)) { return true; }
  if(!strcmp("RichTextPrintout", className)) { return true; }
  if(!strcmp("RichTextFontTable", className)) { return true; }
  if(!strcmp("CommandProcessor", className)) { return true; }
  if(!strcmp("Variant", className)) { return true; }
  if(!strcmp("SockAddress", className)) { return true; }

  if(!strcmp("IPaddress", className)) { return true; }

  if(!strcmp("IPV4address", className)) { return true; }
  if(!strcmp("UNIXaddress", className)) { return true; }
  if(!strcmp("XmlDocument", className)) { return true; }
  if(!strcmp("GenericDragImage", className)) { return true; }
  if(!strcmp("IndividualLayoutConstraint", className)) { return true; }
  if(!strcmp("TransformMatrix", className)) { return true; }
  if(!strcmp("HtmlFilter", className)) { return true; }

  if(!strcmp("HtmlFilterPlainText", className)) { return true; }
  if(!strcmp("HtmlFilterHTML", className)) { return true; }
  if(!strcmp("EncodingConverter", className)) { return true; }
  if(!strcmp("ArtProvider", className)) { return true; }
  if(!strcmp("SocketBase", className)) { return true; }

  if(!strcmp("DatagramSocket", className)) { return true; }
  if(!strcmp("SocketClient", className)) { return true; }

  if(!strcmp("Protocol", className)) { return true; }

  if(!strcmp("FTP", className)) { return true; }
  if(!strcmp("FileProto", className)) { return true; }
  if(!strcmp("HTTP", className)) { return true; }
  if(!strcmp("SocketServer", className)) { return true; }
  if(!strcmp("GridTableBase", className)) { return true; }

  if(!strcmp("GridStringTable", className)) { return true; }
  if(!strcmp("FSFile", className)) { return true; }
  if(!strcmp("RichTextImageBlock", className)) { return true; }
  if(!strcmp("DataViewRendererBase", className)) { return true; }

  if(!strcmp("DataViewRenderer", className)) { return true; }

  if(!strcmp("DataViewToggleRenderer", className)) { return true; }
  if(!strcmp("DataViewBitmapRenderer", className)) { return true; }
  if(!strcmp("DataViewCustomRendererBase", className)) { return true; }

  if(!strcmp("DataViewCustomRenderer", className)) { return true; }

  if(!strcmp("DataViewProgressRenderer", className)) { return true; }
  if(!strcmp("DataViewChoiceRenderer", className)) { return true; }

  if(!strcmp("DataViewChoiceByIndexRenderer", className)) { return true; }
  if(!strcmp("DataViewSpinRenderer", className)) { return true; }
  if(!strcmp("DataViewDateRenderer", className)) { return true; }
  if(!strcmp("DataViewTextRenderer", className)) { return true; }

  if(!strcmp("DataViewIconTextRenderer", className)) { return true; }
  if(!strcmp("AcceleratorTable", className)) { return true; }
  if(!strcmp("ToolTip", className)) { return true; }
  if(!strcmp("AnimationBase", className)) { return true; }

  if(!strcmp("Animation", className)) { return true; }
  if(!strcmp("FontData", className)) { return true; }
  if(!strcmp("ContextHelp", className)) { return true; }
  if(!strcmp("HtmlProcessor", className)) { return true; }
  if(!strcmp("ColourData", className)) { return true; }
  if(!strcmp("URI", className)) { return true; }

  if(!strcmp("URL", className)) { return true; }
  if(!strcmp("ListItem", className)) { return true; }
  if(!strcmp("PrintPaperType", className)) { return true; }
  if(!strcmp("FilterClassFactoryBase", className)) { return true; }

  if(!strcmp("FilterClassFactory", className)) { return true; }

  if(!strcmp("ZlibClassFactory", className)) { return true; }
  if(!strcmp("GzipClassFactory", className)) { return true; }
  if(!strcmp("ArchiveClassFactory", className)) { return true; }

  if(!strcmp("TarClassFactory", className)) { return true; }
  if(!strcmp("ZipClassFactory", className)) { return true; }
  if(!strcmp("PrintDialog", className)) { return true; }
  if(!strcmp("MaskBase", className)) { return true; }

  if(!strcmp("Mask", className)) { return true; }
  if(!strcmp("DocTemplate", className)) { return true; }
  if(!strcmp("RichTextObject", className)) { return true; }

  if(!strcmp("RichTextCompositeObject", className)) { return true; }

  if(!strcmp("RichTextParagraph", className)) { return true; }
  if(!strcmp("RichTextParagraphLayoutBox", className)) { return true; }

  if(!strcmp("RichTextBuffer", className)) { return true; }
  if(!strcmp("RichTextBox", className)) { return true; }

  if(!strcmp("RichTextTable", className)) { return true; }
  if(!strcmp("RichTextCell", className)) { return true; }
  if(!strcmp("RichTextImage", className)) { return true; }
  if(!strcmp("RichTextPlainText", className)) { return true; }
  if(!strcmp("HelpControllerBase", className)) { return true; }

  if(!strcmp("HtmlHelpController", className)) { return true; }
  if(!strcmp("StreamBase", className)) { return true; }

  if(!strcmp("OutputStream", className)) { return true; }

  if(!strcmp("TempFileOutputStream", className)) { return true; }
  if(!strcmp("FileOutputStream", className)) { return true; }

  if(!strcmp("FileStream", className)) { return true; }
  if(!strcmp("CountingOutputStream", className)) { return true; }
  if(!strcmp("FFileOutputStream", className)) { return true; }

  if(!strcmp("FFileStream", className)) { return true; }
  if(!strcmp("MemoryOutputStream", className)) { return true; }
  if(!strcmp("StringOutputStream", className)) { return true; }
  if(!strcmp("FilterOutputStream", className)) { return true; }

  if(!strcmp("ArchiveOutputStream", className)) { return true; }

  if(!strcmp("TarOutputStream", className)) { return true; }
  if(!strcmp("ZipOutputStream", className)) { return true; }
  if(!strcmp("BufferedOutputStream", className)) { return true; }
  if(!strcmp("ZlibOutputStream", className)) { return true; }
  if(!strcmp("SocketOutputStream", className)) { return true; }

  if(!strcmp("SocketStream", className)) { return true; }
  if(!strcmp("InputStream", className)) { return true; }

  if(!strcmp("FilterInputStream", className)) { return true; }

  if(!strcmp("BufferedInputStream", className)) { return true; }
  if(!strcmp("ArchiveInputStream", className)) { return true; }

  if(!strcmp("ZipInputStream", className)) { return true; }
  if(!strcmp("TarInputStream", className)) { return true; }
  if(!strcmp("ZlibInputStream", className)) { return true; }
  if(!strcmp("SocketInputStream", className)) { return true; }

  if(!strcmp("SocketStream", className)) { return true; }
  if(!strcmp("FileInputStream", className)) { return true; }

  if(!strcmp("FileStream", className)) { return true; }
  if(!strcmp("FFileInputStream", className)) { return true; }

  if(!strcmp("FFileStream", className)) { return true; }
  if(!strcmp("StringInputStream", className)) { return true; }
  if(!strcmp("MemoryInputStream", className)) { return true; }
  if(!strcmp("ConfigBase", className)) { return true; }

  if(!strcmp("FileConfig", className)) { return true; }

  if(!strcmp("MemoryConfig", className)) { return true; }
  if(!strcmp("HtmlParser", className)) { return true; }

  if(!strcmp("HtmlWinParser", className)) { return true; }
  if(!strcmp("FileSystemHandler", className)) { return true; }

  if(!strcmp("InternetFSHandler", className)) { return true; }
  if(!strcmp("ArchiveFSHandler", className)) { return true; }
  if(!strcmp("MemoryFSHandlerBase", className)) { return true; }

  if(!strcmp("MemoryFSHandler", className)) { return true; }
  if(!strcmp("FilterFSHandler", className)) { return true; }
  if(!strcmp("LocalFSHandler", className)) { return true; }
  if(!strcmp("RichTextHeaderFooterData", className)) { return true; }
  if(!strcmp("RichTextAction", className)) { return true; }
  if(!strcmp("HtmlEasyPrinting", className)) { return true; }
  if(!strcmp("EvtHandler", className)) { return true; }

  if(!strcmp("NotificationMessageBase", className)) { return true; }

  if(!strcmp("GenericNotificationMessage", className)) { return true; }

  if(!strcmp("NotificationMessage", className)) { return true; }
  if(!strcmp("View", className)) { return true; }
  if(!strcmp("FileSystemWatcherBase", className)) { return true; }

  if(!strcmp("InotifyFileSystemWatcher", className)) { return true; }
  if(!strcmp("AuiManager", className)) { return true; }
  if(!strcmp("GridCellEditorEvtHandler", className)) { return true; }
  if(!strcmp("Document", className)) { return true; }
  if(!strcmp("Validator", className)) { return true; }

  if(!strcmp("GenericValidator", className)) { return true; }
  if(!strcmp("TextValidator", className)) { return true; }
  if(!strcmp("NumValidatorBase", className)) { return true; }

  if(!strcmp("IntegerValidatorBase", className)) { return true; }
  if(!strcmp("FloatingPointValidatorBase", className)) { return true; }
  if(!strcmp("EventBlocker", className)) { return true; }
  if(!strcmp("Process", className)) { return true; }
  if(!strcmp("WindowBase", className)) { return true; }

  if(!strcmp("Window", className)) { return true; }

  if(!strcmp("RichTextFontPreviewCtrl", className)) { return true; }
  if(!strcmp("NavigationEnabled<wxWindow>", className)) { return true; }

  if(!strcmp("PanelBase", className)) { return true; }

  if(!strcmp("Panel", className)) { return true; }

  if(!strcmp("Scrolled<wxPanel>", className)) { return true; }

  if(!strcmp("ScrolledWindow", className)) { return true; }

  if(!strcmp("PreviewCanvas", className)) { return true; }
  if(!strcmp("HtmlWindow", className)) { return true; }
  if(!strcmp("Grid", className)) { return true; }
  if(!strcmp("WizardPage", className)) { return true; }

  if(!strcmp("WizardPageSimple", className)) { return true; }
  if(!strcmp("RichTextDialogPage", className)) { return true; }

  if(!strcmp("RichTextFontPage", className)) { return true; }
  if(!strcmp("RichTextMarginsPage", className)) { return true; }
  if(!strcmp("RichTextStylePage", className)) { return true; }
  if(!strcmp("RichTextSizePage", className)) { return true; }
  if(!strcmp("RichTextListStylePage", className)) { return true; }
  if(!strcmp("RichTextTabsPage", className)) { return true; }
  if(!strcmp("RichTextBulletsPage", className)) { return true; }
  if(!strcmp("HVScrolledWindow", className)) { return true; }
  if(!strcmp("EditableListBox", className)) { return true; }
  if(!strcmp("HScrolledWindow", className)) { return true; }
  if(!strcmp("VScrolledWindow", className)) { return true; }

  if(!strcmp("SymbolListCtrl", className)) { return true; }
  if(!strcmp("VListBox", className)) { return true; }

  if(!strcmp("VListBoxComboPopup", className)) { return true; }
  if(!strcmp("HtmlListBox", className)) { return true; }

  if(!strcmp("RichTextStyleListBox", className)) { return true; }

  if(!strcmp("RichTextStyleComboPopup", className)) { return true; }
  if(!strcmp("WindowWithItems<wxHtmlListBox,wxItemContainer>", className)) { return true; }

  if(!strcmp("SimpleHtmlListBox", className)) { return true; }
  if(!strcmp("RichTextFontListBox", className)) { return true; }
  if(!strcmp("PreviewControlBar", className)) { return true; }
  if(!strcmp("RearrangeCtrl", className)) { return true; }
  if(!strcmp("AuiMDIChildFrame", className)) { return true; }
  if(!strcmp("SplitterWindow", className)) { return true; }
  if(!strcmp("CompositeWindow<wxNavigationEnabled<wxWindow> >", className)) { return true; }

  if(!strcmp("TreeListCtrl", className)) { return true; }
  if(!strcmp("BannerWindow", className)) { return true; }
  if(!strcmp("NonOwnedWindowBase", className)) { return true; }

  if(!strcmp("NonOwnedWindow", className)) { return true; }

  if(!strcmp("NavigationEnabled<wxNonOwnedWindow>", className)) { return true; }

  if(!strcmp("TopLevelWindowBase", className)) { return true; }

  if(!strcmp("TopLevelWindowGTK", className)) { return true; }

  if(!strcmp("TopLevelWindow", className)) { return true; }

  if(!strcmp("NativeContainerWindow", className)) { return true; }
  if(!strcmp("FrameBase", className)) { return true; }

  if(!strcmp("Frame", className)) { return true; }

  if(!strcmp("PreviewFrame", className)) { return true; }
  if(!strcmp("AuiMDIParentFrame", className)) { return true; }
  if(!strcmp("DocChildFrameAny<wxFrame,wxFrame>", className)) { return true; }

  if(!strcmp("DocChildFrame", className)) { return true; }
  if(!strcmp("SplashScreen", className)) { return true; }
  if(!strcmp("MDIChildFrameBase", className)) { return true; }

  if(!strcmp("TDIChildFrame", className)) { return true; }

  if(!strcmp("MDIChildFrame", className)) { return true; }

  if(!strcmp("DocChildFrameAny<wxMDIChildFrame,wxMDIParentFrame>", className)) { return true; }

  if(!strcmp("DocMDIChildFrame", className)) { return true; }
  if(!strcmp("DocParentFrameAny<wxFrame>", className)) { return true; }

  if(!strcmp("DocParentFrame", className)) { return true; }
  if(!strcmp("MiniFrame", className)) { return true; }

  if(!strcmp("AuiFloatingFrame", className)) { return true; }
  if(!strcmp("HtmlHelpFrame", className)) { return true; }
  if(!strcmp("MDIParentFrameBase", className)) { return true; }

  if(!strcmp("MDIParentFrame", className)) { return true; }

  if(!strcmp("DocParentFrameAny<wxMDIParentFrame>", className)) { return true; }

  if(!strcmp("DocMDIParentFrame", className)) { return true; }
  if(!strcmp("DialogBase", className)) { return true; }

  if(!strcmp("Dialog", className)) { return true; }

  if(!strcmp("FontDialogBase", className)) { return true; }

  if(!strcmp("FontDialog", className)) { return true; }
  if(!strcmp("RearrangeDialog", className)) { return true; }
  if(!strcmp("DirDialogBase", className)) { return true; }

  if(!strcmp("DirDialog", className)) { return true; }
  if(!strcmp("WizardBase", className)) { return true; }

  if(!strcmp("Wizard", className)) { return true; }
  if(!strcmp("MessageDialogBase", className)) { return true; }

  if(!strcmp("MessageDialog", className)) { return true; }
  if(!strcmp("GenericMessageDialog", className)) { return true; }

  if(!strcmp("RichMessageDialogBase", className)) { return true; }

  if(!strcmp("GenericRichMessageDialog", className)) { return true; }

  if(!strcmp("RichMessageDialog", className)) { return true; }
  if(!strcmp("ColourDialog", className)) { return true; }
  if(!strcmp("HtmlHelpDialog", className)) { return true; }
  if(!strcmp("FindReplaceDialogBase", className)) { return true; }

  if(!strcmp("FindReplaceDialog", className)) { return true; }
  if(!strcmp("PrintAbortDialog", className)) { return true; }
  if(!strcmp("AnyChoiceDialog", className)) { return true; }

  if(!strcmp("SingleChoiceDialog", className)) { return true; }
  if(!strcmp("MultiChoiceDialog", className)) { return true; }
  if(!strcmp("TextEntryDialog", className)) { return true; }

  if(!strcmp("PasswordEntryDialog", className)) { return true; }
  if(!strcmp("RichTextStyleOrganiserDialog", className)) { return true; }
  if(!strcmp("PrintDialogBase", className)) { return true; }
  if(!strcmp("PageSetupDialogBase", className)) { return true; }
  if(!strcmp("SymbolPickerDialog", className)) { return true; }
  if(!strcmp("FileDialogBase", className)) { return true; }

  if(!strcmp("FileDialog", className)) { return true; }
  if(!strcmp("NumberEntryDialog", className)) { return true; }
  if(!strcmp("PropertySheetDialog", className)) { return true; }

  if(!strcmp("RichTextFormattingDialog", className)) { return true; }
  if(!strcmp("GenericProgressDialog", className)) { return true; }

  if(!strcmp("ProgressDialog", className)) { return true; }
  if(!strcmp("PopupWindowBase", className)) { return true; }

  if(!strcmp("PopupWindow", className)) { return true; }

  if(!strcmp("PopupTransientWindow", className)) { return true; }

  if(!strcmp("TipWindow", className)) { return true; }
  if(!strcmp("MDIClientWindowBase", className)) { return true; }

  if(!strcmp("MDIClientWindow", className)) { return true; }
  if(!strcmp("ControlBase", className)) { return true; }

  if(!strcmp("Control", className)) { return true; }

  if(!strcmp("DateTimePickerCtrlBase", className)) { return true; }

  if(!strcmp("DatePickerCtrlBase", className)) { return true; }

  if(!strcmp("CompositeWindow<wxDatePickerCtrlBase>", className)) { return true; }

  if(!strcmp("DatePickerCtrlGeneric", className)) { return true; }

  if(!strcmp("DatePickerCtrl", className)) { return true; }
  if(!strcmp("TimePickerCtrlBase", className)) { return true; }

  if(!strcmp("NavigationEnabled<wxTimePickerCtrlBase>", className)) { return true; }

  if(!strcmp("CompositeWindow<wxNavigationEnabled<wxTimePickerCtrlBase> >", className)) { return true; }

  if(!strcmp("TimePickerCtrlGeneric", className)) { return true; }

  if(!strcmp("TimePickerCtrl", className)) { return true; }
  if(!strcmp("GaugeBase", className)) { return true; }
  if(!strcmp("ComboCtrlBase", className)) { return true; }

  if(!strcmp("GenericComboCtrl", className)) { return true; }

  if(!strcmp("ComboCtrl", className)) { return true; }

  if(!strcmp("RichTextStyleComboCtrl", className)) { return true; }
  if(!strcmp("WindowWithItems<wxComboCtrl,wxItemContainer>", className)) { return true; }

  if(!strcmp("OwnerDrawnComboBox", className)) { return true; }
  if(!strcmp("RadioButton", className)) { return true; }
  if(!strcmp("NavigationEnabled<wxControl>", className)) { return true; }

  if(!strcmp("PickerBase", className)) { return true; }

  if(!strcmp("ColourPickerCtrl", className)) { return true; }
  if(!strcmp("FontPickerCtrl", className)) { return true; }
  if(!strcmp("FileDirPickerCtrlBase", className)) { return true; }

  if(!strcmp("DirPickerCtrl", className)) { return true; }
  if(!strcmp("FilePickerCtrl", className)) { return true; }
  if(!strcmp("CompositeWindow<wxNavigationEnabled<wxControl> >", className)) { return true; }

  if(!strcmp("SearchCtrlBaseBaseClass", className)) { return true; }

  if(!strcmp("SearchCtrlBase", className)) { return true; }

  if(!strcmp("SearchCtrl", className)) { return true; }
  if(!strcmp("InfoBarBase", className)) { return true; }

  if(!strcmp("InfoBarGeneric", className)) { return true; }

  if(!strcmp("InfoBar", className)) { return true; }
  if(!strcmp("BookCtrlBase", className)) { return true; }

  if(!strcmp("Toolbook", className)) { return true; }
  if(!strcmp("NavigationEnabled<wxBookCtrlBase>", className)) { return true; }

  if(!strcmp("AuiNotebook", className)) { return true; }

  if(!strcmp("AuiMDIClientWindow", className)) { return true; }
  if(!strcmp("Choicebook", className)) { return true; }
  if(!strcmp("NotebookBase", className)) { return true; }

  if(!strcmp("Notebook", className)) { return true; }
  if(!strcmp("Treebook", className)) { return true; }
  if(!strcmp("Listbook", className)) { return true; }
  if(!strcmp("TextCtrlBase", className)) { return true; }

  if(!strcmp("TextCtrl", className)) { return true; }
  if(!strcmp("AnimationCtrlBase", className)) { return true; }

  if(!strcmp("AnimationCtrl", className)) { return true; }
  if(!strcmp("StaticBitmapBase", className)) { return true; }

  if(!strcmp("StaticBitmap", className)) { return true; }
  if(!strcmp("RichTextCtrl", className)) { return true; }
  if(!strcmp("AnyButtonBase", className)) { return true; }

  if(!strcmp("AnyButton", className)) { return true; }

  if(!strcmp("ToggleButtonBase", className)) { return true; }

  if(!strcmp("ToggleButton", className)) { return true; }

  if(!strcmp("BitmapToggleButton", className)) { return true; }
  if(!strcmp("ButtonBase", className)) { return true; }

  if(!strcmp("Button", className)) { return true; }

  if(!strcmp("BitmapButtonBase", className)) { return true; }

  if(!strcmp("BitmapButton", className)) { return true; }

  if(!strcmp("ContextHelpButton", className)) { return true; }
  if(!strcmp("GenericFileDirButton", className)) { return true; }

  if(!strcmp("GenericFileButton", className)) { return true; }

  if(!strcmp("FileButton", className)) { return true; }
  if(!strcmp("GenericDirButton", className)) { return true; }

  if(!strcmp("DirButton", className)) { return true; }
  if(!strcmp("FontButton", className)) { return true; }
  if(!strcmp("CommandLinkButtonBase", className)) { return true; }

  if(!strcmp("GenericCommandLinkButton", className)) { return true; }

  if(!strcmp("CommandLinkButton", className)) { return true; }
  if(!strcmp("ColourButton", className)) { return true; }
  if(!strcmp("StaticTextBase", className)) { return true; }

  if(!strcmp("StaticText", className)) { return true; }
  if(!strcmp("StatusBarBase", className)) { return true; }

  if(!strcmp("StatusBar", className)) { return true; }
  if(!strcmp("WindowWithItems<wxControl,wxItemContainer>", className)) { return true; }

  if(!strcmp("ControlWithItemsBase", className)) { return true; }

  if(!strcmp("ControlWithItems", className)) { return true; }

  if(!strcmp("ChoiceBase", className)) { return true; }

  if(!strcmp("Choice", className)) { return true; }

  if(!strcmp("ComboBox", className)) { return true; }

  if(!strcmp("BitmapComboBox", className)) { return true; }
  if(!strcmp("DirFilterListCtrl", className)) { return true; }
  if(!strcmp("ListBoxBase", className)) { return true; }

  if(!strcmp("ListBox", className)) { return true; }

  if(!strcmp("CheckListBoxBase", className)) { return true; }
  if(!strcmp("CheckListBox", className)) { return true; }

  if(!strcmp("RearrangeList", className)) { return true; }
  if(!strcmp("ToolBarBase", className)) { return true; }

  if(!strcmp("ToolBar", className)) { return true; }
  if(!strcmp("SpinButtonBase", className)) { return true; }

  if(!strcmp("SpinButton", className)) { return true; }
  if(!strcmp("DataViewCtrlBase", className)) { return true; }

  if(!strcmp("DataViewCtrl", className)) { return true; }

  if(!strcmp("DataViewListCtrl", className)) { return true; }
  if(!strcmp("DataViewTreeCtrl", className)) { return true; }
  if(!strcmp("HeaderCtrlBase", className)) { return true; }

  if(!strcmp("HeaderCtrl", className)) { return true; }

  if(!strcmp("HeaderCtrlSimple", className)) { return true; }
  if(!strcmp("SliderBase", className)) { return true; }

  if(!strcmp("Slider", className)) { return true; }
  if(!strcmp("CheckBoxBase", className)) { return true; }

  if(!strcmp("CheckBox", className)) { return true; }
  if(!strcmp("StaticBoxBase", className)) { return true; }

  if(!strcmp("StaticBox", className)) { return true; }
  if(!strcmp("CollapsiblePaneBase", className)) { return true; }

  if(!strcmp("CollapsiblePane", className)) { return true; }
  if(!strcmp("HyperlinkCtrlBase", className)) { return true; }

  if(!strcmp("GenericHyperlinkCtrl", className)) { return true; }

  if(!strcmp("HyperlinkCtrl", className)) { return true; }
  if(!strcmp("RadioBox", className)) { return true; }
  if(!strcmp("StyledTextCtrl", className)) { return true; }
  if(!strcmp("RichTextStyleListCtrl", className)) { return true; }
  if(!strcmp("ScrollBarBase", className)) { return true; }

  if(!strcmp("ScrollBar", className)) { return true; }
  if(!strcmp("TreeCtrlBase", className)) { return true; }

  if(!strcmp("GenericTreeCtrl", className)) { return true; }

  if(!strcmp("TreeCtrl", className)) { return true; }
  if(!strcmp("GenericListCtrl", className)) { return true; }

  if(!strcmp("ListCtrl", className)) { return true; }

  if(!strcmp("ListView", className)) { return true; }
  if(!strcmp("SpinCtrlBase", className)) { return true; }

  if(!strcmp("SpinCtrlGTKBase", className)) { return true; }

  if(!strcmp("SpinCtrl", className)) { return true; }
  if(!strcmp("SpinCtrlDouble", className)) { return true; }
  if(!strcmp("Gauge", className)) { return true; }
  if(!strcmp("GtkFileCtrl", className)) { return true; }
  if(!strcmp("AuiToolBar", className)) { return true; }
  if(!strcmp("CalendarCtrlBase", className)) { return true; }

  if(!strcmp("GtkCalendarCtrl", className)) { return true; }
  if(!strcmp("GenericDirCtrl", className)) { return true; }
  if(!strcmp("AuiTabCtrl", className)) { return true; }
  if(!strcmp("StaticLineBase", className)) { return true; }

  if(!strcmp("StaticLine", className)) { return true; }
  if(!strcmp("RichTextColourSwatchCtrl", className)) { return true; }
  if(!strcmp("SplashScreenWindow", className)) { return true; }
  if(!strcmp("HtmlHelpWindow", className)) { return true; }
  if(!strcmp("MenuBarBase", className)) { return true; }

  if(!strcmp("MenuBar", className)) { return true; }
  if(!strcmp("SashWindow", className)) { return true; }

  if(!strcmp("SashLayoutWindow", className)) { return true; }
  if(!strcmp("MenuBase", className)) { return true; }

  if(!strcmp("Menu", className)) { return true; }
  if(!strcmp("MouseEventsManager", className)) { return true; }
  if(!strcmp("TaskBarIconBase", className)) { return true; }

  if(!strcmp("TaskBarIcon", className)) { return true; }
  if(!strcmp("Timer", className)) { return true; }

  if(!strcmp("CaretTimer", className)) { return true; }
  if(!strcmp("DocManager", className)) { return true; }
  if(!strcmp("AppConsoleBase", className)) { return true; }

  if(!strcmp("AppConsole", className)) { return true; }

  if(!strcmp("AppBase", className)) { return true; }

  if(!strcmp("App", className)) { return true; }
  if(!strcmp("ArchiveEntry", className)) { return true; }

  if(!strcmp("ZipEntry", className)) { return true; }
  if(!strcmp("TarEntry", className)) { return true; }
  if(!strcmp("XmlResource", className)) { return true; }
  if(!strcmp("RegionIterator", className)) { return true; }
  if(!strcmp("PrintNativeDataBase", className)) { return true; }
  if(!strcmp("ConnectionBase", className)) { return true; }

  if(!strcmp("TCPConnection", className)) { return true; }
  if(!strcmp("DataViewIconText", className)) { return true; }
  if(!strcmp("ClientBase", className)) { return true; }

  if(!strcmp("TCPClient", className)) { return true; }
  if(!strcmp("HashTableBase", className)) { return true; }

  if(!strcmp("HashTable", className)) { return true; }
  if(!strcmp("SystemOptions", className)) { return true; }
  if(!strcmp("PrintData", className)) { return true; }
  if(!strcmp("PageSetupDialog", className)) { return true; }
  if(!strcmp("BusyInfo", className)) { return true; }
  if(!strcmp("StringTokenizer", className)) { return true; }
  if(!strcmp("RichTextProperties", className)) { return true; }
  if(!strcmp("FileHistoryBase", className)) { return true; }

  if(!strcmp("FileHistory", className)) { return true; }
  if(!strcmp("RichTextStyleDefinition", className)) { return true; }

  if(!strcmp("RichTextCharacterStyleDefinition", className)) { return true; }
  if(!strcmp("RichTextParagraphStyleDefinition", className)) { return true; }

  if(!strcmp("RichTextListStyleDefinition", className)) { return true; }
  if(!strcmp("RichTextBoxStyleDefinition", className)) { return true; }
  if(!strcmp("ServerBase", className)) { return true; }

  if(!strcmp("TCPServer", className)) { return true; }
  if(!strcmp("GDIObject", className)) { return true; }

  if(!strcmp("BitmapBase", className)) { return true; }

  if(!strcmp("Bitmap", className)) { return true; }

  if(!strcmp("Icon", className)) { return true; }
  if(!strcmp("IconBundle", className)) { return true; }
  if(!strcmp("PaletteBase", className)) { return true; }

  if(!strcmp("Palette", className)) { return true; }
  if(!strcmp("BrushBase", className)) { return true; }

  if(!strcmp("Brush", className)) { return true; }
  if(!strcmp("Cursor", className)) { return true; }
  if(!strcmp("ColourBase", className)) { return true; }

  if(!strcmp("Colour", className)) { return true; }
  if(!strcmp("PenBase", className)) { return true; }

  if(!strcmp("Pen", className)) { return true; }
  if(!strcmp("RegionBase", className)) { return true; }

  if(!strcmp("Region", className)) { return true; }
  if(!strcmp("FontBase", className)) { return true; }

  if(!strcmp("Font", className)) { return true; }
  if(!strcmp("PrinterBase", className)) { return true; }

  if(!strcmp("PostScriptPrinter", className)) { return true; }
  if(!strcmp("Printer", className)) { return true; }
  if(!strcmp("RichTextFormattingDialogFactory", className)) { return true; }
  if(!strcmp("DC", className)) { return true; }

  if(!strcmp("GCDC", className)) { return true; }
  if(!strcmp("PostScriptDC", className)) { return true; }
  if(!strcmp("PrinterDC", className)) { return true; }
  if(!strcmp("MemoryDC", className)) { return true; }

  if(!strcmp("BufferedDC", className)) { return true; }

  if(!strcmp("BufferedPaintDC", className)) { return true; }
  if(!strcmp("WindowDC", className)) { return true; }

  if(!strcmp("ClientDC", className)) { return true; }

  if(!strcmp("PaintDC", className)) { return true; }

  if(!strcmp("AutoBufferedPaintDC", className)) { return true; }
  if(!strcmp("ScreenDC", className)) { return true; }
  if(!strcmp("SVGFileDC", className)) { return true; }
  if(!strcmp("MirrorDC", className)) { return true; }
  if(!strcmp("ProtoInfo", className)) { return true; }
  if(!strcmp("DCImpl", className)) { return true; }

  if(!strcmp("GCDCImpl", className)) { return true; }
  if(!strcmp("PostScriptDCImpl", className)) { return true; }
  if(!strcmp("MirrorDCImpl", className)) { return true; }
  if(!strcmp("SVGFileDCImpl", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxObject::_init(const v8::Arguments& args) {
  v8::HandleScope scope;


  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxObject).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxObject::_GetClassInfo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxObject* self = unwrap<wxNode_wxObject>(args.This());

  /*
   * id: _31160
   */
  if(args.Length() == 0) {
    
    const wxClassInfo* returnVal = self->GetClassInfo();

    return scope.Close(wxNode_wxClassInfo::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxObject::GetClassInfo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxObject::_IsKindOf(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxObject* self = unwrap<wxNode_wxObject>(args.This());

  /*
   * id: _31165
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxClassInfo::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxClassInfo* info = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxClassInfo>(args[0]->ToObject()); /* type: _61193 * */

    bool returnVal = self->IsKindOf(info);

    return scope.Close(v8::Boolean::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxObject::IsKindOf).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxObject::_GetRefData(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxObject* self = unwrap<wxNode_wxObject>(args.This());

  /*
   * id: _31166
   */
  if(args.Length() == 0) {
    
    wxRefCounter* returnVal = self->GetRefData();

    return scope.Close(wxNode_wxRefCounter::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxObject::GetRefData).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxObject::_SetRefData(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxObject* self = unwrap<wxNode_wxObject>(args.This());

  /*
   * id: _31167
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxRefCounter::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxRefCounter* data = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRefCounter>(args[0]->ToObject()); /* type: _58193 * */

    self->SetRefData(data);

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxObject::SetRefData).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxObject::_Ref(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxObject* self = unwrap<wxNode_wxObject>(args.This());

  /*
   * id: _31168
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxObject::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxObject* clone = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[0]->ToObject()); /* type: _61757  */

    self->Ref(*clone);

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxObject::Ref).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxObject::_UnRef(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxObject* self = unwrap<wxNode_wxObject>(args.This());

  /*
   * id: _31169
   */
  if(args.Length() == 0) {
    
    self->UnRef();

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxObject::UnRef).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxObject::_UnShare(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxObject* self = unwrap<wxNode_wxObject>(args.This());

  /*
   * id: _31170
   */
  if(args.Length() == 0) {
    
    self->UnShare();

    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxObject::UnShare).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
/*static*/ v8::Handle<v8::Value> wxNode_wxObject::_IsSameAs(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxObject* self = unwrap<wxNode_wxObject>(args.This());

  /*
   * id: _31171
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxObject::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxObject* o = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[0]->ToObject()); /* type: _61757  */

    bool returnVal = self->IsSameAs(*o);

    return scope.Close(v8::Boolean::New(returnVal));
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxObject::IsSameAs).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

