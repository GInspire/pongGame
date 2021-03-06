#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__GradientType_GradientType_Impl_
#include <openfl/display/_GradientType/GradientType_Impl_.h>
#endif
namespace openfl{
namespace display{
namespace _GradientType{

Void GradientType_Impl__obj::__construct()
{
	return null();
}

//GradientType_Impl__obj::~GradientType_Impl__obj() { }

Dynamic GradientType_Impl__obj::__CreateEmpty() { return  new GradientType_Impl__obj; }
hx::ObjectPtr< GradientType_Impl__obj > GradientType_Impl__obj::__new()
{  hx::ObjectPtr< GradientType_Impl__obj > _result_ = new GradientType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic GradientType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GradientType_Impl__obj > _result_ = new GradientType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic GradientType_Impl__obj::LINEAR;

Dynamic GradientType_Impl__obj::RADIAL;

Dynamic GradientType_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display._GradientType.GradientType_Impl_","fromString",0x32cb6550,"openfl.display._GradientType.GradientType_Impl_.fromString","openfl/display/GradientType.hx",9,0xadf6e848)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(11)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("linear","\xe5","\x51","\xa0","\xec"))){
		HX_STACK_LINE(13)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("radial","\xdf","\xbe","\xf6","\xb0"))){
		HX_STACK_LINE(14)
		tmp1 = ((Dynamic)((int)1));
	}
	else  {
		HX_STACK_LINE(15)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(11)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GradientType_Impl__obj,fromString,return )

::String GradientType_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display._GradientType.GradientType_Impl_","toString",0xdcddd0e1,"openfl.display._GradientType.GradientType_Impl_.toString","openfl/display/GradientType.hx",21,0xadf6e848)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(23)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(25)
			tmp1 = HX_HCSTRING("linear","\xe5","\x51","\xa0","\xec");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(26)
			tmp1 = HX_HCSTRING("radial","\xdf","\xbe","\xf6","\xb0");
		}
		;break;
		default: {
			HX_STACK_LINE(27)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(23)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GradientType_Impl__obj,toString,return )


GradientType_Impl__obj::GradientType_Impl__obj()
{
}

bool GradientType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &GradientType_Impl__obj::LINEAR,HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GradientType_Impl__obj::RADIAL,HX_HCSTRING("RADIAL","\xdf","\x6a","\x79","\x63")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GradientType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GradientType_Impl__obj::LINEAR,"LINEAR");
	HX_MARK_MEMBER_NAME(GradientType_Impl__obj::RADIAL,"RADIAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GradientType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GradientType_Impl__obj::LINEAR,"LINEAR");
	HX_VISIT_MEMBER_NAME(GradientType_Impl__obj::RADIAL,"RADIAL");
};

#endif

hx::Class GradientType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f"),
	HX_HCSTRING("RADIAL","\xdf","\x6a","\x79","\x63"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void GradientType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._GradientType.GradientType_Impl_","\xd9","\x3a","\xfa","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GradientType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GradientType_Impl__obj >;
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

void GradientType_Impl__obj::__boot()
{
	LINEAR= ((Dynamic)((int)0));
	RADIAL= ((Dynamic)((int)1));
}

} // end namespace openfl
} // end namespace display
} // end namespace _GradientType
