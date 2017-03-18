#ifndef INCLUDED_Player
#define INCLUDED_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Player)


class Player_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Player_obj OBJ_;

	public:
		Player_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"); }
		::String __ToString() const { return HX_HCSTRING("Player.","\x8d","\x31","\x66","\x57") + tag; }

		static ::Player AI;
		static inline ::Player AI_dyn() { return AI; }
		static ::Player Human;
		static inline ::Player Human_dyn() { return Human; }
};


#endif /* INCLUDED_Player */ 
