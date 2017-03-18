#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(Ball)
HX_DECLARE_CLASS0(GameState)
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS0(Platform)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,TouchEvent)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,text,TextField)


class HXCPP_CLASS_ATTRIBUTES  Main_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Main")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"); }

		static Void main( );
		static Dynamic main_dyn();

		bool inited;
		::Platform platform1;
		::Platform platform2;
		::Ball ball;
		int scorePlayer;
		int scoreAI;
		::openfl::text::TextField scoreField;
		::openfl::text::TextField messageField;
		::GameState currentGameState;
		bool touchKeyUp;
		bool touchKeyDown;
		int platformSpeed;
		::openfl::geom::Point ballMovement;
		int ballSpeed;
		int touchMoveID;
		::openfl::display::Sprite mySprite;
		virtual Void resize( Dynamic e);
		Dynamic resize_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void setGameState( ::GameState state);
		Dynamic setGameState_dyn();

		virtual Void touchDown( ::openfl::events::TouchEvent event);
		Dynamic touchDown_dyn();

		virtual Void onTouchMove( ::openfl::events::TouchEvent event);
		Dynamic onTouchMove_dyn();

		virtual Void touchTap( ::openfl::events::TouchEvent event);
		Dynamic touchTap_dyn();

		virtual Void touchUp( ::openfl::events::TouchEvent event);
		Dynamic touchUp_dyn();

		virtual Void everyFrame( ::openfl::events::Event event);
		Dynamic everyFrame_dyn();

		virtual Void bounceBall( );
		Dynamic bounceBall_dyn();

		virtual Void winGame( ::Player player);
		Dynamic winGame_dyn();

		virtual Void updateScore( );
		Dynamic updateScore_dyn();

		virtual Void added( Dynamic e);
		Dynamic added_dyn();

};


#endif /* INCLUDED_Main */ 
