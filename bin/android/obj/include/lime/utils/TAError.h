#ifndef INCLUDED_lime_utils_TAError
#define INCLUDED_lime_utils_TAError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,utils,TAError)
namespace lime{
namespace utils{


class TAError_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TAError_obj OBJ_;

	public:
		TAError_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("lime.utils.TAError","\xc5","\x58","\x89","\x62"); }
		::String __ToString() const { return HX_HCSTRING("TAError.","\xb3","\x90","\x7d","\xd9") + tag; }

		static ::lime::utils::TAError RangeError;
		static inline ::lime::utils::TAError RangeError_dyn() { return RangeError; }
};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_TAError */ 
