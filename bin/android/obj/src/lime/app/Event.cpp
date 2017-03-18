#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_lime_app_Event
#include <lime/app/Event.h>
#endif
namespace lime{
namespace app{

Void Event_obj::__construct()
{
HX_STACK_FRAME("lime.app.Event","new",0xaf38c4c6,"lime.app.Event.new","lime/app/Event.hx",26,0xbda45bec)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(29)
	this->canceled = false;
	HX_STACK_LINE(30)
	this->__listeners = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(31)
	this->__priorities = Array_obj< int >::__new();
	HX_STACK_LINE(32)
	this->__repeat = Array_obj< bool >::__new();
}
;
	return null();
}

//Event_obj::~Event_obj() { }

Dynamic Event_obj::__CreateEmpty() { return  new Event_obj; }
hx::ObjectPtr< Event_obj > Event_obj::__new()
{  hx::ObjectPtr< Event_obj > _result_ = new Event_obj();
	_result_->__construct();
	return _result_;}

Dynamic Event_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Event_obj > _result_ = new Event_obj();
	_result_->__construct();
	return _result_;}

Void Event_obj::add( Dynamic listener,hx::Null< bool >  __o_once,hx::Null< int >  __o_priority){
bool once = __o_once.Default(false);
int priority = __o_priority.Default(0);
	HX_STACK_FRAME("lime.app.Event","add",0xaf2ee687,"lime.app.Event.add","lime/app/Event.hx",38,0xbda45bec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(once,"once")
	HX_STACK_ARG(priority,"priority")
{
		HX_STACK_LINE(41)
		{
			HX_STACK_LINE(41)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(41)
			int tmp = this->__priorities->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(41)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(41)
			while((true)){
				HX_STACK_LINE(41)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(41)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(41)
				if ((tmp2)){
					HX_STACK_LINE(41)
					break;
				}
				HX_STACK_LINE(41)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(41)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(43)
				int tmp4 = priority;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(43)
				int tmp5 = this->__priorities->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(43)
				bool tmp6 = (tmp4 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(43)
				if ((tmp6)){
					HX_STACK_LINE(45)
					int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(45)
					Dynamic tmp8 = listener;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(45)
					this->__listeners->__Field(HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"), hx::paccDynamic )(tmp7,tmp8);
					HX_STACK_LINE(46)
					int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(46)
					int tmp10 = priority;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(46)
					this->__priorities->insert(tmp9,tmp10);
					HX_STACK_LINE(47)
					int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(47)
					bool tmp12 = once;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(47)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(47)
					this->__repeat->insert(tmp11,tmp13);
					HX_STACK_LINE(48)
					return null();
				}
			}
		}
		HX_STACK_LINE(54)
		Dynamic tmp = listener;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		this->__listeners->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(55)
		int tmp1 = priority;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		this->__priorities->push(tmp1);
		HX_STACK_LINE(56)
		bool tmp2 = once;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		this->__repeat->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Event_obj,add,(void))

Void Event_obj::cancel( ){
{
		HX_STACK_FRAME("lime.app.Event","cancel",0xfb4b3cd4,"lime.app.Event.cancel","lime/app/Event.hx",211,0xbda45bec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(211)
		this->canceled = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,cancel,(void))

bool Event_obj::has( Dynamic listener){
	HX_STACK_FRAME("lime.app.Event","has",0xaf3433c0,"lime.app.Event.has","lime/app/Event.hx",247,0xbda45bec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(250)
	{
		HX_STACK_LINE(250)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(250)
		cpp::ArrayBase _g1 = this->__listeners;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(250)
		while((true)){
			HX_STACK_LINE(250)
			bool tmp = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(250)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(250)
			if ((tmp1)){
				HX_STACK_LINE(250)
				break;
			}
			HX_STACK_LINE(250)
			Dynamic tmp2 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(250)
			Dynamic l = tmp2;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(250)
			++(_g);
			HX_STACK_LINE(252)
			Dynamic tmp3 = l;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(252)
			Dynamic tmp4 = listener;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(252)
			bool tmp5 = ::Reflect_obj::compareMethods(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(252)
			if ((tmp5)){
				HX_STACK_LINE(252)
				return true;
			}
		}
	}
	HX_STACK_LINE(257)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Event_obj,has,return )

Void Event_obj::remove( Dynamic listener){
{
		HX_STACK_FRAME("lime.app.Event","remove",0x479feb9e,"lime.app.Event.remove","lime/app/Event.hx",262,0xbda45bec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(265)
		int tmp = this->__listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(265)
		int i = tmp;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(267)
		while((true)){
			HX_STACK_LINE(267)
			int tmp1 = --(i);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(267)
			bool tmp2 = (tmp1 >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(267)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(267)
			if ((tmp3)){
				HX_STACK_LINE(267)
				break;
			}
			HX_STACK_LINE(269)
			Dynamic tmp4 = this->__listeners->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(269)
			Dynamic tmp5 = listener;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(269)
			bool tmp6 = ::Reflect_obj::compareMethods(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(269)
			if ((tmp6)){
				HX_STACK_LINE(271)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(271)
				this->__listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp7,(int)1);
				HX_STACK_LINE(272)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(272)
				this->__priorities->splice(tmp8,(int)1);
				HX_STACK_LINE(273)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(273)
				this->__repeat->splice(tmp9,(int)1);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Event_obj,remove,(void))


Event_obj::Event_obj()
{
}

void Event_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Event);
	HX_MARK_MEMBER_NAME(canceled,"canceled");
	HX_MARK_MEMBER_NAME(__listeners,"__listeners");
	HX_MARK_MEMBER_NAME(__repeat,"__repeat");
	HX_MARK_MEMBER_NAME(__priorities,"__priorities");
	HX_MARK_MEMBER_NAME(dispatch,"dispatch");
	HX_MARK_END_CLASS();
}

void Event_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(canceled,"canceled");
	HX_VISIT_MEMBER_NAME(__listeners,"__listeners");
	HX_VISIT_MEMBER_NAME(__repeat,"__repeat");
	HX_VISIT_MEMBER_NAME(__priorities,"__priorities");
	HX_VISIT_MEMBER_NAME(dispatch,"dispatch");
}

Dynamic Event_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canceled") ) { return canceled; }
		if (HX_FIELD_EQ(inName,"__repeat") ) { return __repeat; }
		if (HX_FIELD_EQ(inName,"dispatch") ) { return dispatch; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__listeners") ) { return __listeners; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__priorities") ) { return __priorities; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Event_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"canceled") ) { canceled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__repeat") ) { __repeat=inValue.Cast< Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dispatch") ) { dispatch=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__listeners") ) { __listeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__priorities") ) { __priorities=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Event_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("canceled","\x59","\x18","\x26","\x1f"));
	outFields->push(HX_HCSTRING("__listeners","\x5f","\xae","\xba","\x21"));
	outFields->push(HX_HCSTRING("__repeat","\x7b","\x02","\xac","\xae"));
	outFields->push(HX_HCSTRING("__priorities","\xe2","\xcb","\xe6","\x1c"));
	outFields->push(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Event_obj,canceled),HX_HCSTRING("canceled","\x59","\x18","\x26","\x1f")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Event_obj,__listeners),HX_HCSTRING("__listeners","\x5f","\xae","\xba","\x21")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(Event_obj,__repeat),HX_HCSTRING("__repeat","\x7b","\x02","\xac","\xae")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Event_obj,__priorities),HX_HCSTRING("__priorities","\xe2","\xcb","\xe6","\x1c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Event_obj,dispatch),HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("canceled","\x59","\x18","\x26","\x1f"),
	HX_HCSTRING("__listeners","\x5f","\xae","\xba","\x21"),
	HX_HCSTRING("__repeat","\x7b","\x02","\xac","\xae"),
	HX_HCSTRING("__priorities","\xe2","\xcb","\xe6","\x1c"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8"),
	HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Event_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Event_obj::__mClass,"__mClass");
};

#endif

hx::Class Event_obj::__mClass;

void Event_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app.Event","\xd4","\xa9","\x01","\xb3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Event_obj >;
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

} // end namespace lime
} // end namespace app
