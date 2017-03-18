#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Ball
#include <Ball.h>
#endif
#ifndef INCLUDED_GameState
#include <GameState.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Platform
#include <Platform.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_TouchEvent
#include <openfl/events/TouchEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",24,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(42)
	this->mySprite = ::openfl::display::Sprite_obj::__new();
	HX_STACK_LINE(238)
	super::__construct();
	HX_STACK_LINE(239)
	Dynamic tmp = this->added_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	this->addEventListener(HX_HCSTRING("addedToStage","\x63","\x22","\x55","\x0c"),tmp,null(),null(),null());
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Void Main_obj::resize( Dynamic e){
{
		HX_STACK_FRAME("Main","resize",0x39257969,"Main.resize","Main.hx",47,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(48)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		if ((tmp1)){
			HX_STACK_LINE(48)
			this->init();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,resize,(void))

Void Main_obj::init( ){
{
		HX_STACK_FRAME("Main","init",0xea732345,"Main.init","Main.hx",53,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(54)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		if ((tmp)){
			HX_STACK_LINE(54)
			return null();
		}
		HX_STACK_LINE(55)
		this->inited = true;
		HX_STACK_LINE(57)
		::Platform tmp1 = ::Platform_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(57)
		this->platform1 = tmp1;
		HX_STACK_LINE(58)
		::Platform tmp2 = this->platform1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		tmp2->set_x((int)5);
		HX_STACK_LINE(59)
		::Platform tmp3 = this->platform1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		tmp3->set_y((int)200);
		HX_STACK_LINE(60)
		::Platform tmp4 = this->platform1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		this->addChild(tmp4);
		HX_STACK_LINE(62)
		::Platform tmp5 = ::Platform_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(62)
		this->platform2 = tmp5;
		HX_STACK_LINE(63)
		::Platform tmp6 = this->platform2;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(63)
		tmp6->set_x((int)1800);
		HX_STACK_LINE(64)
		::Platform tmp7 = this->platform2;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(64)
		tmp7->set_y((int)200);
		HX_STACK_LINE(65)
		::Platform tmp8 = this->platform2;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(65)
		this->addChild(tmp8);
		HX_STACK_LINE(67)
		::Ball tmp9 = ::Ball_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(67)
		this->ball = tmp9;
		HX_STACK_LINE(68)
		::Ball tmp10 = this->ball;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(68)
		tmp10->set_x((int)900);
		HX_STACK_LINE(69)
		::Ball tmp11 = this->ball;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(69)
		tmp11->set_y((int)200);
		HX_STACK_LINE(70)
		::Ball tmp12 = this->ball;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(70)
		this->addChild(tmp12);
		HX_STACK_LINE(72)
		::openfl::text::TextFormat tmp13 = ::openfl::text::TextFormat_obj::__new(HX_HCSTRING("Verdana","\xb3","\xc8","\x52","\x40"),(int)50,(int)12303291,true,null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(72)
		::openfl::text::TextFormat scoreFormat = tmp13;		HX_STACK_VAR(scoreFormat,"scoreFormat");
		HX_STACK_LINE(73)
		scoreFormat->align = ((Dynamic)((int)0));
		HX_STACK_LINE(75)
		::openfl::text::TextField tmp14 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(75)
		this->scoreField = tmp14;
		HX_STACK_LINE(76)
		::openfl::text::TextField tmp15 = this->scoreField;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(76)
		this->addChild(tmp15);
		HX_STACK_LINE(77)
		::openfl::text::TextField tmp16 = this->scoreField;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(77)
		tmp16->set_width((int)500);
		HX_STACK_LINE(78)
		::openfl::text::TextField tmp17 = this->scoreField;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(78)
		tmp17->set_x((int)700);
		HX_STACK_LINE(79)
		::openfl::text::TextField tmp18 = this->scoreField;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(79)
		tmp18->set_y((int)30);
		HX_STACK_LINE(80)
		::openfl::text::TextField tmp19 = this->scoreField;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(80)
		::openfl::text::TextFormat tmp20 = scoreFormat;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(80)
		tmp19->set_defaultTextFormat(tmp20);
		HX_STACK_LINE(81)
		::openfl::text::TextField tmp21 = this->scoreField;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(81)
		tmp21->set_selectable(false);
		HX_STACK_LINE(83)
		::openfl::text::TextFormat tmp22 = ::openfl::text::TextFormat_obj::__new(HX_HCSTRING("Verdana","\xb3","\xc8","\x52","\x40"),(int)50,(int)12303291,true,null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(83)
		::openfl::text::TextFormat messageFormat = tmp22;		HX_STACK_VAR(messageFormat,"messageFormat");
		HX_STACK_LINE(84)
		messageFormat->align = ((Dynamic)((int)0));
		HX_STACK_LINE(86)
		::openfl::text::TextField tmp23 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(86)
		this->messageField = tmp23;
		HX_STACK_LINE(87)
		::openfl::text::TextField tmp24 = this->messageField;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(87)
		this->addChild(tmp24);
		HX_STACK_LINE(88)
		::openfl::text::TextField tmp25 = this->messageField;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(88)
		tmp25->set_width((int)1500);
		HX_STACK_LINE(89)
		::openfl::text::TextField tmp26 = this->messageField;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(89)
		tmp26->set_y((int)800);
		HX_STACK_LINE(90)
		::openfl::text::TextField tmp27 = this->messageField;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(90)
		::openfl::text::TextFormat tmp28 = messageFormat;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(90)
		tmp27->set_defaultTextFormat(tmp28);
		HX_STACK_LINE(91)
		::openfl::text::TextField tmp29 = this->messageField;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(91)
		tmp29->set_selectable(false);
		HX_STACK_LINE(92)
		::openfl::text::TextField tmp30 = this->messageField;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(92)
		tmp30->set_text(HX_HCSTRING("TAP to start and Slide Up and Down to move your platform","\xc8","\x52","\xe4","\x5b"));
		HX_STACK_LINE(94)
		this->scorePlayer = (int)0;
		HX_STACK_LINE(95)
		this->scoreAI = (int)0;
		HX_STACK_LINE(96)
		this->touchMoveID = (int)0;
		HX_STACK_LINE(97)
		this->touchKeyUp = false;
		HX_STACK_LINE(98)
		this->touchKeyDown = false;
		HX_STACK_LINE(101)
		this->platformSpeed = (int)7;
		HX_STACK_LINE(102)
		this->ballSpeed = (int)7;
		HX_STACK_LINE(103)
		::openfl::geom::Point tmp31 = ::openfl::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(103)
		this->ballMovement = tmp31;
		HX_STACK_LINE(104)
		this->setGameState(::GameState_obj::Paused);
		HX_STACK_LINE(105)
		::openfl::display::Sprite tmp32 = this->mySprite;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(105)
		Dynamic tmp33 = this->touchDown_dyn();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(105)
		tmp32->addEventListener(HX_HCSTRING("touchBegin","\xea","\xcd","\xe6","\xa9"),tmp33,null(),null(),null());
		HX_STACK_LINE(107)
		::openfl::display::Sprite tmp34 = this->mySprite;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(107)
		Dynamic tmp35 = this->touchTap_dyn();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(107)
		tmp34->addEventListener(HX_HCSTRING("touchTap","\xe4","\x1b","\x15","\x00"),tmp35,null(),null(),null());
		HX_STACK_LINE(110)
		Dynamic tmp36 = this->everyFrame_dyn();		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(110)
		this->addEventListener(HX_HCSTRING("enterFrame","\xf5","\x03","\x50","\x02"),tmp36,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,init,(void))

Void Main_obj::setGameState( ::GameState state){
{
		HX_STACK_FRAME("Main","setGameState",0x0450c9f2,"Main.setGameState","Main.hx",113,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(114)
		this->currentGameState = state;
		HX_STACK_LINE(115)
		this->updateScore();
		HX_STACK_LINE(116)
		bool tmp = (state == ::GameState_obj::Paused);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		if ((tmp)){
			HX_STACK_LINE(117)
			::openfl::text::TextField tmp1 = this->messageField;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(117)
			tmp1->set_alpha((int)1);
		}
		else{
			HX_STACK_LINE(119)
			::openfl::text::TextField tmp1 = this->messageField;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(119)
			tmp1->set_alpha((int)0);
			HX_STACK_LINE(120)
			::Platform tmp2 = this->platform1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(120)
			tmp2->set_y((int)200);
			HX_STACK_LINE(121)
			::Platform tmp3 = this->platform2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(121)
			tmp3->set_y((int)200);
			HX_STACK_LINE(122)
			::Ball tmp4 = this->ball;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(122)
			tmp4->set_x((int)250);
			HX_STACK_LINE(123)
			::Ball tmp5 = this->ball;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(123)
			tmp5->set_y((int)250);
			HX_STACK_LINE(124)
			Float tmp6 = ::Math_obj::random();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(124)
			bool tmp7 = (tmp6 > ((Float).5));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(124)
			int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(124)
			if ((tmp7)){
				HX_STACK_LINE(124)
				tmp8 = (int)1;
			}
			else{
				HX_STACK_LINE(124)
				tmp8 = (int)-1;
			}
			HX_STACK_LINE(124)
			int direction = tmp8;		HX_STACK_VAR(direction,"direction");
			HX_STACK_LINE(125)
			Float tmp9 = ::Math_obj::random();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(125)
			Float tmp10 = ::Math_obj::PI;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(125)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(125)
			Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(125)
			Float tmp13 = (tmp12 - (int)45);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(125)
			Float randomAngle = tmp13;		HX_STACK_VAR(randomAngle,"randomAngle");
			HX_STACK_LINE(126)
			int tmp14 = direction;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(126)
			Float tmp15 = randomAngle;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(126)
			Float tmp16 = ::Math_obj::cos(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(126)
			Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(126)
			int tmp18 = this->ballSpeed;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(126)
			Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(126)
			::openfl::geom::Point tmp20 = this->ballMovement;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(126)
			tmp20->x = tmp19;
			HX_STACK_LINE(127)
			Float tmp21 = randomAngle;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(127)
			Float tmp22 = ::Math_obj::sin(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(127)
			int tmp23 = this->ballSpeed;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(127)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(127)
			::openfl::geom::Point tmp25 = this->ballMovement;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(127)
			tmp25->y = tmp24;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,setGameState,(void))

Void Main_obj::touchDown( ::openfl::events::TouchEvent event){
{
		HX_STACK_FRAME("Main","touchDown",0xe863bf6c,"Main.touchDown","Main.hx",131,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(132)
		int tmp = this->touchMoveID;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(132)
		bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		if ((tmp1)){
			HX_STACK_LINE(134)
			return null();
		}
		HX_STACK_LINE(137)
		this->touchMoveID = event->touchPointID;
		HX_STACK_LINE(138)
		::openfl::display::Stage tmp2 = this->stage;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(138)
		Dynamic tmp3 = this->onTouchMove_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(138)
		tmp2->addEventListener(HX_HCSTRING("touchMove","\x70","\x72","\xcd","\x0d"),tmp3,null(),null(),null());
		HX_STACK_LINE(139)
		::openfl::display::Stage tmp4 = this->stage;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(139)
		Dynamic tmp5 = this->touchUp_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(139)
		tmp4->addEventListener(HX_HCSTRING("touchEnd","\x5c","\xc5","\x09","\x00"),tmp5,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,touchDown,(void))

Void Main_obj::onTouchMove( ::openfl::events::TouchEvent event){
{
		HX_STACK_FRAME("Main","onTouchMove",0x2f170dbc,"Main.onTouchMove","Main.hx",143,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(144)
		int tmp = event->touchPointID;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(144)
		int tmp1 = this->touchMoveID;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(144)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(144)
		if ((tmp2)){
			HX_STACK_LINE(146)
			return null();
		}
		HX_STACK_LINE(148)
		this->touchKeyDown = true;
		HX_STACK_LINE(149)
		this->touchKeyUp = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onTouchMove,(void))

Void Main_obj::touchTap( ::openfl::events::TouchEvent event){
{
		HX_STACK_FRAME("Main","touchTap",0x471dc299,"Main.touchTap","Main.hx",152,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(153)
		::GameState tmp = this->currentGameState;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(153)
		bool tmp1 = (tmp == ::GameState_obj::Paused);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		if ((tmp1)){
			HX_STACK_LINE(154)
			this->setGameState(::GameState_obj::Playing);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,touchTap,(void))

Void Main_obj::touchUp( ::openfl::events::TouchEvent event){
{
		HX_STACK_FRAME("Main","touchUp",0x3d2976e5,"Main.touchUp","Main.hx",159,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(160)
		int tmp = event->touchPointID;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(160)
		int tmp1 = this->touchMoveID;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(160)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(160)
		if ((tmp2)){
			HX_STACK_LINE(162)
			return null();
		}
		HX_STACK_LINE(164)
		this->touchMoveID = (int)0;
		HX_STACK_LINE(165)
		this->touchKeyDown = false;
		HX_STACK_LINE(166)
		this->touchKeyUp = true;
		HX_STACK_LINE(167)
		::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(167)
		Dynamic tmp4 = this->onTouchMove_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(167)
		tmp3->removeEventListener(HX_HCSTRING("touchMove","\x70","\x72","\xcd","\x0d"),tmp4,null());
		HX_STACK_LINE(168)
		::openfl::display::Stage tmp5 = this->stage;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(168)
		Dynamic tmp6 = this->touchUp_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(168)
		tmp5->removeEventListener(HX_HCSTRING("touchEnd","\x5c","\xc5","\x09","\x00"),tmp6,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,touchUp,(void))

Void Main_obj::everyFrame( ::openfl::events::Event event){
{
		HX_STACK_FRAME("Main","everyFrame",0xc084a887,"Main.everyFrame","Main.hx",172,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(173)
		::GameState tmp = this->currentGameState;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(173)
		bool tmp1 = (tmp == ::GameState_obj::Playing);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(173)
		if ((tmp1)){
			HX_STACK_LINE(175)
			bool tmp2 = this->touchKeyUp;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(175)
			if ((tmp2)){
				HX_STACK_LINE(176)
				::Platform tmp3 = this->platform1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(176)
				::Platform _g = tmp3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(176)
				Float tmp4 = _g->get_y();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(176)
				int tmp5 = this->platformSpeed;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(176)
				Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(176)
				_g->set_y(tmp6);
			}
			HX_STACK_LINE(178)
			bool tmp3 = this->touchKeyDown;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(178)
			if ((tmp3)){
				HX_STACK_LINE(179)
				::Platform tmp4 = this->platform1;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(179)
				::Platform _g = tmp4;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(179)
				Float tmp5 = _g->get_y();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(179)
				int tmp6 = this->platformSpeed;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(179)
				Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(179)
				_g->set_y(tmp7);
			}
			HX_STACK_LINE(182)
			::Ball tmp4 = this->ball;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(182)
			Float tmp5 = tmp4->get_x();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(182)
			bool tmp6 = (tmp5 > (int)300);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(182)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(182)
			if ((tmp6)){
				HX_STACK_LINE(182)
				::Ball tmp8 = this->ball;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(182)
				::Ball tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(182)
				Float tmp10 = tmp9->get_y();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(182)
				Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(182)
				::Platform tmp12 = this->platform2;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(182)
				::Platform tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(182)
				Float tmp14 = tmp13->get_y();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(182)
				Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(182)
				Float tmp16 = (tmp15 + (int)70);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(182)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(182)
				tmp7 = (tmp11 > tmp17);
			}
			else{
				HX_STACK_LINE(182)
				tmp7 = false;
			}
			HX_STACK_LINE(182)
			if ((tmp7)){
				HX_STACK_LINE(183)
				::Platform tmp8 = this->platform2;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(183)
				::Platform _g = tmp8;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(183)
				Float tmp9 = _g->get_y();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(183)
				int tmp10 = this->platformSpeed;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(183)
				Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(183)
				_g->set_y(tmp11);
			}
			HX_STACK_LINE(185)
			::Ball tmp8 = this->ball;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(185)
			Float tmp9 = tmp8->get_x();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(185)
			bool tmp10 = (tmp9 > (int)300);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(185)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(185)
			if ((tmp10)){
				HX_STACK_LINE(185)
				::Ball tmp12 = this->ball;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(185)
				::Ball tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(185)
				Float tmp14 = tmp13->get_y();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(185)
				Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(185)
				::Platform tmp16 = this->platform2;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(185)
				::Platform tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(185)
				Float tmp18 = tmp17->get_y();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(185)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(185)
				Float tmp20 = (tmp19 + (int)30);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(185)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(185)
				tmp11 = (tmp15 < tmp21);
			}
			else{
				HX_STACK_LINE(185)
				tmp11 = false;
			}
			HX_STACK_LINE(185)
			if ((tmp11)){
				HX_STACK_LINE(186)
				::Platform tmp12 = this->platform2;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(186)
				::Platform _g = tmp12;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(186)
				Float tmp13 = _g->get_y();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(186)
				int tmp14 = this->platformSpeed;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(186)
				Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(186)
				_g->set_y(tmp15);
			}
			HX_STACK_LINE(189)
			::Platform tmp12 = this->platform1;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(189)
			Float tmp13 = tmp12->get_y();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(189)
			bool tmp14 = (tmp13 < (int)5);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(189)
			if ((tmp14)){
				HX_STACK_LINE(189)
				::Platform tmp15 = this->platform1;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(189)
				tmp15->set_y((int)5);
			}
			HX_STACK_LINE(190)
			::Platform tmp15 = this->platform1;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(190)
			Float tmp16 = tmp15->get_y();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(190)
			bool tmp17 = (tmp16 > (int)395);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(190)
			if ((tmp17)){
				HX_STACK_LINE(190)
				::Platform tmp18 = this->platform1;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(190)
				tmp18->set_y((int)395);
			}
			HX_STACK_LINE(192)
			::Platform tmp18 = this->platform2;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(192)
			Float tmp19 = tmp18->get_y();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(192)
			bool tmp20 = (tmp19 < (int)5);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(192)
			if ((tmp20)){
				HX_STACK_LINE(192)
				::Platform tmp21 = this->platform2;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(192)
				tmp21->set_y((int)5);
			}
			HX_STACK_LINE(193)
			::Platform tmp21 = this->platform2;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(193)
			Float tmp22 = tmp21->get_y();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(193)
			bool tmp23 = (tmp22 > (int)395);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(193)
			if ((tmp23)){
				HX_STACK_LINE(193)
				::Platform tmp24 = this->platform2;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(193)
				tmp24->set_y((int)395);
			}
			HX_STACK_LINE(195)
			{
				HX_STACK_LINE(195)
				::Ball tmp24 = this->ball;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(195)
				::Ball _g = tmp24;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(195)
				Float tmp25 = _g->get_x();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(195)
				::openfl::geom::Point tmp26 = this->ballMovement;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(195)
				Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(195)
				Float tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(195)
				_g->set_x(tmp28);
			}
			HX_STACK_LINE(196)
			{
				HX_STACK_LINE(196)
				::Ball tmp24 = this->ball;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(196)
				::Ball _g = tmp24;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(196)
				Float tmp25 = _g->get_y();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(196)
				::openfl::geom::Point tmp26 = this->ballMovement;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(196)
				Float tmp27 = tmp26->y;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(196)
				Float tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(196)
				_g->set_y(tmp28);
			}
			HX_STACK_LINE(198)
			::openfl::geom::Point tmp24 = this->ballMovement;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(198)
			Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(198)
			bool tmp26 = (tmp25 < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(198)
			bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(198)
			bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(198)
			if ((tmp27)){
				HX_STACK_LINE(198)
				::Ball tmp29 = this->ball;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(198)
				::Ball tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(198)
				::Ball tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(198)
				Float tmp32 = tmp31->get_x();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(198)
				Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(198)
				Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(198)
				tmp28 = (tmp34 < (int)30);
			}
			else{
				HX_STACK_LINE(198)
				tmp28 = false;
			}
			HX_STACK_LINE(198)
			bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(198)
			bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(198)
			if ((tmp29)){
				HX_STACK_LINE(198)
				::Ball tmp31 = this->ball;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(198)
				::Ball tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(198)
				::Ball tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(198)
				Float tmp34 = tmp33->get_y();		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(198)
				Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(198)
				Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(198)
				::Platform tmp37 = this->platform1;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(198)
				::Platform tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(198)
				::Platform tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(198)
				Float tmp40 = tmp39->get_y();		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(198)
				Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(198)
				Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(198)
				tmp30 = (tmp36 >= tmp42);
			}
			else{
				HX_STACK_LINE(198)
				tmp30 = false;
			}
			HX_STACK_LINE(198)
			bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(198)
			if ((tmp30)){
				HX_STACK_LINE(198)
				::Ball tmp32 = this->ball;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(198)
				::Ball tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(198)
				Float tmp34 = tmp33->get_y();		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(198)
				Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(198)
				::Platform tmp36 = this->platform1;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(198)
				::Platform tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(198)
				Float tmp38 = tmp37->get_y();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(198)
				Float tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(198)
				Float tmp40 = (tmp39 + (int)100);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(198)
				Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(198)
				tmp31 = (tmp35 <= tmp41);
			}
			else{
				HX_STACK_LINE(198)
				tmp31 = false;
			}
			HX_STACK_LINE(198)
			if ((tmp31)){
				HX_STACK_LINE(199)
				this->bounceBall();
				HX_STACK_LINE(200)
				::Ball tmp32 = this->ball;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(200)
				tmp32->set_x((int)30);
			}
			HX_STACK_LINE(202)
			::openfl::geom::Point tmp32 = this->ballMovement;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(202)
			Float tmp33 = tmp32->x;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(202)
			bool tmp34 = (tmp33 > (int)0);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(202)
			bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(202)
			bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(202)
			if ((tmp35)){
				HX_STACK_LINE(202)
				::Ball tmp37 = this->ball;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(202)
				::Ball tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(202)
				::Ball tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(202)
				Float tmp40 = tmp39->get_x();		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(202)
				Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(202)
				Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(202)
				tmp36 = (tmp42 > (int)470);
			}
			else{
				HX_STACK_LINE(202)
				tmp36 = false;
			}
			HX_STACK_LINE(202)
			bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(202)
			bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(202)
			if ((tmp37)){
				HX_STACK_LINE(202)
				::Ball tmp39 = this->ball;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(202)
				::Ball tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(202)
				::Ball tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(202)
				Float tmp42 = tmp41->get_y();		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(202)
				Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(202)
				Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(202)
				::Platform tmp45 = this->platform2;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(202)
				::Platform tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(202)
				::Platform tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(202)
				Float tmp48 = tmp47->get_y();		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(202)
				Float tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(202)
				Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(202)
				tmp38 = (tmp44 >= tmp50);
			}
			else{
				HX_STACK_LINE(202)
				tmp38 = false;
			}
			HX_STACK_LINE(202)
			bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(202)
			if ((tmp38)){
				HX_STACK_LINE(202)
				::Ball tmp40 = this->ball;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(202)
				::Ball tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(202)
				Float tmp42 = tmp41->get_y();		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(202)
				Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(202)
				::Platform tmp44 = this->platform2;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(202)
				::Platform tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(202)
				Float tmp46 = tmp45->get_y();		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(202)
				Float tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(202)
				Float tmp48 = (tmp47 + (int)100);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(202)
				Float tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(202)
				tmp39 = (tmp43 <= tmp49);
			}
			else{
				HX_STACK_LINE(202)
				tmp39 = false;
			}
			HX_STACK_LINE(202)
			if ((tmp39)){
				HX_STACK_LINE(203)
				this->bounceBall();
				HX_STACK_LINE(204)
				::Ball tmp40 = this->ball;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(204)
				tmp40->set_x((int)470);
			}
			HX_STACK_LINE(207)
			::Ball tmp40 = this->ball;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(207)
			Float tmp41 = tmp40->get_y();		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(207)
			bool tmp42 = (tmp41 < (int)5);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(207)
			bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(207)
			bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(207)
			if ((tmp43)){
				HX_STACK_LINE(207)
				::Ball tmp45 = this->ball;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(207)
				::Ball tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(207)
				Float tmp47 = tmp46->get_y();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(207)
				Float tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(207)
				tmp44 = (tmp48 > (int)495);
			}
			else{
				HX_STACK_LINE(207)
				tmp44 = true;
			}
			HX_STACK_LINE(207)
			if ((tmp44)){
				HX_STACK_LINE(207)
				::openfl::geom::Point tmp45 = this->ballMovement;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(207)
				hx::MultEq(tmp45->y,(int)-1);
			}
			HX_STACK_LINE(209)
			::Ball tmp45 = this->ball;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(209)
			Float tmp46 = tmp45->get_x();		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(209)
			bool tmp47 = (tmp46 < (int)5);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(209)
			if ((tmp47)){
				HX_STACK_LINE(209)
				this->winGame(::Player_obj::AI);
			}
			HX_STACK_LINE(210)
			::Ball tmp48 = this->ball;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(210)
			Float tmp49 = tmp48->get_x();		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(210)
			bool tmp50 = (tmp49 > (int)495);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(210)
			if ((tmp50)){
				HX_STACK_LINE(210)
				this->winGame(::Player_obj::Human);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,everyFrame,(void))

Void Main_obj::bounceBall( ){
{
		HX_STACK_FRAME("Main","bounceBall",0x95b4759c,"Main.bounceBall","Main.hx",214,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(215)
		::openfl::geom::Point tmp = this->ballMovement;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(215)
		Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(215)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(215)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(215)
		if ((tmp2)){
			HX_STACK_LINE(215)
			tmp3 = (int)-1;
		}
		else{
			HX_STACK_LINE(215)
			tmp3 = (int)1;
		}
		HX_STACK_LINE(215)
		int direction = tmp3;		HX_STACK_VAR(direction,"direction");
		HX_STACK_LINE(216)
		Float tmp4 = ::Math_obj::random();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(216)
		Float tmp5 = ::Math_obj::PI;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(216)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(216)
		Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(216)
		Float tmp8 = (tmp7 - (int)45);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(216)
		Float randomAngle = tmp8;		HX_STACK_VAR(randomAngle,"randomAngle");
		HX_STACK_LINE(217)
		int tmp9 = direction;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(217)
		Float tmp10 = randomAngle;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(217)
		Float tmp11 = ::Math_obj::cos(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(217)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(217)
		int tmp13 = this->ballSpeed;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(217)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(217)
		::openfl::geom::Point tmp15 = this->ballMovement;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(217)
		tmp15->x = tmp14;
		HX_STACK_LINE(218)
		Float tmp16 = randomAngle;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(218)
		Float tmp17 = ::Math_obj::sin(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(218)
		int tmp18 = this->ballSpeed;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(218)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(218)
		::openfl::geom::Point tmp20 = this->ballMovement;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(218)
		tmp20->y = tmp19;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,bounceBall,(void))

Void Main_obj::winGame( ::Player player){
{
		HX_STACK_FRAME("Main","winGame",0x39706d19,"Main.winGame","Main.hx",221,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(222)
		bool tmp = (player == ::Player_obj::Human);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(222)
		if ((tmp)){
			HX_STACK_LINE(223)
			(this->scorePlayer)++;
		}
		else{
			HX_STACK_LINE(225)
			(this->scoreAI)++;
		}
		HX_STACK_LINE(227)
		this->setGameState(::GameState_obj::Paused);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,winGame,(void))

Void Main_obj::updateScore( ){
{
		HX_STACK_FRAME("Main","updateScore",0x5d7894f4,"Main.updateScore","Main.hx",230,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(231)
		::openfl::text::TextField tmp = this->scoreField;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		int tmp1 = this->scorePlayer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		::String tmp2 = (tmp1 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(231)
		int tmp3 = this->scoreAI;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(231)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(231)
		tmp->set_text(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,updateScore,(void))

Void Main_obj::added( Dynamic e){
{
		HX_STACK_FRAME("Main","added",0x98771aeb,"Main.added","Main.hx",243,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(244)
		Dynamic tmp = this->added_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(244)
		this->removeEventListener(HX_HCSTRING("addedToStage","\x63","\x22","\x55","\x0c"),tmp,null());
		HX_STACK_LINE(245)
		::openfl::display::Stage tmp1 = this->stage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(245)
		Dynamic tmp2 = this->resize_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(245)
		tmp1->addEventListener(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),tmp2,null(),null(),null());
		HX_STACK_LINE(249)
		this->init();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,added,(void))

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",254,0x087e5c05)
		HX_STACK_LINE(256)
		::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(256)
		tmp->stage->align = ((Dynamic)((int)6));
		HX_STACK_LINE(257)
		::openfl::display::MovieClip tmp1 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(257)
		tmp1->stage->scaleMode = ((Dynamic)((int)0));
		HX_STACK_LINE(258)
		::openfl::display::MovieClip tmp2 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(258)
		::Main tmp3 = ::Main_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(258)
		tmp2->addChild(tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(inited,"inited");
	HX_MARK_MEMBER_NAME(platform1,"platform1");
	HX_MARK_MEMBER_NAME(platform2,"platform2");
	HX_MARK_MEMBER_NAME(ball,"ball");
	HX_MARK_MEMBER_NAME(scorePlayer,"scorePlayer");
	HX_MARK_MEMBER_NAME(scoreAI,"scoreAI");
	HX_MARK_MEMBER_NAME(scoreField,"scoreField");
	HX_MARK_MEMBER_NAME(messageField,"messageField");
	HX_MARK_MEMBER_NAME(currentGameState,"currentGameState");
	HX_MARK_MEMBER_NAME(touchKeyUp,"touchKeyUp");
	HX_MARK_MEMBER_NAME(touchKeyDown,"touchKeyDown");
	HX_MARK_MEMBER_NAME(platformSpeed,"platformSpeed");
	HX_MARK_MEMBER_NAME(ballMovement,"ballMovement");
	HX_MARK_MEMBER_NAME(ballSpeed,"ballSpeed");
	HX_MARK_MEMBER_NAME(touchMoveID,"touchMoveID");
	HX_MARK_MEMBER_NAME(mySprite,"mySprite");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(inited,"inited");
	HX_VISIT_MEMBER_NAME(platform1,"platform1");
	HX_VISIT_MEMBER_NAME(platform2,"platform2");
	HX_VISIT_MEMBER_NAME(ball,"ball");
	HX_VISIT_MEMBER_NAME(scorePlayer,"scorePlayer");
	HX_VISIT_MEMBER_NAME(scoreAI,"scoreAI");
	HX_VISIT_MEMBER_NAME(scoreField,"scoreField");
	HX_VISIT_MEMBER_NAME(messageField,"messageField");
	HX_VISIT_MEMBER_NAME(currentGameState,"currentGameState");
	HX_VISIT_MEMBER_NAME(touchKeyUp,"touchKeyUp");
	HX_VISIT_MEMBER_NAME(touchKeyDown,"touchKeyDown");
	HX_VISIT_MEMBER_NAME(platformSpeed,"platformSpeed");
	HX_VISIT_MEMBER_NAME(ballMovement,"ballMovement");
	HX_VISIT_MEMBER_NAME(ballSpeed,"ballSpeed");
	HX_VISIT_MEMBER_NAME(touchMoveID,"touchMoveID");
	HX_VISIT_MEMBER_NAME(mySprite,"mySprite");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { return ball; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { return inited; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scoreAI") ) { return scoreAI; }
		if (HX_FIELD_EQ(inName,"touchUp") ) { return touchUp_dyn(); }
		if (HX_FIELD_EQ(inName,"winGame") ) { return winGame_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mySprite") ) { return mySprite; }
		if (HX_FIELD_EQ(inName,"touchTap") ) { return touchTap_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"platform1") ) { return platform1; }
		if (HX_FIELD_EQ(inName,"platform2") ) { return platform2; }
		if (HX_FIELD_EQ(inName,"ballSpeed") ) { return ballSpeed; }
		if (HX_FIELD_EQ(inName,"touchDown") ) { return touchDown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scoreField") ) { return scoreField; }
		if (HX_FIELD_EQ(inName,"touchKeyUp") ) { return touchKeyUp; }
		if (HX_FIELD_EQ(inName,"everyFrame") ) { return everyFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"bounceBall") ) { return bounceBall_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scorePlayer") ) { return scorePlayer; }
		if (HX_FIELD_EQ(inName,"touchMoveID") ) { return touchMoveID; }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove_dyn(); }
		if (HX_FIELD_EQ(inName,"updateScore") ) { return updateScore_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"messageField") ) { return messageField; }
		if (HX_FIELD_EQ(inName,"touchKeyDown") ) { return touchKeyDown; }
		if (HX_FIELD_EQ(inName,"ballMovement") ) { return ballMovement; }
		if (HX_FIELD_EQ(inName,"setGameState") ) { return setGameState_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"platformSpeed") ) { return platformSpeed; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentGameState") ) { return currentGameState; }
	}
	return super::__Field(inName,inCallProp);
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true;  }
	}
	return false;
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { ball=inValue.Cast< ::Ball >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scoreAI") ) { scoreAI=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mySprite") ) { mySprite=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"platform1") ) { platform1=inValue.Cast< ::Platform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"platform2") ) { platform2=inValue.Cast< ::Platform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ballSpeed") ) { ballSpeed=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scoreField") ) { scoreField=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touchKeyUp") ) { touchKeyUp=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scorePlayer") ) { scorePlayer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touchMoveID") ) { touchMoveID=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"messageField") ) { messageField=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touchKeyDown") ) { touchKeyDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ballMovement") ) { ballMovement=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"platformSpeed") ) { platformSpeed=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentGameState") ) { currentGameState=inValue.Cast< ::GameState >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97"));
	outFields->push(HX_HCSTRING("platform1","\x1e","\xaa","\x82","\x92"));
	outFields->push(HX_HCSTRING("platform2","\x1f","\xaa","\x82","\x92"));
	outFields->push(HX_HCSTRING("ball","\xff","\xe1","\x10","\x41"));
	outFields->push(HX_HCSTRING("scorePlayer","\x53","\x1c","\x1f","\x04"));
	outFields->push(HX_HCSTRING("scoreAI","\xba","\xa4","\x9a","\x78"));
	outFields->push(HX_HCSTRING("scoreField","\x08","\x48","\x0a","\x3c"));
	outFields->push(HX_HCSTRING("messageField","\x73","\x7d","\x34","\x57"));
	outFields->push(HX_HCSTRING("currentGameState","\x46","\xd9","\x56","\xac"));
	outFields->push(HX_HCSTRING("touchKeyUp","\x9b","\x9d","\x8f","\xd8"));
	outFields->push(HX_HCSTRING("touchKeyDown","\xa2","\x7f","\xa9","\xc6"));
	outFields->push(HX_HCSTRING("platformSpeed","\xd4","\xab","\x19","\x3e"));
	outFields->push(HX_HCSTRING("ballMovement","\x4e","\xba","\xba","\xf6"));
	outFields->push(HX_HCSTRING("ballSpeed","\x08","\x89","\xb7","\x3a"));
	outFields->push(HX_HCSTRING("touchMoveID","\x4b","\x2e","\xe3","\x31"));
	outFields->push(HX_HCSTRING("mySprite","\x91","\x08","\x4a","\xfa"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Main_obj,inited),HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97")},
	{hx::fsObject /*::Platform*/ ,(int)offsetof(Main_obj,platform1),HX_HCSTRING("platform1","\x1e","\xaa","\x82","\x92")},
	{hx::fsObject /*::Platform*/ ,(int)offsetof(Main_obj,platform2),HX_HCSTRING("platform2","\x1f","\xaa","\x82","\x92")},
	{hx::fsObject /*::Ball*/ ,(int)offsetof(Main_obj,ball),HX_HCSTRING("ball","\xff","\xe1","\x10","\x41")},
	{hx::fsInt,(int)offsetof(Main_obj,scorePlayer),HX_HCSTRING("scorePlayer","\x53","\x1c","\x1f","\x04")},
	{hx::fsInt,(int)offsetof(Main_obj,scoreAI),HX_HCSTRING("scoreAI","\xba","\xa4","\x9a","\x78")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Main_obj,scoreField),HX_HCSTRING("scoreField","\x08","\x48","\x0a","\x3c")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Main_obj,messageField),HX_HCSTRING("messageField","\x73","\x7d","\x34","\x57")},
	{hx::fsObject /*::GameState*/ ,(int)offsetof(Main_obj,currentGameState),HX_HCSTRING("currentGameState","\x46","\xd9","\x56","\xac")},
	{hx::fsBool,(int)offsetof(Main_obj,touchKeyUp),HX_HCSTRING("touchKeyUp","\x9b","\x9d","\x8f","\xd8")},
	{hx::fsBool,(int)offsetof(Main_obj,touchKeyDown),HX_HCSTRING("touchKeyDown","\xa2","\x7f","\xa9","\xc6")},
	{hx::fsInt,(int)offsetof(Main_obj,platformSpeed),HX_HCSTRING("platformSpeed","\xd4","\xab","\x19","\x3e")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(Main_obj,ballMovement),HX_HCSTRING("ballMovement","\x4e","\xba","\xba","\xf6")},
	{hx::fsInt,(int)offsetof(Main_obj,ballSpeed),HX_HCSTRING("ballSpeed","\x08","\x89","\xb7","\x3a")},
	{hx::fsInt,(int)offsetof(Main_obj,touchMoveID),HX_HCSTRING("touchMoveID","\x4b","\x2e","\xe3","\x31")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Main_obj,mySprite),HX_HCSTRING("mySprite","\x91","\x08","\x4a","\xfa")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97"),
	HX_HCSTRING("platform1","\x1e","\xaa","\x82","\x92"),
	HX_HCSTRING("platform2","\x1f","\xaa","\x82","\x92"),
	HX_HCSTRING("ball","\xff","\xe1","\x10","\x41"),
	HX_HCSTRING("scorePlayer","\x53","\x1c","\x1f","\x04"),
	HX_HCSTRING("scoreAI","\xba","\xa4","\x9a","\x78"),
	HX_HCSTRING("scoreField","\x08","\x48","\x0a","\x3c"),
	HX_HCSTRING("messageField","\x73","\x7d","\x34","\x57"),
	HX_HCSTRING("currentGameState","\x46","\xd9","\x56","\xac"),
	HX_HCSTRING("touchKeyUp","\x9b","\x9d","\x8f","\xd8"),
	HX_HCSTRING("touchKeyDown","\xa2","\x7f","\xa9","\xc6"),
	HX_HCSTRING("platformSpeed","\xd4","\xab","\x19","\x3e"),
	HX_HCSTRING("ballMovement","\x4e","\xba","\xba","\xf6"),
	HX_HCSTRING("ballSpeed","\x08","\x89","\xb7","\x3a"),
	HX_HCSTRING("touchMoveID","\x4b","\x2e","\xe3","\x31"),
	HX_HCSTRING("mySprite","\x91","\x08","\x4a","\xfa"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("setGameState","\xbd","\x24","\x76","\xdd"),
	HX_HCSTRING("touchDown","\xc1","\x87","\xda","\x07"),
	HX_HCSTRING("onTouchMove","\x51","\x55","\x10","\x30"),
	HX_HCSTRING("touchTap","\xe4","\x1b","\x15","\x00"),
	HX_HCSTRING("touchUp","\xfa","\x0f","\xf8","\xd8"),
	HX_HCSTRING("everyFrame","\x92","\x2a","\xfd","\x28"),
	HX_HCSTRING("bounceBall","\xa7","\xf7","\x2c","\xfe"),
	HX_HCSTRING("winGame","\x2e","\x06","\x3f","\xd5"),
	HX_HCSTRING("updateScore","\x89","\xdc","\x71","\x5e"),
	HX_HCSTRING("added","\xc0","\xd4","\x43","\x1c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

hx::Class Main_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	::String(null()) };

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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

