#include <hxcpp.h>

#ifndef INCLUDED_Platform
#include <Platform.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void Platform_obj::__construct()
{
HX_STACK_FRAME("Platform","new",0xa3427545,"Platform.new","Platform.hx",8,0x1c4899cb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	super::__construct();
	HX_STACK_LINE(10)
	::openfl::display::Graphics tmp = this->get_graphics();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	tmp->beginFill((int)16777215,null());
	HX_STACK_LINE(11)
	::openfl::display::Graphics tmp1 = this->get_graphics();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11)
	tmp1->drawRect((int)0,(int)0,(int)100,(int)350);
	HX_STACK_LINE(12)
	::openfl::display::Graphics tmp2 = this->get_graphics();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(12)
	tmp2->endFill();
}
;
	return null();
}

//Platform_obj::~Platform_obj() { }

Dynamic Platform_obj::__CreateEmpty() { return  new Platform_obj; }
hx::ObjectPtr< Platform_obj > Platform_obj::__new()
{  hx::ObjectPtr< Platform_obj > _result_ = new Platform_obj();
	_result_->__construct();
	return _result_;}

Dynamic Platform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Platform_obj > _result_ = new Platform_obj();
	_result_->__construct();
	return _result_;}


Platform_obj::Platform_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Platform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Platform_obj::__mClass,"__mClass");
};

#endif

hx::Class Platform_obj::__mClass;

void Platform_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Platform","\xd3","\x6e","\xab","\x41");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Platform_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

