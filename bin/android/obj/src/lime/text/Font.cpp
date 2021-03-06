#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_text_GlyphMetrics
#include <lime/text/GlyphMetrics.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
namespace lime{
namespace text{

Void Font_obj::__construct(::String name)
{
HX_STACK_FRAME("lime.text.Font","new",0x97494f29,"lime.text.Font.new","lime/text/Font.hx",49,0x3be57807)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
{
	HX_STACK_LINE(51)
	bool tmp = (name != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	if ((tmp)){
		HX_STACK_LINE(53)
		this->name = name;
	}
	HX_STACK_LINE(57)
	::String tmp1 = this->__fontPath;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	if ((tmp2)){
		HX_STACK_LINE(59)
		::String tmp3 = this->__fontPath;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		this->__fromFile(tmp3);
	}
}
;
	return null();
}

//Font_obj::~Font_obj() { }

Dynamic Font_obj::__CreateEmpty() { return  new Font_obj; }
hx::ObjectPtr< Font_obj > Font_obj::__new(::String name)
{  hx::ObjectPtr< Font_obj > _result_ = new Font_obj();
	_result_->__construct(name);
	return _result_;}

Dynamic Font_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Font_obj > _result_ = new Font_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic Font_obj::decompose( ){
	HX_STACK_FRAME("lime.text.Font","decompose",0x6e29ff3a,"lime.text.Font.decompose","lime/text/Font.hx",66,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_LINE(70)
	Dynamic tmp = this->src;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	if ((tmp1)){
		HX_STACK_LINE(70)
		HX_STACK_DO_THROW(HX_HCSTRING("Uninitialized font handle.","\x3a","\x84","\xab","\x29"));
	}
	HX_STACK_LINE(71)
	Dynamic data = ((Dynamic)(::lime::text::Font_obj::cffi_lime_font_outline_decompose.call(hx::DynamicPtr(this->src),(int)20480)));		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(72)
	Dynamic tmp2 = data;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(72)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,decompose,return )

int Font_obj::getGlyph( ::String character){
	HX_STACK_FRAME("lime.text.Font","getGlyph",0x5bf955cd,"lime.text.Font.getGlyph","lime/text/Font.hx",114,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_ARG(character,"character")
	HX_STACK_LINE(114)
	return ::lime::text::Font_obj::cffi_lime_font_get_glyph_index.call(hx::DynamicPtr(this->src),character);
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,getGlyph,return )

Array< int > Font_obj::getGlyphs( ::String __o_characters){
::String characters = __o_characters.Default(HX_HCSTRING("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^`'\"/\\&*()[]{}<>|:;_-+=?,. ","\xc1","\xf6","\x34","\x50"));
	HX_STACK_FRAME("lime.text.Font","getGlyphs",0x1e31be06,"lime.text.Font.getGlyphs","lime/text/Font.hx",122,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_ARG(characters,"characters")
{
		HX_STACK_LINE(125)
		Dynamic glyphs = ((Dynamic)(::lime::text::Font_obj::cffi_lime_font_get_glyph_indices.call(hx::DynamicPtr(this->src),characters)));		HX_STACK_VAR(glyphs,"glyphs");
		HX_STACK_LINE(126)
		Dynamic tmp = glyphs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(126)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,getGlyphs,return )

::lime::text::GlyphMetrics Font_obj::getGlyphMetrics( int glyph){
	HX_STACK_FRAME("lime.text.Font","getGlyphMetrics",0x8c9677f6,"lime.text.Font.getGlyphMetrics","lime/text/Font.hx",134,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_ARG(glyph,"glyph")
	HX_STACK_LINE(137)
	Dynamic value = ((Dynamic)(::lime::text::Font_obj::cffi_lime_font_get_glyph_metrics.call(hx::DynamicPtr(this->src),glyph)));		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(138)
	::lime::text::GlyphMetrics tmp = ::lime::text::GlyphMetrics_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	::lime::text::GlyphMetrics metrics = tmp;		HX_STACK_VAR(metrics,"metrics");
	HX_STACK_LINE(140)
	::lime::math::Vector2 tmp1 = ::lime::math::Vector2_obj::__new(value->__Field(HX_HCSTRING("horizontalAdvance","\xfe","\x57","\x3e","\xce"), hx::paccDynamic ),value->__Field(HX_HCSTRING("verticalAdvance","\xac","\x8e","\xf7","\x57"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(140)
	metrics->advance = tmp1;
	HX_STACK_LINE(141)
	metrics->height = value->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
	HX_STACK_LINE(142)
	::lime::math::Vector2 tmp2 = ::lime::math::Vector2_obj::__new(value->__Field(HX_HCSTRING("horizontalBearingX","\xae","\x21","\x22","\x6c"), hx::paccDynamic ),value->__Field(HX_HCSTRING("horizontalBearingY","\xaf","\x21","\x22","\x6c"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(142)
	metrics->horizontalBearing = tmp2;
	HX_STACK_LINE(143)
	::lime::math::Vector2 tmp3 = ::lime::math::Vector2_obj::__new(value->__Field(HX_HCSTRING("verticalBearingX","\x40","\xc3","\x78","\x64"), hx::paccDynamic ),value->__Field(HX_HCSTRING("verticalBearingY","\x41","\xc3","\x78","\x64"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(143)
	metrics->verticalBearing = tmp3;
	HX_STACK_LINE(145)
	::lime::text::GlyphMetrics tmp4 = metrics;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(145)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,getGlyphMetrics,return )

::lime::graphics::Image Font_obj::renderGlyph( int glyph,int fontSize){
	HX_STACK_FRAME("lime.text.Font","renderGlyph",0xe6e51a3f,"lime.text.Font.renderGlyph","lime/text/Font.hx",153,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_ARG(glyph,"glyph")
	HX_STACK_ARG(fontSize,"fontSize")
	HX_STACK_LINE(157)
	::lime::text::Font_obj::cffi_lime_font_set_size.call(hx::DynamicPtr(this->src),fontSize);
	HX_STACK_LINE(159)
	::haxe::io::Bytes tmp = ::haxe::io::Bytes_obj::alloc((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(159)
	::haxe::io::Bytes bytes = tmp;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(162)
	int dataPosition = (int)0;		HX_STACK_VAR(dataPosition,"dataPosition");
	HX_STACK_LINE(164)
	if ((::lime::text::Font_obj::cffi_lime_font_render_glyph.call(hx::DynamicPtr(this->src),glyph,hx::DynamicPtr(bytes)))){
		HX_STACK_LINE(166)
		int tmp1 = bytes->b->__get(dataPosition);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(166)
		int tmp2 = (dataPosition + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(166)
		int tmp3 = bytes->b->__get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(166)
		int tmp4 = (int(tmp3) << int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(166)
		int tmp5 = (int(tmp1) | int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(166)
		int tmp6 = (dataPosition + (int)2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(166)
		int tmp7 = bytes->b->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(166)
		int tmp8 = (int(tmp7) << int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(166)
		int tmp9 = (int(tmp5) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(166)
		int tmp10 = (dataPosition + (int)3);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(166)
		int tmp11 = bytes->b->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(166)
		int tmp12 = (int(tmp11) << int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(166)
		int tmp13 = (int(tmp9) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(166)
		int index = tmp13;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(166)
		hx::AddEq(dataPosition,(int)4);
		HX_STACK_LINE(167)
		int tmp14 = bytes->b->__get(dataPosition);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(167)
		int tmp15 = (dataPosition + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(167)
		int tmp16 = bytes->b->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(167)
		int tmp17 = (int(tmp16) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(167)
		int tmp18 = (int(tmp14) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(167)
		int tmp19 = (dataPosition + (int)2);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(167)
		int tmp20 = bytes->b->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(167)
		int tmp21 = (int(tmp20) << int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(167)
		int tmp22 = (int(tmp18) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(167)
		int tmp23 = (dataPosition + (int)3);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(167)
		int tmp24 = bytes->b->__get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(167)
		int tmp25 = (int(tmp24) << int((int)24));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(167)
		int tmp26 = (int(tmp22) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(167)
		int width = tmp26;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(167)
		hx::AddEq(dataPosition,(int)4);
		HX_STACK_LINE(168)
		int tmp27 = bytes->b->__get(dataPosition);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(168)
		int tmp28 = (dataPosition + (int)1);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(168)
		int tmp29 = bytes->b->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(168)
		int tmp30 = (int(tmp29) << int((int)8));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(168)
		int tmp31 = (int(tmp27) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(168)
		int tmp32 = (dataPosition + (int)2);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(168)
		int tmp33 = bytes->b->__get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(168)
		int tmp34 = (int(tmp33) << int((int)16));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(168)
		int tmp35 = (int(tmp31) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(168)
		int tmp36 = (dataPosition + (int)3);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(168)
		int tmp37 = bytes->b->__get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(168)
		int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(168)
		int tmp39 = (int(tmp35) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(168)
		int height = tmp39;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(168)
		hx::AddEq(dataPosition,(int)4);
		HX_STACK_LINE(169)
		int tmp40 = bytes->b->__get(dataPosition);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(169)
		int tmp41 = (dataPosition + (int)1);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(169)
		int tmp42 = bytes->b->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(169)
		int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(169)
		int tmp44 = (int(tmp40) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(169)
		int tmp45 = (dataPosition + (int)2);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(169)
		int tmp46 = bytes->b->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(169)
		int tmp47 = (int(tmp46) << int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(169)
		int tmp48 = (int(tmp44) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(169)
		int tmp49 = (dataPosition + (int)3);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(169)
		int tmp50 = bytes->b->__get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(169)
		int tmp51 = (int(tmp50) << int((int)24));		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(169)
		int tmp52 = (int(tmp48) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(169)
		int x = tmp52;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(169)
		hx::AddEq(dataPosition,(int)4);
		HX_STACK_LINE(170)
		int tmp53 = bytes->b->__get(dataPosition);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(170)
		int tmp54 = (dataPosition + (int)1);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(170)
		int tmp55 = bytes->b->__get(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(170)
		int tmp56 = (int(tmp55) << int((int)8));		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(170)
		int tmp57 = (int(tmp53) | int(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(170)
		int tmp58 = (dataPosition + (int)2);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(170)
		int tmp59 = bytes->b->__get(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(170)
		int tmp60 = (int(tmp59) << int((int)16));		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(170)
		int tmp61 = (int(tmp57) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(170)
		int tmp62 = (dataPosition + (int)3);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(170)
		int tmp63 = bytes->b->__get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(170)
		int tmp64 = (int(tmp63) << int((int)24));		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(170)
		int tmp65 = (int(tmp61) | int(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(170)
		int y = tmp65;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(170)
		hx::AddEq(dataPosition,(int)4);
		HX_STACK_LINE(172)
		int tmp66 = dataPosition;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(172)
		int tmp67 = (width * height);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(172)
		::haxe::io::Bytes tmp68 = bytes->sub(tmp66,tmp67);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(172)
		::haxe::io::Bytes data = tmp68;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(173)
		int tmp69 = (width * height);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(173)
		hx::AddEq(dataPosition,tmp69);
		HX_STACK_LINE(175)
		::lime::utils::ArrayBufferView tmp70;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(175)
		{
			HX_STACK_LINE(175)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(175)
			bool tmp71 = false;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(175)
			if ((tmp71)){
				HX_STACK_LINE(175)
				::lime::utils::ArrayBufferView tmp72 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(175)
				this1 = tmp72;
			}
			else{
				HX_STACK_LINE(175)
				bool tmp72 = false;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(175)
				if ((tmp72)){
					HX_STACK_LINE(175)
					::lime::utils::ArrayBufferView tmp73;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(175)
					{
						HX_STACK_LINE(175)
						::lime::utils::ArrayBufferView tmp74 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(175)
						::lime::utils::ArrayBufferView _this = tmp74;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(175)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(175)
						int tmp75 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(175)
						_this->length = tmp75;
						HX_STACK_LINE(175)
						int tmp76 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(175)
						_this->byteLength = tmp76;
						HX_STACK_LINE(175)
						::haxe::io::Bytes tmp77;		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(175)
						{
							HX_STACK_LINE(175)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(175)
							int tmp78 = _this->byteLength;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(175)
							::haxe::io::Bytes tmp79 = ::haxe::io::Bytes_obj::alloc(tmp78);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(175)
							this2 = tmp79;
							HX_STACK_LINE(175)
							tmp77 = this2;
						}
						HX_STACK_LINE(175)
						_this->buffer = tmp77;
						HX_STACK_LINE(175)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(175)
						tmp73 = _this;
					}
					HX_STACK_LINE(175)
					this1 = tmp73;
				}
				else{
					HX_STACK_LINE(175)
					bool tmp73 = false;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(175)
					if ((tmp73)){
						HX_STACK_LINE(175)
						::lime::utils::ArrayBufferView tmp74;		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(175)
						{
							HX_STACK_LINE(175)
							::lime::utils::ArrayBufferView tmp75 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(175)
							::lime::utils::ArrayBufferView _this = tmp75;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(175)
							::haxe::io::Bytes tmp76 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(175)
							::haxe::io::Bytes srcData = tmp76;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(175)
							int tmp77 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(175)
							int srcLength = tmp77;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(175)
							int tmp78 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(175)
							int srcByteOffset = tmp78;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(175)
							int tmp79 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(175)
							int srcElementSize = tmp79;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(175)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(175)
							int tmp80 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(175)
							int tmp81 = _this->type;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(175)
							bool tmp82 = (tmp80 == tmp81);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(175)
							if ((tmp82)){
								HX_STACK_LINE(175)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(175)
								int tmp83 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(175)
								int cloneLength = tmp83;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(175)
								::haxe::io::Bytes tmp84;		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(175)
								{
									HX_STACK_LINE(175)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(175)
									int tmp85 = cloneLength;		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(175)
									::haxe::io::Bytes tmp86 = ::haxe::io::Bytes_obj::alloc(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(175)
									this2 = tmp86;
									HX_STACK_LINE(175)
									tmp84 = this2;
								}
								HX_STACK_LINE(175)
								_this->buffer = tmp84;
								HX_STACK_LINE(175)
								::haxe::io::Bytes tmp85 = srcData;		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(175)
								int tmp86 = srcByteOffset;		HX_STACK_VAR(tmp86,"tmp86");
								HX_STACK_LINE(175)
								int tmp87 = cloneLength;		HX_STACK_VAR(tmp87,"tmp87");
								HX_STACK_LINE(175)
								_this->buffer->blit((int)0,tmp85,tmp86,tmp87);
							}
							else{
								HX_STACK_LINE(175)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(175)
							int tmp83 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(175)
							_this->byteLength = tmp83;
							HX_STACK_LINE(175)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(175)
							_this->length = srcLength;
							HX_STACK_LINE(175)
							tmp74 = _this;
						}
						HX_STACK_LINE(175)
						this1 = tmp74;
					}
					else{
						HX_STACK_LINE(175)
						bool tmp74 = (data != null());		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(175)
						if ((tmp74)){
							HX_STACK_LINE(175)
							::lime::utils::ArrayBufferView tmp75;		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								::lime::utils::ArrayBufferView tmp76 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(175)
								::lime::utils::ArrayBufferView _this = tmp76;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(175)
								bool tmp77 = false;		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(175)
								if ((tmp77)){
									HX_STACK_LINE(175)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(175)
								int tmp78 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(175)
								bool tmp79 = (tmp78 != (int)0);		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(175)
								if ((tmp79)){
									HX_STACK_LINE(175)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(175)
								int bufferByteLength = data->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(175)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(175)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(175)
								bool tmp80 = true;		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(175)
								if ((tmp80)){
									HX_STACK_LINE(175)
									int tmp81 = bufferByteLength;		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(175)
									newByteLength = tmp81;
									HX_STACK_LINE(175)
									int tmp82 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(175)
									bool tmp83 = (tmp82 != (int)0);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(175)
									if ((tmp83)){
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(175)
									bool tmp84 = (newByteLength < (int)0);		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(175)
									if ((tmp84)){
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(175)
									int tmp81 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(175)
									newByteLength = tmp81;
									HX_STACK_LINE(175)
									int tmp82 = newByteLength;		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(175)
									int newRange = tmp82;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(175)
									bool tmp83 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(175)
									if ((tmp83)){
										HX_STACK_LINE(175)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(175)
								_this->buffer = data;
								HX_STACK_LINE(175)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(175)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(175)
								Float tmp81 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(175)
								int tmp82 = ::Std_obj::_int(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(175)
								_this->length = tmp82;
								HX_STACK_LINE(175)
								tmp75 = _this;
							}
							HX_STACK_LINE(175)
							this1 = tmp75;
						}
						else{
							HX_STACK_LINE(175)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
						}
					}
				}
			}
			HX_STACK_LINE(175)
			tmp70 = this1;
		}
		HX_STACK_LINE(175)
		int tmp71 = width;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(175)
		int tmp72 = height;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(175)
		::lime::graphics::ImageBuffer tmp73 = ::lime::graphics::ImageBuffer_obj::__new(tmp70,tmp71,tmp72,(int)1,null());		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(175)
		::lime::graphics::ImageBuffer buffer = tmp73;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(176)
		::lime::graphics::Image tmp74 = ::lime::graphics::Image_obj::__new(buffer,(int)0,(int)0,width,height,null(),null());		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(176)
		::lime::graphics::Image image = tmp74;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(177)
		image->x = x;
		HX_STACK_LINE(178)
		image->y = y;
		HX_STACK_LINE(180)
		::lime::graphics::Image tmp75 = image;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(180)
		return tmp75;
	}
	HX_STACK_LINE(186)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Font_obj,renderGlyph,return )

::haxe::ds::IntMap Font_obj::renderGlyphs( Array< int > glyphs,int fontSize){
	HX_STACK_FRAME("lime.text.Font","renderGlyphs",0x2191dd54,"lime.text.Font.renderGlyphs","lime/text/Font.hx",351,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_ARG(glyphs,"glyphs")
	HX_STACK_ARG(fontSize,"fontSize")
	HX_STACK_LINE(351)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Font_obj,renderGlyphs,return )

Void Font_obj::__fromBytes( ::haxe::io::Bytes bytes){
{
		HX_STACK_FRAME("lime.text.Font","__fromBytes",0x257c2b4a,"lime.text.Font.__fromBytes","lime/text/Font.hx",355,0x3be57807)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_LINE(357)
		this->__fontPath = null();
		HX_STACK_LINE(361)
		this->__fontPathWithoutDirectory = null();
		HX_STACK_LINE(363)
		this->src = ((Dynamic)(::lime::text::Font_obj::cffi_lime_font_load.call(hx::DynamicPtr(bytes))));
		HX_STACK_LINE(365)
		Dynamic tmp = this->src;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(365)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(365)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(365)
		if ((tmp1)){
			HX_STACK_LINE(365)
			::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(365)
			::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(365)
			tmp2 = (tmp4 == null());
		}
		else{
			HX_STACK_LINE(365)
			tmp2 = false;
		}
		HX_STACK_LINE(365)
		if ((tmp2)){
			HX_STACK_LINE(367)
			this->name = ((::String)(((Dynamic)(::lime::text::Font_obj::cffi_lime_font_get_family_name.call(hx::DynamicPtr(this->src))))));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,__fromBytes,(void))

Void Font_obj::__fromFile( ::String path){
{
		HX_STACK_FRAME("lime.text.Font","__fromFile",0x6331ec7d,"lime.text.Font.__fromFile","lime/text/Font.hx",376,0x3be57807)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(378)
		this->__fontPath = path;
		HX_STACK_LINE(382)
		::String tmp = this->__fontPath;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(382)
		::String tmp1 = ::haxe::io::Path_obj::withoutDirectory(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(382)
		this->__fontPathWithoutDirectory = tmp1;
		HX_STACK_LINE(384)
		this->src = ((Dynamic)(::lime::text::Font_obj::cffi_lime_font_load.call(hx::DynamicPtr(this->__fontPath))));
		HX_STACK_LINE(386)
		Dynamic tmp2 = this->src;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(386)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(386)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(386)
		if ((tmp3)){
			HX_STACK_LINE(386)
			::String tmp5 = this->name;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(386)
			::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(386)
			tmp4 = (tmp6 == null());
		}
		else{
			HX_STACK_LINE(386)
			tmp4 = false;
		}
		HX_STACK_LINE(386)
		if ((tmp4)){
			HX_STACK_LINE(388)
			this->name = ((::String)(((Dynamic)(::lime::text::Font_obj::cffi_lime_font_get_family_name.call(hx::DynamicPtr(this->src))))));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,__fromFile,(void))

int Font_obj::get_ascender( ){
	HX_STACK_FRAME("lime.text.Font","get_ascender",0x190d2c57,"lime.text.Font.get_ascender","lime/text/Font.hx",407,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_LINE(407)
	return ::lime::text::Font_obj::cffi_lime_font_get_ascender.call(hx::DynamicPtr(this->src));
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_ascender,return )

int Font_obj::get_descender( ){
	HX_STACK_FRAME("lime.text.Font","get_descender",0xcf2c6cf7,"lime.text.Font.get_descender","lime/text/Font.hx",418,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_LINE(418)
	return ::lime::text::Font_obj::cffi_lime_font_get_descender.call(hx::DynamicPtr(this->src));
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_descender,return )

int Font_obj::get_height( ){
	HX_STACK_FRAME("lime.text.Font","get_height",0x11455407,"lime.text.Font.get_height","lime/text/Font.hx",429,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_LINE(429)
	return ::lime::text::Font_obj::cffi_lime_font_get_height.call(hx::DynamicPtr(this->src));
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_height,return )

int Font_obj::get_numGlyphs( ){
	HX_STACK_FRAME("lime.text.Font","get_numGlyphs",0x835f4c0d,"lime.text.Font.get_numGlyphs","lime/text/Font.hx",440,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_LINE(440)
	return ::lime::text::Font_obj::cffi_lime_font_get_num_glyphs.call(hx::DynamicPtr(this->src));
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_numGlyphs,return )

int Font_obj::get_underlinePosition( ){
	HX_STACK_FRAME("lime.text.Font","get_underlinePosition",0xf48b45b5,"lime.text.Font.get_underlinePosition","lime/text/Font.hx",451,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_LINE(451)
	return ::lime::text::Font_obj::cffi_lime_font_get_underline_position.call(hx::DynamicPtr(this->src));
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_underlinePosition,return )

int Font_obj::get_underlineThickness( ){
	HX_STACK_FRAME("lime.text.Font","get_underlineThickness",0x8f66b6e8,"lime.text.Font.get_underlineThickness","lime/text/Font.hx",462,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_LINE(462)
	return ::lime::text::Font_obj::cffi_lime_font_get_underline_thickness.call(hx::DynamicPtr(this->src));
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_underlineThickness,return )

int Font_obj::get_unitsPerEM( ){
	HX_STACK_FRAME("lime.text.Font","get_unitsPerEM",0x81c292b6,"lime.text.Font.get_unitsPerEM","lime/text/Font.hx",473,0x3be57807)
	HX_STACK_THIS(this)
	HX_STACK_LINE(473)
	return ::lime::text::Font_obj::cffi_lime_font_get_units_per_em.call(hx::DynamicPtr(this->src));
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_unitsPerEM,return )

::lime::text::Font Font_obj::fromBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.text.Font","fromBytes",0x65a32e2a,"lime.text.Font.fromBytes","lime/text/Font.hx",83,0x3be57807)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(85)
	::lime::text::Font tmp = ::lime::text::Font_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	::lime::text::Font font = tmp;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(86)
	::haxe::io::Bytes tmp1 = bytes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(86)
	font->__fromBytes(tmp1);
	HX_STACK_LINE(89)
	bool tmp2 = (font->src != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	::lime::text::Font tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(89)
	if ((tmp2)){
		HX_STACK_LINE(89)
		tmp3 = font;
	}
	else{
		HX_STACK_LINE(89)
		tmp3 = null();
	}
	HX_STACK_LINE(89)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,fromBytes,return )

::lime::text::Font Font_obj::fromFile( ::String path){
	HX_STACK_FRAME("lime.text.Font","fromFile",0x07a4e59d,"lime.text.Font.fromFile","lime/text/Font.hx",97,0x3be57807)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(99)
	::lime::text::Font tmp = ::lime::text::Font_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	::lime::text::Font font = tmp;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(100)
	::String tmp1 = path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	font->__fromFile(tmp1);
	HX_STACK_LINE(103)
	bool tmp2 = (font->src != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(103)
	::lime::text::Font tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(103)
	if ((tmp2)){
		HX_STACK_LINE(103)
		tmp3 = font;
	}
	else{
		HX_STACK_LINE(103)
		tmp3 = null();
	}
	HX_STACK_LINE(103)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,fromFile,return )

int Font_obj::lime_font_get_ascender( Dynamic handle){
	HX_STACK_FRAME("lime.text.Font","lime_font_get_ascender",0xfbec73dd,"lime.text.Font.lime_font_get_ascender","lime/text/Font.hx",489,0x3be57807)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(489)
	return ::lime::text::Font_obj::cffi_lime_font_get_ascender.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,lime_font_get_ascender,return )

int Font_obj::lime_font_get_descender( Dynamic handle){
	HX_STACK_FRAME("lime.text.Font","lime_font_get_descender",0x6fabbab1,"lime.text.Font.lime_font_get_descender","lime/text/Font.hx",490,0x3be57807)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(490)
	return ::lime::text::Font_obj::cffi_lime_font_get_descender.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,lime_font_get_descender,return )

Dynamic Font_obj::lime_font_get_family_name( Dynamic handle){
	HX_STACK_FRAME("lime.text.Font","lime_font_get_family_name",0x92166c20,"lime.text.Font.lime_font_get_family_name","lime/text/Font.hx",491,0x3be57807)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(491)
	return ::lime::text::Font_obj::cffi_lime_font_get_family_name.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,lime_font_get_family_name,return )

int Font_obj::lime_font_get_glyph_index( Dynamic handle,::String character){
	HX_STACK_FRAME("lime.text.Font","lime_font_get_glyph_index",0x8040d919,"lime.text.Font.lime_font_get_glyph_index","lime/text/Font.hx",492,0x3be57807)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(character,"character")
	HX_STACK_LINE(492)
	return ::lime::text::Font_obj::cffi_lime_font_get_glyph_index.call(hx::DynamicPtr(handle),character);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Font_obj,lime_font_get_glyph_index,return )

Dynamic Font_obj::lime_font_get_glyph_indices( Dynamic handle,::String characters){
	HX_STACK_FRAME("lime.text.Font","lime_font_get_glyph_indices",0xb79154ee,"lime.text.Font.lime_font_get_glyph_indices","lime/text/Font.hx",493,0x3be57807)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(characters,"characters")
	HX_STACK_LINE(493)
	return ::lime::text::Font_obj::cffi_lime_font_get_glyph_indices.call(hx::DynamicPtr(handle),characters);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Font_obj,lime_font_get_glyph_indices,return )

Dynamic Font_obj::lime_font_get_glyph_metrics( Dynamic handle,int index){
	HX_STACK_FRAME("lime.text.Font","lime_font_get_glyph_metrics",0x0111b00a,"lime.text.Font.lime_font_get_glyph_metrics","lime/text/Font.hx",494,0x3be57807)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(494)
	return ::lime::text::Font_obj::cffi_lime_font_get_glyph_metrics.call(hx::DynamicPtr(handle),index);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Font_obj,lime_font_get_glyph_metrics,return )

int Font_obj::lime_font_get_height( Dynamic handle){
	HX_STACK_FRAME("lime.text.Font","lime_font_get_height",0xe21d8e0d,"lime.text.Font.lime_font_get_height","lime/text/Font.hx",495,0x3be57807)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(495)
	return ::lime::text::Font_obj::cffi_lime_font_get_height.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,lime_font_get_height,return )

int Font_obj::lime_font_get_num_glyphs( Dynamic handle){
	HX_STACK_FRAME("lime.text.Font","lime_font_get_num_glyphs",0xaee5b286,"lime.text.Font.lime_font_get_num_glyphs","lime/text/Font.hx",496,0x3be57807)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(496)
	return ::lime::text::Font_obj::cffi_lime_font_get_num_glyphs.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,lime_font_get_num_glyphs,return )

int Font_obj::lime_font_get_underline_position( Dynamic handle){
	HX_STACK_FRAME("lime.text.Font","lime_font_get_underline_position",0x9987a8a2,"lime.text.Font.lime_font_get_underline_position","lime/text/Font.hx",497,0x3be57807)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(497)
	return ::lime::text::Font_obj::cffi_lime_font_get_underline_position.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,lime_font_get_underline_position,return )

int Font_obj::lime_font_get_underline_thickness( Dynamic handle){
	HX_STACK_FRAME("lime.text.Font","lime_font_get_underline_thickness",0x4740e35b,"lime.text.Font.lime_font_get_underline_thickness","lime/text/Font.hx",498,0x3be57807)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(498)
	return ::lime::text::Font_obj::cffi_lime_font_get_underline_thickness.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,lime_font_get_underline_thickness,return )

int Font_obj::lime_font_get_units_per_em( Dynamic handle){
	HX_STACK_FRAME("lime.text.Font","lime_font_get_units_per_em",0xb61bac80,"lime.text.Font.lime_font_get_units_per_em","lime/text/Font.hx",499,0x3be57807)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(499)
	return ::lime::text::Font_obj::cffi_lime_font_get_units_per_em.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,lime_font_get_units_per_em,return )

Dynamic Font_obj::lime_font_load( Dynamic data){
	HX_STACK_FRAME("lime.text.Font","lime_font_load",0xecda5cc3,"lime.text.Font.lime_font_load","lime/text/Font.hx",500,0x3be57807)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(500)
	return ::lime::text::Font_obj::cffi_lime_font_load.call(hx::DynamicPtr(data));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,lime_font_load,return )

Dynamic Font_obj::lime_font_outline_decompose( Dynamic handle,int size){
	HX_STACK_FRAME("lime.text.Font","lime_font_outline_decompose",0x0935acb7,"lime.text.Font.lime_font_outline_decompose","lime/text/Font.hx",501,0x3be57807)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(501)
	return ::lime::text::Font_obj::cffi_lime_font_outline_decompose.call(hx::DynamicPtr(handle),size);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Font_obj,lime_font_outline_decompose,return )

bool Font_obj::lime_font_render_glyph( Dynamic handle,int index,Dynamic data){
	HX_STACK_FRAME("lime.text.Font","lime_font_render_glyph",0xb36ffc60,"lime.text.Font.lime_font_render_glyph","lime/text/Font.hx",502,0x3be57807)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(502)
	return ::lime::text::Font_obj::cffi_lime_font_render_glyph.call(hx::DynamicPtr(handle),index,hx::DynamicPtr(data));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Font_obj,lime_font_render_glyph,return )

bool Font_obj::lime_font_render_glyphs( Dynamic handle,Dynamic indices,Dynamic data){
	HX_STACK_FRAME("lime.text.Font","lime_font_render_glyphs",0x4e8cd813,"lime.text.Font.lime_font_render_glyphs","lime/text/Font.hx",503,0x3be57807)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(indices,"indices")
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(503)
	return ::lime::text::Font_obj::cffi_lime_font_render_glyphs.call(hx::DynamicPtr(handle),hx::DynamicPtr(indices),hx::DynamicPtr(data));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Font_obj,lime_font_render_glyphs,return )

Void Font_obj::lime_font_set_size( Dynamic handle,int size){
{
		HX_STACK_FRAME("lime.text.Font","lime_font_set_size",0x7b008adb,"lime.text.Font.lime_font_set_size","lime/text/Font.hx",504,0x3be57807)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(size,"size")
		HX_STACK_LINE(504)
		::lime::text::Font_obj::cffi_lime_font_set_size.call(hx::DynamicPtr(handle),size);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Font_obj,lime_font_set_size,(void))

::cpp::Function< int ( ::hx::Object * ) > Font_obj::cffi_lime_font_get_ascender;

::cpp::Function< int ( ::hx::Object * ) > Font_obj::cffi_lime_font_get_descender;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > Font_obj::cffi_lime_font_get_family_name;

::cpp::Function< int ( ::hx::Object * ,::String ) > Font_obj::cffi_lime_font_get_glyph_index;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::String ) > Font_obj::cffi_lime_font_get_glyph_indices;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > Font_obj::cffi_lime_font_get_glyph_metrics;

::cpp::Function< int ( ::hx::Object * ) > Font_obj::cffi_lime_font_get_height;

::cpp::Function< int ( ::hx::Object * ) > Font_obj::cffi_lime_font_get_num_glyphs;

::cpp::Function< int ( ::hx::Object * ) > Font_obj::cffi_lime_font_get_underline_position;

::cpp::Function< int ( ::hx::Object * ) > Font_obj::cffi_lime_font_get_underline_thickness;

::cpp::Function< int ( ::hx::Object * ) > Font_obj::cffi_lime_font_get_units_per_em;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > Font_obj::cffi_lime_font_load;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > Font_obj::cffi_lime_font_outline_decompose;

::cpp::Function< bool ( ::hx::Object * ,int ,::hx::Object * ) > Font_obj::cffi_lime_font_render_glyph;

::cpp::Function< bool ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > Font_obj::cffi_lime_font_render_glyphs;

::cpp::Function< void ( ::hx::Object * ,int ) > Font_obj::cffi_lime_font_set_size;


Font_obj::Font_obj()
{
}

void Font_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Font);
	HX_MARK_MEMBER_NAME(ascender,"ascender");
	HX_MARK_MEMBER_NAME(descender,"descender");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(numGlyphs,"numGlyphs");
	HX_MARK_MEMBER_NAME(src,"src");
	HX_MARK_MEMBER_NAME(underlinePosition,"underlinePosition");
	HX_MARK_MEMBER_NAME(underlineThickness,"underlineThickness");
	HX_MARK_MEMBER_NAME(unitsPerEM,"unitsPerEM");
	HX_MARK_MEMBER_NAME(__fontPath,"__fontPath");
	HX_MARK_MEMBER_NAME(__fontPathWithoutDirectory,"__fontPathWithoutDirectory");
	HX_MARK_END_CLASS();
}

void Font_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ascender,"ascender");
	HX_VISIT_MEMBER_NAME(descender,"descender");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(numGlyphs,"numGlyphs");
	HX_VISIT_MEMBER_NAME(src,"src");
	HX_VISIT_MEMBER_NAME(underlinePosition,"underlinePosition");
	HX_VISIT_MEMBER_NAME(underlineThickness,"underlineThickness");
	HX_VISIT_MEMBER_NAME(unitsPerEM,"unitsPerEM");
	HX_VISIT_MEMBER_NAME(__fontPath,"__fontPath");
	HX_VISIT_MEMBER_NAME(__fontPathWithoutDirectory,"__fontPathWithoutDirectory");
}

Dynamic Font_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { return src; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp == hx::paccAlways ? get_height() : height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ascender") ) { return inCallProp == hx::paccAlways ? get_ascender() : ascender; }
		if (HX_FIELD_EQ(inName,"getGlyph") ) { return getGlyph_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"descender") ) { return inCallProp == hx::paccAlways ? get_descender() : descender; }
		if (HX_FIELD_EQ(inName,"numGlyphs") ) { return inCallProp == hx::paccAlways ? get_numGlyphs() : numGlyphs; }
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		if (HX_FIELD_EQ(inName,"getGlyphs") ) { return getGlyphs_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unitsPerEM") ) { return inCallProp == hx::paccAlways ? get_unitsPerEM() : unitsPerEM; }
		if (HX_FIELD_EQ(inName,"__fontPath") ) { return __fontPath; }
		if (HX_FIELD_EQ(inName,"__fromFile") ) { return __fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"renderGlyph") ) { return renderGlyph_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderGlyphs") ) { return renderGlyphs_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ascender") ) { return get_ascender_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_descender") ) { return get_descender_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numGlyphs") ) { return get_numGlyphs_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_unitsPerEM") ) { return get_unitsPerEM_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getGlyphMetrics") ) { return getGlyphMetrics_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"underlinePosition") ) { return inCallProp == hx::paccAlways ? get_underlinePosition() : underlinePosition; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"underlineThickness") ) { return inCallProp == hx::paccAlways ? get_underlineThickness() : underlineThickness; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_underlinePosition") ) { return get_underlinePosition_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_underlineThickness") ) { return get_underlineThickness_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__fontPathWithoutDirectory") ) { return __fontPathWithoutDirectory; }
	}
	return super::__Field(inName,inCallProp);
}

bool Font_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lime_font_load") ) { outValue = lime_font_load_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_font_set_size") ) { outValue = lime_font_set_size_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"cffi_lime_font_load") ) { outValue = cffi_lime_font_load; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_font_get_height") ) { outValue = lime_font_get_height_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_font_get_ascender") ) { outValue = lime_font_get_ascender_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_font_render_glyph") ) { outValue = lime_font_render_glyph_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_font_get_descender") ) { outValue = lime_font_get_descender_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_font_render_glyphs") ) { outValue = lime_font_render_glyphs_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_set_size") ) { outValue = cffi_lime_font_set_size; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_font_get_num_glyphs") ) { outValue = lime_font_get_num_glyphs_dyn(); return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_font_get_family_name") ) { outValue = lime_font_get_family_name_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_font_get_glyph_index") ) { outValue = lime_font_get_glyph_index_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_height") ) { outValue = cffi_lime_font_get_height; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_font_get_units_per_em") ) { outValue = lime_font_get_units_per_em_dyn(); return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_font_get_glyph_indices") ) { outValue = lime_font_get_glyph_indices_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_font_get_glyph_metrics") ) { outValue = lime_font_get_glyph_metrics_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_font_outline_decompose") ) { outValue = lime_font_outline_decompose_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_ascender") ) { outValue = cffi_lime_font_get_ascender; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_render_glyph") ) { outValue = cffi_lime_font_render_glyph; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_descender") ) { outValue = cffi_lime_font_get_descender; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_render_glyphs") ) { outValue = cffi_lime_font_render_glyphs; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_num_glyphs") ) { outValue = cffi_lime_font_get_num_glyphs; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_family_name") ) { outValue = cffi_lime_font_get_family_name; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_glyph_index") ) { outValue = cffi_lime_font_get_glyph_index; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_units_per_em") ) { outValue = cffi_lime_font_get_units_per_em; return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_font_get_underline_position") ) { outValue = lime_font_get_underline_position_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_glyph_indices") ) { outValue = cffi_lime_font_get_glyph_indices; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_glyph_metrics") ) { outValue = cffi_lime_font_get_glyph_metrics; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_outline_decompose") ) { outValue = cffi_lime_font_outline_decompose; return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_font_get_underline_thickness") ) { outValue = lime_font_get_underline_thickness_dyn(); return true;  }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_underline_position") ) { outValue = cffi_lime_font_get_underline_position; return true;  }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_underline_thickness") ) { outValue = cffi_lime_font_get_underline_thickness; return true;  }
	}
	return false;
}

Dynamic Font_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { src=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ascender") ) { ascender=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"descender") ) { descender=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numGlyphs") ) { numGlyphs=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unitsPerEM") ) { unitsPerEM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__fontPath") ) { __fontPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"underlinePosition") ) { underlinePosition=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"underlineThickness") ) { underlineThickness=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__fontPathWithoutDirectory") ) { __fontPathWithoutDirectory=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Font_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"cffi_lime_font_load") ) { cffi_lime_font_load=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"cffi_lime_font_set_size") ) { cffi_lime_font_set_size=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ) > >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_height") ) { cffi_lime_font_get_height=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_ascender") ) { cffi_lime_font_get_ascender=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_render_glyph") ) { cffi_lime_font_render_glyph=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ,int ,::hx::Object * ) > >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_descender") ) { cffi_lime_font_get_descender=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_render_glyphs") ) { cffi_lime_font_render_glyphs=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_num_glyphs") ) { cffi_lime_font_get_num_glyphs=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_family_name") ) { cffi_lime_font_get_family_name=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_glyph_index") ) { cffi_lime_font_get_glyph_index=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ,::String ) > >(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_units_per_em") ) { cffi_lime_font_get_units_per_em=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_glyph_indices") ) { cffi_lime_font_get_glyph_indices=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_glyph_metrics") ) { cffi_lime_font_get_glyph_metrics=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_font_outline_decompose") ) { cffi_lime_font_outline_decompose=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > >(); return true; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_underline_position") ) { cffi_lime_font_get_underline_position=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"cffi_lime_font_get_underline_thickness") ) { cffi_lime_font_get_underline_thickness=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
	}
	return false;
}

void Font_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ascender","\x37","\x98","\x10","\x60"));
	outFields->push(HX_HCSTRING("descender","\x17","\x65","\x27","\xab"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("numGlyphs","\x2d","\x44","\x5a","\x5f"));
	outFields->push(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"));
	outFields->push(HX_HCSTRING("underlinePosition","\xd5","\x5d","\x6b","\x96"));
	outFields->push(HX_HCSTRING("underlineThickness","\xc8","\xba","\x9b","\x91"));
	outFields->push(HX_HCSTRING("unitsPerEM","\x96","\xb6","\x60","\x21"));
	outFields->push(HX_HCSTRING("__fontPath","\x34","\x76","\x08","\x70"));
	outFields->push(HX_HCSTRING("__fontPathWithoutDirectory","\x59","\x11","\x28","\x91"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Font_obj,ascender),HX_HCSTRING("ascender","\x37","\x98","\x10","\x60")},
	{hx::fsInt,(int)offsetof(Font_obj,descender),HX_HCSTRING("descender","\x17","\x65","\x27","\xab")},
	{hx::fsInt,(int)offsetof(Font_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsString,(int)offsetof(Font_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(Font_obj,numGlyphs),HX_HCSTRING("numGlyphs","\x2d","\x44","\x5a","\x5f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Font_obj,src),HX_HCSTRING("src","\xe4","\xa6","\x57","\x00")},
	{hx::fsInt,(int)offsetof(Font_obj,underlinePosition),HX_HCSTRING("underlinePosition","\xd5","\x5d","\x6b","\x96")},
	{hx::fsInt,(int)offsetof(Font_obj,underlineThickness),HX_HCSTRING("underlineThickness","\xc8","\xba","\x9b","\x91")},
	{hx::fsInt,(int)offsetof(Font_obj,unitsPerEM),HX_HCSTRING("unitsPerEM","\x96","\xb6","\x60","\x21")},
	{hx::fsString,(int)offsetof(Font_obj,__fontPath),HX_HCSTRING("__fontPath","\x34","\x76","\x08","\x70")},
	{hx::fsString,(int)offsetof(Font_obj,__fontPathWithoutDirectory),HX_HCSTRING("__fontPathWithoutDirectory","\x59","\x11","\x28","\x91")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &Font_obj::cffi_lime_font_get_ascender,HX_HCSTRING("cffi_lime_font_get_ascender","\xbf","\xa6","\x45","\xba")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &Font_obj::cffi_lime_font_get_descender,HX_HCSTRING("cffi_lime_font_get_descender","\x8f","\x0d","\x5f","\x3f")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &Font_obj::cffi_lime_font_get_family_name,HX_HCSTRING("cffi_lime_font_get_family_name","\x7e","\xb2","\x6a","\x33")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ,::String ) >*/ ,(void *) &Font_obj::cffi_lime_font_get_glyph_index,HX_HCSTRING("cffi_lime_font_get_glyph_index","\x77","\x1f","\x95","\x21")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::String ) >*/ ,(void *) &Font_obj::cffi_lime_font_get_glyph_indices,HX_HCSTRING("cffi_lime_font_get_glyph_indices","\xcc","\x6e","\x4a","\x8b")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >*/ ,(void *) &Font_obj::cffi_lime_font_get_glyph_metrics,HX_HCSTRING("cffi_lime_font_get_glyph_metrics","\xe8","\xc9","\xca","\xd4")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &Font_obj::cffi_lime_font_get_height,HX_HCSTRING("cffi_lime_font_get_height","\x6f","\xe4","\xaa","\xa1")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &Font_obj::cffi_lime_font_get_num_glyphs,HX_HCSTRING("cffi_lime_font_get_num_glyphs","\xe8","\xe1","\x1a","\x9c")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &Font_obj::cffi_lime_font_get_underline_position,HX_HCSTRING("cffi_lime_font_get_underline_position","\x04","\x0a","\x6e","\x56")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &Font_obj::cffi_lime_font_get_underline_thickness,HX_HCSTRING("cffi_lime_font_get_underline_thickness","\xb9","\xb7","\xef","\xd3")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &Font_obj::cffi_lime_font_get_units_per_em,HX_HCSTRING("cffi_lime_font_get_units_per_em","\x62","\xf8","\x84","\x3e")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &Font_obj::cffi_lime_font_load,HX_HCSTRING("cffi_lime_font_load","\xa5","\xdd","\x94","\x73")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >*/ ,(void *) &Font_obj::cffi_lime_font_outline_decompose,HX_HCSTRING("cffi_lime_font_outline_decompose","\x95","\xc6","\xee","\xdc")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ,int ,::hx::Object * ) >*/ ,(void *) &Font_obj::cffi_lime_font_render_glyph,HX_HCSTRING("cffi_lime_font_render_glyph","\x42","\x2f","\xc9","\x71")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >*/ ,(void *) &Font_obj::cffi_lime_font_render_glyphs,HX_HCSTRING("cffi_lime_font_render_glyphs","\xf1","\x2a","\x40","\x1e")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &Font_obj::cffi_lime_font_set_size,HX_HCSTRING("cffi_lime_font_set_size","\xbd","\x24","\x8a","\x51")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ascender","\x37","\x98","\x10","\x60"),
	HX_HCSTRING("descender","\x17","\x65","\x27","\xab"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("numGlyphs","\x2d","\x44","\x5a","\x5f"),
	HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"),
	HX_HCSTRING("underlinePosition","\xd5","\x5d","\x6b","\x96"),
	HX_HCSTRING("underlineThickness","\xc8","\xba","\x9b","\x91"),
	HX_HCSTRING("unitsPerEM","\x96","\xb6","\x60","\x21"),
	HX_HCSTRING("__fontPath","\x34","\x76","\x08","\x70"),
	HX_HCSTRING("__fontPathWithoutDirectory","\x59","\x11","\x28","\x91"),
	HX_HCSTRING("decompose","\xb1","\xc3","\xa7","\x7a"),
	HX_HCSTRING("getGlyph","\x36","\x0d","\xdc","\xf5"),
	HX_HCSTRING("getGlyphs","\x7d","\x82","\xaf","\x2a"),
	HX_HCSTRING("getGlyphMetrics","\xad","\x6f","\x39","\x58"),
	HX_HCSTRING("renderGlyph","\x76","\x2a","\xb6","\x61"),
	HX_HCSTRING("renderGlyphs","\x3d","\xfd","\xae","\x1d"),
	HX_HCSTRING("__fromBytes","\x81","\x3b","\x4d","\xa0"),
	HX_HCSTRING("__fromFile","\x26","\x10","\xc0","\x44"),
	HX_HCSTRING("get_ascender","\x40","\x4c","\x2a","\x15"),
	HX_HCSTRING("get_descender","\xee","\x38","\x8b","\x6c"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("get_numGlyphs","\x04","\x18","\xbe","\x20"),
	HX_HCSTRING("get_underlinePosition","\xac","\x60","\x19","\x15"),
	HX_HCSTRING("get_underlineThickness","\x11","\x34","\x30","\xeb"),
	HX_HCSTRING("get_unitsPerEM","\xdf","\x3e","\x56","\x97"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Font_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Font_obj::cffi_lime_font_get_ascender,"cffi_lime_font_get_ascender");
	HX_MARK_MEMBER_NAME(Font_obj::cffi_lime_font_get_descender,"cffi_lime_font_get_descender");
	HX_MARK_MEMBER_NAME(Font_obj::cffi_lime_font_get_family_name,"cffi_lime_font_get_family_name");
	HX_MARK_MEMBER_NAME(Font_obj::cffi_lime_font_get_glyph_index,"cffi_lime_font_get_glyph_index");
	HX_MARK_MEMBER_NAME(Font_obj::cffi_lime_font_get_glyph_indices,"cffi_lime_font_get_glyph_indices");
	HX_MARK_MEMBER_NAME(Font_obj::cffi_lime_font_get_glyph_metrics,"cffi_lime_font_get_glyph_metrics");
	HX_MARK_MEMBER_NAME(Font_obj::cffi_lime_font_get_height,"cffi_lime_font_get_height");
	HX_MARK_MEMBER_NAME(Font_obj::cffi_lime_font_get_num_glyphs,"cffi_lime_font_get_num_glyphs");
	HX_MARK_MEMBER_NAME(Font_obj::cffi_lime_font_get_underline_position,"cffi_lime_font_get_underline_position");
	HX_MARK_MEMBER_NAME(Font_obj::cffi_lime_font_get_underline_thickness,"cffi_lime_font_get_underline_thickness");
	HX_MARK_MEMBER_NAME(Font_obj::cffi_lime_font_get_units_per_em,"cffi_lime_font_get_units_per_em");
	HX_MARK_MEMBER_NAME(Font_obj::cffi_lime_font_load,"cffi_lime_font_load");
	HX_MARK_MEMBER_NAME(Font_obj::cffi_lime_font_outline_decompose,"cffi_lime_font_outline_decompose");
	HX_MARK_MEMBER_NAME(Font_obj::cffi_lime_font_render_glyph,"cffi_lime_font_render_glyph");
	HX_MARK_MEMBER_NAME(Font_obj::cffi_lime_font_render_glyphs,"cffi_lime_font_render_glyphs");
	HX_MARK_MEMBER_NAME(Font_obj::cffi_lime_font_set_size,"cffi_lime_font_set_size");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Font_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Font_obj::cffi_lime_font_get_ascender,"cffi_lime_font_get_ascender");
	HX_VISIT_MEMBER_NAME(Font_obj::cffi_lime_font_get_descender,"cffi_lime_font_get_descender");
	HX_VISIT_MEMBER_NAME(Font_obj::cffi_lime_font_get_family_name,"cffi_lime_font_get_family_name");
	HX_VISIT_MEMBER_NAME(Font_obj::cffi_lime_font_get_glyph_index,"cffi_lime_font_get_glyph_index");
	HX_VISIT_MEMBER_NAME(Font_obj::cffi_lime_font_get_glyph_indices,"cffi_lime_font_get_glyph_indices");
	HX_VISIT_MEMBER_NAME(Font_obj::cffi_lime_font_get_glyph_metrics,"cffi_lime_font_get_glyph_metrics");
	HX_VISIT_MEMBER_NAME(Font_obj::cffi_lime_font_get_height,"cffi_lime_font_get_height");
	HX_VISIT_MEMBER_NAME(Font_obj::cffi_lime_font_get_num_glyphs,"cffi_lime_font_get_num_glyphs");
	HX_VISIT_MEMBER_NAME(Font_obj::cffi_lime_font_get_underline_position,"cffi_lime_font_get_underline_position");
	HX_VISIT_MEMBER_NAME(Font_obj::cffi_lime_font_get_underline_thickness,"cffi_lime_font_get_underline_thickness");
	HX_VISIT_MEMBER_NAME(Font_obj::cffi_lime_font_get_units_per_em,"cffi_lime_font_get_units_per_em");
	HX_VISIT_MEMBER_NAME(Font_obj::cffi_lime_font_load,"cffi_lime_font_load");
	HX_VISIT_MEMBER_NAME(Font_obj::cffi_lime_font_outline_decompose,"cffi_lime_font_outline_decompose");
	HX_VISIT_MEMBER_NAME(Font_obj::cffi_lime_font_render_glyph,"cffi_lime_font_render_glyph");
	HX_VISIT_MEMBER_NAME(Font_obj::cffi_lime_font_render_glyphs,"cffi_lime_font_render_glyphs");
	HX_VISIT_MEMBER_NAME(Font_obj::cffi_lime_font_set_size,"cffi_lime_font_set_size");
};

#endif

hx::Class Font_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("lime_font_get_ascender","\x06","\xf1","\xb5","\x57"),
	HX_HCSTRING("lime_font_get_descender","\x68","\xc1","\x2f","\x64"),
	HX_HCSTRING("lime_font_get_family_name","\x97","\xce","\xb2","\xb4"),
	HX_HCSTRING("lime_font_get_glyph_index","\x90","\x3b","\xdd","\xa2"),
	HX_HCSTRING("lime_font_get_glyph_indices","\x25","\x83","\xe4","\x03"),
	HX_HCSTRING("lime_font_get_glyph_metrics","\x41","\xde","\x64","\x4d"),
	HX_HCSTRING("lime_font_get_height","\xf6","\x3e","\xaa","\xfc"),
	HX_HCSTRING("lime_font_get_num_glyphs","\xef","\x8b","\xe7","\xad"),
	HX_HCSTRING("lime_font_get_underline_position","\x0b","\x93","\x8e","\x28"),
	HX_HCSTRING("lime_font_get_underline_thickness","\xd2","\x14","\x47","\xde"),
	HX_HCSTRING("lime_font_get_units_per_em","\x29","\x72","\x55","\xdc"),
	HX_HCSTRING("lime_font_load","\xec","\x08","\x6e","\x02"),
	HX_HCSTRING("lime_font_outline_decompose","\xee","\xda","\x88","\x55"),
	HX_HCSTRING("lime_font_render_glyph","\x89","\x79","\x39","\x0f"),
	HX_HCSTRING("lime_font_render_glyphs","\xca","\xde","\x10","\x43"),
	HX_HCSTRING("lime_font_set_size","\x84","\xff","\x47","\xdd"),
	HX_HCSTRING("cffi_lime_font_get_ascender","\xbf","\xa6","\x45","\xba"),
	HX_HCSTRING("cffi_lime_font_get_descender","\x8f","\x0d","\x5f","\x3f"),
	HX_HCSTRING("cffi_lime_font_get_family_name","\x7e","\xb2","\x6a","\x33"),
	HX_HCSTRING("cffi_lime_font_get_glyph_index","\x77","\x1f","\x95","\x21"),
	HX_HCSTRING("cffi_lime_font_get_glyph_indices","\xcc","\x6e","\x4a","\x8b"),
	HX_HCSTRING("cffi_lime_font_get_glyph_metrics","\xe8","\xc9","\xca","\xd4"),
	HX_HCSTRING("cffi_lime_font_get_height","\x6f","\xe4","\xaa","\xa1"),
	HX_HCSTRING("cffi_lime_font_get_num_glyphs","\xe8","\xe1","\x1a","\x9c"),
	HX_HCSTRING("cffi_lime_font_get_underline_position","\x04","\x0a","\x6e","\x56"),
	HX_HCSTRING("cffi_lime_font_get_underline_thickness","\xb9","\xb7","\xef","\xd3"),
	HX_HCSTRING("cffi_lime_font_get_units_per_em","\x62","\xf8","\x84","\x3e"),
	HX_HCSTRING("cffi_lime_font_load","\xa5","\xdd","\x94","\x73"),
	HX_HCSTRING("cffi_lime_font_outline_decompose","\x95","\xc6","\xee","\xdc"),
	HX_HCSTRING("cffi_lime_font_render_glyph","\x42","\x2f","\xc9","\x71"),
	HX_HCSTRING("cffi_lime_font_render_glyphs","\xf1","\x2a","\x40","\x1e"),
	HX_HCSTRING("cffi_lime_font_set_size","\xbd","\x24","\x8a","\x51"),
	::String(null()) };

void Font_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.text.Font","\xb7","\x86","\x7e","\xd1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Font_obj::__GetStatic;
	__mClass->mSetStaticField = &Font_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Font_obj >;
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

void Font_obj::__boot()
{
	cffi_lime_font_get_ascender= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_ascender","\x06","\xf1","\xb5","\x57"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_font_get_descender= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_descender","\x68","\xc1","\x2f","\x64"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_font_get_family_name= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_family_name","\x97","\xce","\xb2","\xb4"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_font_get_glyph_index= ::cpp::Function< int ( ::hx::Object * ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_glyph_index","\x90","\x3b","\xdd","\xa2"),HX_HCSTRING("osi","\xc5","\x9e","\x54","\x00"),false));
	cffi_lime_font_get_glyph_indices= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_glyph_indices","\x25","\x83","\xe4","\x03"),HX_HCSTRING("oso","\xcb","\x9e","\x54","\x00"),false));
	cffi_lime_font_get_glyph_metrics= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_glyph_metrics","\x41","\xde","\x64","\x4d"),HX_HCSTRING("oio","\x15","\x96","\x54","\x00"),false));
	cffi_lime_font_get_height= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_height","\xf6","\x3e","\xaa","\xfc"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_font_get_num_glyphs= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_num_glyphs","\xef","\x8b","\xe7","\xad"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_font_get_underline_position= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_underline_position","\x0b","\x93","\x8e","\x28"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_font_get_underline_thickness= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_underline_thickness","\xd2","\x14","\x47","\xde"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_font_get_units_per_em= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_get_units_per_em","\x29","\x72","\x55","\xdc"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_font_load= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_load","\xec","\x08","\x6e","\x02"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_font_outline_decompose= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_outline_decompose","\xee","\xda","\x88","\x55"),HX_HCSTRING("oio","\x15","\x96","\x54","\x00"),false));
	cffi_lime_font_render_glyph= ::cpp::Function< bool ( ::hx::Object * ,int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_render_glyph","\x89","\x79","\x39","\x0f"),HX_HCSTRING("oiob","\xad","\xbc","\xae","\x49"),false));
	cffi_lime_font_render_glyphs= ::cpp::Function< bool ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_render_glyphs","\xca","\xde","\x10","\x43"),HX_HCSTRING("ooob","\x33","\x4a","\xb3","\x49"),false));
	cffi_lime_font_set_size= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_font_set_size","\x84","\xff","\x47","\xdd"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
}

} // end namespace lime
} // end namespace text
