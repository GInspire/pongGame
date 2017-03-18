#ifndef INCLUDED_lime_app_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void
#define INCLUDED_lime_app_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void)
namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj OBJ_;
		Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.app.Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void","\x97","\x4f","\xc9","\x13"); }

		bool canceled;
		Array< bool > __repeat;
		Array< int > __priorities;
		virtual Void add( Dynamic listener,hx::Null< bool >  once,hx::Null< int >  priority);
		Dynamic add_dyn();

		virtual Void cancel( );
		Dynamic cancel_dyn();

		virtual bool has( Dynamic listener);
		Dynamic has_dyn();

		virtual Void remove( Dynamic listener);
		Dynamic remove_dyn();

		cpp::ArrayBase __listeners;
		virtual Void dispatch( int a,int a1);
		Dynamic dispatch_dyn();

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void */ 