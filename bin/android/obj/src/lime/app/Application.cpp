#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeApplication
#include <lime/_backend/native/NativeApplication.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_Event_Float_Float_Int_Void
#include <lime/app/Event_Float_Float_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Float_Float_Void
#include <lime/app/Event_Float_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Int_Float_Void
#include <lime/app/Event_Int_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Int_Int_Void
#include <lime/app/Event_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Int_Void
#include <lime/app/Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Int_lime_ui_JoystickHatPosition_Void
#include <lime/app/Event_Int_lime_ui_JoystickHatPosition_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_String_Int_Int_Void
#include <lime/app/Event_String_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_String_Void
#include <lime/app/Event_String_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Void_Void
#include <lime/app/Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_graphics_RenderContext_Void
#include <lime/app/Event_lime_graphics_RenderContext_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_ui_GamepadAxis_Float_Void
#include <lime/app/Event_lime_ui_GamepadAxis_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_ui_GamepadButton_Void
#include <lime/app/Event_lime_ui_GamepadButton_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_ui_Gamepad_Void
#include <lime/app/Event_lime_ui_Gamepad_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_ui_Joystick_Void
#include <lime/app/Event_lime_ui_Joystick_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void
#include <lime/app/Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_ui_Touch_Void
#include <lime/app/Event_lime_ui_Touch_Void.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app_Preloader
#include <lime/app/Preloader.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_lime_ui_Joystick
#include <lime/ui/Joystick.h>
#endif
#ifndef INCLUDED_lime_ui_Touch
#include <lime/ui/Touch.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace app{

Void Application_obj::__construct()
{
HX_STACK_FRAME("lime.app.Application","new",0x9354427c,"lime.app.Application.new","lime/app/Application.hx",23,0x8bc55476)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(36)
	this->onUpdate = ::lime::app::Event_Int_Void_obj::__new();
	HX_STACK_LINE(49)
	super::__construct();
	HX_STACK_LINE(51)
	::lime::app::Application tmp = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	if ((tmp1)){
		HX_STACK_LINE(53)
		::lime::app::Application_obj::current = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(57)
	this->modules = Array_obj< ::lime::app::IModule >::__new();
	HX_STACK_LINE(58)
	this->renderers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(59)
	this->windows = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(60)
	::haxe::ds::IntMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		::haxe::ds::IntMap tmp3 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		::haxe::ds::IntMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(60)
	this->windowByID = tmp2;
	HX_STACK_LINE(62)
	::lime::_backend::native::NativeApplication tmp3 = ::lime::_backend::native::NativeApplication_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(62)
	this->backend = tmp3;
	HX_STACK_LINE(64)
	::lime::app::Event_Int_Void tmp4 = this->onExit;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(64)
	Dynamic tmp5 = this->onModuleExit_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(64)
	tmp4->add(tmp5,null(),null());
	HX_STACK_LINE(65)
	::lime::app::Event_Int_Void tmp6 = this->onUpdate;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(65)
	Dynamic tmp7 = this->update_dyn();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(65)
	tmp6->add(tmp7,null(),null());
	HX_STACK_LINE(67)
	::lime::app::Event_lime_ui_Gamepad_Void tmp8 = ::lime::ui::Gamepad_obj::onConnect;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(67)
	Dynamic tmp9 = this->__onGamepadConnect_dyn();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(67)
	tmp8->add(tmp9,null(),null());
	HX_STACK_LINE(68)
	::lime::app::Event_lime_ui_Joystick_Void tmp10 = ::lime::ui::Joystick_obj::onConnect;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(68)
	Dynamic tmp11 = this->__onJoystickConnect_dyn();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(68)
	tmp10->add(tmp11,null(),null());
	HX_STACK_LINE(69)
	::lime::app::Event_lime_ui_Touch_Void tmp12 = ::lime::ui::Touch_obj::onStart;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(69)
	Dynamic tmp13 = this->onTouchStart_dyn();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(69)
	tmp12->add(tmp13,null(),null());
	HX_STACK_LINE(70)
	::lime::app::Event_lime_ui_Touch_Void tmp14 = ::lime::ui::Touch_obj::onMove;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(70)
	Dynamic tmp15 = this->onTouchMove_dyn();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(70)
	tmp14->add(tmp15,null(),null());
	HX_STACK_LINE(71)
	::lime::app::Event_lime_ui_Touch_Void tmp16 = ::lime::ui::Touch_obj::onEnd;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(71)
	Dynamic tmp17 = this->onTouchEnd_dyn();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(71)
	tmp16->add(tmp17,null(),null());
}
;
	return null();
}

//Application_obj::~Application_obj() { }

Dynamic Application_obj::__CreateEmpty() { return  new Application_obj; }
hx::ObjectPtr< Application_obj > Application_obj::__new()
{  hx::ObjectPtr< Application_obj > _result_ = new Application_obj();
	_result_->__construct();
	return _result_;}

Dynamic Application_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Application_obj > _result_ = new Application_obj();
	_result_->__construct();
	return _result_;}

Void Application_obj::addModule( ::lime::app::IModule module){
{
		HX_STACK_FRAME("lime.app.Application","addModule",0x673258c9,"lime.app.Application.addModule","lime/app/Application.hx",80,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(module,"module")
		HX_STACK_LINE(82)
		::lime::app::IModule tmp = module;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		this->modules->push(tmp);
		HX_STACK_LINE(84)
		int tmp1 = this->windows->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		if ((tmp2)){
			HX_STACK_LINE(86)
			{
				HX_STACK_LINE(86)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(86)
				Array< ::Dynamic > _g1 = this->windows;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(86)
				while((true)){
					HX_STACK_LINE(86)
					bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(86)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(86)
					if ((tmp4)){
						HX_STACK_LINE(86)
						break;
					}
					HX_STACK_LINE(86)
					::lime::ui::Window tmp5 = _g1->__get(_g).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(86)
					::lime::ui::Window window = tmp5;		HX_STACK_VAR(window,"window");
					HX_STACK_LINE(86)
					++(_g);
					HX_STACK_LINE(88)
					::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(88)
					module->onWindowCreate(tmp6);
				}
			}
			HX_STACK_LINE(92)
			::lime::app::Preloader tmp3 = this->preloader;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(92)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(92)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(92)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(92)
			if ((tmp5)){
				HX_STACK_LINE(92)
				::lime::app::Preloader tmp7 = this->preloader;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(92)
				::lime::app::Preloader tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(92)
				tmp6 = tmp8->complete;
			}
			else{
				HX_STACK_LINE(92)
				tmp6 = true;
			}
			HX_STACK_LINE(92)
			if ((tmp6)){
				HX_STACK_LINE(94)
				module->onPreloadComplete();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,addModule,(void))

Void Application_obj::addRenderer( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("lime.app.Application","addRenderer",0x0a61eaa0,"lime.app.Application.addRenderer","lime/app/Application.hx",108,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_LINE(110)
		Dynamic tmp = this->render_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		::lime::graphics::Renderer tmp1 = renderer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(110)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			Dynamic f = tmp;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(110)
			::lime::graphics::Renderer a1 = tmp1;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::graphics::Renderer,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",110,0x8bc55476)
				{
					HX_STACK_LINE(110)
					::lime::graphics::Renderer tmp3 = a1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(110)
					f(tmp3).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(110)
			tmp2 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(110)
		renderer->onRender->add(tmp2,null(),null());
		HX_STACK_LINE(111)
		Dynamic tmp3 = this->onRenderContextLost_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(111)
		::lime::graphics::Renderer tmp4 = renderer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(111)
		Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(111)
		{
			HX_STACK_LINE(111)
			Dynamic f = tmp3;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(111)
			::lime::graphics::Renderer a1 = tmp4;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::graphics::Renderer,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",111,0x8bc55476)
				{
					HX_STACK_LINE(111)
					::lime::graphics::Renderer tmp6 = a1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(111)
					f(tmp6).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(111)
			tmp5 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(111)
		renderer->onContextLost->add(tmp5,null(),null());
		HX_STACK_LINE(112)
		Dynamic tmp6 = this->onRenderContextRestored_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(112)
		::lime::graphics::Renderer tmp7 = renderer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(112)
		Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(112)
		{
			HX_STACK_LINE(112)
			Dynamic f = tmp6;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(112)
			::lime::graphics::Renderer a1 = tmp7;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::graphics::Renderer,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(::lime::graphics::RenderContext a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",112,0x8bc55476)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(112)
					::lime::graphics::Renderer tmp9 = a1;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(112)
					::lime::graphics::RenderContext tmp10 = a2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(112)
					f(tmp9,tmp10).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(112)
			tmp8 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(112)
		renderer->onContextRestored->add(tmp8,null(),null());
		HX_STACK_LINE(114)
		::lime::graphics::Renderer tmp9 = renderer;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(114)
		this->renderers->push(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,addRenderer,(void))

Void Application_obj::create( Dynamic config){
{
		HX_STACK_FRAME("lime.app.Application","create",0x35e42e60,"lime.app.Application.create","lime/app/Application.hx",125,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(127)
		this->config = config;
		HX_STACK_LINE(129)
		::lime::_backend::native::NativeApplication tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(129)
		Dynamic tmp1 = config;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(129)
		tmp->create(tmp1);
		HX_STACK_LINE(131)
		bool tmp2 = (config != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(131)
		if ((tmp2)){
			HX_STACK_LINE(133)
			Dynamic tmp3 = config;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(133)
			bool tmp4 = ::Reflect_obj::hasField(tmp3,HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(133)
			if ((tmp4)){
				HX_STACK_LINE(135)
				Float value = config->__Field(HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(135)
				::lime::_backend::native::NativeApplication tmp5 = this->backend;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(135)
				Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(135)
				tmp5->setFrameRate(tmp6);
			}
			HX_STACK_LINE(139)
			Dynamic tmp5 = config;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(139)
			bool tmp6 = ::Reflect_obj::hasField(tmp5,HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(139)
			if ((tmp6)){
				HX_STACK_LINE(141)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(141)
				cpp::ArrayBase _g1 = config->__Field(HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(141)
				while((true)){
					HX_STACK_LINE(141)
					bool tmp7 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(141)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(141)
					if ((tmp8)){
						HX_STACK_LINE(141)
						break;
					}
					HX_STACK_LINE(141)
					Dynamic tmp9 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(141)
					Dynamic windowConfig = tmp9;		HX_STACK_VAR(windowConfig,"windowConfig");
					HX_STACK_LINE(141)
					++(_g);
					HX_STACK_LINE(143)
					::lime::ui::Window tmp10 = ::lime::ui::Window_obj::__new(windowConfig);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(143)
					::lime::ui::Window window = tmp10;		HX_STACK_VAR(window,"window");
					HX_STACK_LINE(144)
					::lime::ui::Window tmp11 = window;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(144)
					this->createWindow(tmp11);
				}
			}
			HX_STACK_LINE(154)
			::lime::app::Preloader tmp7 = this->preloader;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(154)
			bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(154)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(154)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(154)
			if ((tmp9)){
				HX_STACK_LINE(154)
				::lime::app::Preloader tmp11 = this->preloader;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(154)
				::lime::app::Preloader tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(154)
				tmp10 = tmp12->complete;
			}
			else{
				HX_STACK_LINE(154)
				tmp10 = true;
			}
			HX_STACK_LINE(154)
			if ((tmp10)){
				HX_STACK_LINE(156)
				this->onPreloadComplete();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,create,(void))

Void Application_obj::createWindow( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","createWindow",0xb3683e70,"lime.app.Application.createWindow","lime/app/Application.hx",170,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(172)
		Dynamic tmp = this->onWindowActivate_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		::lime::ui::Window tmp1 = window;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(172)
		{
			HX_STACK_LINE(172)
			Dynamic f = tmp;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(172)
			::lime::ui::Window a1 = tmp1;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",172,0x8bc55476)
				{
					HX_STACK_LINE(172)
					::lime::ui::Window tmp3 = a1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(172)
					f(tmp3).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(172)
			tmp2 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(172)
		window->onActivate->add(tmp2,null(),null());
		HX_STACK_LINE(173)
		Dynamic tmp3 = this->onWindowClose_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(173)
		::lime::ui::Window tmp4 = window;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(173)
		Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(173)
		{
			HX_STACK_LINE(173)
			Dynamic f = tmp3;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(173)
			::lime::ui::Window a1 = tmp4;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",173,0x8bc55476)
				{
					HX_STACK_LINE(173)
					::lime::ui::Window tmp6 = a1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(173)
					f(tmp6).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(173)
			tmp5 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(173)
		window->onClose->add(tmp5,null(),null());
		HX_STACK_LINE(174)
		Dynamic tmp6 = this->onWindowCreate_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(174)
		::lime::ui::Window tmp7 = window;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(174)
		Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(174)
		{
			HX_STACK_LINE(174)
			Dynamic f = tmp6;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(174)
			::lime::ui::Window a1 = tmp7;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",174,0x8bc55476)
				{
					HX_STACK_LINE(174)
					::lime::ui::Window tmp9 = a1;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(174)
					f(tmp9).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(174)
			tmp8 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(174)
		window->onCreate->add(tmp8,null(),null());
		HX_STACK_LINE(175)
		Dynamic tmp9 = this->onWindowDeactivate_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(175)
		::lime::ui::Window tmp10 = window;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(175)
		Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(175)
		{
			HX_STACK_LINE(175)
			Dynamic f = tmp9;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(175)
			::lime::ui::Window a1 = tmp10;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",175,0x8bc55476)
				{
					HX_STACK_LINE(175)
					::lime::ui::Window tmp12 = a1;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(175)
					f(tmp12).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(175)
			tmp11 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(175)
		window->onDeactivate->add(tmp11,null(),null());
		HX_STACK_LINE(176)
		Dynamic tmp12 = this->onWindowEnter_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(176)
		::lime::ui::Window tmp13 = window;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(176)
		Dynamic tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(176)
		{
			HX_STACK_LINE(176)
			Dynamic f = tmp12;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(176)
			::lime::ui::Window a1 = tmp13;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",176,0x8bc55476)
				{
					HX_STACK_LINE(176)
					::lime::ui::Window tmp15 = a1;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(176)
					f(tmp15).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(176)
			tmp14 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(176)
		window->onEnter->add(tmp14,null(),null());
		HX_STACK_LINE(177)
		Dynamic tmp15 = this->onWindowFocusIn_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(177)
		::lime::ui::Window tmp16 = window;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(177)
		Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(177)
		{
			HX_STACK_LINE(177)
			Dynamic f = tmp15;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(177)
			::lime::ui::Window a1 = tmp16;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",177,0x8bc55476)
				{
					HX_STACK_LINE(177)
					::lime::ui::Window tmp18 = a1;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(177)
					f(tmp18).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(177)
			tmp17 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(177)
		window->onFocusIn->add(tmp17,null(),null());
		HX_STACK_LINE(178)
		Dynamic tmp18 = this->onWindowFocusOut_dyn();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(178)
		::lime::ui::Window tmp19 = window;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(178)
		Dynamic tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(178)
		{
			HX_STACK_LINE(178)
			Dynamic f = tmp18;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(178)
			::lime::ui::Window a1 = tmp19;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",178,0x8bc55476)
				{
					HX_STACK_LINE(178)
					::lime::ui::Window tmp21 = a1;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(178)
					f(tmp21).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(178)
			tmp20 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(178)
		window->onFocusOut->add(tmp20,null(),null());
		HX_STACK_LINE(179)
		Dynamic tmp21 = this->onWindowFullscreen_dyn();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(179)
		::lime::ui::Window tmp22 = window;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(179)
		Dynamic tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(179)
			Dynamic f = tmp21;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(179)
			::lime::ui::Window a1 = tmp22;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",179,0x8bc55476)
				{
					HX_STACK_LINE(179)
					::lime::ui::Window tmp24 = a1;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(179)
					f(tmp24).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(179)
			tmp23 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(179)
		window->onFullscreen->add(tmp23,null(),null());
		HX_STACK_LINE(180)
		Dynamic tmp24 = this->onKeyDown_dyn();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(180)
		::lime::ui::Window tmp25 = window;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(180)
		Dynamic tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(180)
		{
			HX_STACK_LINE(180)
			Dynamic f = tmp24;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(180)
			::lime::ui::Window a1 = tmp25;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,int a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",180,0x8bc55476)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(180)
					::lime::ui::Window tmp27 = a1;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(180)
					int tmp28 = a2;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(180)
					int tmp29 = a3;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(180)
					f(tmp27,tmp28,tmp29).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(180)
			tmp26 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(180)
		window->onKeyDown->add(tmp26,null(),null());
		HX_STACK_LINE(181)
		Dynamic tmp27 = this->onKeyUp_dyn();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(181)
		::lime::ui::Window tmp28 = window;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(181)
		Dynamic tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(181)
		{
			HX_STACK_LINE(181)
			Dynamic f = tmp27;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(181)
			::lime::ui::Window a1 = tmp28;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,int a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",181,0x8bc55476)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(181)
					::lime::ui::Window tmp30 = a1;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(181)
					int tmp31 = a2;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(181)
					int tmp32 = a3;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(181)
					f(tmp30,tmp31,tmp32).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(181)
			tmp29 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(181)
		window->onKeyUp->add(tmp29,null(),null());
		HX_STACK_LINE(182)
		Dynamic tmp30 = this->onWindowLeave_dyn();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(182)
		::lime::ui::Window tmp31 = window;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(182)
		Dynamic tmp32;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(182)
		{
			HX_STACK_LINE(182)
			Dynamic f = tmp30;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(182)
			::lime::ui::Window a1 = tmp31;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",182,0x8bc55476)
				{
					HX_STACK_LINE(182)
					::lime::ui::Window tmp33 = a1;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(182)
					f(tmp33).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(182)
			tmp32 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(182)
		window->onLeave->add(tmp32,null(),null());
		HX_STACK_LINE(183)
		Dynamic tmp33 = this->onWindowMinimize_dyn();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(183)
		::lime::ui::Window tmp34 = window;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(183)
		Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(183)
		{
			HX_STACK_LINE(183)
			Dynamic f = tmp33;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(183)
			::lime::ui::Window a1 = tmp34;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",183,0x8bc55476)
				{
					HX_STACK_LINE(183)
					::lime::ui::Window tmp36 = a1;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(183)
					f(tmp36).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(183)
			tmp35 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(183)
		window->onMinimize->add(tmp35,null(),null());
		HX_STACK_LINE(184)
		Dynamic tmp36 = this->onMouseDown_dyn();		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(184)
		::lime::ui::Window tmp37 = window;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(184)
		Dynamic tmp38;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(184)
		{
			HX_STACK_LINE(184)
			Dynamic f = tmp36;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(184)
			::lime::ui::Window a1 = tmp37;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 3; }
			Void run(Float x,Float y,int a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",184,0x8bc55476)
				HX_STACK_ARG(x,"x")
				HX_STACK_ARG(y,"y")
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(184)
					::lime::ui::Window tmp39 = a1;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(184)
					Float tmp40 = x;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(184)
					Float tmp41 = y;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(184)
					int tmp42 = a2;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(184)
					f(tmp39,tmp40,tmp41,tmp42).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC3((void))

			HX_STACK_LINE(184)
			tmp38 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(184)
		window->onMouseDown->add(tmp38,null(),null());
		HX_STACK_LINE(185)
		Dynamic tmp39 = this->onMouseMove_dyn();		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(185)
		::lime::ui::Window tmp40 = window;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(185)
		Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(185)
		{
			HX_STACK_LINE(185)
			Dynamic f = tmp39;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(185)
			::lime::ui::Window a1 = tmp40;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float x,Float y){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",185,0x8bc55476)
				HX_STACK_ARG(x,"x")
				HX_STACK_ARG(y,"y")
				{
					HX_STACK_LINE(185)
					::lime::ui::Window tmp42 = a1;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(185)
					Float tmp43 = x;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(185)
					Float tmp44 = y;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(185)
					f(tmp42,tmp43,tmp44).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(185)
			tmp41 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(185)
		window->onMouseMove->add(tmp41,null(),null());
		HX_STACK_LINE(186)
		Dynamic tmp42 = this->onMouseMoveRelative_dyn();		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(186)
		::lime::ui::Window tmp43 = window;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(186)
		Dynamic tmp44;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(186)
		{
			HX_STACK_LINE(186)
			Dynamic f = tmp42;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(186)
			::lime::ui::Window a1 = tmp43;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float x,Float y){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",186,0x8bc55476)
				HX_STACK_ARG(x,"x")
				HX_STACK_ARG(y,"y")
				{
					HX_STACK_LINE(186)
					::lime::ui::Window tmp45 = a1;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(186)
					Float tmp46 = x;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(186)
					Float tmp47 = y;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(186)
					f(tmp45,tmp46,tmp47).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(186)
			tmp44 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(186)
		window->onMouseMoveRelative->add(tmp44,null(),null());
		HX_STACK_LINE(187)
		Dynamic tmp45 = this->onMouseUp_dyn();		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(187)
		::lime::ui::Window tmp46 = window;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(187)
		Dynamic tmp47;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(187)
		{
			HX_STACK_LINE(187)
			Dynamic f = tmp45;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(187)
			::lime::ui::Window a1 = tmp46;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 3; }
			Void run(Float x,Float y,int a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",187,0x8bc55476)
				HX_STACK_ARG(x,"x")
				HX_STACK_ARG(y,"y")
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(187)
					::lime::ui::Window tmp48 = a1;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(187)
					Float tmp49 = x;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(187)
					Float tmp50 = y;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(187)
					int tmp51 = a2;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(187)
					f(tmp48,tmp49,tmp50,tmp51).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC3((void))

			HX_STACK_LINE(187)
			tmp47 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(187)
		window->onMouseUp->add(tmp47,null(),null());
		HX_STACK_LINE(188)
		Dynamic tmp48 = this->onMouseWheel_dyn();		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(188)
		::lime::ui::Window tmp49 = window;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(188)
		Dynamic tmp50;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(188)
		{
			HX_STACK_LINE(188)
			Dynamic f = tmp48;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(188)
			::lime::ui::Window a1 = tmp49;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float a2,Float a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",188,0x8bc55476)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(188)
					::lime::ui::Window tmp51 = a1;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(188)
					Float tmp52 = a2;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(188)
					Float tmp53 = a3;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(188)
					f(tmp51,tmp52,tmp53).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(188)
			tmp50 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(188)
		window->onMouseWheel->add(tmp50,null(),null());
		HX_STACK_LINE(189)
		Dynamic tmp51 = this->onWindowMove_dyn();		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(189)
		::lime::ui::Window tmp52 = window;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(189)
		Dynamic tmp53;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(189)
		{
			HX_STACK_LINE(189)
			Dynamic f = tmp51;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(189)
			::lime::ui::Window a1 = tmp52;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float x,Float y){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",189,0x8bc55476)
				HX_STACK_ARG(x,"x")
				HX_STACK_ARG(y,"y")
				{
					HX_STACK_LINE(189)
					::lime::ui::Window tmp54 = a1;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(189)
					Float tmp55 = x;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(189)
					Float tmp56 = y;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(189)
					f(tmp54,tmp55,tmp56).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(189)
			tmp53 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(189)
		window->onMove->add(tmp53,null(),null());
		HX_STACK_LINE(190)
		Dynamic tmp54 = this->onWindowResize_dyn();		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(190)
		::lime::ui::Window tmp55 = window;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(190)
		Dynamic tmp56;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(190)
		{
			HX_STACK_LINE(190)
			Dynamic f = tmp54;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(190)
			::lime::ui::Window a1 = tmp55;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,int a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",190,0x8bc55476)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(190)
					::lime::ui::Window tmp57 = a1;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(190)
					int tmp58 = a2;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(190)
					int tmp59 = a3;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(190)
					f(tmp57,tmp58,tmp59).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(190)
			tmp56 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(190)
		window->onResize->add(tmp56,null(),null());
		HX_STACK_LINE(191)
		Dynamic tmp57 = this->onWindowRestore_dyn();		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(191)
		::lime::ui::Window tmp58 = window;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(191)
		Dynamic tmp59;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(191)
		{
			HX_STACK_LINE(191)
			Dynamic f = tmp57;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(191)
			::lime::ui::Window a1 = tmp58;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",191,0x8bc55476)
				{
					HX_STACK_LINE(191)
					::lime::ui::Window tmp60 = a1;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(191)
					f(tmp60).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(191)
			tmp59 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(191)
		window->onRestore->add(tmp59,null(),null());
		HX_STACK_LINE(192)
		Dynamic tmp60 = this->onTextEdit_dyn();		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(192)
		::lime::ui::Window tmp61 = window;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(192)
		Dynamic tmp62;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(192)
		{
			HX_STACK_LINE(192)
			Dynamic f = tmp60;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(192)
			::lime::ui::Window a1 = tmp61;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 3; }
			Void run(::String a2,int a3,int a4){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",192,0x8bc55476)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				HX_STACK_ARG(a4,"a4")
				{
					HX_STACK_LINE(192)
					::lime::ui::Window tmp63 = a1;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(192)
					::String tmp64 = a2;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(192)
					int tmp65 = a3;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(192)
					int tmp66 = a4;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(192)
					f(tmp63,tmp64,tmp65,tmp66).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC3((void))

			HX_STACK_LINE(192)
			tmp62 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(192)
		window->onTextEdit->add(tmp62,null(),null());
		HX_STACK_LINE(193)
		Dynamic tmp63 = this->onTextInput_dyn();		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(193)
		::lime::ui::Window tmp64 = window;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(193)
		Dynamic tmp65;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			Dynamic f = tmp63;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(193)
			::lime::ui::Window a1 = tmp64;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(::String a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",193,0x8bc55476)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(193)
					::lime::ui::Window tmp66 = a1;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(193)
					::String tmp67 = a2;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(193)
					f(tmp66,tmp67).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(193)
			tmp65 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(193)
		window->onTextInput->add(tmp65,null(),null());
		HX_STACK_LINE(195)
		bool tmp66 = (window->renderer == null());		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(195)
		if ((tmp66)){
			HX_STACK_LINE(197)
			::lime::graphics::Renderer tmp67 = ::lime::graphics::Renderer_obj::__new(window);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(197)
			::lime::graphics::Renderer renderer = tmp67;		HX_STACK_VAR(renderer,"renderer");
			HX_STACK_LINE(198)
			::lime::graphics::Renderer tmp68 = renderer;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(198)
			this->addRenderer(tmp68);
		}
		HX_STACK_LINE(202)
		window->create(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(203)
		::lime::ui::Window tmp67 = window;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(203)
		this->windows->push(tmp67);
		HX_STACK_LINE(204)
		::haxe::ds::IntMap tmp68 = this->windowByID;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(204)
		int tmp69 = window->id;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(204)
		::lime::ui::Window tmp70 = window;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(204)
		tmp68->set(tmp69,tmp70);
		HX_STACK_LINE(206)
		window->onCreate->dispatch();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,createWindow,(void))

int Application_obj::exec( ){
	HX_STACK_FRAME("lime.app.Application","exec",0x508159f5,"lime.app.Application.exec","lime/app/Application.hx",217,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(219)
	::lime::app::Application_obj::current = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(221)
	::lime::_backend::native::NativeApplication tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(221)
	int tmp1 = tmp->exec();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(221)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,exec,return )

Void Application_obj::onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadAxisMove",0x507e62d0,"lime.app.Application.onGamepadAxisMove","lime/app/Application.hx",228,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(228)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(228)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(228)
		while((true)){
			HX_STACK_LINE(228)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(228)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(228)
			if ((tmp1)){
				HX_STACK_LINE(228)
				break;
			}
			HX_STACK_LINE(228)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(228)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(228)
			++(_g);
			HX_STACK_LINE(230)
			::lime::ui::Gamepad tmp3 = gamepad;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(230)
			int tmp4 = axis;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(230)
			Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(230)
			module->onGamepadAxisMove(tmp3,tmp4,tmp5);
		}
	}
return null();
}


Void Application_obj::onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadButtonDown",0x00e65572,"lime.app.Application.onGamepadButtonDown","lime/app/Application.hx",239,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(239)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(239)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(239)
		while((true)){
			HX_STACK_LINE(239)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(239)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(239)
			if ((tmp1)){
				HX_STACK_LINE(239)
				break;
			}
			HX_STACK_LINE(239)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(239)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(239)
			++(_g);
			HX_STACK_LINE(241)
			::lime::ui::Gamepad tmp3 = gamepad;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(241)
			int tmp4 = button;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(241)
			module->onGamepadButtonDown(tmp3,tmp4);
		}
	}
return null();
}


Void Application_obj::onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadButtonUp",0x1cbc5f6b,"lime.app.Application.onGamepadButtonUp","lime/app/Application.hx",250,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(250)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(250)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(250)
		while((true)){
			HX_STACK_LINE(250)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(250)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(250)
			if ((tmp1)){
				HX_STACK_LINE(250)
				break;
			}
			HX_STACK_LINE(250)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(250)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(250)
			++(_g);
			HX_STACK_LINE(252)
			::lime::ui::Gamepad tmp3 = gamepad;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(252)
			int tmp4 = button;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(252)
			module->onGamepadButtonUp(tmp3,tmp4);
		}
	}
return null();
}


Void Application_obj::onGamepadConnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadConnect",0xf3ecc32c,"lime.app.Application.onGamepadConnect","lime/app/Application.hx",261,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(261)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(261)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(261)
		while((true)){
			HX_STACK_LINE(261)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(261)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(261)
			if ((tmp1)){
				HX_STACK_LINE(261)
				break;
			}
			HX_STACK_LINE(261)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(261)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(261)
			++(_g);
			HX_STACK_LINE(263)
			::lime::ui::Gamepad tmp3 = gamepad;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(263)
			module->onGamepadConnect(tmp3);
		}
	}
return null();
}


Void Application_obj::onGamepadDisconnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadDisconnect",0xbdc6525a,"lime.app.Application.onGamepadDisconnect","lime/app/Application.hx",272,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(272)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(272)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(272)
		while((true)){
			HX_STACK_LINE(272)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(272)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(272)
			if ((tmp1)){
				HX_STACK_LINE(272)
				break;
			}
			HX_STACK_LINE(272)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(272)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(272)
			++(_g);
			HX_STACK_LINE(274)
			::lime::ui::Gamepad tmp3 = gamepad;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(274)
			module->onGamepadDisconnect(tmp3);
		}
	}
return null();
}


Void Application_obj::onJoystickAxisMove( ::lime::ui::Joystick joystick,int axis,Float value){
{
		HX_STACK_FRAME("lime.app.Application","onJoystickAxisMove",0x646941d1,"lime.app.Application.onJoystickAxisMove","lime/app/Application.hx",283,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(283)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(283)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(283)
		while((true)){
			HX_STACK_LINE(283)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(283)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(283)
			if ((tmp1)){
				HX_STACK_LINE(283)
				break;
			}
			HX_STACK_LINE(283)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(283)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(283)
			++(_g);
			HX_STACK_LINE(285)
			::lime::ui::Joystick tmp3 = joystick;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(285)
			int tmp4 = axis;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(285)
			Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(285)
			module->onJoystickAxisMove(tmp3,tmp4,tmp5);
		}
	}
return null();
}


Void Application_obj::onJoystickButtonDown( ::lime::ui::Joystick joystick,int button){
{
		HX_STACK_FRAME("lime.app.Application","onJoystickButtonDown",0x0c87b6b3,"lime.app.Application.onJoystickButtonDown","lime/app/Application.hx",294,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(294)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(294)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(294)
		while((true)){
			HX_STACK_LINE(294)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(294)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(294)
			if ((tmp1)){
				HX_STACK_LINE(294)
				break;
			}
			HX_STACK_LINE(294)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(294)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(294)
			++(_g);
			HX_STACK_LINE(296)
			::lime::ui::Joystick tmp3 = joystick;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(296)
			int tmp4 = button;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(296)
			module->onJoystickButtonDown(tmp3,tmp4);
		}
	}
return null();
}


Void Application_obj::onJoystickButtonUp( ::lime::ui::Joystick joystick,int button){
{
		HX_STACK_FRAME("lime.app.Application","onJoystickButtonUp",0x30a73e6c,"lime.app.Application.onJoystickButtonUp","lime/app/Application.hx",305,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(305)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(305)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(305)
		while((true)){
			HX_STACK_LINE(305)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(305)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(305)
			if ((tmp1)){
				HX_STACK_LINE(305)
				break;
			}
			HX_STACK_LINE(305)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(305)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(305)
			++(_g);
			HX_STACK_LINE(307)
			::lime::ui::Joystick tmp3 = joystick;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(307)
			int tmp4 = button;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(307)
			module->onJoystickButtonUp(tmp3,tmp4);
		}
	}
return null();
}


Void Application_obj::onJoystickConnect( ::lime::ui::Joystick joystick){
{
		HX_STACK_FRAME("lime.app.Application","onJoystickConnect",0x26867f4b,"lime.app.Application.onJoystickConnect","lime/app/Application.hx",316,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_LINE(316)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(316)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(316)
		while((true)){
			HX_STACK_LINE(316)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(316)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(316)
			if ((tmp1)){
				HX_STACK_LINE(316)
				break;
			}
			HX_STACK_LINE(316)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(316)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(316)
			++(_g);
			HX_STACK_LINE(318)
			::lime::ui::Joystick tmp3 = joystick;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(318)
			module->onJoystickConnect(tmp3);
		}
	}
return null();
}


Void Application_obj::onJoystickDisconnect( ::lime::ui::Joystick joystick){
{
		HX_STACK_FRAME("lime.app.Application","onJoystickDisconnect",0xc967b39b,"lime.app.Application.onJoystickDisconnect","lime/app/Application.hx",327,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_LINE(327)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(327)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(327)
		while((true)){
			HX_STACK_LINE(327)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(327)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(327)
			if ((tmp1)){
				HX_STACK_LINE(327)
				break;
			}
			HX_STACK_LINE(327)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(327)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(327)
			++(_g);
			HX_STACK_LINE(329)
			::lime::ui::Joystick tmp3 = joystick;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(329)
			module->onJoystickDisconnect(tmp3);
		}
	}
return null();
}


Void Application_obj::onJoystickHatMove( ::lime::ui::Joystick joystick,int hat,int position){
{
		HX_STACK_FRAME("lime.app.Application","onJoystickHatMove",0xbc11db6d,"lime.app.Application.onJoystickHatMove","lime/app/Application.hx",338,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_ARG(hat,"hat")
		HX_STACK_ARG(position,"position")
		HX_STACK_LINE(338)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(338)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(338)
		while((true)){
			HX_STACK_LINE(338)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(338)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(338)
			if ((tmp1)){
				HX_STACK_LINE(338)
				break;
			}
			HX_STACK_LINE(338)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(338)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(338)
			++(_g);
			HX_STACK_LINE(340)
			::lime::ui::Joystick tmp3 = joystick;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(340)
			int tmp4 = hat;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(340)
			int tmp5 = position;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(340)
			module->onJoystickHatMove(tmp3,tmp4,tmp5);
		}
	}
return null();
}


Void Application_obj::onJoystickTrackballMove( ::lime::ui::Joystick joystick,int trackball,Float value){
{
		HX_STACK_FRAME("lime.app.Application","onJoystickTrackballMove",0xefab705c,"lime.app.Application.onJoystickTrackballMove","lime/app/Application.hx",349,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_ARG(trackball,"trackball")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(349)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(349)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(349)
		while((true)){
			HX_STACK_LINE(349)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(349)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(349)
			if ((tmp1)){
				HX_STACK_LINE(349)
				break;
			}
			HX_STACK_LINE(349)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(349)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(349)
			++(_g);
			HX_STACK_LINE(351)
			::lime::ui::Joystick tmp3 = joystick;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(351)
			int tmp4 = trackball;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(351)
			Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(351)
			module->onJoystickTrackballMove(tmp3,tmp4,tmp5);
		}
	}
return null();
}


Void Application_obj::onKeyDown( ::lime::ui::Window window,int keyCode,int modifier){
{
		HX_STACK_FRAME("lime.app.Application","onKeyDown",0x622d115e,"lime.app.Application.onKeyDown","lime/app/Application.hx",360,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(360)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(360)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(360)
		while((true)){
			HX_STACK_LINE(360)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(360)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(360)
			if ((tmp1)){
				HX_STACK_LINE(360)
				break;
			}
			HX_STACK_LINE(360)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(360)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(360)
			++(_g);
			HX_STACK_LINE(362)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(362)
			int tmp4 = keyCode;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(362)
			int tmp5 = modifier;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(362)
			module->onKeyDown(tmp3,tmp4,tmp5);
		}
	}
return null();
}


Void Application_obj::onKeyUp( ::lime::ui::Window window,int keyCode,int modifier){
{
		HX_STACK_FRAME("lime.app.Application","onKeyUp",0x55960857,"lime.app.Application.onKeyUp","lime/app/Application.hx",371,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(371)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(371)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(371)
		while((true)){
			HX_STACK_LINE(371)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(371)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(371)
			if ((tmp1)){
				HX_STACK_LINE(371)
				break;
			}
			HX_STACK_LINE(371)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(371)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(371)
			++(_g);
			HX_STACK_LINE(373)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(373)
			int tmp4 = keyCode;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(373)
			int tmp5 = modifier;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(373)
			module->onKeyUp(tmp3,tmp4,tmp5);
		}
	}
return null();
}


Void Application_obj::onModuleExit( int code){
{
		HX_STACK_FRAME("lime.app.Application","onModuleExit",0x4a2a2a4d,"lime.app.Application.onModuleExit","lime/app/Application.hx",380,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(code,"code")
		HX_STACK_LINE(382)
		{
			HX_STACK_LINE(382)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(382)
			Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(382)
			while((true)){
				HX_STACK_LINE(382)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(382)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(382)
				if ((tmp1)){
					HX_STACK_LINE(382)
					break;
				}
				HX_STACK_LINE(382)
				::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(382)
				::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
				HX_STACK_LINE(382)
				++(_g);
				HX_STACK_LINE(384)
				int tmp3 = code;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(384)
				module->onModuleExit(tmp3);
			}
		}
		HX_STACK_LINE(388)
		::lime::_backend::native::NativeApplication tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(388)
		tmp->exit();
	}
return null();
}


Void Application_obj::onMouseDown( ::lime::ui::Window window,Float x,Float y,int button){
{
		HX_STACK_FRAME("lime.app.Application","onMouseDown",0x372f8224,"lime.app.Application.onMouseDown","lime/app/Application.hx",395,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(395)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(395)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(395)
		while((true)){
			HX_STACK_LINE(395)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(395)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(395)
			if ((tmp1)){
				HX_STACK_LINE(395)
				break;
			}
			HX_STACK_LINE(395)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(395)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(395)
			++(_g);
			HX_STACK_LINE(397)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(397)
			Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(397)
			Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(397)
			int tmp6 = button;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(397)
			module->onMouseDown(tmp3,tmp4,tmp5,tmp6);
		}
	}
return null();
}


Void Application_obj::onMouseMove( ::lime::ui::Window window,Float x,Float y){
{
		HX_STACK_FRAME("lime.app.Application","onMouseMove",0x3d226cd3,"lime.app.Application.onMouseMove","lime/app/Application.hx",406,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(406)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(406)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(406)
		while((true)){
			HX_STACK_LINE(406)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(406)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(406)
			if ((tmp1)){
				HX_STACK_LINE(406)
				break;
			}
			HX_STACK_LINE(406)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(406)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(406)
			++(_g);
			HX_STACK_LINE(408)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(408)
			Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(408)
			Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(408)
			module->onMouseMove(tmp3,tmp4,tmp5);
		}
	}
return null();
}


Void Application_obj::onMouseMoveRelative( ::lime::ui::Window window,Float x,Float y){
{
		HX_STACK_FRAME("lime.app.Application","onMouseMoveRelative",0xf3ee70bf,"lime.app.Application.onMouseMoveRelative","lime/app/Application.hx",417,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(417)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(417)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(417)
		while((true)){
			HX_STACK_LINE(417)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(417)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(417)
			if ((tmp1)){
				HX_STACK_LINE(417)
				break;
			}
			HX_STACK_LINE(417)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(417)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(417)
			++(_g);
			HX_STACK_LINE(419)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(419)
			Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(419)
			Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(419)
			module->onMouseMoveRelative(tmp3,tmp4,tmp5);
		}
	}
return null();
}


Void Application_obj::onMouseUp( ::lime::ui::Window window,Float x,Float y,int button){
{
		HX_STACK_FRAME("lime.app.Application","onMouseUp",0x86589b9d,"lime.app.Application.onMouseUp","lime/app/Application.hx",428,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(428)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(428)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(428)
		while((true)){
			HX_STACK_LINE(428)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(428)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(428)
			if ((tmp1)){
				HX_STACK_LINE(428)
				break;
			}
			HX_STACK_LINE(428)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(428)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(428)
			++(_g);
			HX_STACK_LINE(430)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(430)
			Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(430)
			Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(430)
			int tmp6 = button;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(430)
			module->onMouseUp(tmp3,tmp4,tmp5,tmp6);
		}
	}
return null();
}


Void Application_obj::onMouseWheel( ::lime::ui::Window window,Float deltaX,Float deltaY){
{
		HX_STACK_FRAME("lime.app.Application","onMouseWheel",0xfe513499,"lime.app.Application.onMouseWheel","lime/app/Application.hx",439,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(deltaX,"deltaX")
		HX_STACK_ARG(deltaY,"deltaY")
		HX_STACK_LINE(439)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(439)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(439)
		while((true)){
			HX_STACK_LINE(439)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(439)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(439)
			if ((tmp1)){
				HX_STACK_LINE(439)
				break;
			}
			HX_STACK_LINE(439)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(439)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(439)
			++(_g);
			HX_STACK_LINE(441)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(441)
			Float tmp4 = deltaX;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(441)
			Float tmp5 = deltaY;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(441)
			module->onMouseWheel(tmp3,tmp4,tmp5);
		}
	}
return null();
}


Void Application_obj::onPreloadComplete( ){
{
		HX_STACK_FRAME("lime.app.Application","onPreloadComplete",0x8806a25f,"lime.app.Application.onPreloadComplete","lime/app/Application.hx",450,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(450)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(450)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(450)
		while((true)){
			HX_STACK_LINE(450)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(450)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(450)
			if ((tmp1)){
				HX_STACK_LINE(450)
				break;
			}
			HX_STACK_LINE(450)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(450)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(450)
			++(_g);
			HX_STACK_LINE(452)
			module->onPreloadComplete();
		}
	}
return null();
}


Void Application_obj::onPreloadProgress( int loaded,int total){
{
		HX_STACK_FRAME("lime.app.Application","onPreloadProgress",0x8e699953,"lime.app.Application.onPreloadProgress","lime/app/Application.hx",461,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(loaded,"loaded")
		HX_STACK_ARG(total,"total")
		HX_STACK_LINE(461)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(461)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(461)
		while((true)){
			HX_STACK_LINE(461)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(461)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(461)
			if ((tmp1)){
				HX_STACK_LINE(461)
				break;
			}
			HX_STACK_LINE(461)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(461)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(461)
			++(_g);
			HX_STACK_LINE(463)
			int tmp3 = loaded;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(463)
			int tmp4 = total;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(463)
			module->onPreloadProgress(tmp3,tmp4);
		}
	}
return null();
}


Void Application_obj::onRenderContextLost( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("lime.app.Application","onRenderContextLost",0xfdd705ba,"lime.app.Application.onRenderContextLost","lime/app/Application.hx",472,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_LINE(472)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(472)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(472)
		while((true)){
			HX_STACK_LINE(472)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(472)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(472)
			if ((tmp1)){
				HX_STACK_LINE(472)
				break;
			}
			HX_STACK_LINE(472)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(472)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(472)
			++(_g);
			HX_STACK_LINE(474)
			::lime::graphics::Renderer tmp3 = renderer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(474)
			module->onRenderContextLost(tmp3);
		}
	}
return null();
}


Void Application_obj::onRenderContextRestored( ::lime::graphics::Renderer renderer,::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("lime.app.Application","onRenderContextRestored",0x4fd2fc2c,"lime.app.Application.onRenderContextRestored","lime/app/Application.hx",483,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(483)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(483)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(483)
		while((true)){
			HX_STACK_LINE(483)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(483)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(483)
			if ((tmp1)){
				HX_STACK_LINE(483)
				break;
			}
			HX_STACK_LINE(483)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(483)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(483)
			++(_g);
			HX_STACK_LINE(485)
			::lime::graphics::Renderer tmp3 = renderer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(485)
			::lime::graphics::RenderContext tmp4 = context;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(485)
			module->onRenderContextRestored(tmp3,tmp4);
		}
	}
return null();
}


Void Application_obj::onTextEdit( ::lime::ui::Window window,::String text,int start,int length){
{
		HX_STACK_FRAME("lime.app.Application","onTextEdit",0xa9173afa,"lime.app.Application.onTextEdit","lime/app/Application.hx",494,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(length,"length")
		HX_STACK_LINE(494)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(494)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(494)
		while((true)){
			HX_STACK_LINE(494)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(494)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(494)
			if ((tmp1)){
				HX_STACK_LINE(494)
				break;
			}
			HX_STACK_LINE(494)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(494)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(494)
			++(_g);
			HX_STACK_LINE(496)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(496)
			::String tmp4 = text;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(496)
			int tmp5 = start;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(496)
			int tmp6 = length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(496)
			module->onTextEdit(tmp3,tmp4,tmp5,tmp6);
		}
	}
return null();
}


Void Application_obj::onTextInput( ::lime::ui::Window window,::String text){
{
		HX_STACK_FRAME("lime.app.Application","onTextInput",0x9f78251a,"lime.app.Application.onTextInput","lime/app/Application.hx",505,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(505)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(505)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(505)
		while((true)){
			HX_STACK_LINE(505)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(505)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(505)
			if ((tmp1)){
				HX_STACK_LINE(505)
				break;
			}
			HX_STACK_LINE(505)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(505)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(505)
			++(_g);
			HX_STACK_LINE(507)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(507)
			::String tmp4 = text;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(507)
			module->onTextInput(tmp3,tmp4);
		}
	}
return null();
}


Void Application_obj::onTouchEnd( ::lime::ui::Touch touch){
{
		HX_STACK_FRAME("lime.app.Application","onTouchEnd",0x6316e2ff,"lime.app.Application.onTouchEnd","lime/app/Application.hx",516,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(touch,"touch")
		HX_STACK_LINE(516)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(516)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(516)
		while((true)){
			HX_STACK_LINE(516)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(516)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(516)
			if ((tmp1)){
				HX_STACK_LINE(516)
				break;
			}
			HX_STACK_LINE(516)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(516)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(516)
			++(_g);
			HX_STACK_LINE(518)
			::lime::ui::Touch tmp3 = touch;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(518)
			module->onTouchEnd(tmp3);
		}
	}
return null();
}


Void Application_obj::onTouchMove( ::lime::ui::Touch touch){
{
		HX_STACK_FRAME("lime.app.Application","onTouchMove",0x563a436d,"lime.app.Application.onTouchMove","lime/app/Application.hx",527,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(touch,"touch")
		HX_STACK_LINE(527)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(527)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(527)
		while((true)){
			HX_STACK_LINE(527)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(527)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(527)
			if ((tmp1)){
				HX_STACK_LINE(527)
				break;
			}
			HX_STACK_LINE(527)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(527)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(527)
			++(_g);
			HX_STACK_LINE(529)
			::lime::ui::Touch tmp3 = touch;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(529)
			module->onTouchMove(tmp3);
		}
	}
return null();
}


Void Application_obj::onTouchStart( ::lime::ui::Touch touch){
{
		HX_STACK_FRAME("lime.app.Application","onTouchStart",0x94666486,"lime.app.Application.onTouchStart","lime/app/Application.hx",538,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(touch,"touch")
		HX_STACK_LINE(538)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(538)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(538)
		while((true)){
			HX_STACK_LINE(538)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(538)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(538)
			if ((tmp1)){
				HX_STACK_LINE(538)
				break;
			}
			HX_STACK_LINE(538)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(538)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(538)
			++(_g);
			HX_STACK_LINE(540)
			::lime::ui::Touch tmp3 = touch;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(540)
			module->onTouchStart(tmp3);
		}
	}
return null();
}


Void Application_obj::onWindowActivate( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","onWindowActivate",0xf2f355a6,"lime.app.Application.onWindowActivate","lime/app/Application.hx",549,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(549)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(549)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(549)
		while((true)){
			HX_STACK_LINE(549)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(549)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(549)
			if ((tmp1)){
				HX_STACK_LINE(549)
				break;
			}
			HX_STACK_LINE(549)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(549)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(549)
			++(_g);
			HX_STACK_LINE(551)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(551)
			module->onWindowActivate(tmp3);
		}
	}
return null();
}


Void Application_obj::onWindowClose( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","onWindowClose",0x133677e5,"lime.app.Application.onWindowClose","lime/app/Application.hx",558,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(560)
		{
			HX_STACK_LINE(560)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(560)
			Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(560)
			while((true)){
				HX_STACK_LINE(560)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(560)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(560)
				if ((tmp1)){
					HX_STACK_LINE(560)
					break;
				}
				HX_STACK_LINE(560)
				::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(560)
				::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
				HX_STACK_LINE(560)
				++(_g);
				HX_STACK_LINE(562)
				::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(562)
				module->onWindowClose(tmp3);
			}
		}
		HX_STACK_LINE(566)
		::lime::ui::Window tmp = window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(566)
		this->removeWindow(tmp);
	}
return null();
}


Void Application_obj::onWindowCreate( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","onWindowCreate",0x2a302e2f,"lime.app.Application.onWindowCreate","lime/app/Application.hx",573,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(573)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(573)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(573)
		while((true)){
			HX_STACK_LINE(573)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(573)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(573)
			if ((tmp1)){
				HX_STACK_LINE(573)
				break;
			}
			HX_STACK_LINE(573)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(573)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(573)
			++(_g);
			HX_STACK_LINE(575)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(575)
			module->onWindowCreate(tmp3);
		}
	}
return null();
}


Void Application_obj::onWindowDeactivate( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","onWindowDeactivate",0x950138e7,"lime.app.Application.onWindowDeactivate","lime/app/Application.hx",584,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(584)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(584)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(584)
		while((true)){
			HX_STACK_LINE(584)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(584)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(584)
			if ((tmp1)){
				HX_STACK_LINE(584)
				break;
			}
			HX_STACK_LINE(584)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(584)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(584)
			++(_g);
			HX_STACK_LINE(586)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(586)
			module->onWindowDeactivate(tmp3);
		}
	}
return null();
}


Void Application_obj::onWindowEnter( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","onWindowEnter",0x3b59cd45,"lime.app.Application.onWindowEnter","lime/app/Application.hx",595,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(595)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(595)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(595)
		while((true)){
			HX_STACK_LINE(595)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(595)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(595)
			if ((tmp1)){
				HX_STACK_LINE(595)
				break;
			}
			HX_STACK_LINE(595)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(595)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(595)
			++(_g);
			HX_STACK_LINE(597)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(597)
			module->onWindowEnter(tmp3);
		}
	}
return null();
}


Void Application_obj::onWindowFocusIn( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","onWindowFocusIn",0xf010cb4a,"lime.app.Application.onWindowFocusIn","lime/app/Application.hx",606,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(606)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(606)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(606)
		while((true)){
			HX_STACK_LINE(606)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(606)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(606)
			if ((tmp1)){
				HX_STACK_LINE(606)
				break;
			}
			HX_STACK_LINE(606)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(606)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(606)
			++(_g);
			HX_STACK_LINE(608)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(608)
			module->onWindowFocusIn(tmp3);
		}
	}
return null();
}


Void Application_obj::onWindowFocusOut( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","onWindowFocusOut",0x1ea5a989,"lime.app.Application.onWindowFocusOut","lime/app/Application.hx",617,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(617)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(617)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(617)
		while((true)){
			HX_STACK_LINE(617)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(617)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(617)
			if ((tmp1)){
				HX_STACK_LINE(617)
				break;
			}
			HX_STACK_LINE(617)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(617)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(617)
			++(_g);
			HX_STACK_LINE(619)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(619)
			module->onWindowFocusOut(tmp3);
		}
	}
return null();
}


Void Application_obj::onWindowFullscreen( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","onWindowFullscreen",0x52b416ee,"lime.app.Application.onWindowFullscreen","lime/app/Application.hx",628,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(628)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(628)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(628)
		while((true)){
			HX_STACK_LINE(628)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(628)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(628)
			if ((tmp1)){
				HX_STACK_LINE(628)
				break;
			}
			HX_STACK_LINE(628)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(628)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(628)
			++(_g);
			HX_STACK_LINE(630)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(630)
			module->onWindowFullscreen(tmp3);
		}
	}
return null();
}


Void Application_obj::onWindowLeave( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","onWindowLeave",0x3d269524,"lime.app.Application.onWindowLeave","lime/app/Application.hx",639,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(639)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(639)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(639)
		while((true)){
			HX_STACK_LINE(639)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(639)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(639)
			if ((tmp1)){
				HX_STACK_LINE(639)
				break;
			}
			HX_STACK_LINE(639)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(639)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(639)
			++(_g);
			HX_STACK_LINE(641)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(641)
			module->onWindowLeave(tmp3);
		}
	}
return null();
}


Void Application_obj::onWindowMinimize( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","onWindowMinimize",0x2ec07911,"lime.app.Application.onWindowMinimize","lime/app/Application.hx",650,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(650)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(650)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(650)
		while((true)){
			HX_STACK_LINE(650)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(650)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(650)
			if ((tmp1)){
				HX_STACK_LINE(650)
				break;
			}
			HX_STACK_LINE(650)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(650)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(650)
			++(_g);
			HX_STACK_LINE(652)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(652)
			module->onWindowMinimize(tmp3);
		}
	}
return null();
}


Void Application_obj::onWindowMove( ::lime::ui::Window window,Float x,Float y){
{
		HX_STACK_FRAME("lime.app.Application","onWindowMove",0xea016784,"lime.app.Application.onWindowMove","lime/app/Application.hx",661,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(661)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(661)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(661)
		while((true)){
			HX_STACK_LINE(661)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(661)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(661)
			if ((tmp1)){
				HX_STACK_LINE(661)
				break;
			}
			HX_STACK_LINE(661)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(661)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(661)
			++(_g);
			HX_STACK_LINE(663)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(663)
			Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(663)
			Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(663)
			module->onWindowMove(tmp3,tmp4,tmp5);
		}
	}
return null();
}


Void Application_obj::onWindowResize( ::lime::ui::Window window,int width,int height){
{
		HX_STACK_FRAME("lime.app.Application","onWindowResize",0xb69c2127,"lime.app.Application.onWindowResize","lime/app/Application.hx",672,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(672)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(672)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(672)
		while((true)){
			HX_STACK_LINE(672)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(672)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(672)
			if ((tmp1)){
				HX_STACK_LINE(672)
				break;
			}
			HX_STACK_LINE(672)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(672)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(672)
			++(_g);
			HX_STACK_LINE(674)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(674)
			int tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(674)
			int tmp5 = height;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(674)
			module->onWindowResize(tmp3,tmp4,tmp5);
		}
	}
return null();
}


Void Application_obj::onWindowRestore( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","onWindowRestore",0x193decbb,"lime.app.Application.onWindowRestore","lime/app/Application.hx",683,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(683)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(683)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(683)
		while((true)){
			HX_STACK_LINE(683)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(683)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(683)
			if ((tmp1)){
				HX_STACK_LINE(683)
				break;
			}
			HX_STACK_LINE(683)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(683)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(683)
			++(_g);
			HX_STACK_LINE(685)
			::lime::ui::Window tmp3 = window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(685)
			module->onWindowRestore(tmp3);
		}
	}
return null();
}


Void Application_obj::removeModule( ::lime::app::IModule module){
{
		HX_STACK_FRAME("lime.app.Application","removeModule",0x6e873a74,"lime.app.Application.removeModule","lime/app/Application.hx",696,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(module,"module")
		HX_STACK_LINE(698)
		bool tmp = (module != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(698)
		if ((tmp)){
			HX_STACK_LINE(700)
			module->onModuleExit((int)0);
			HX_STACK_LINE(701)
			::lime::app::IModule tmp1 = module;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(701)
			this->modules->remove(tmp1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,removeModule,(void))

Void Application_obj::removeRenderer( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("lime.app.Application","removeRenderer",0x39f2cd0b,"lime.app.Application.removeRenderer","lime/app/Application.hx",712,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_LINE(714)
		bool tmp = (renderer != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(714)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(714)
		if ((tmp)){
			HX_STACK_LINE(714)
			::lime::graphics::Renderer tmp2 = renderer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(714)
			::lime::graphics::Renderer tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(714)
			int tmp4 = this->renderers->indexOf(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(714)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(714)
			tmp1 = (tmp5 > (int)-1);
		}
		else{
			HX_STACK_LINE(714)
			tmp1 = false;
		}
		HX_STACK_LINE(714)
		if ((tmp1)){
			HX_STACK_LINE(716)
			::lime::graphics::Renderer tmp2 = renderer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(716)
			this->renderers->remove(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,removeRenderer,(void))

Void Application_obj::removeWindow( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","removeWindow",0x004099b8,"lime.app.Application.removeWindow","lime/app/Application.hx",727,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(729)
		bool tmp = (window != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(729)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(729)
		if ((tmp)){
			HX_STACK_LINE(729)
			::haxe::ds::IntMap tmp2 = this->windowByID;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(729)
			::haxe::ds::IntMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(729)
			int tmp4 = window->id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(729)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(729)
			tmp1 = tmp3->exists(tmp5);
		}
		else{
			HX_STACK_LINE(729)
			tmp1 = false;
		}
		HX_STACK_LINE(729)
		if ((tmp1)){
			HX_STACK_LINE(731)
			::lime::ui::Window tmp2 = window;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(731)
			this->windows->remove(tmp2);
			HX_STACK_LINE(732)
			::haxe::ds::IntMap tmp3 = this->windowByID;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(732)
			int tmp4 = window->id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(732)
			tmp3->remove(tmp4);
			HX_STACK_LINE(733)
			window->close();
			HX_STACK_LINE(735)
			::lime::ui::Window tmp5 = this->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(735)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(735)
			bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(735)
			if ((tmp7)){
				HX_STACK_LINE(737)
				this->window = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,removeWindow,(void))

Void Application_obj::render( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("lime.app.Application","render",0xbefe32ba,"lime.app.Application.render","lime/app/Application.hx",748,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_LINE(748)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(748)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(748)
		while((true)){
			HX_STACK_LINE(748)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(748)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(748)
			if ((tmp1)){
				HX_STACK_LINE(748)
				break;
			}
			HX_STACK_LINE(748)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(748)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(748)
			++(_g);
			HX_STACK_LINE(750)
			::lime::graphics::Renderer tmp3 = renderer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(750)
			module->render(tmp3);
		}
	}
return null();
}


Void Application_obj::setPreloader( ::lime::app::Preloader preloader){
{
		HX_STACK_FRAME("lime.app.Application","setPreloader",0xe5520ed8,"lime.app.Application.setPreloader","lime/app/Application.hx",757,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(preloader,"preloader")
		HX_STACK_LINE(759)
		::lime::app::Preloader tmp = this->preloader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(759)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(759)
		if ((tmp1)){
			HX_STACK_LINE(761)
			::lime::app::Preloader tmp2 = this->preloader;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(761)
			Dynamic tmp3 = this->onPreloadProgress_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(761)
			tmp2->onProgress->remove(tmp3);
			HX_STACK_LINE(762)
			::lime::app::Preloader tmp4 = this->preloader;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(762)
			Dynamic tmp5 = this->onPreloadComplete_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(762)
			tmp4->onComplete->remove(tmp5);
		}
		HX_STACK_LINE(766)
		this->preloader = preloader;
		HX_STACK_LINE(768)
		bool tmp2 = preloader->complete;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(768)
		if ((tmp2)){
			HX_STACK_LINE(770)
			this->onPreloadComplete();
		}
		else{
			HX_STACK_LINE(774)
			Dynamic tmp3 = this->onPreloadProgress_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(774)
			preloader->onProgress->add(tmp3,null(),null());
			HX_STACK_LINE(775)
			Dynamic tmp4 = this->onPreloadComplete_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(775)
			preloader->onComplete->add(tmp4,null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,setPreloader,(void))

Void Application_obj::update( int deltaTime){
{
		HX_STACK_FRAME("lime.app.Application","update",0x40da4d6d,"lime.app.Application.update","lime/app/Application.hx",784,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
		HX_STACK_LINE(784)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(784)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(784)
		while((true)){
			HX_STACK_LINE(784)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(784)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(784)
			if ((tmp1)){
				HX_STACK_LINE(784)
				break;
			}
			HX_STACK_LINE(784)
			::lime::app::IModule tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(784)
			::lime::app::IModule module = tmp2;		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(784)
			++(_g);
			HX_STACK_LINE(786)
			int tmp3 = deltaTime;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(786)
			module->update(tmp3);
		}
	}
return null();
}


Void Application_obj::__onGamepadConnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("lime.app.Application","__onGamepadConnect",0x60fc374c,"lime.app.Application.__onGamepadConnect","lime/app/Application.hx",793,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(795)
		::lime::ui::Gamepad tmp = gamepad;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(795)
		this->onGamepadConnect(tmp);
		HX_STACK_LINE(797)
		Dynamic tmp1 = this->onGamepadAxisMove_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(797)
		::lime::ui::Gamepad tmp2 = gamepad;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(797)
		Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(797)
		{
			HX_STACK_LINE(797)
			Dynamic f = tmp1;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(797)
			::lime::ui::Gamepad a1 = tmp2;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Gamepad,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,Float a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",797,0x8bc55476)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(797)
					::lime::ui::Gamepad tmp4 = a1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(797)
					int tmp5 = a2;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(797)
					Float tmp6 = a3;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(797)
					f(tmp4,tmp5,tmp6).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(797)
			tmp3 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(797)
		gamepad->onAxisMove->add(tmp3,null(),null());
		HX_STACK_LINE(798)
		Dynamic tmp4 = this->onGamepadButtonDown_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(798)
		::lime::ui::Gamepad tmp5 = gamepad;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(798)
		Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(798)
		{
			HX_STACK_LINE(798)
			Dynamic f = tmp4;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(798)
			::lime::ui::Gamepad a1 = tmp5;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Gamepad,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(int a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",798,0x8bc55476)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(798)
					::lime::ui::Gamepad tmp7 = a1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(798)
					int tmp8 = a2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(798)
					f(tmp7,tmp8).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(798)
			tmp6 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(798)
		gamepad->onButtonDown->add(tmp6,null(),null());
		HX_STACK_LINE(799)
		Dynamic tmp7 = this->onGamepadButtonUp_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(799)
		::lime::ui::Gamepad tmp8 = gamepad;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(799)
		Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(799)
		{
			HX_STACK_LINE(799)
			Dynamic f = tmp7;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(799)
			::lime::ui::Gamepad a1 = tmp8;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Gamepad,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(int a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",799,0x8bc55476)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(799)
					::lime::ui::Gamepad tmp10 = a1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(799)
					int tmp11 = a2;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(799)
					f(tmp10,tmp11).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(799)
			tmp9 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(799)
		gamepad->onButtonUp->add(tmp9,null(),null());
		HX_STACK_LINE(800)
		Dynamic tmp10 = this->onGamepadDisconnect_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(800)
		::lime::ui::Gamepad tmp11 = gamepad;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(800)
		Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(800)
		{
			HX_STACK_LINE(800)
			Dynamic f = tmp10;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(800)
			::lime::ui::Gamepad a1 = tmp11;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Gamepad,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",800,0x8bc55476)
				{
					HX_STACK_LINE(800)
					::lime::ui::Gamepad tmp13 = a1;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(800)
					f(tmp13).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(800)
			tmp12 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(800)
		gamepad->onDisconnect->add(tmp12,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,__onGamepadConnect,(void))

Void Application_obj::__onJoystickConnect( ::lime::ui::Joystick joystick){
{
		HX_STACK_FRAME("lime.app.Application","__onJoystickConnect",0x26fca72b,"lime.app.Application.__onJoystickConnect","lime/app/Application.hx",805,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_LINE(807)
		::lime::ui::Joystick tmp = joystick;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(807)
		this->onJoystickConnect(tmp);
		HX_STACK_LINE(809)
		Dynamic tmp1 = this->onJoystickAxisMove_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(809)
		::lime::ui::Joystick tmp2 = joystick;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(809)
		Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(809)
		{
			HX_STACK_LINE(809)
			Dynamic f = tmp1;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(809)
			::lime::ui::Joystick a1 = tmp2;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Joystick,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,Float a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",809,0x8bc55476)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(809)
					::lime::ui::Joystick tmp4 = a1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(809)
					int tmp5 = a2;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(809)
					Float tmp6 = a3;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(809)
					f(tmp4,tmp5,tmp6).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(809)
			tmp3 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(809)
		joystick->onAxisMove->add(tmp3,null(),null());
		HX_STACK_LINE(810)
		Dynamic tmp4 = this->onJoystickButtonDown_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(810)
		::lime::ui::Joystick tmp5 = joystick;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(810)
		Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(810)
		{
			HX_STACK_LINE(810)
			Dynamic f = tmp4;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(810)
			::lime::ui::Joystick a1 = tmp5;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Joystick,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(int a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",810,0x8bc55476)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(810)
					::lime::ui::Joystick tmp7 = a1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(810)
					int tmp8 = a2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(810)
					f(tmp7,tmp8).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(810)
			tmp6 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(810)
		joystick->onButtonDown->add(tmp6,null(),null());
		HX_STACK_LINE(811)
		Dynamic tmp7 = this->onJoystickButtonUp_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(811)
		::lime::ui::Joystick tmp8 = joystick;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(811)
		Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(811)
		{
			HX_STACK_LINE(811)
			Dynamic f = tmp7;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(811)
			::lime::ui::Joystick a1 = tmp8;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Joystick,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(int a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",811,0x8bc55476)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(811)
					::lime::ui::Joystick tmp10 = a1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(811)
					int tmp11 = a2;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(811)
					f(tmp10,tmp11).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(811)
			tmp9 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(811)
		joystick->onButtonUp->add(tmp9,null(),null());
		HX_STACK_LINE(812)
		Dynamic tmp10 = this->onJoystickDisconnect_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(812)
		::lime::ui::Joystick tmp11 = joystick;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(812)
		Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(812)
		{
			HX_STACK_LINE(812)
			Dynamic f = tmp10;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(812)
			::lime::ui::Joystick a1 = tmp11;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Joystick,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",812,0x8bc55476)
				{
					HX_STACK_LINE(812)
					::lime::ui::Joystick tmp13 = a1;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(812)
					f(tmp13).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(812)
			tmp12 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(812)
		joystick->onDisconnect->add(tmp12,null(),null());
		HX_STACK_LINE(813)
		Dynamic tmp13 = this->onJoystickHatMove_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(813)
		::lime::ui::Joystick tmp14 = joystick;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(813)
		Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(813)
		{
			HX_STACK_LINE(813)
			Dynamic f = tmp13;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(813)
			::lime::ui::Joystick a1 = tmp14;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Joystick,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,int a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",813,0x8bc55476)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(813)
					::lime::ui::Joystick tmp16 = a1;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(813)
					int tmp17 = a2;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(813)
					int tmp18 = a3;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(813)
					f(tmp16,tmp17,tmp18).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(813)
			tmp15 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(813)
		joystick->onHatMove->add(tmp15,null(),null());
		HX_STACK_LINE(814)
		Dynamic tmp16 = this->onJoystickTrackballMove_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(814)
		::lime::ui::Joystick tmp17 = joystick;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(814)
		Dynamic tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(814)
		{
			HX_STACK_LINE(814)
			Dynamic f = tmp16;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(814)
			::lime::ui::Joystick a1 = tmp17;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Joystick,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,Float a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/app/Application.hx",814,0x8bc55476)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(814)
					::lime::ui::Joystick tmp19 = a1;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(814)
					int tmp20 = a2;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(814)
					Float tmp21 = a3;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(814)
					f(tmp19,tmp20,tmp21).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(814)
			tmp18 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(814)
		joystick->onTrackballMove->add(tmp18,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,__onJoystickConnect,(void))

Float Application_obj::get_frameRate( ){
	HX_STACK_FRAME("lime.app.Application","get_frameRate",0x719f92a0,"lime.app.Application.get_frameRate","lime/app/Application.hx",826,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(828)
	::lime::_backend::native::NativeApplication tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(828)
	Float tmp1 = tmp->getFrameRate();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(828)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_frameRate,return )

Float Application_obj::set_frameRate( Float value){
	HX_STACK_FRAME("lime.app.Application","set_frameRate",0xb6a574ac,"lime.app.Application.set_frameRate","lime/app/Application.hx",833,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(835)
	::lime::_backend::native::NativeApplication tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(835)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(835)
	Float tmp2 = tmp->setFrameRate(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(835)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,set_frameRate,return )

::lime::graphics::Renderer Application_obj::get_renderer( ){
	HX_STACK_FRAME("lime.app.Application","get_renderer",0xa67be3b0,"lime.app.Application.get_renderer","lime/app/Application.hx",840,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(842)
	::lime::graphics::Renderer tmp = this->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(842)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_renderer,return )

::lime::ui::Window Application_obj::get_window( ){
	HX_STACK_FRAME("lime.app.Application","get_window",0xc86a4d1d,"lime.app.Application.get_window","lime/app/Application.hx",847,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(849)
	::lime::ui::Window tmp = this->windows->__get((int)0).StaticCast< ::lime::ui::Window >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(849)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_window,return )

::lime::app::Application Application_obj::current;


Application_obj::Application_obj()
{
}

void Application_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Application);
	HX_MARK_MEMBER_NAME(config,"config");
	HX_MARK_MEMBER_NAME(modules,"modules");
	HX_MARK_MEMBER_NAME(preloader,"preloader");
	HX_MARK_MEMBER_NAME(onUpdate,"onUpdate");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(renderers,"renderers");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(windows,"windows");
	HX_MARK_MEMBER_NAME(backend,"backend");
	HX_MARK_MEMBER_NAME(windowByID,"windowByID");
	::lime::app::Module_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Application_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(config,"config");
	HX_VISIT_MEMBER_NAME(modules,"modules");
	HX_VISIT_MEMBER_NAME(preloader,"preloader");
	HX_VISIT_MEMBER_NAME(onUpdate,"onUpdate");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(renderers,"renderers");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(windows,"windows");
	HX_VISIT_MEMBER_NAME(backend,"backend");
	HX_VISIT_MEMBER_NAME(windowByID,"windowByID");
	::lime::app::Module_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Application_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exec") ) { return exec_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config; }
		if (HX_FIELD_EQ(inName,"window") ) { return inCallProp == hx::paccAlways ? get_window() : window; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"modules") ) { return modules; }
		if (HX_FIELD_EQ(inName,"windows") ) { return windows; }
		if (HX_FIELD_EQ(inName,"backend") ) { return backend; }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate; }
		if (HX_FIELD_EQ(inName,"renderer") ) { return inCallProp == hx::paccAlways ? get_renderer() : renderer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == hx::paccAlways) return get_frameRate(); }
		if (HX_FIELD_EQ(inName,"preloader") ) { return preloader; }
		if (HX_FIELD_EQ(inName,"renderers") ) { return renderers; }
		if (HX_FIELD_EQ(inName,"addModule") ) { return addModule_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"windowByID") ) { return windowByID; }
		if (HX_FIELD_EQ(inName,"onTextEdit") ) { return onTextEdit_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"get_window") ) { return get_window_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addRenderer") ) { return addRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onTextInput") ) { return onTextInput_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createWindow") ) { return createWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"onModuleExit") ) { return onModuleExit_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchStart") ) { return onTouchStart_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMove") ) { return onWindowMove_dyn(); }
		if (HX_FIELD_EQ(inName,"removeModule") ) { return removeModule_dyn(); }
		if (HX_FIELD_EQ(inName,"removeWindow") ) { return removeWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"setPreloader") ) { return setPreloader_dyn(); }
		if (HX_FIELD_EQ(inName,"get_renderer") ) { return get_renderer_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { return onWindowClose_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowEnter") ) { return onWindowEnter_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowLeave") ) { return onWindowLeave_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frameRate") ) { return get_frameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frameRate") ) { return set_frameRate_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onWindowCreate") ) { return onWindowCreate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { return onWindowResize_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRenderer") ) { return removeRenderer_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onWindowFocusIn") ) { return onWindowFocusIn_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowRestore") ) { return onWindowRestore_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onGamepadConnect") ) { return onGamepadConnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowActivate") ) { return onWindowActivate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowFocusOut") ) { return onWindowFocusOut_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMinimize") ) { return onWindowMinimize_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onGamepadAxisMove") ) { return onGamepadAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadButtonUp") ) { return onGamepadButtonUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoystickConnect") ) { return onJoystickConnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoystickHatMove") ) { return onJoystickHatMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onPreloadComplete") ) { return onPreloadComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"onPreloadProgress") ) { return onPreloadProgress_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onJoystickAxisMove") ) { return onJoystickAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoystickButtonUp") ) { return onJoystickButtonUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowDeactivate") ) { return onWindowDeactivate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowFullscreen") ) { return onWindowFullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"__onGamepadConnect") ) { return __onGamepadConnect_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onGamepadButtonDown") ) { return onGamepadButtonDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadDisconnect") ) { return onGamepadDisconnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMoveRelative") ) { return onMouseMoveRelative_dyn(); }
		if (HX_FIELD_EQ(inName,"onRenderContextLost") ) { return onRenderContextLost_dyn(); }
		if (HX_FIELD_EQ(inName,"__onJoystickConnect") ) { return __onJoystickConnect_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"onJoystickButtonDown") ) { return onJoystickButtonDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoystickDisconnect") ) { return onJoystickDisconnect_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onJoystickTrackballMove") ) { return onJoystickTrackballMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onRenderContextRestored") ) { return onRenderContextRestored_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Application_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { outValue = current; return true;  }
	}
	return false;
}

Dynamic Application_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::lime::ui::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"modules") ) { modules=inValue.Cast< Array< ::lime::app::IModule > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windows") ) { windows=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backend") ) { backend=inValue.Cast< ::lime::_backend::native::NativeApplication >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { onUpdate=inValue.Cast< ::lime::app::Event_Int_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::lime::graphics::Renderer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == hx::paccAlways) return set_frameRate(inValue); }
		if (HX_FIELD_EQ(inName,"preloader") ) { preloader=inValue.Cast< ::lime::app::Preloader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderers") ) { renderers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"windowByID") ) { windowByID=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Application_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=ioValue.Cast< ::lime::app::Application >(); return true; }
	}
	return false;
}

void Application_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"));
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("modules","\x47","\xe2","\xfa","\xf7"));
	outFields->push(HX_HCSTRING("preloader","\x76","\xe4","\x7b","\x82"));
	outFields->push(HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"));
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	outFields->push(HX_HCSTRING("renderers","\xd0","\xd5","\x70","\xcd"));
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	outFields->push(HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));
	outFields->push(HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"));
	outFields->push(HX_HCSTRING("windowByID","\x82","\x71","\xf9","\xcb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Application_obj,config),HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7")},
	{hx::fsObject /*Array< ::lime::app::IModule >*/ ,(int)offsetof(Application_obj,modules),HX_HCSTRING("modules","\x47","\xe2","\xfa","\xf7")},
	{hx::fsObject /*::lime::app::Preloader*/ ,(int)offsetof(Application_obj,preloader),HX_HCSTRING("preloader","\x76","\xe4","\x7b","\x82")},
	{hx::fsObject /*::lime::app::Event_Int_Void*/ ,(int)offsetof(Application_obj,onUpdate),HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66")},
	{hx::fsObject /*::lime::graphics::Renderer*/ ,(int)offsetof(Application_obj,renderer),HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Application_obj,renderers),HX_HCSTRING("renderers","\xd0","\xd5","\x70","\xcd")},
	{hx::fsObject /*::lime::ui::Window*/ ,(int)offsetof(Application_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Application_obj,windows),HX_HCSTRING("windows","\x83","\xde","\x74","\xe8")},
	{hx::fsObject /*::lime::_backend::native::NativeApplication*/ ,(int)offsetof(Application_obj,backend),HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Application_obj,windowByID),HX_HCSTRING("windowByID","\x82","\x71","\xf9","\xcb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::app::Application*/ ,(void *) &Application_obj::current,HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("modules","\x47","\xe2","\xfa","\xf7"),
	HX_HCSTRING("preloader","\x76","\xe4","\x7b","\x82"),
	HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("renderers","\xd0","\xd5","\x70","\xcd"),
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"),
	HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"),
	HX_HCSTRING("windowByID","\x82","\x71","\xf9","\xcb"),
	HX_HCSTRING("addModule","\xad","\x69","\xf7","\x78"),
	HX_HCSTRING("addRenderer","\x84","\xfc","\x37","\xe4"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("createWindow","\x0c","\xd4","\xe1","\x74"),
	HX_HCSTRING("exec","\x91","\xf3","\x1d","\x43"),
	HX_HCSTRING("onGamepadAxisMove","\xb4","\xf7","\xd4","\x24"),
	HX_HCSTRING("onGamepadButtonDown","\x56","\xeb","\xb6","\x87"),
	HX_HCSTRING("onGamepadButtonUp","\x4f","\xf4","\x12","\xf1"),
	HX_HCSTRING("onGamepadConnect","\xc8","\x56","\xd7","\xec"),
	HX_HCSTRING("onGamepadDisconnect","\x3e","\xe8","\x96","\x44"),
	HX_HCSTRING("onJoystickAxisMove","\x6d","\xf4","\xd4","\x5b"),
	HX_HCSTRING("onJoystickButtonDown","\x4f","\x48","\x3a","\x7c"),
	HX_HCSTRING("onJoystickButtonUp","\x08","\xf1","\x12","\x28"),
	HX_HCSTRING("onJoystickConnect","\x2f","\x14","\xdd","\xfa"),
	HX_HCSTRING("onJoystickDisconnect","\x37","\x45","\x1a","\x39"),
	HX_HCSTRING("onJoystickHatMove","\x51","\x70","\x68","\x90"),
	HX_HCSTRING("onJoystickTrackballMove","\x40","\xc8","\x46","\x1a"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"),
	HX_HCSTRING("onModuleExit","\xe9","\xbf","\xa3","\x0b"),
	HX_HCSTRING("onMouseDown","\x08","\x94","\x05","\x11"),
	HX_HCSTRING("onMouseMove","\xb7","\x7e","\xf8","\x16"),
	HX_HCSTRING("onMouseMoveRelative","\xa3","\x06","\xbf","\x7a"),
	HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98"),
	HX_HCSTRING("onMouseWheel","\x35","\xca","\xca","\xbf"),
	HX_HCSTRING("onPreloadComplete","\x43","\x37","\x5d","\x5c"),
	HX_HCSTRING("onPreloadProgress","\x37","\x2e","\xc0","\x62"),
	HX_HCSTRING("onRenderContextLost","\x9e","\x9b","\xa7","\x84"),
	HX_HCSTRING("onRenderContextRestored","\x10","\x54","\x6e","\x7a"),
	HX_HCSTRING("onTextEdit","\x96","\xf1","\xc0","\x23"),
	HX_HCSTRING("onTextInput","\xfe","\x36","\x4e","\x79"),
	HX_HCSTRING("onTouchEnd","\x9b","\x99","\xc0","\xdd"),
	HX_HCSTRING("onTouchMove","\x51","\x55","\x10","\x30"),
	HX_HCSTRING("onTouchStart","\x22","\xfa","\xdf","\x55"),
	HX_HCSTRING("onWindowActivate","\x42","\xe9","\xdd","\xeb"),
	HX_HCSTRING("onWindowClose","\xc9","\xca","\x1f","\x9c"),
	HX_HCSTRING("onWindowCreate","\xcb","\x62","\x6f","\x6d"),
	HX_HCSTRING("onWindowDeactivate","\x83","\xeb","\x6c","\x8c"),
	HX_HCSTRING("onWindowEnter","\x29","\x20","\x43","\xc4"),
	HX_HCSTRING("onWindowFocusIn","\x2e","\x9f","\x1f","\x84"),
	HX_HCSTRING("onWindowFocusOut","\x25","\x3d","\x90","\x17"),
	HX_HCSTRING("onWindowFullscreen","\x8a","\xc9","\x1f","\x4a"),
	HX_HCSTRING("onWindowLeave","\x08","\xe8","\x0f","\xc6"),
	HX_HCSTRING("onWindowMinimize","\xad","\x0c","\xab","\x27"),
	HX_HCSTRING("onWindowMove","\x20","\xfd","\x7a","\xab"),
	HX_HCSTRING("onWindowResize","\xc3","\x55","\xdb","\xf9"),
	HX_HCSTRING("onWindowRestore","\x9f","\xc0","\x4c","\xad"),
	HX_HCSTRING("removeModule","\x10","\xd0","\x00","\x30"),
	HX_HCSTRING("removeRenderer","\xa7","\x01","\x32","\x7d"),
	HX_HCSTRING("removeWindow","\x54","\x2f","\xba","\xc1"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("setPreloader","\x74","\xa4","\xcb","\xa6"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("__onGamepadConnect","\xe8","\xe9","\x67","\x58"),
	HX_HCSTRING("__onJoystickConnect","\x0f","\x3d","\xcd","\xad"),
	HX_HCSTRING("get_frameRate","\x84","\xe5","\x88","\xfa"),
	HX_HCSTRING("set_frameRate","\x90","\xc7","\x8e","\x3f"),
	HX_HCSTRING("get_renderer","\x4c","\x79","\xf5","\x67"),
	HX_HCSTRING("get_window","\xb9","\x03","\x14","\x43"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Application_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Application_obj::current,"current");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Application_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Application_obj::current,"current");
};

#endif

hx::Class Application_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	::String(null()) };

void Application_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app.Application","\x8a","\x94","\x72","\x90");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Application_obj::__GetStatic;
	__mClass->mSetStaticField = &Application_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Application_obj >;
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
