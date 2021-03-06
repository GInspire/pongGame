#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
namespace lime{
namespace audio{

Void AudioBuffer_obj::__construct()
{
HX_STACK_FRAME("lime.audio.AudioBuffer","new",0x54859e97,"lime.audio.AudioBuffer.new","lime/audio/AudioBuffer.hx",45,0x5fb686fb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(45)
	this->id = (int)0;
}
;
	return null();
}

//AudioBuffer_obj::~AudioBuffer_obj() { }

Dynamic AudioBuffer_obj::__CreateEmpty() { return  new AudioBuffer_obj; }
hx::ObjectPtr< AudioBuffer_obj > AudioBuffer_obj::__new()
{  hx::ObjectPtr< AudioBuffer_obj > _result_ = new AudioBuffer_obj();
	_result_->__construct();
	return _result_;}

Dynamic AudioBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioBuffer_obj > _result_ = new AudioBuffer_obj();
	_result_->__construct();
	return _result_;}

Void AudioBuffer_obj::dispose( ){
{
		HX_STACK_FRAME("lime.audio.AudioBuffer","dispose",0xb2873656,"lime.audio.AudioBuffer.dispose","lime/audio/AudioBuffer.hx",50,0x5fb686fb)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioBuffer_obj,dispose,(void))

::lime::audio::AudioBuffer AudioBuffer_obj::fromBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.audio.AudioBuffer","fromBytes",0xb5bdc418,"lime.audio.AudioBuffer.fromBytes","lime/audio/AudioBuffer.hx",72,0x5fb686fb)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(80)
	Dynamic data = ((Dynamic)(::lime::audio::AudioBuffer_obj::cffi_lime_audio_load.call(hx::DynamicPtr(bytes))));		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(82)
	bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	if ((tmp)){
		HX_STACK_LINE(84)
		::lime::audio::AudioBuffer tmp1 = ::lime::audio::AudioBuffer_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		::lime::audio::AudioBuffer audioBuffer = tmp1;		HX_STACK_VAR(audioBuffer,"audioBuffer");
		HX_STACK_LINE(85)
		audioBuffer->bitsPerSample = data->__Field(HX_HCSTRING("bitsPerSample","\x01","\x01","\x36","\xc4"), hx::paccDynamic );
		HX_STACK_LINE(86)
		audioBuffer->channels = data->__Field(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"), hx::paccDynamic );
		HX_STACK_LINE(87)
		::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::__new(data->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),data->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(87)
			::haxe::io::Bytes buffer = tmp3;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(87)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(87)
			bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(87)
			if ((tmp4)){
				HX_STACK_LINE(87)
				::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(87)
				this1 = tmp5;
			}
			else{
				HX_STACK_LINE(87)
				bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(87)
				if ((tmp5)){
					HX_STACK_LINE(87)
					::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(87)
					{
						HX_STACK_LINE(87)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(87)
						::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(87)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(87)
						int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(87)
						_this->length = tmp8;
						HX_STACK_LINE(87)
						int tmp9 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(87)
						_this->byteLength = tmp9;
						HX_STACK_LINE(87)
						::haxe::io::Bytes tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(87)
						{
							HX_STACK_LINE(87)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(87)
							int tmp11 = _this->byteLength;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(87)
							::haxe::io::Bytes tmp12 = ::haxe::io::Bytes_obj::alloc(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(87)
							this2 = tmp12;
							HX_STACK_LINE(87)
							tmp10 = this2;
						}
						HX_STACK_LINE(87)
						_this->buffer = tmp10;
						HX_STACK_LINE(87)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(87)
						tmp6 = _this;
					}
					HX_STACK_LINE(87)
					this1 = tmp6;
				}
				else{
					HX_STACK_LINE(87)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(87)
					if ((tmp6)){
						HX_STACK_LINE(87)
						::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(87)
						{
							HX_STACK_LINE(87)
							::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(87)
							::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(87)
							::haxe::io::Bytes tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(87)
							::haxe::io::Bytes srcData = tmp9;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(87)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(87)
							int srcLength = tmp10;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(87)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(87)
							int srcByteOffset = tmp11;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(87)
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(87)
							int srcElementSize = tmp12;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(87)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(87)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(87)
							int tmp14 = _this->type;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(87)
							bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(87)
							if ((tmp15)){
								HX_STACK_LINE(87)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(87)
								int tmp16 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(87)
								int cloneLength = tmp16;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(87)
								::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(87)
								{
									HX_STACK_LINE(87)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(87)
									int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(87)
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(87)
									this2 = tmp19;
									HX_STACK_LINE(87)
									tmp17 = this2;
								}
								HX_STACK_LINE(87)
								_this->buffer = tmp17;
								HX_STACK_LINE(87)
								::haxe::io::Bytes tmp18 = srcData;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(87)
								int tmp19 = srcByteOffset;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(87)
								int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(87)
								_this->buffer->blit((int)0,tmp18,tmp19,tmp20);
							}
							else{
								HX_STACK_LINE(87)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(87)
							int tmp16 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(87)
							_this->byteLength = tmp16;
							HX_STACK_LINE(87)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(87)
							_this->length = srcLength;
							HX_STACK_LINE(87)
							tmp7 = _this;
						}
						HX_STACK_LINE(87)
						this1 = tmp7;
					}
					else{
						HX_STACK_LINE(87)
						bool tmp7 = (buffer != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(87)
						if ((tmp7)){
							HX_STACK_LINE(87)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(87)
							{
								HX_STACK_LINE(87)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(87)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(87)
								bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(87)
								if ((tmp10)){
									HX_STACK_LINE(87)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(87)
								int tmp11 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(87)
								bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(87)
								if ((tmp12)){
									HX_STACK_LINE(87)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(87)
								int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(87)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(87)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(87)
								bool tmp13 = true;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(87)
								if ((tmp13)){
									HX_STACK_LINE(87)
									int tmp14 = bufferByteLength;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(87)
									newByteLength = tmp14;
									HX_STACK_LINE(87)
									int tmp15 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(87)
									bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(87)
									if ((tmp16)){
										HX_STACK_LINE(87)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(87)
									bool tmp17 = (newByteLength < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(87)
									if ((tmp17)){
										HX_STACK_LINE(87)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(87)
									int tmp14 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(87)
									newByteLength = tmp14;
									HX_STACK_LINE(87)
									int tmp15 = newByteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(87)
									int newRange = tmp15;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(87)
									bool tmp16 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(87)
									if ((tmp16)){
										HX_STACK_LINE(87)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(87)
								_this->buffer = buffer;
								HX_STACK_LINE(87)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(87)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(87)
								Float tmp14 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(87)
								int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(87)
								_this->length = tmp15;
								HX_STACK_LINE(87)
								tmp8 = _this;
							}
							HX_STACK_LINE(87)
							this1 = tmp8;
						}
						else{
							HX_STACK_LINE(87)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
						}
					}
				}
			}
			HX_STACK_LINE(87)
			tmp2 = this1;
		}
		HX_STACK_LINE(87)
		audioBuffer->data = tmp2;
		HX_STACK_LINE(88)
		audioBuffer->sampleRate = data->__Field(HX_HCSTRING("sampleRate","\x2a","\x3c","\x4c","\x67"), hx::paccDynamic );
		HX_STACK_LINE(89)
		::lime::audio::AudioBuffer tmp3 = audioBuffer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(89)
		return tmp3;
	}
	HX_STACK_LINE(95)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,fromBytes,return )

::lime::audio::AudioBuffer AudioBuffer_obj::fromFile( ::String path){
	HX_STACK_FRAME("lime.audio.AudioBuffer","fromFile",0xfdabe76f,"lime.audio.AudioBuffer.fromFile","lime/audio/AudioBuffer.hx",100,0x5fb686fb)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(128)
	Dynamic data = ((Dynamic)(::lime::audio::AudioBuffer_obj::cffi_lime_audio_load.call(hx::DynamicPtr(path))));		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(130)
	bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	if ((tmp)){
		HX_STACK_LINE(132)
		::lime::audio::AudioBuffer tmp1 = ::lime::audio::AudioBuffer_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		::lime::audio::AudioBuffer audioBuffer = tmp1;		HX_STACK_VAR(audioBuffer,"audioBuffer");
		HX_STACK_LINE(133)
		audioBuffer->bitsPerSample = data->__Field(HX_HCSTRING("bitsPerSample","\x01","\x01","\x36","\xc4"), hx::paccDynamic );
		HX_STACK_LINE(134)
		audioBuffer->channels = data->__Field(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"), hx::paccDynamic );
		HX_STACK_LINE(135)
		::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::__new(data->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),data->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(135)
			::haxe::io::Bytes buffer = tmp3;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(135)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(135)
			bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(135)
			if ((tmp4)){
				HX_STACK_LINE(135)
				::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(135)
				this1 = tmp5;
			}
			else{
				HX_STACK_LINE(135)
				bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(135)
				if ((tmp5)){
					HX_STACK_LINE(135)
					::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(135)
					{
						HX_STACK_LINE(135)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(135)
						::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(135)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(135)
						int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(135)
						_this->length = tmp8;
						HX_STACK_LINE(135)
						int tmp9 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(135)
						_this->byteLength = tmp9;
						HX_STACK_LINE(135)
						::haxe::io::Bytes tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(135)
						{
							HX_STACK_LINE(135)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(135)
							int tmp11 = _this->byteLength;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(135)
							::haxe::io::Bytes tmp12 = ::haxe::io::Bytes_obj::alloc(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(135)
							this2 = tmp12;
							HX_STACK_LINE(135)
							tmp10 = this2;
						}
						HX_STACK_LINE(135)
						_this->buffer = tmp10;
						HX_STACK_LINE(135)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(135)
						tmp6 = _this;
					}
					HX_STACK_LINE(135)
					this1 = tmp6;
				}
				else{
					HX_STACK_LINE(135)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(135)
					if ((tmp6)){
						HX_STACK_LINE(135)
						::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(135)
						{
							HX_STACK_LINE(135)
							::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(135)
							::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(135)
							::haxe::io::Bytes tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(135)
							::haxe::io::Bytes srcData = tmp9;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(135)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(135)
							int srcLength = tmp10;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(135)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(135)
							int srcByteOffset = tmp11;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(135)
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(135)
							int srcElementSize = tmp12;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(135)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(135)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(135)
							int tmp14 = _this->type;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(135)
							bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(135)
							if ((tmp15)){
								HX_STACK_LINE(135)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(135)
								int tmp16 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(135)
								int cloneLength = tmp16;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(135)
								::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(135)
								{
									HX_STACK_LINE(135)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(135)
									int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(135)
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(135)
									this2 = tmp19;
									HX_STACK_LINE(135)
									tmp17 = this2;
								}
								HX_STACK_LINE(135)
								_this->buffer = tmp17;
								HX_STACK_LINE(135)
								::haxe::io::Bytes tmp18 = srcData;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(135)
								int tmp19 = srcByteOffset;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(135)
								int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(135)
								_this->buffer->blit((int)0,tmp18,tmp19,tmp20);
							}
							else{
								HX_STACK_LINE(135)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(135)
							int tmp16 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(135)
							_this->byteLength = tmp16;
							HX_STACK_LINE(135)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(135)
							_this->length = srcLength;
							HX_STACK_LINE(135)
							tmp7 = _this;
						}
						HX_STACK_LINE(135)
						this1 = tmp7;
					}
					else{
						HX_STACK_LINE(135)
						bool tmp7 = (buffer != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(135)
						if ((tmp7)){
							HX_STACK_LINE(135)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(135)
							{
								HX_STACK_LINE(135)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(135)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(135)
								bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(135)
								if ((tmp10)){
									HX_STACK_LINE(135)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(135)
								int tmp11 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(135)
								bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(135)
								if ((tmp12)){
									HX_STACK_LINE(135)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(135)
								int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(135)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(135)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(135)
								bool tmp13 = true;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(135)
								if ((tmp13)){
									HX_STACK_LINE(135)
									int tmp14 = bufferByteLength;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(135)
									newByteLength = tmp14;
									HX_STACK_LINE(135)
									int tmp15 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(135)
									bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(135)
									if ((tmp16)){
										HX_STACK_LINE(135)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(135)
									bool tmp17 = (newByteLength < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(135)
									if ((tmp17)){
										HX_STACK_LINE(135)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(135)
									int tmp14 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(135)
									newByteLength = tmp14;
									HX_STACK_LINE(135)
									int tmp15 = newByteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(135)
									int newRange = tmp15;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(135)
									bool tmp16 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(135)
									if ((tmp16)){
										HX_STACK_LINE(135)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(135)
								_this->buffer = buffer;
								HX_STACK_LINE(135)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(135)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(135)
								Float tmp14 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(135)
								int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(135)
								_this->length = tmp15;
								HX_STACK_LINE(135)
								tmp8 = _this;
							}
							HX_STACK_LINE(135)
							this1 = tmp8;
						}
						else{
							HX_STACK_LINE(135)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
						}
					}
				}
			}
			HX_STACK_LINE(135)
			tmp2 = this1;
		}
		HX_STACK_LINE(135)
		audioBuffer->data = tmp2;
		HX_STACK_LINE(136)
		audioBuffer->sampleRate = data->__Field(HX_HCSTRING("sampleRate","\x2a","\x3c","\x4c","\x67"), hx::paccDynamic );
		HX_STACK_LINE(137)
		::lime::audio::AudioBuffer tmp3 = audioBuffer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(137)
		return tmp3;
	}
	HX_STACK_LINE(143)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,fromFile,return )

Void AudioBuffer_obj::fromURL( ::String url,Dynamic handler){
{
		HX_STACK_FRAME("lime.audio.AudioBuffer","fromURL",0x4f3e95dc,"lime.audio.AudioBuffer.fromURL","lime/audio/AudioBuffer.hx",148,0x5fb686fb)
		HX_STACK_ARG(url,"url")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(150)
		bool tmp = (url != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		if ((tmp1)){
			HX_STACK_LINE(150)
			int tmp3 = url.indexOf(HX_HCSTRING("http://","\x52","\x75","\xcd","\x5a"),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(150)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(150)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(150)
			int tmp6 = (int)-1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(150)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(150)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(150)
			tmp2 = (tmp5 == tmp8);
		}
		else{
			HX_STACK_LINE(150)
			tmp2 = false;
		}
		HX_STACK_LINE(150)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(150)
		if ((tmp2)){
			HX_STACK_LINE(150)
			int tmp4 = url.indexOf(HX_HCSTRING("https://","\xcf","\xb4","\xae","\x3e"),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(150)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(150)
			tmp3 = (tmp5 == (int)-1);
		}
		else{
			HX_STACK_LINE(150)
			tmp3 = false;
		}
		HX_STACK_LINE(150)
		if ((tmp3)){
			HX_STACK_LINE(152)
			::String tmp4 = url;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(152)
			::lime::audio::AudioBuffer tmp5 = ::lime::audio::AudioBuffer_obj::fromFile(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(152)
			handler(tmp5).Cast< Void >();
		}
		else{
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AudioBuffer_obj,fromURL,(void))

Dynamic AudioBuffer_obj::lime_audio_load( Dynamic data){
	HX_STACK_FRAME("lime.audio.AudioBuffer","lime_audio_load",0x6b424e50,"lime.audio.AudioBuffer.lime_audio_load","lime/audio/AudioBuffer.hx",189,0x5fb686fb)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(189)
	return ::lime::audio::AudioBuffer_obj::cffi_lime_audio_load.call(hx::DynamicPtr(data));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,lime_audio_load,return )

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > AudioBuffer_obj::cffi_lime_audio_load;


AudioBuffer_obj::AudioBuffer_obj()
{
}

void AudioBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioBuffer);
	HX_MARK_MEMBER_NAME(bitsPerSample,"bitsPerSample");
	HX_MARK_MEMBER_NAME(channels,"channels");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(sampleRate,"sampleRate");
	HX_MARK_MEMBER_NAME(src,"src");
	HX_MARK_END_CLASS();
}

void AudioBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitsPerSample,"bitsPerSample");
	HX_VISIT_MEMBER_NAME(channels,"channels");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(sampleRate,"sampleRate");
	HX_VISIT_MEMBER_NAME(src,"src");
}

Dynamic AudioBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { return src; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { return channels; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sampleRate") ) { return sampleRate; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bitsPerSample") ) { return bitsPerSample; }
	}
	return super::__Field(inName,inCallProp);
}

bool AudioBuffer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromURL") ) { outValue = fromURL_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_audio_load") ) { outValue = lime_audio_load_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"cffi_lime_audio_load") ) { outValue = cffi_lime_audio_load; return true;  }
	}
	return false;
}

Dynamic AudioBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { src=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sampleRate") ) { sampleRate=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bitsPerSample") ) { bitsPerSample=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AudioBuffer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"cffi_lime_audio_load") ) { cffi_lime_audio_load=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
	}
	return false;
}

void AudioBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitsPerSample","\x01","\x01","\x36","\xc4"));
	outFields->push(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("sampleRate","\x2a","\x3c","\x4c","\x67"));
	outFields->push(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(AudioBuffer_obj,bitsPerSample),HX_HCSTRING("bitsPerSample","\x01","\x01","\x36","\xc4")},
	{hx::fsInt,(int)offsetof(AudioBuffer_obj,channels),HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(AudioBuffer_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsInt,(int)offsetof(AudioBuffer_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsInt,(int)offsetof(AudioBuffer_obj,sampleRate),HX_HCSTRING("sampleRate","\x2a","\x3c","\x4c","\x67")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioBuffer_obj,src),HX_HCSTRING("src","\xe4","\xa6","\x57","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &AudioBuffer_obj::cffi_lime_audio_load,HX_HCSTRING("cffi_lime_audio_load","\xc0","\xd6","\x0b","\xc1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bitsPerSample","\x01","\x01","\x36","\xc4"),
	HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("sampleRate","\x2a","\x3c","\x4c","\x67"),
	HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioBuffer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AudioBuffer_obj::cffi_lime_audio_load,"cffi_lime_audio_load");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioBuffer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AudioBuffer_obj::cffi_lime_audio_load,"cffi_lime_audio_load");
};

#endif

hx::Class AudioBuffer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("fromURL","\x25","\xe0","\x03","\x58"),
	HX_HCSTRING("lime_audio_load","\x99","\x89","\x38","\x30"),
	HX_HCSTRING("cffi_lime_audio_load","\xc0","\xd6","\x0b","\xc1"),
	::String(null()) };

void AudioBuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.audio.AudioBuffer","\x25","\x07","\x67","\x5a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AudioBuffer_obj::__GetStatic;
	__mClass->mSetStaticField = &AudioBuffer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AudioBuffer_obj >;
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

void AudioBuffer_obj::__boot()
{
	cffi_lime_audio_load= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_audio_load","\x99","\x89","\x38","\x30"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
}

} // end namespace lime
} // end namespace audio
