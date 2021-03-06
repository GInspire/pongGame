#ifndef INCLUDED_openfl_display_Window
#define INCLUDED_openfl_display_Window

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,ui,Window)
HX_DECLARE_CLASS2(openfl,display,Window)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Window_obj : public ::lime::ui::Window_obj{
	public:
		typedef ::lime::ui::Window_obj super;
		typedef Window_obj OBJ_;
		Window_obj();
		Void __construct(Dynamic config);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.Window")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Window_obj > __new(Dynamic config);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Window_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Window","\x10","\x08","\x21","\x87"); }

		virtual Void create( ::lime::app::Application application);

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Window */ 
