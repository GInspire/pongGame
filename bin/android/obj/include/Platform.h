#ifndef INCLUDED_Platform
#define INCLUDED_Platform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(Platform)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  Platform_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Platform_obj OBJ_;
		Platform_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Platform")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Platform_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Platform_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Platform","\xd3","\x6e","\xab","\x41"); }

};


#endif /* INCLUDED_Platform */ 
