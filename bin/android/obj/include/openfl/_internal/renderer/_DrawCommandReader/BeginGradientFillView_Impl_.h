#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_BeginGradientFillView_Impl_
#define INCLUDED_openfl__internal_renderer__DrawCommandReader_BeginGradientFillView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandReader)
HX_DECLARE_CLASS4(openfl,_internal,renderer,_DrawCommandReader,BeginGradientFillView_Impl_)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES  BeginGradientFillView_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BeginGradientFillView_Impl__obj OBJ_;
		BeginGradientFillView_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer._DrawCommandReader.BeginGradientFillView_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BeginGradientFillView_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BeginGradientFillView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("BeginGradientFillView_Impl_","\x21","\xec","\x2f","\xff"); }

		static ::openfl::_internal::renderer::DrawCommandReader _new( ::openfl::_internal::renderer::DrawCommandReader d);
		static Dynamic _new_dyn();

		static Dynamic get_type( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_type_dyn();

		static Array< int > get_colors( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_colors_dyn();

		static Array< Float > get_alphas( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_alphas_dyn();

		static Array< int > get_ratios( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_ratios_dyn();

		static ::openfl::geom::Matrix get_matrix( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_matrix_dyn();

		static Dynamic get_spreadMethod( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_spreadMethod_dyn();

		static Dynamic get_interpolationMethod( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_interpolationMethod_dyn();

		static Float get_focalPointRatio( ::openfl::_internal::renderer::DrawCommandReader this1);
		static Dynamic get_focalPointRatio_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl__internal_renderer__DrawCommandReader_BeginGradientFillView_Impl_ */ 
