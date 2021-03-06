#ifndef INCLUDED_lime_app_Event_Int_Int_Void
#define INCLUDED_lime_app_Event_Int_Int_Void

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,Event_Int_Int_Void)
namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  Event_Int_Int_Void_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Event_Int_Int_Void_obj OBJ_;
		Event_Int_Int_Void_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.app.Event_Int_Int_Void")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Event_Int_Int_Void_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Event_Int_Int_Void_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Event_Int_Int_Void","\x79","\x7f","\x25","\x08"); }

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

#endif /* INCLUDED_lime_app_Event_Int_Int_Void */ 
