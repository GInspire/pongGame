#include <hxcpp.h>

#ifndef INCLUDED_GameState
#include <GameState.h>
#endif

::GameState GameState_obj::Paused;

::GameState GameState_obj::Playing;

HX_DEFINE_CREATE_ENUM(GameState_obj)

int GameState_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Paused","\xce","\xb4","\x18","\x24")) return 0;
	if (inName==HX_HCSTRING("Playing","\x4e","\x37","\x69","\x57")) return 1;
	return super::__FindIndex(inName);
}

int GameState_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Paused","\xce","\xb4","\x18","\x24")) return 0;
	if (inName==HX_HCSTRING("Playing","\x4e","\x37","\x69","\x57")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic GameState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Paused","\xce","\xb4","\x18","\x24")) return Paused;
	if (inName==HX_HCSTRING("Playing","\x4e","\x37","\x69","\x57")) return Playing;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Paused","\xce","\xb4","\x18","\x24"),
	HX_HCSTRING("Playing","\x4e","\x37","\x69","\x57"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameState_obj::Paused,"Paused");
	HX_MARK_MEMBER_NAME(GameState_obj::Playing,"Playing");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GameState_obj::Paused,"Paused");
	HX_VISIT_MEMBER_NAME(GameState_obj::Playing,"Playing");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class GameState_obj::__mClass;

Dynamic __Create_GameState_obj() { return new GameState_obj; }

void GameState_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("GameState","\x9f","\x44","\xf9","\x5a"), hx::TCanCast< GameState_obj >,sStaticFields,sMemberFields,
	&__Create_GameState_obj, &__Create,
	&super::__SGetClass(), &CreateGameState_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void GameState_obj::__boot()
{
hx::Static(Paused) = hx::CreateEnum< GameState_obj >(HX_HCSTRING("Paused","\xce","\xb4","\x18","\x24"),0);
hx::Static(Playing) = hx::CreateEnum< GameState_obj >(HX_HCSTRING("Playing","\x4e","\x37","\x69","\x57"),1);
}


