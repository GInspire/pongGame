#ifndef INCLUDED_Ball
#define INCLUDED_Ball

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(Ball)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  Ball_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Ball_obj OBJ_;
		Ball_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Ball")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Ball_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Ball_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Ball","\x1f","\x0e","\xea","\x2b"); }

};


#endif /* INCLUDED_Ball */ 
