#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_DOMRenderContext
#include <lime/graphics/DOMRenderContext.h>
#endif
namespace lime{
namespace graphics{

Void DOMRenderContext_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.DOMRenderContext","new",0x48e12553,"lime.graphics.DOMRenderContext.new","lime/graphics/DOMRenderContext.hx",117,0x5950199d)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//DOMRenderContext_obj::~DOMRenderContext_obj() { }

Dynamic DOMRenderContext_obj::__CreateEmpty() { return  new DOMRenderContext_obj; }
hx::ObjectPtr< DOMRenderContext_obj > DOMRenderContext_obj::__new()
{  hx::ObjectPtr< DOMRenderContext_obj > _result_ = new DOMRenderContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic DOMRenderContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DOMRenderContext_obj > _result_ = new DOMRenderContext_obj();
	_result_->__construct();
	return _result_;}

Void DOMRenderContext_obj::addEventListener( ::String type,Dynamic listener,Dynamic useCapture){
{
		HX_STACK_FRAME("lime.graphics.DOMRenderContext","addEventListener",0x3e985afa,"lime.graphics.DOMRenderContext.addEventListener","lime/graphics/DOMRenderContext.hx",124,0x5950199d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(listener,"listener")
		HX_STACK_ARG(useCapture,"useCapture")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DOMRenderContext_obj,addEventListener,(void))

Dynamic DOMRenderContext_obj::appendChild( Dynamic newChild){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","appendChild",0x11584155,"lime.graphics.DOMRenderContext.appendChild","lime/graphics/DOMRenderContext.hx",125,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newChild,"newChild")
	HX_STACK_LINE(125)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,appendChild,return )

Void DOMRenderContext_obj::blur( ){
{
		HX_STACK_FRAME("lime.graphics.DOMRenderContext","blur",0x74364254,"lime.graphics.DOMRenderContext.blur","lime/graphics/DOMRenderContext.hx",126,0x5950199d)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DOMRenderContext_obj,blur,(void))

Void DOMRenderContext_obj::click( ){
{
		HX_STACK_FRAME("lime.graphics.DOMRenderContext","click",0xcea133fb,"lime.graphics.DOMRenderContext.click","lime/graphics/DOMRenderContext.hx",127,0x5950199d)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DOMRenderContext_obj,click,(void))

Dynamic DOMRenderContext_obj::cloneNode( bool deep){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","cloneNode",0x4733c932,"lime.graphics.DOMRenderContext.cloneNode","lime/graphics/DOMRenderContext.hx",128,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(deep,"deep")
	HX_STACK_LINE(128)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,cloneNode,return )

int DOMRenderContext_obj::compareDocumentPosition( Dynamic other){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","compareDocumentPosition",0x64d84e1c,"lime.graphics.DOMRenderContext.compareDocumentPosition","lime/graphics/DOMRenderContext.hx",129,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(129)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,compareDocumentPosition,return )

bool DOMRenderContext_obj::contains( Dynamic other){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","contains",0xe7d6344c,"lime.graphics.DOMRenderContext.contains","lime/graphics/DOMRenderContext.hx",130,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(130)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,contains,return )

bool DOMRenderContext_obj::dispatchEvent( Dynamic event){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","dispatchEvent",0x6f82e9b3,"lime.graphics.DOMRenderContext.dispatchEvent","lime/graphics/DOMRenderContext.hx",131,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(131)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,dispatchEvent,return )

Void DOMRenderContext_obj::focus( ){
{
		HX_STACK_FRAME("lime.graphics.DOMRenderContext","focus",0x8acc178b,"lime.graphics.DOMRenderContext.focus","lime/graphics/DOMRenderContext.hx",132,0x5950199d)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DOMRenderContext_obj,focus,(void))

::String DOMRenderContext_obj::getAttribute( ::String name){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","getAttribute",0xbe1f0153,"lime.graphics.DOMRenderContext.getAttribute","lime/graphics/DOMRenderContext.hx",133,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(133)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,getAttribute,return )

::String DOMRenderContext_obj::getAttributeNS( ::String namespaceURI,::String localName){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","getAttributeNS",0xc4e08058,"lime.graphics.DOMRenderContext.getAttributeNS","lime/graphics/DOMRenderContext.hx",134,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(namespaceURI,"namespaceURI")
	HX_STACK_ARG(localName,"localName")
	HX_STACK_LINE(134)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DOMRenderContext_obj,getAttributeNS,return )

Dynamic DOMRenderContext_obj::getAttributeNode( ::String name){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","getAttributeNode",0x1e58dcf5,"lime.graphics.DOMRenderContext.getAttributeNode","lime/graphics/DOMRenderContext.hx",135,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(135)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,getAttributeNode,return )

Dynamic DOMRenderContext_obj::getAttributeNodeNS( ::String namespaceURI,::String localName){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","getAttributeNodeNS",0x0c02087a,"lime.graphics.DOMRenderContext.getAttributeNodeNS","lime/graphics/DOMRenderContext.hx",136,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(namespaceURI,"namespaceURI")
	HX_STACK_ARG(localName,"localName")
	HX_STACK_LINE(136)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DOMRenderContext_obj,getAttributeNodeNS,return )

Dynamic DOMRenderContext_obj::getBoundingClientRect( ){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","getBoundingClientRect",0xb0b4157c,"lime.graphics.DOMRenderContext.getBoundingClientRect","lime/graphics/DOMRenderContext.hx",137,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(137)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DOMRenderContext_obj,getBoundingClientRect,return )

Dynamic DOMRenderContext_obj::getClientRects( ){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","getClientRects",0x9dc0357b,"lime.graphics.DOMRenderContext.getClientRects","lime/graphics/DOMRenderContext.hx",138,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(138)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DOMRenderContext_obj,getClientRects,return )

Dynamic DOMRenderContext_obj::getElementsByClassName( ::String name){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","getElementsByClassName",0xd9cdb4cc,"lime.graphics.DOMRenderContext.getElementsByClassName","lime/graphics/DOMRenderContext.hx",139,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(139)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,getElementsByClassName,return )

Dynamic DOMRenderContext_obj::getElementsByTagName( ::String name){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","getElementsByTagName",0xf36643ae,"lime.graphics.DOMRenderContext.getElementsByTagName","lime/graphics/DOMRenderContext.hx",140,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(140)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,getElementsByTagName,return )

Dynamic DOMRenderContext_obj::getElementsByTagNameNS( ::String namespaceURI,::String localName){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","getElementsByTagNameNS",0x4c414f73,"lime.graphics.DOMRenderContext.getElementsByTagNameNS","lime/graphics/DOMRenderContext.hx",141,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(namespaceURI,"namespaceURI")
	HX_STACK_ARG(localName,"localName")
	HX_STACK_LINE(141)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DOMRenderContext_obj,getElementsByTagNameNS,return )

bool DOMRenderContext_obj::hasAttribute( ::String name){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","hasAttribute",0x3c1a4a0f,"lime.graphics.DOMRenderContext.hasAttribute","lime/graphics/DOMRenderContext.hx",142,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(142)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,hasAttribute,return )

bool DOMRenderContext_obj::hasAttributeNS( ::String namespaceURI,::String localName){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","hasAttributeNS",0x2ecc7014,"lime.graphics.DOMRenderContext.hasAttributeNS","lime/graphics/DOMRenderContext.hx",143,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(namespaceURI,"namespaceURI")
	HX_STACK_ARG(localName,"localName")
	HX_STACK_LINE(143)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(DOMRenderContext_obj,hasAttributeNS,return )

bool DOMRenderContext_obj::hasAttributes( ){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","hasAttributes",0x5ae68384,"lime.graphics.DOMRenderContext.hasAttributes","lime/graphics/DOMRenderContext.hx",144,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(144)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(DOMRenderContext_obj,hasAttributes,return )

bool DOMRenderContext_obj::hasChildNodes( ){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","hasChildNodes",0x01af03a2,"lime.graphics.DOMRenderContext.hasChildNodes","lime/graphics/DOMRenderContext.hx",145,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(145)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(DOMRenderContext_obj,hasChildNodes,return )

Dynamic DOMRenderContext_obj::insertAdjacentElement( ::String where,Dynamic element){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","insertAdjacentElement",0xbd91e494,"lime.graphics.DOMRenderContext.insertAdjacentElement","lime/graphics/DOMRenderContext.hx",146,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(where,"where")
	HX_STACK_ARG(element,"element")
	HX_STACK_LINE(146)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DOMRenderContext_obj,insertAdjacentElement,return )

Void DOMRenderContext_obj::insertAdjacentHTML( ::String where,::String html){
{
		HX_STACK_FRAME("lime.graphics.DOMRenderContext","insertAdjacentHTML",0xad336473,"lime.graphics.DOMRenderContext.insertAdjacentHTML","lime/graphics/DOMRenderContext.hx",147,0x5950199d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(where,"where")
		HX_STACK_ARG(html,"html")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DOMRenderContext_obj,insertAdjacentHTML,(void))

Void DOMRenderContext_obj::insertAdjacentText( ::String where,::String text){
{
		HX_STACK_FRAME("lime.graphics.DOMRenderContext","insertAdjacentText",0xb52effd5,"lime.graphics.DOMRenderContext.insertAdjacentText","lime/graphics/DOMRenderContext.hx",148,0x5950199d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(where,"where")
		HX_STACK_ARG(text,"text")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DOMRenderContext_obj,insertAdjacentText,(void))

Dynamic DOMRenderContext_obj::insertBefore( Dynamic newChild,Dynamic refChild){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","insertBefore",0xc497b145,"lime.graphics.DOMRenderContext.insertBefore","lime/graphics/DOMRenderContext.hx",149,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newChild,"newChild")
	HX_STACK_ARG(refChild,"refChild")
	HX_STACK_LINE(149)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DOMRenderContext_obj,insertBefore,return )

bool DOMRenderContext_obj::isDefaultNamespace( ::String namespaceURI){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","isDefaultNamespace",0x61adb211,"lime.graphics.DOMRenderContext.isDefaultNamespace","lime/graphics/DOMRenderContext.hx",150,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(namespaceURI,"namespaceURI")
	HX_STACK_LINE(150)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,isDefaultNamespace,return )

bool DOMRenderContext_obj::isEqualNode( Dynamic other){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","isEqualNode",0x1342a67f,"lime.graphics.DOMRenderContext.isEqualNode","lime/graphics/DOMRenderContext.hx",151,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(151)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,isEqualNode,return )

bool DOMRenderContext_obj::isSameNode( Dynamic other){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","isSameNode",0x49a3f5ff,"lime.graphics.DOMRenderContext.isSameNode","lime/graphics/DOMRenderContext.hx",152,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(152)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,isSameNode,return )

bool DOMRenderContext_obj::isSupported( ::String feature,::String version){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","isSupported",0x82b27cd7,"lime.graphics.DOMRenderContext.isSupported","lime/graphics/DOMRenderContext.hx",153,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(feature,"feature")
	HX_STACK_ARG(version,"version")
	HX_STACK_LINE(153)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(DOMRenderContext_obj,isSupported,return )

::String DOMRenderContext_obj::lookupNamespaceURI( ::String prefix){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","lookupNamespaceURI",0xcd8c2198,"lime.graphics.DOMRenderContext.lookupNamespaceURI","lime/graphics/DOMRenderContext.hx",154,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(prefix,"prefix")
	HX_STACK_LINE(154)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,lookupNamespaceURI,return )

::String DOMRenderContext_obj::lookupPrefix( ::String namespaceURI){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","lookupPrefix",0x14f8fc59,"lime.graphics.DOMRenderContext.lookupPrefix","lime/graphics/DOMRenderContext.hx",155,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(namespaceURI,"namespaceURI")
	HX_STACK_LINE(155)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,lookupPrefix,return )

bool DOMRenderContext_obj::matchesSelector( ::String selectors){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","matchesSelector",0x87504ca5,"lime.graphics.DOMRenderContext.matchesSelector","lime/graphics/DOMRenderContext.hx",156,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(selectors,"selectors")
	HX_STACK_LINE(156)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,matchesSelector,return )

Void DOMRenderContext_obj::normalize( ){
{
		HX_STACK_FRAME("lime.graphics.DOMRenderContext","normalize",0xdfc544c0,"lime.graphics.DOMRenderContext.normalize","lime/graphics/DOMRenderContext.hx",157,0x5950199d)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DOMRenderContext_obj,normalize,(void))

Dynamic DOMRenderContext_obj::querySelector( ::String selectors){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","querySelector",0x37b5e4fa,"lime.graphics.DOMRenderContext.querySelector","lime/graphics/DOMRenderContext.hx",158,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(selectors,"selectors")
	HX_STACK_LINE(158)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,querySelector,return )

Dynamic DOMRenderContext_obj::querySelectorAll( ::String selectors){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","querySelectorAll",0x2181a447,"lime.graphics.DOMRenderContext.querySelectorAll","lime/graphics/DOMRenderContext.hx",159,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(selectors,"selectors")
	HX_STACK_LINE(159)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,querySelectorAll,return )

Void DOMRenderContext_obj::remove( ){
{
		HX_STACK_FRAME("lime.graphics.DOMRenderContext","remove",0xf8a6a131,"lime.graphics.DOMRenderContext.remove","lime/graphics/DOMRenderContext.hx",160,0x5950199d)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DOMRenderContext_obj,remove,(void))

Void DOMRenderContext_obj::removeAttribute( ::String name){
{
		HX_STACK_FRAME("lime.graphics.DOMRenderContext","removeAttribute",0x030180ab,"lime.graphics.DOMRenderContext.removeAttribute","lime/graphics/DOMRenderContext.hx",161,0x5950199d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,removeAttribute,(void))

Void DOMRenderContext_obj::removeAttributeNS( ::String namespaceURI,::String localName){
{
		HX_STACK_FRAME("lime.graphics.DOMRenderContext","removeAttributeNS",0xe6e385b0,"lime.graphics.DOMRenderContext.removeAttributeNS","lime/graphics/DOMRenderContext.hx",162,0x5950199d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(namespaceURI,"namespaceURI")
		HX_STACK_ARG(localName,"localName")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DOMRenderContext_obj,removeAttributeNS,(void))

Dynamic DOMRenderContext_obj::removeAttributeNode( Dynamic oldAttr){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","removeAttributeNode",0x0b29e84d,"lime.graphics.DOMRenderContext.removeAttributeNode","lime/graphics/DOMRenderContext.hx",163,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(oldAttr,"oldAttr")
	HX_STACK_LINE(163)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,removeAttributeNode,return )

Dynamic DOMRenderContext_obj::removeChild( Dynamic oldChild){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","removeChild",0xd31586ab,"lime.graphics.DOMRenderContext.removeChild","lime/graphics/DOMRenderContext.hx",164,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(oldChild,"oldChild")
	HX_STACK_LINE(164)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,removeChild,return )

Void DOMRenderContext_obj::removeEventListener( ::String type,Dynamic listener,Dynamic useCapture){
{
		HX_STACK_FRAME("lime.graphics.DOMRenderContext","removeEventListener",0x965b32bd,"lime.graphics.DOMRenderContext.removeEventListener","lime/graphics/DOMRenderContext.hx",165,0x5950199d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(listener,"listener")
		HX_STACK_ARG(useCapture,"useCapture")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DOMRenderContext_obj,removeEventListener,(void))

Dynamic DOMRenderContext_obj::replaceChild( Dynamic newChild,Dynamic oldChild){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","replaceChild",0xed208975,"lime.graphics.DOMRenderContext.replaceChild","lime/graphics/DOMRenderContext.hx",166,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newChild,"newChild")
	HX_STACK_ARG(oldChild,"oldChild")
	HX_STACK_LINE(166)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DOMRenderContext_obj,replaceChild,return )

Void DOMRenderContext_obj::requestFullScreen( int flags){
{
		HX_STACK_FRAME("lime.graphics.DOMRenderContext","requestFullScreen",0x7b1f62bd,"lime.graphics.DOMRenderContext.requestFullScreen","lime/graphics/DOMRenderContext.hx",167,0x5950199d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(flags,"flags")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,requestFullScreen,(void))

Void DOMRenderContext_obj::requestFullscreen( ){
{
		HX_STACK_FRAME("lime.graphics.DOMRenderContext","requestFullscreen",0x468aee9d,"lime.graphics.DOMRenderContext.requestFullscreen","lime/graphics/DOMRenderContext.hx",168,0x5950199d)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DOMRenderContext_obj,requestFullscreen,(void))

Void DOMRenderContext_obj::requestPointerLock( ){
{
		HX_STACK_FRAME("lime.graphics.DOMRenderContext","requestPointerLock",0xd9554ca6,"lime.graphics.DOMRenderContext.requestPointerLock","lime/graphics/DOMRenderContext.hx",169,0x5950199d)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DOMRenderContext_obj,requestPointerLock,(void))

Void DOMRenderContext_obj::scrollByLines( int lines){
{
		HX_STACK_FRAME("lime.graphics.DOMRenderContext","scrollByLines",0x6ffaaace,"lime.graphics.DOMRenderContext.scrollByLines","lime/graphics/DOMRenderContext.hx",170,0x5950199d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lines,"lines")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,scrollByLines,(void))

Void DOMRenderContext_obj::scrollByPages( int pages){
{
		HX_STACK_FRAME("lime.graphics.DOMRenderContext","scrollByPages",0xb845f813,"lime.graphics.DOMRenderContext.scrollByPages","lime/graphics/DOMRenderContext.hx",171,0x5950199d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pages,"pages")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,scrollByPages,(void))

Void DOMRenderContext_obj::scrollIntoView( Dynamic alignWithTop){
{
		HX_STACK_FRAME("lime.graphics.DOMRenderContext","scrollIntoView",0xb523963f,"lime.graphics.DOMRenderContext.scrollIntoView","lime/graphics/DOMRenderContext.hx",172,0x5950199d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(alignWithTop,"alignWithTop")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,scrollIntoView,(void))

Void DOMRenderContext_obj::scrollIntoViewIfNeeded( Dynamic centerIfNeeded){
{
		HX_STACK_FRAME("lime.graphics.DOMRenderContext","scrollIntoViewIfNeeded",0xe85fcb51,"lime.graphics.DOMRenderContext.scrollIntoViewIfNeeded","lime/graphics/DOMRenderContext.hx",173,0x5950199d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(centerIfNeeded,"centerIfNeeded")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,scrollIntoViewIfNeeded,(void))

Void DOMRenderContext_obj::setAttribute( ::String name,::String value){
{
		HX_STACK_FRAME("lime.graphics.DOMRenderContext","setAttribute",0xd31824c7,"lime.graphics.DOMRenderContext.setAttribute","lime/graphics/DOMRenderContext.hx",174,0x5950199d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DOMRenderContext_obj,setAttribute,(void))

Void DOMRenderContext_obj::setAttributeNS( ::String namespaceURI,::String qualifiedName,::String value){
{
		HX_STACK_FRAME("lime.graphics.DOMRenderContext","setAttributeNS",0xe50068cc,"lime.graphics.DOMRenderContext.setAttributeNS","lime/graphics/DOMRenderContext.hx",175,0x5950199d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(namespaceURI,"namespaceURI")
		HX_STACK_ARG(qualifiedName,"qualifiedName")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DOMRenderContext_obj,setAttributeNS,(void))

Dynamic DOMRenderContext_obj::setAttributeNode( Dynamic newAttr){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","setAttributeNode",0x749aca69,"lime.graphics.DOMRenderContext.setAttributeNode","lime/graphics/DOMRenderContext.hx",176,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newAttr,"newAttr")
	HX_STACK_LINE(176)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,setAttributeNode,return )

Dynamic DOMRenderContext_obj::setAttributeNodeNS( Dynamic newAttr){
	HX_STACK_FRAME("lime.graphics.DOMRenderContext","setAttributeNodeNS",0xe8b13aee,"lime.graphics.DOMRenderContext.setAttributeNodeNS","lime/graphics/DOMRenderContext.hx",177,0x5950199d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newAttr,"newAttr")
	HX_STACK_LINE(177)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DOMRenderContext_obj,setAttributeNodeNS,return )


DOMRenderContext_obj::DOMRenderContext_obj()
{
}

void DOMRenderContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DOMRenderContext);
	HX_MARK_MEMBER_NAME(accessKey,"accessKey");
	HX_MARK_MEMBER_NAME(align,"align");
	HX_MARK_MEMBER_NAME(attributes,"attributes");
	HX_MARK_MEMBER_NAME(baseURI,"baseURI");
	HX_MARK_MEMBER_NAME(childElementCount,"childElementCount");
	HX_MARK_MEMBER_NAME(childNodes,"childNodes");
	HX_MARK_MEMBER_NAME(children,"children");
	HX_MARK_MEMBER_NAME(classList,"classList");
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(clientHeight,"clientHeight");
	HX_MARK_MEMBER_NAME(clientLeft,"clientLeft");
	HX_MARK_MEMBER_NAME(clientTop,"clientTop");
	HX_MARK_MEMBER_NAME(clientWidth,"clientWidth");
	HX_MARK_MEMBER_NAME(contentEditable,"contentEditable");
	HX_MARK_MEMBER_NAME(dataset,"dataset");
	HX_MARK_MEMBER_NAME(dir,"dir");
	HX_MARK_MEMBER_NAME(draggable,"draggable");
	HX_MARK_MEMBER_NAME(dropzone,"dropzone");
	HX_MARK_MEMBER_NAME(firstChild,"firstChild");
	HX_MARK_MEMBER_NAME(firstElementChild,"firstElementChild");
	HX_MARK_MEMBER_NAME(hidden,"hidden");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(innerHTML,"innerHTML");
	HX_MARK_MEMBER_NAME(innerText,"innerText");
	HX_MARK_MEMBER_NAME(isContentEditable,"isContentEditable");
	HX_MARK_MEMBER_NAME(lang,"lang");
	HX_MARK_MEMBER_NAME(lastChild,"lastChild");
	HX_MARK_MEMBER_NAME(lastElementChild,"lastElementChild");
	HX_MARK_MEMBER_NAME(localName,"localName");
	HX_MARK_MEMBER_NAME(namespaceURI,"namespaceURI");
	HX_MARK_MEMBER_NAME(nextElementSibling,"nextElementSibling");
	HX_MARK_MEMBER_NAME(nextSibling,"nextSibling");
	HX_MARK_MEMBER_NAME(nodeName,"nodeName");
	HX_MARK_MEMBER_NAME(nodeType,"nodeType");
	HX_MARK_MEMBER_NAME(nodeValue,"nodeValue");
	HX_MARK_MEMBER_NAME(offsetHeight,"offsetHeight");
	HX_MARK_MEMBER_NAME(offsetLeft,"offsetLeft");
	HX_MARK_MEMBER_NAME(offsetParent,"offsetParent");
	HX_MARK_MEMBER_NAME(offsetTop,"offsetTop");
	HX_MARK_MEMBER_NAME(offsetWidth,"offsetWidth");
	HX_MARK_MEMBER_NAME(onabort,"onabort");
	HX_MARK_MEMBER_NAME(onbeforecopy,"onbeforecopy");
	HX_MARK_MEMBER_NAME(onbeforecut,"onbeforecut");
	HX_MARK_MEMBER_NAME(onbeforepaste,"onbeforepaste");
	HX_MARK_MEMBER_NAME(onblur,"onblur");
	HX_MARK_MEMBER_NAME(onchange,"onchange");
	HX_MARK_MEMBER_NAME(onclick,"onclick");
	HX_MARK_MEMBER_NAME(oncontextmenu,"oncontextmenu");
	HX_MARK_MEMBER_NAME(oncopy,"oncopy");
	HX_MARK_MEMBER_NAME(oncut,"oncut");
	HX_MARK_MEMBER_NAME(ondblclick,"ondblclick");
	HX_MARK_MEMBER_NAME(ondrag,"ondrag");
	HX_MARK_MEMBER_NAME(ondragend,"ondragend");
	HX_MARK_MEMBER_NAME(ondragenter,"ondragenter");
	HX_MARK_MEMBER_NAME(ondragleave,"ondragleave");
	HX_MARK_MEMBER_NAME(ondragover,"ondragover");
	HX_MARK_MEMBER_NAME(ondragstart,"ondragstart");
	HX_MARK_MEMBER_NAME(ondrop,"ondrop");
	HX_MARK_MEMBER_NAME(onerror,"onerror");
	HX_MARK_MEMBER_NAME(onfocus,"onfocus");
	HX_MARK_MEMBER_NAME(onfullscreenchange,"onfullscreenchange");
	HX_MARK_MEMBER_NAME(onfullscreenerror,"onfullscreenerror");
	HX_MARK_MEMBER_NAME(oninput,"oninput");
	HX_MARK_MEMBER_NAME(oninvalid,"oninvalid");
	HX_MARK_MEMBER_NAME(onkeydown,"onkeydown");
	HX_MARK_MEMBER_NAME(onkeypress,"onkeypress");
	HX_MARK_MEMBER_NAME(onkeyup,"onkeyup");
	HX_MARK_MEMBER_NAME(onload,"onload");
	HX_MARK_MEMBER_NAME(onmousedown,"onmousedown");
	HX_MARK_MEMBER_NAME(onmousemove,"onmousemove");
	HX_MARK_MEMBER_NAME(onmouseout,"onmouseout");
	HX_MARK_MEMBER_NAME(onmouseover,"onmouseover");
	HX_MARK_MEMBER_NAME(onmouseup,"onmouseup");
	HX_MARK_MEMBER_NAME(onmousewheel,"onmousewheel");
	HX_MARK_MEMBER_NAME(onpaste,"onpaste");
	HX_MARK_MEMBER_NAME(onreset,"onreset");
	HX_MARK_MEMBER_NAME(onscroll,"onscroll");
	HX_MARK_MEMBER_NAME(onsearch,"onsearch");
	HX_MARK_MEMBER_NAME(onselect,"onselect");
	HX_MARK_MEMBER_NAME(onselectstart,"onselectstart");
	HX_MARK_MEMBER_NAME(onsubmit,"onsubmit");
	HX_MARK_MEMBER_NAME(ontouchcancel,"ontouchcancel");
	HX_MARK_MEMBER_NAME(ontouchend,"ontouchend");
	HX_MARK_MEMBER_NAME(ontouchmove,"ontouchmove");
	HX_MARK_MEMBER_NAME(ontouchstart,"ontouchstart");
	HX_MARK_MEMBER_NAME(outerHTML,"outerHTML");
	HX_MARK_MEMBER_NAME(outerText,"outerText");
	HX_MARK_MEMBER_NAME(ownerDocument,"ownerDocument");
	HX_MARK_MEMBER_NAME(parentElement,"parentElement");
	HX_MARK_MEMBER_NAME(parentNode,"parentNode");
	HX_MARK_MEMBER_NAME(prefix,"prefix");
	HX_MARK_MEMBER_NAME(previousElementSibling,"previousElementSibling");
	HX_MARK_MEMBER_NAME(previousSibling,"previousSibling");
	HX_MARK_MEMBER_NAME(pseudo,"pseudo");
	HX_MARK_MEMBER_NAME(scrollHeight,"scrollHeight");
	HX_MARK_MEMBER_NAME(scrollLeft,"scrollLeft");
	HX_MARK_MEMBER_NAME(scrollTop,"scrollTop");
	HX_MARK_MEMBER_NAME(scrollWidth,"scrollWidth");
	HX_MARK_MEMBER_NAME(spellcheck,"spellcheck");
	HX_MARK_MEMBER_NAME(style,"style");
	HX_MARK_MEMBER_NAME(tabIndex,"tabIndex");
	HX_MARK_MEMBER_NAME(tagName,"tagName");
	HX_MARK_MEMBER_NAME(textContent,"textContent");
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(translate,"translate");
	HX_MARK_END_CLASS();
}

void DOMRenderContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(accessKey,"accessKey");
	HX_VISIT_MEMBER_NAME(align,"align");
	HX_VISIT_MEMBER_NAME(attributes,"attributes");
	HX_VISIT_MEMBER_NAME(baseURI,"baseURI");
	HX_VISIT_MEMBER_NAME(childElementCount,"childElementCount");
	HX_VISIT_MEMBER_NAME(childNodes,"childNodes");
	HX_VISIT_MEMBER_NAME(children,"children");
	HX_VISIT_MEMBER_NAME(classList,"classList");
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(clientHeight,"clientHeight");
	HX_VISIT_MEMBER_NAME(clientLeft,"clientLeft");
	HX_VISIT_MEMBER_NAME(clientTop,"clientTop");
	HX_VISIT_MEMBER_NAME(clientWidth,"clientWidth");
	HX_VISIT_MEMBER_NAME(contentEditable,"contentEditable");
	HX_VISIT_MEMBER_NAME(dataset,"dataset");
	HX_VISIT_MEMBER_NAME(dir,"dir");
	HX_VISIT_MEMBER_NAME(draggable,"draggable");
	HX_VISIT_MEMBER_NAME(dropzone,"dropzone");
	HX_VISIT_MEMBER_NAME(firstChild,"firstChild");
	HX_VISIT_MEMBER_NAME(firstElementChild,"firstElementChild");
	HX_VISIT_MEMBER_NAME(hidden,"hidden");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(innerHTML,"innerHTML");
	HX_VISIT_MEMBER_NAME(innerText,"innerText");
	HX_VISIT_MEMBER_NAME(isContentEditable,"isContentEditable");
	HX_VISIT_MEMBER_NAME(lang,"lang");
	HX_VISIT_MEMBER_NAME(lastChild,"lastChild");
	HX_VISIT_MEMBER_NAME(lastElementChild,"lastElementChild");
	HX_VISIT_MEMBER_NAME(localName,"localName");
	HX_VISIT_MEMBER_NAME(namespaceURI,"namespaceURI");
	HX_VISIT_MEMBER_NAME(nextElementSibling,"nextElementSibling");
	HX_VISIT_MEMBER_NAME(nextSibling,"nextSibling");
	HX_VISIT_MEMBER_NAME(nodeName,"nodeName");
	HX_VISIT_MEMBER_NAME(nodeType,"nodeType");
	HX_VISIT_MEMBER_NAME(nodeValue,"nodeValue");
	HX_VISIT_MEMBER_NAME(offsetHeight,"offsetHeight");
	HX_VISIT_MEMBER_NAME(offsetLeft,"offsetLeft");
	HX_VISIT_MEMBER_NAME(offsetParent,"offsetParent");
	HX_VISIT_MEMBER_NAME(offsetTop,"offsetTop");
	HX_VISIT_MEMBER_NAME(offsetWidth,"offsetWidth");
	HX_VISIT_MEMBER_NAME(onabort,"onabort");
	HX_VISIT_MEMBER_NAME(onbeforecopy,"onbeforecopy");
	HX_VISIT_MEMBER_NAME(onbeforecut,"onbeforecut");
	HX_VISIT_MEMBER_NAME(onbeforepaste,"onbeforepaste");
	HX_VISIT_MEMBER_NAME(onblur,"onblur");
	HX_VISIT_MEMBER_NAME(onchange,"onchange");
	HX_VISIT_MEMBER_NAME(onclick,"onclick");
	HX_VISIT_MEMBER_NAME(oncontextmenu,"oncontextmenu");
	HX_VISIT_MEMBER_NAME(oncopy,"oncopy");
	HX_VISIT_MEMBER_NAME(oncut,"oncut");
	HX_VISIT_MEMBER_NAME(ondblclick,"ondblclick");
	HX_VISIT_MEMBER_NAME(ondrag,"ondrag");
	HX_VISIT_MEMBER_NAME(ondragend,"ondragend");
	HX_VISIT_MEMBER_NAME(ondragenter,"ondragenter");
	HX_VISIT_MEMBER_NAME(ondragleave,"ondragleave");
	HX_VISIT_MEMBER_NAME(ondragover,"ondragover");
	HX_VISIT_MEMBER_NAME(ondragstart,"ondragstart");
	HX_VISIT_MEMBER_NAME(ondrop,"ondrop");
	HX_VISIT_MEMBER_NAME(onerror,"onerror");
	HX_VISIT_MEMBER_NAME(onfocus,"onfocus");
	HX_VISIT_MEMBER_NAME(onfullscreenchange,"onfullscreenchange");
	HX_VISIT_MEMBER_NAME(onfullscreenerror,"onfullscreenerror");
	HX_VISIT_MEMBER_NAME(oninput,"oninput");
	HX_VISIT_MEMBER_NAME(oninvalid,"oninvalid");
	HX_VISIT_MEMBER_NAME(onkeydown,"onkeydown");
	HX_VISIT_MEMBER_NAME(onkeypress,"onkeypress");
	HX_VISIT_MEMBER_NAME(onkeyup,"onkeyup");
	HX_VISIT_MEMBER_NAME(onload,"onload");
	HX_VISIT_MEMBER_NAME(onmousedown,"onmousedown");
	HX_VISIT_MEMBER_NAME(onmousemove,"onmousemove");
	HX_VISIT_MEMBER_NAME(onmouseout,"onmouseout");
	HX_VISIT_MEMBER_NAME(onmouseover,"onmouseover");
	HX_VISIT_MEMBER_NAME(onmouseup,"onmouseup");
	HX_VISIT_MEMBER_NAME(onmousewheel,"onmousewheel");
	HX_VISIT_MEMBER_NAME(onpaste,"onpaste");
	HX_VISIT_MEMBER_NAME(onreset,"onreset");
	HX_VISIT_MEMBER_NAME(onscroll,"onscroll");
	HX_VISIT_MEMBER_NAME(onsearch,"onsearch");
	HX_VISIT_MEMBER_NAME(onselect,"onselect");
	HX_VISIT_MEMBER_NAME(onselectstart,"onselectstart");
	HX_VISIT_MEMBER_NAME(onsubmit,"onsubmit");
	HX_VISIT_MEMBER_NAME(ontouchcancel,"ontouchcancel");
	HX_VISIT_MEMBER_NAME(ontouchend,"ontouchend");
	HX_VISIT_MEMBER_NAME(ontouchmove,"ontouchmove");
	HX_VISIT_MEMBER_NAME(ontouchstart,"ontouchstart");
	HX_VISIT_MEMBER_NAME(outerHTML,"outerHTML");
	HX_VISIT_MEMBER_NAME(outerText,"outerText");
	HX_VISIT_MEMBER_NAME(ownerDocument,"ownerDocument");
	HX_VISIT_MEMBER_NAME(parentElement,"parentElement");
	HX_VISIT_MEMBER_NAME(parentNode,"parentNode");
	HX_VISIT_MEMBER_NAME(prefix,"prefix");
	HX_VISIT_MEMBER_NAME(previousElementSibling,"previousElementSibling");
	HX_VISIT_MEMBER_NAME(previousSibling,"previousSibling");
	HX_VISIT_MEMBER_NAME(pseudo,"pseudo");
	HX_VISIT_MEMBER_NAME(scrollHeight,"scrollHeight");
	HX_VISIT_MEMBER_NAME(scrollLeft,"scrollLeft");
	HX_VISIT_MEMBER_NAME(scrollTop,"scrollTop");
	HX_VISIT_MEMBER_NAME(scrollWidth,"scrollWidth");
	HX_VISIT_MEMBER_NAME(spellcheck,"spellcheck");
	HX_VISIT_MEMBER_NAME(style,"style");
	HX_VISIT_MEMBER_NAME(tabIndex,"tabIndex");
	HX_VISIT_MEMBER_NAME(tagName,"tagName");
	HX_VISIT_MEMBER_NAME(textContent,"textContent");
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(translate,"translate");
}

Dynamic DOMRenderContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { return dir; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"lang") ) { return lang; }
		if (HX_FIELD_EQ(inName,"blur") ) { return blur_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { return align; }
		if (HX_FIELD_EQ(inName,"oncut") ) { return oncut; }
		if (HX_FIELD_EQ(inName,"style") ) { return style; }
		if (HX_FIELD_EQ(inName,"title") ) { return title; }
		if (HX_FIELD_EQ(inName,"click") ) { return click_dyn(); }
		if (HX_FIELD_EQ(inName,"focus") ) { return focus_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hidden") ) { return hidden; }
		if (HX_FIELD_EQ(inName,"onblur") ) { return onblur; }
		if (HX_FIELD_EQ(inName,"oncopy") ) { return oncopy; }
		if (HX_FIELD_EQ(inName,"ondrag") ) { return ondrag; }
		if (HX_FIELD_EQ(inName,"ondrop") ) { return ondrop; }
		if (HX_FIELD_EQ(inName,"onload") ) { return onload; }
		if (HX_FIELD_EQ(inName,"prefix") ) { return prefix; }
		if (HX_FIELD_EQ(inName,"pseudo") ) { return pseudo; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"baseURI") ) { return baseURI; }
		if (HX_FIELD_EQ(inName,"dataset") ) { return dataset; }
		if (HX_FIELD_EQ(inName,"onabort") ) { return onabort; }
		if (HX_FIELD_EQ(inName,"onclick") ) { return onclick; }
		if (HX_FIELD_EQ(inName,"onerror") ) { return onerror; }
		if (HX_FIELD_EQ(inName,"onfocus") ) { return onfocus; }
		if (HX_FIELD_EQ(inName,"oninput") ) { return oninput; }
		if (HX_FIELD_EQ(inName,"onkeyup") ) { return onkeyup; }
		if (HX_FIELD_EQ(inName,"onpaste") ) { return onpaste; }
		if (HX_FIELD_EQ(inName,"onreset") ) { return onreset; }
		if (HX_FIELD_EQ(inName,"tagName") ) { return tagName; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { return children; }
		if (HX_FIELD_EQ(inName,"dropzone") ) { return dropzone; }
		if (HX_FIELD_EQ(inName,"nodeName") ) { return nodeName; }
		if (HX_FIELD_EQ(inName,"nodeType") ) { return nodeType; }
		if (HX_FIELD_EQ(inName,"onchange") ) { return onchange; }
		if (HX_FIELD_EQ(inName,"onscroll") ) { return onscroll; }
		if (HX_FIELD_EQ(inName,"onsearch") ) { return onsearch; }
		if (HX_FIELD_EQ(inName,"onselect") ) { return onselect; }
		if (HX_FIELD_EQ(inName,"onsubmit") ) { return onsubmit; }
		if (HX_FIELD_EQ(inName,"tabIndex") ) { return tabIndex; }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"accessKey") ) { return accessKey; }
		if (HX_FIELD_EQ(inName,"classList") ) { return classList; }
		if (HX_FIELD_EQ(inName,"className") ) { return className; }
		if (HX_FIELD_EQ(inName,"clientTop") ) { return clientTop; }
		if (HX_FIELD_EQ(inName,"draggable") ) { return draggable; }
		if (HX_FIELD_EQ(inName,"innerHTML") ) { return innerHTML; }
		if (HX_FIELD_EQ(inName,"innerText") ) { return innerText; }
		if (HX_FIELD_EQ(inName,"lastChild") ) { return lastChild; }
		if (HX_FIELD_EQ(inName,"localName") ) { return localName; }
		if (HX_FIELD_EQ(inName,"nodeValue") ) { return nodeValue; }
		if (HX_FIELD_EQ(inName,"offsetTop") ) { return offsetTop; }
		if (HX_FIELD_EQ(inName,"ondragend") ) { return ondragend; }
		if (HX_FIELD_EQ(inName,"oninvalid") ) { return oninvalid; }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { return onkeydown; }
		if (HX_FIELD_EQ(inName,"onmouseup") ) { return onmouseup; }
		if (HX_FIELD_EQ(inName,"outerHTML") ) { return outerHTML; }
		if (HX_FIELD_EQ(inName,"outerText") ) { return outerText; }
		if (HX_FIELD_EQ(inName,"scrollTop") ) { return scrollTop; }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate; }
		if (HX_FIELD_EQ(inName,"cloneNode") ) { return cloneNode_dyn(); }
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attributes") ) { return attributes; }
		if (HX_FIELD_EQ(inName,"childNodes") ) { return childNodes; }
		if (HX_FIELD_EQ(inName,"clientLeft") ) { return clientLeft; }
		if (HX_FIELD_EQ(inName,"firstChild") ) { return firstChild; }
		if (HX_FIELD_EQ(inName,"offsetLeft") ) { return offsetLeft; }
		if (HX_FIELD_EQ(inName,"ondblclick") ) { return ondblclick; }
		if (HX_FIELD_EQ(inName,"ondragover") ) { return ondragover; }
		if (HX_FIELD_EQ(inName,"onkeypress") ) { return onkeypress; }
		if (HX_FIELD_EQ(inName,"onmouseout") ) { return onmouseout; }
		if (HX_FIELD_EQ(inName,"ontouchend") ) { return ontouchend; }
		if (HX_FIELD_EQ(inName,"parentNode") ) { return parentNode; }
		if (HX_FIELD_EQ(inName,"scrollLeft") ) { return scrollLeft; }
		if (HX_FIELD_EQ(inName,"spellcheck") ) { return spellcheck; }
		if (HX_FIELD_EQ(inName,"isSameNode") ) { return isSameNode_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clientWidth") ) { return clientWidth; }
		if (HX_FIELD_EQ(inName,"nextSibling") ) { return nextSibling; }
		if (HX_FIELD_EQ(inName,"offsetWidth") ) { return offsetWidth; }
		if (HX_FIELD_EQ(inName,"onbeforecut") ) { return onbeforecut; }
		if (HX_FIELD_EQ(inName,"ondragenter") ) { return ondragenter; }
		if (HX_FIELD_EQ(inName,"ondragleave") ) { return ondragleave; }
		if (HX_FIELD_EQ(inName,"ondragstart") ) { return ondragstart; }
		if (HX_FIELD_EQ(inName,"onmousedown") ) { return onmousedown; }
		if (HX_FIELD_EQ(inName,"onmousemove") ) { return onmousemove; }
		if (HX_FIELD_EQ(inName,"onmouseover") ) { return onmouseover; }
		if (HX_FIELD_EQ(inName,"ontouchmove") ) { return ontouchmove; }
		if (HX_FIELD_EQ(inName,"scrollWidth") ) { return scrollWidth; }
		if (HX_FIELD_EQ(inName,"textContent") ) { return textContent; }
		if (HX_FIELD_EQ(inName,"appendChild") ) { return appendChild_dyn(); }
		if (HX_FIELD_EQ(inName,"isEqualNode") ) { return isEqualNode_dyn(); }
		if (HX_FIELD_EQ(inName,"isSupported") ) { return isSupported_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clientHeight") ) { return clientHeight; }
		if (HX_FIELD_EQ(inName,"namespaceURI") ) { return namespaceURI; }
		if (HX_FIELD_EQ(inName,"offsetHeight") ) { return offsetHeight; }
		if (HX_FIELD_EQ(inName,"offsetParent") ) { return offsetParent; }
		if (HX_FIELD_EQ(inName,"onbeforecopy") ) { return onbeforecopy; }
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { return onmousewheel; }
		if (HX_FIELD_EQ(inName,"ontouchstart") ) { return ontouchstart; }
		if (HX_FIELD_EQ(inName,"scrollHeight") ) { return scrollHeight; }
		if (HX_FIELD_EQ(inName,"getAttribute") ) { return getAttribute_dyn(); }
		if (HX_FIELD_EQ(inName,"hasAttribute") ) { return hasAttribute_dyn(); }
		if (HX_FIELD_EQ(inName,"insertBefore") ) { return insertBefore_dyn(); }
		if (HX_FIELD_EQ(inName,"lookupPrefix") ) { return lookupPrefix_dyn(); }
		if (HX_FIELD_EQ(inName,"replaceChild") ) { return replaceChild_dyn(); }
		if (HX_FIELD_EQ(inName,"setAttribute") ) { return setAttribute_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onbeforepaste") ) { return onbeforepaste; }
		if (HX_FIELD_EQ(inName,"oncontextmenu") ) { return oncontextmenu; }
		if (HX_FIELD_EQ(inName,"onselectstart") ) { return onselectstart; }
		if (HX_FIELD_EQ(inName,"ontouchcancel") ) { return ontouchcancel; }
		if (HX_FIELD_EQ(inName,"ownerDocument") ) { return ownerDocument; }
		if (HX_FIELD_EQ(inName,"parentElement") ) { return parentElement; }
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return dispatchEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"hasAttributes") ) { return hasAttributes_dyn(); }
		if (HX_FIELD_EQ(inName,"hasChildNodes") ) { return hasChildNodes_dyn(); }
		if (HX_FIELD_EQ(inName,"querySelector") ) { return querySelector_dyn(); }
		if (HX_FIELD_EQ(inName,"scrollByLines") ) { return scrollByLines_dyn(); }
		if (HX_FIELD_EQ(inName,"scrollByPages") ) { return scrollByPages_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAttributeNS") ) { return getAttributeNS_dyn(); }
		if (HX_FIELD_EQ(inName,"getClientRects") ) { return getClientRects_dyn(); }
		if (HX_FIELD_EQ(inName,"hasAttributeNS") ) { return hasAttributeNS_dyn(); }
		if (HX_FIELD_EQ(inName,"scrollIntoView") ) { return scrollIntoView_dyn(); }
		if (HX_FIELD_EQ(inName,"setAttributeNS") ) { return setAttributeNS_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"contentEditable") ) { return contentEditable; }
		if (HX_FIELD_EQ(inName,"previousSibling") ) { return previousSibling; }
		if (HX_FIELD_EQ(inName,"matchesSelector") ) { return matchesSelector_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAttribute") ) { return removeAttribute_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lastElementChild") ) { return lastElementChild; }
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"getAttributeNode") ) { return getAttributeNode_dyn(); }
		if (HX_FIELD_EQ(inName,"querySelectorAll") ) { return querySelectorAll_dyn(); }
		if (HX_FIELD_EQ(inName,"setAttributeNode") ) { return setAttributeNode_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"childElementCount") ) { return childElementCount; }
		if (HX_FIELD_EQ(inName,"firstElementChild") ) { return firstElementChild; }
		if (HX_FIELD_EQ(inName,"isContentEditable") ) { return isContentEditable; }
		if (HX_FIELD_EQ(inName,"onfullscreenerror") ) { return onfullscreenerror; }
		if (HX_FIELD_EQ(inName,"removeAttributeNS") ) { return removeAttributeNS_dyn(); }
		if (HX_FIELD_EQ(inName,"requestFullScreen") ) { return requestFullScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"requestFullscreen") ) { return requestFullscreen_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"nextElementSibling") ) { return nextElementSibling; }
		if (HX_FIELD_EQ(inName,"onfullscreenchange") ) { return onfullscreenchange; }
		if (HX_FIELD_EQ(inName,"getAttributeNodeNS") ) { return getAttributeNodeNS_dyn(); }
		if (HX_FIELD_EQ(inName,"insertAdjacentHTML") ) { return insertAdjacentHTML_dyn(); }
		if (HX_FIELD_EQ(inName,"insertAdjacentText") ) { return insertAdjacentText_dyn(); }
		if (HX_FIELD_EQ(inName,"isDefaultNamespace") ) { return isDefaultNamespace_dyn(); }
		if (HX_FIELD_EQ(inName,"lookupNamespaceURI") ) { return lookupNamespaceURI_dyn(); }
		if (HX_FIELD_EQ(inName,"requestPointerLock") ) { return requestPointerLock_dyn(); }
		if (HX_FIELD_EQ(inName,"setAttributeNodeNS") ) { return setAttributeNodeNS_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeAttributeNode") ) { return removeAttributeNode_dyn(); }
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return removeEventListener_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getElementsByTagName") ) { return getElementsByTagName_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getBoundingClientRect") ) { return getBoundingClientRect_dyn(); }
		if (HX_FIELD_EQ(inName,"insertAdjacentElement") ) { return insertAdjacentElement_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"previousElementSibling") ) { return previousElementSibling; }
		if (HX_FIELD_EQ(inName,"getElementsByClassName") ) { return getElementsByClassName_dyn(); }
		if (HX_FIELD_EQ(inName,"getElementsByTagNameNS") ) { return getElementsByTagNameNS_dyn(); }
		if (HX_FIELD_EQ(inName,"scrollIntoViewIfNeeded") ) { return scrollIntoViewIfNeeded_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"compareDocumentPosition") ) { return compareDocumentPosition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DOMRenderContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { dir=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"lang") ) { lang=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { align=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oncut") ) { oncut=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"style") ) { style=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hidden") ) { hidden=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onblur") ) { onblur=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oncopy") ) { oncopy=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ondrag") ) { ondrag=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ondrop") ) { ondrop=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onload") ) { onload=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prefix") ) { prefix=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pseudo") ) { pseudo=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"baseURI") ) { baseURI=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dataset") ) { dataset=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onabort") ) { onabort=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onclick") ) { onclick=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onerror") ) { onerror=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onfocus") ) { onfocus=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oninput") ) { oninput=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onkeyup") ) { onkeyup=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onpaste") ) { onpaste=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onreset") ) { onreset=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tagName") ) { tagName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dropzone") ) { dropzone=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nodeName") ) { nodeName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nodeType") ) { nodeType=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onchange") ) { onchange=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onscroll") ) { onscroll=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onsearch") ) { onsearch=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onselect") ) { onselect=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onsubmit") ) { onsubmit=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabIndex") ) { tabIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"accessKey") ) { accessKey=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"classList") ) { classList=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clientTop") ) { clientTop=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"draggable") ) { draggable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"innerHTML") ) { innerHTML=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"innerText") ) { innerText=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastChild") ) { lastChild=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localName") ) { localName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nodeValue") ) { nodeValue=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetTop") ) { offsetTop=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ondragend") ) { ondragend=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oninvalid") ) { oninvalid=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onkeydown") ) { onkeydown=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onmouseup") ) { onmouseup=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outerHTML") ) { outerHTML=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outerText") ) { outerText=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollTop") ) { scrollTop=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"translate") ) { translate=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attributes") ) { attributes=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"childNodes") ) { childNodes=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clientLeft") ) { clientLeft=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"firstChild") ) { firstChild=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetLeft") ) { offsetLeft=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ondblclick") ) { ondblclick=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ondragover") ) { ondragover=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onkeypress") ) { onkeypress=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onmouseout") ) { onmouseout=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ontouchend") ) { ontouchend=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parentNode") ) { parentNode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollLeft") ) { scrollLeft=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spellcheck") ) { spellcheck=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clientWidth") ) { clientWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextSibling") ) { nextSibling=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetWidth") ) { offsetWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onbeforecut") ) { onbeforecut=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ondragenter") ) { ondragenter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ondragleave") ) { ondragleave=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ondragstart") ) { ondragstart=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onmousedown") ) { onmousedown=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onmousemove") ) { onmousemove=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onmouseover") ) { onmouseover=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ontouchmove") ) { ontouchmove=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollWidth") ) { scrollWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textContent") ) { textContent=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clientHeight") ) { clientHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"namespaceURI") ) { namespaceURI=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetHeight") ) { offsetHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetParent") ) { offsetParent=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onbeforecopy") ) { onbeforecopy=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onmousewheel") ) { onmousewheel=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ontouchstart") ) { ontouchstart=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollHeight") ) { scrollHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onbeforepaste") ) { onbeforepaste=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oncontextmenu") ) { oncontextmenu=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onselectstart") ) { onselectstart=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ontouchcancel") ) { ontouchcancel=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ownerDocument") ) { ownerDocument=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parentElement") ) { parentElement=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"contentEditable") ) { contentEditable=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"previousSibling") ) { previousSibling=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lastElementChild") ) { lastElementChild=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"childElementCount") ) { childElementCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"firstElementChild") ) { firstElementChild=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isContentEditable") ) { isContentEditable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onfullscreenerror") ) { onfullscreenerror=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"nextElementSibling") ) { nextElementSibling=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onfullscreenchange") ) { onfullscreenchange=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"previousElementSibling") ) { previousElementSibling=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DOMRenderContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("accessKey","\x5b","\xca","\x24","\x06"));
	outFields->push(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"));
	outFields->push(HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97"));
	outFields->push(HX_HCSTRING("baseURI","\xdb","\x7f","\xed","\x2d"));
	outFields->push(HX_HCSTRING("childElementCount","\x2f","\x0c","\x0f","\x7e"));
	outFields->push(HX_HCSTRING("childNodes","\xf5","\x28","\x3a","\x3e"));
	outFields->push(HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"));
	outFields->push(HX_HCSTRING("classList","\xb6","\x3c","\xf1","\xda"));
	outFields->push(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"));
	outFields->push(HX_HCSTRING("clientHeight","\x92","\x90","\xed","\x84"));
	outFields->push(HX_HCSTRING("clientLeft","\xf2","\x7f","\x93","\x30"));
	outFields->push(HX_HCSTRING("clientTop","\x0a","\x95","\xfd","\xc7"));
	outFields->push(HX_HCSTRING("clientWidth","\xbb","\x2b","\x88","\xa8"));
	outFields->push(HX_HCSTRING("contentEditable","\xfd","\xae","\x64","\x86"));
	outFields->push(HX_HCSTRING("dataset","\xb8","\xfb","\xf0","\x11"));
	outFields->push(HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00"));
	outFields->push(HX_HCSTRING("draggable","\x0d","\x2d","\xd6","\x5d"));
	outFields->push(HX_HCSTRING("dropzone","\xdb","\x1d","\xba","\x0b"));
	outFields->push(HX_HCSTRING("firstChild","\x4c","\xf3","\x97","\x83"));
	outFields->push(HX_HCSTRING("firstElementChild","\x90","\xcd","\x0e","\xb5"));
	outFields->push(HX_HCSTRING("hidden","\x6a","\xff","\x95","\x4c"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("innerHTML","\x01","\x12","\x7b","\x2c"));
	outFields->push(HX_HCSTRING("innerText","\x63","\xad","\x76","\x34"));
	outFields->push(HX_HCSTRING("isContentEditable","\x33","\x52","\x94","\x17"));
	outFields->push(HX_HCSTRING("lang","\xee","\x05","\xad","\x47"));
	outFields->push(HX_HCSTRING("lastChild","\x66","\xd7","\x66","\x92"));
	outFields->push(HX_HCSTRING("lastElementChild","\xb6","\x00","\xc4","\xf8"));
	outFields->push(HX_HCSTRING("localName","\x56","\xf9","\x41","\x0b"));
	outFields->push(HX_HCSTRING("namespaceURI","\x91","\x2f","\xd5","\x1c"));
	outFields->push(HX_HCSTRING("nextElementSibling","\xf9","\xf1","\xbe","\xbe"));
	outFields->push(HX_HCSTRING("nextSibling","\x4f","\xa4","\xde","\x34"));
	outFields->push(HX_HCSTRING("nodeName","\x6d","\xd1","\x7c","\xf2"));
	outFields->push(HX_HCSTRING("nodeType","\xdc","\x51","\x86","\xf6"));
	outFields->push(HX_HCSTRING("nodeValue","\x0f","\x5e","\xee","\xd5"));
	outFields->push(HX_HCSTRING("offsetHeight","\xda","\x83","\x3e","\xda"));
	outFields->push(HX_HCSTRING("offsetLeft","\x3a","\x91","\xc7","\x43"));
	outFields->push(HX_HCSTRING("offsetParent","\x1d","\x81","\x70","\xc5"));
	outFields->push(HX_HCSTRING("offsetTop","\xc2","\x44","\xc3","\x41"));
	outFields->push(HX_HCSTRING("offsetWidth","\x73","\x39","\xe3","\x62"));
	outFields->push(HX_HCSTRING("onabort","\x31","\xfa","\x09","\x1e"));
	outFields->push(HX_HCSTRING("onbeforecopy","\x93","\x59","\x27","\x87"));
	outFields->push(HX_HCSTRING("onbeforecut","\x64","\xcd","\xa7","\xab"));
	outFields->push(HX_HCSTRING("onbeforepaste","\xb5","\xd7","\x3d","\x2e"));
	outFields->push(HX_HCSTRING("onblur","\x46","\x1f","\xca","\xf8"));
	outFields->push(HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62"));
	outFields->push(HX_HCSTRING("onclick","\xc9","\xaa","\x6e","\x4b"));
	outFields->push(HX_HCSTRING("oncontextmenu","\x4f","\x84","\x3b","\xb9"));
	outFields->push(HX_HCSTRING("oncopy","\x54","\x98","\x75","\xf9"));
	outFields->push(HX_HCSTRING("oncut","\xc3","\x61","\x7b","\x32"));
	outFields->push(HX_HCSTRING("ondblclick","\x79","\x96","\xda","\xbd"));
	outFields->push(HX_HCSTRING("ondrag","\x93","\x08","\x21","\xfa"));
	outFields->push(HX_HCSTRING("ondragend","\x28","\x59","\xab","\xfb"));
	outFields->push(HX_HCSTRING("ondragenter","\xa5","\x6f","\x1e","\xc0"));
	outFields->push(HX_HCSTRING("ondragleave","\x84","\x37","\xeb","\xc1"));
	outFields->push(HX_HCSTRING("ondragover","\x67","\xdf","\xe4","\x40"));
	outFields->push(HX_HCSTRING("ondragstart","\xef","\x76","\xa3","\xd3"));
	outFields->push(HX_HCSTRING("ondrop","\xce","\x14","\x21","\xfa"));
	outFields->push(HX_HCSTRING("onerror","\x49","\xfa","\x39","\x76"));
	outFields->push(HX_HCSTRING("onfocus","\x59","\x8e","\x99","\x07"));
	outFields->push(HX_HCSTRING("onfullscreenchange","\x0a","\x79","\x99","\xa0"));
	outFields->push(HX_HCSTRING("onfullscreenerror","\x6e","\x55","\x5b","\x75"));
	outFields->push(HX_HCSTRING("oninput","\x8b","\xf2","\x2d","\xc1"));
	outFields->push(HX_HCSTRING("oninvalid","\xb8","\x6b","\xa1","\x45"));
	outFields->push(HX_HCSTRING("onkeydown","\x42","\xce","\xc7","\xbb"));
	outFields->push(HX_HCSTRING("onkeypress","\xa3","\xa1","\xc9","\x7d"));
	outFields->push(HX_HCSTRING("onkeyup","\x3b","\x04","\x0f","\xe2"));
	outFields->push(HX_HCSTRING("onload","\xc5","\x76","\x68","\xff"));
	outFields->push(HX_HCSTRING("onmousedown","\x08","\x88","\x59","\x84"));
	outFields->push(HX_HCSTRING("onmousemove","\xb7","\x72","\x4c","\x8a"));
	outFields->push(HX_HCSTRING("onmouseout","\xa8","\x47","\x3b","\xa8"));
	outFields->push(HX_HCSTRING("onmouseover","\xfa","\x20","\xa4","\x8b"));
	outFields->push(HX_HCSTRING("onmouseup","\x81","\xa0","\xcc","\xca"));
	outFields->push(HX_HCSTRING("onmousewheel","\x35","\x56","\xec","\x35"));
	outFields->push(HX_HCSTRING("onpaste","\xd4","\x81","\x66","\xc0"));
	outFields->push(HX_HCSTRING("onreset","\x50","\x78","\xd8","\xe9"));
	outFields->push(HX_HCSTRING("onscroll","\x6c","\x5a","\x7d","\xf2"));
	outFields->push(HX_HCSTRING("onsearch","\xc7","\x21","\x10","\x0e"));
	outFields->push(HX_HCSTRING("onselect","\x5b","\x9d","\x4b","\x15"));
	outFields->push(HX_HCSTRING("onselectstart","\x27","\x8d","\x00","\xc9"));
	outFields->push(HX_HCSTRING("onsubmit","\x77","\xda","\x1e","\x45"));
	outFields->push(HX_HCSTRING("ontouchcancel","\xba","\x63","\x8d","\x67"));
	outFields->push(HX_HCSTRING("ontouchend","\x9b","\x25","\x27","\x04"));
	outFields->push(HX_HCSTRING("ontouchmove","\x51","\x49","\x64","\xa3"));
	outFields->push(HX_HCSTRING("ontouchstart","\x22","\x86","\x01","\xcc"));
	outFields->push(HX_HCSTRING("outerHTML","\x66","\x6f","\x05","\xa8"));
	outFields->push(HX_HCSTRING("outerText","\xc8","\x0a","\x01","\xb0"));
	outFields->push(HX_HCSTRING("ownerDocument","\x6e","\x2e","\xab","\x6f"));
	outFields->push(HX_HCSTRING("parentElement","\xb2","\x2a","\x69","\x10"));
	outFields->push(HX_HCSTRING("parentNode","\x4c","\x18","\x1c","\xe8"));
	outFields->push(HX_HCSTRING("prefix","\x92","\xd9","\xb6","\xae"));
	outFields->push(HX_HCSTRING("previousElementSibling","\x3d","\xd8","\x15","\x50"));
	outFields->push(HX_HCSTRING("previousSibling","\x8b","\x9d","\xdb","\x33"));
	outFields->push(HX_HCSTRING("pseudo","\x7e","\xcb","\x28","\x42"));
	outFields->push(HX_HCSTRING("scrollHeight","\xd4","\x5b","\x0e","\x5a"));
	outFields->push(HX_HCSTRING("scrollLeft","\xb4","\x96","\x6f","\x05"));
	outFields->push(HX_HCSTRING("scrollTop","\x88","\x0c","\x0a","\x3e"));
	outFields->push(HX_HCSTRING("scrollWidth","\xb9","\xfe","\x3f","\x14"));
	outFields->push(HX_HCSTRING("spellcheck","\x20","\x7a","\x48","\x3b"));
	outFields->push(HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"));
	outFields->push(HX_HCSTRING("tabIndex","\x7d","\x1c","\xb9","\x2c"));
	outFields->push(HX_HCSTRING("tagName","\xc5","\x2d","\x76","\x22"));
	outFields->push(HX_HCSTRING("textContent","\x0c","\x88","\xf7","\xf4"));
	outFields->push(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"));
	outFields->push(HX_HCSTRING("translate","\x4e","\xd7","\x7f","\x49"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(DOMRenderContext_obj,accessKey),HX_HCSTRING("accessKey","\x5b","\xca","\x24","\x06")},
	{hx::fsString,(int)offsetof(DOMRenderContext_obj,align),HX_HCSTRING("align","\xc5","\x56","\x91","\x21")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,attributes),HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97")},
	{hx::fsString,(int)offsetof(DOMRenderContext_obj,baseURI),HX_HCSTRING("baseURI","\xdb","\x7f","\xed","\x2d")},
	{hx::fsInt,(int)offsetof(DOMRenderContext_obj,childElementCount),HX_HCSTRING("childElementCount","\x2f","\x0c","\x0f","\x7e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,childNodes),HX_HCSTRING("childNodes","\xf5","\x28","\x3a","\x3e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,children),HX_HCSTRING("children","\x3f","\x19","\x6a","\x70")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,classList),HX_HCSTRING("classList","\xb6","\x3c","\xf1","\xda")},
	{hx::fsString,(int)offsetof(DOMRenderContext_obj,className),HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc")},
	{hx::fsInt,(int)offsetof(DOMRenderContext_obj,clientHeight),HX_HCSTRING("clientHeight","\x92","\x90","\xed","\x84")},
	{hx::fsInt,(int)offsetof(DOMRenderContext_obj,clientLeft),HX_HCSTRING("clientLeft","\xf2","\x7f","\x93","\x30")},
	{hx::fsInt,(int)offsetof(DOMRenderContext_obj,clientTop),HX_HCSTRING("clientTop","\x0a","\x95","\xfd","\xc7")},
	{hx::fsInt,(int)offsetof(DOMRenderContext_obj,clientWidth),HX_HCSTRING("clientWidth","\xbb","\x2b","\x88","\xa8")},
	{hx::fsString,(int)offsetof(DOMRenderContext_obj,contentEditable),HX_HCSTRING("contentEditable","\xfd","\xae","\x64","\x86")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,dataset),HX_HCSTRING("dataset","\xb8","\xfb","\xf0","\x11")},
	{hx::fsString,(int)offsetof(DOMRenderContext_obj,dir),HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00")},
	{hx::fsBool,(int)offsetof(DOMRenderContext_obj,draggable),HX_HCSTRING("draggable","\x0d","\x2d","\xd6","\x5d")},
	{hx::fsString,(int)offsetof(DOMRenderContext_obj,dropzone),HX_HCSTRING("dropzone","\xdb","\x1d","\xba","\x0b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,firstChild),HX_HCSTRING("firstChild","\x4c","\xf3","\x97","\x83")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,firstElementChild),HX_HCSTRING("firstElementChild","\x90","\xcd","\x0e","\xb5")},
	{hx::fsBool,(int)offsetof(DOMRenderContext_obj,hidden),HX_HCSTRING("hidden","\x6a","\xff","\x95","\x4c")},
	{hx::fsString,(int)offsetof(DOMRenderContext_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsString,(int)offsetof(DOMRenderContext_obj,innerHTML),HX_HCSTRING("innerHTML","\x01","\x12","\x7b","\x2c")},
	{hx::fsString,(int)offsetof(DOMRenderContext_obj,innerText),HX_HCSTRING("innerText","\x63","\xad","\x76","\x34")},
	{hx::fsBool,(int)offsetof(DOMRenderContext_obj,isContentEditable),HX_HCSTRING("isContentEditable","\x33","\x52","\x94","\x17")},
	{hx::fsString,(int)offsetof(DOMRenderContext_obj,lang),HX_HCSTRING("lang","\xee","\x05","\xad","\x47")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,lastChild),HX_HCSTRING("lastChild","\x66","\xd7","\x66","\x92")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,lastElementChild),HX_HCSTRING("lastElementChild","\xb6","\x00","\xc4","\xf8")},
	{hx::fsString,(int)offsetof(DOMRenderContext_obj,localName),HX_HCSTRING("localName","\x56","\xf9","\x41","\x0b")},
	{hx::fsString,(int)offsetof(DOMRenderContext_obj,namespaceURI),HX_HCSTRING("namespaceURI","\x91","\x2f","\xd5","\x1c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,nextElementSibling),HX_HCSTRING("nextElementSibling","\xf9","\xf1","\xbe","\xbe")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,nextSibling),HX_HCSTRING("nextSibling","\x4f","\xa4","\xde","\x34")},
	{hx::fsString,(int)offsetof(DOMRenderContext_obj,nodeName),HX_HCSTRING("nodeName","\x6d","\xd1","\x7c","\xf2")},
	{hx::fsInt,(int)offsetof(DOMRenderContext_obj,nodeType),HX_HCSTRING("nodeType","\xdc","\x51","\x86","\xf6")},
	{hx::fsString,(int)offsetof(DOMRenderContext_obj,nodeValue),HX_HCSTRING("nodeValue","\x0f","\x5e","\xee","\xd5")},
	{hx::fsInt,(int)offsetof(DOMRenderContext_obj,offsetHeight),HX_HCSTRING("offsetHeight","\xda","\x83","\x3e","\xda")},
	{hx::fsInt,(int)offsetof(DOMRenderContext_obj,offsetLeft),HX_HCSTRING("offsetLeft","\x3a","\x91","\xc7","\x43")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,offsetParent),HX_HCSTRING("offsetParent","\x1d","\x81","\x70","\xc5")},
	{hx::fsInt,(int)offsetof(DOMRenderContext_obj,offsetTop),HX_HCSTRING("offsetTop","\xc2","\x44","\xc3","\x41")},
	{hx::fsInt,(int)offsetof(DOMRenderContext_obj,offsetWidth),HX_HCSTRING("offsetWidth","\x73","\x39","\xe3","\x62")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onabort),HX_HCSTRING("onabort","\x31","\xfa","\x09","\x1e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onbeforecopy),HX_HCSTRING("onbeforecopy","\x93","\x59","\x27","\x87")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onbeforecut),HX_HCSTRING("onbeforecut","\x64","\xcd","\xa7","\xab")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onbeforepaste),HX_HCSTRING("onbeforepaste","\xb5","\xd7","\x3d","\x2e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onblur),HX_HCSTRING("onblur","\x46","\x1f","\xca","\xf8")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onchange),HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onclick),HX_HCSTRING("onclick","\xc9","\xaa","\x6e","\x4b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,oncontextmenu),HX_HCSTRING("oncontextmenu","\x4f","\x84","\x3b","\xb9")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,oncopy),HX_HCSTRING("oncopy","\x54","\x98","\x75","\xf9")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,oncut),HX_HCSTRING("oncut","\xc3","\x61","\x7b","\x32")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,ondblclick),HX_HCSTRING("ondblclick","\x79","\x96","\xda","\xbd")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,ondrag),HX_HCSTRING("ondrag","\x93","\x08","\x21","\xfa")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,ondragend),HX_HCSTRING("ondragend","\x28","\x59","\xab","\xfb")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,ondragenter),HX_HCSTRING("ondragenter","\xa5","\x6f","\x1e","\xc0")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,ondragleave),HX_HCSTRING("ondragleave","\x84","\x37","\xeb","\xc1")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,ondragover),HX_HCSTRING("ondragover","\x67","\xdf","\xe4","\x40")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,ondragstart),HX_HCSTRING("ondragstart","\xef","\x76","\xa3","\xd3")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,ondrop),HX_HCSTRING("ondrop","\xce","\x14","\x21","\xfa")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onerror),HX_HCSTRING("onerror","\x49","\xfa","\x39","\x76")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onfocus),HX_HCSTRING("onfocus","\x59","\x8e","\x99","\x07")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onfullscreenchange),HX_HCSTRING("onfullscreenchange","\x0a","\x79","\x99","\xa0")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onfullscreenerror),HX_HCSTRING("onfullscreenerror","\x6e","\x55","\x5b","\x75")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,oninput),HX_HCSTRING("oninput","\x8b","\xf2","\x2d","\xc1")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,oninvalid),HX_HCSTRING("oninvalid","\xb8","\x6b","\xa1","\x45")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onkeydown),HX_HCSTRING("onkeydown","\x42","\xce","\xc7","\xbb")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onkeypress),HX_HCSTRING("onkeypress","\xa3","\xa1","\xc9","\x7d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onkeyup),HX_HCSTRING("onkeyup","\x3b","\x04","\x0f","\xe2")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onload),HX_HCSTRING("onload","\xc5","\x76","\x68","\xff")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onmousedown),HX_HCSTRING("onmousedown","\x08","\x88","\x59","\x84")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onmousemove),HX_HCSTRING("onmousemove","\xb7","\x72","\x4c","\x8a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onmouseout),HX_HCSTRING("onmouseout","\xa8","\x47","\x3b","\xa8")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onmouseover),HX_HCSTRING("onmouseover","\xfa","\x20","\xa4","\x8b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onmouseup),HX_HCSTRING("onmouseup","\x81","\xa0","\xcc","\xca")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onmousewheel),HX_HCSTRING("onmousewheel","\x35","\x56","\xec","\x35")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onpaste),HX_HCSTRING("onpaste","\xd4","\x81","\x66","\xc0")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onreset),HX_HCSTRING("onreset","\x50","\x78","\xd8","\xe9")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onscroll),HX_HCSTRING("onscroll","\x6c","\x5a","\x7d","\xf2")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onsearch),HX_HCSTRING("onsearch","\xc7","\x21","\x10","\x0e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onselect),HX_HCSTRING("onselect","\x5b","\x9d","\x4b","\x15")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onselectstart),HX_HCSTRING("onselectstart","\x27","\x8d","\x00","\xc9")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,onsubmit),HX_HCSTRING("onsubmit","\x77","\xda","\x1e","\x45")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,ontouchcancel),HX_HCSTRING("ontouchcancel","\xba","\x63","\x8d","\x67")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,ontouchend),HX_HCSTRING("ontouchend","\x9b","\x25","\x27","\x04")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,ontouchmove),HX_HCSTRING("ontouchmove","\x51","\x49","\x64","\xa3")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,ontouchstart),HX_HCSTRING("ontouchstart","\x22","\x86","\x01","\xcc")},
	{hx::fsString,(int)offsetof(DOMRenderContext_obj,outerHTML),HX_HCSTRING("outerHTML","\x66","\x6f","\x05","\xa8")},
	{hx::fsString,(int)offsetof(DOMRenderContext_obj,outerText),HX_HCSTRING("outerText","\xc8","\x0a","\x01","\xb0")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,ownerDocument),HX_HCSTRING("ownerDocument","\x6e","\x2e","\xab","\x6f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,parentElement),HX_HCSTRING("parentElement","\xb2","\x2a","\x69","\x10")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,parentNode),HX_HCSTRING("parentNode","\x4c","\x18","\x1c","\xe8")},
	{hx::fsString,(int)offsetof(DOMRenderContext_obj,prefix),HX_HCSTRING("prefix","\x92","\xd9","\xb6","\xae")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,previousElementSibling),HX_HCSTRING("previousElementSibling","\x3d","\xd8","\x15","\x50")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,previousSibling),HX_HCSTRING("previousSibling","\x8b","\x9d","\xdb","\x33")},
	{hx::fsString,(int)offsetof(DOMRenderContext_obj,pseudo),HX_HCSTRING("pseudo","\x7e","\xcb","\x28","\x42")},
	{hx::fsInt,(int)offsetof(DOMRenderContext_obj,scrollHeight),HX_HCSTRING("scrollHeight","\xd4","\x5b","\x0e","\x5a")},
	{hx::fsInt,(int)offsetof(DOMRenderContext_obj,scrollLeft),HX_HCSTRING("scrollLeft","\xb4","\x96","\x6f","\x05")},
	{hx::fsInt,(int)offsetof(DOMRenderContext_obj,scrollTop),HX_HCSTRING("scrollTop","\x88","\x0c","\x0a","\x3e")},
	{hx::fsInt,(int)offsetof(DOMRenderContext_obj,scrollWidth),HX_HCSTRING("scrollWidth","\xb9","\xfe","\x3f","\x14")},
	{hx::fsBool,(int)offsetof(DOMRenderContext_obj,spellcheck),HX_HCSTRING("spellcheck","\x20","\x7a","\x48","\x3b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DOMRenderContext_obj,style),HX_HCSTRING("style","\x31","\xa5","\x1d","\x84")},
	{hx::fsInt,(int)offsetof(DOMRenderContext_obj,tabIndex),HX_HCSTRING("tabIndex","\x7d","\x1c","\xb9","\x2c")},
	{hx::fsString,(int)offsetof(DOMRenderContext_obj,tagName),HX_HCSTRING("tagName","\xc5","\x2d","\x76","\x22")},
	{hx::fsString,(int)offsetof(DOMRenderContext_obj,textContent),HX_HCSTRING("textContent","\x0c","\x88","\xf7","\xf4")},
	{hx::fsString,(int)offsetof(DOMRenderContext_obj,title),HX_HCSTRING("title","\x98","\x15","\x3b","\x10")},
	{hx::fsBool,(int)offsetof(DOMRenderContext_obj,translate),HX_HCSTRING("translate","\x4e","\xd7","\x7f","\x49")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("accessKey","\x5b","\xca","\x24","\x06"),
	HX_HCSTRING("align","\xc5","\x56","\x91","\x21"),
	HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97"),
	HX_HCSTRING("baseURI","\xdb","\x7f","\xed","\x2d"),
	HX_HCSTRING("childElementCount","\x2f","\x0c","\x0f","\x7e"),
	HX_HCSTRING("childNodes","\xf5","\x28","\x3a","\x3e"),
	HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"),
	HX_HCSTRING("classList","\xb6","\x3c","\xf1","\xda"),
	HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"),
	HX_HCSTRING("clientHeight","\x92","\x90","\xed","\x84"),
	HX_HCSTRING("clientLeft","\xf2","\x7f","\x93","\x30"),
	HX_HCSTRING("clientTop","\x0a","\x95","\xfd","\xc7"),
	HX_HCSTRING("clientWidth","\xbb","\x2b","\x88","\xa8"),
	HX_HCSTRING("contentEditable","\xfd","\xae","\x64","\x86"),
	HX_HCSTRING("dataset","\xb8","\xfb","\xf0","\x11"),
	HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00"),
	HX_HCSTRING("draggable","\x0d","\x2d","\xd6","\x5d"),
	HX_HCSTRING("dropzone","\xdb","\x1d","\xba","\x0b"),
	HX_HCSTRING("firstChild","\x4c","\xf3","\x97","\x83"),
	HX_HCSTRING("firstElementChild","\x90","\xcd","\x0e","\xb5"),
	HX_HCSTRING("hidden","\x6a","\xff","\x95","\x4c"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("innerHTML","\x01","\x12","\x7b","\x2c"),
	HX_HCSTRING("innerText","\x63","\xad","\x76","\x34"),
	HX_HCSTRING("isContentEditable","\x33","\x52","\x94","\x17"),
	HX_HCSTRING("lang","\xee","\x05","\xad","\x47"),
	HX_HCSTRING("lastChild","\x66","\xd7","\x66","\x92"),
	HX_HCSTRING("lastElementChild","\xb6","\x00","\xc4","\xf8"),
	HX_HCSTRING("localName","\x56","\xf9","\x41","\x0b"),
	HX_HCSTRING("namespaceURI","\x91","\x2f","\xd5","\x1c"),
	HX_HCSTRING("nextElementSibling","\xf9","\xf1","\xbe","\xbe"),
	HX_HCSTRING("nextSibling","\x4f","\xa4","\xde","\x34"),
	HX_HCSTRING("nodeName","\x6d","\xd1","\x7c","\xf2"),
	HX_HCSTRING("nodeType","\xdc","\x51","\x86","\xf6"),
	HX_HCSTRING("nodeValue","\x0f","\x5e","\xee","\xd5"),
	HX_HCSTRING("offsetHeight","\xda","\x83","\x3e","\xda"),
	HX_HCSTRING("offsetLeft","\x3a","\x91","\xc7","\x43"),
	HX_HCSTRING("offsetParent","\x1d","\x81","\x70","\xc5"),
	HX_HCSTRING("offsetTop","\xc2","\x44","\xc3","\x41"),
	HX_HCSTRING("offsetWidth","\x73","\x39","\xe3","\x62"),
	HX_HCSTRING("onabort","\x31","\xfa","\x09","\x1e"),
	HX_HCSTRING("onbeforecopy","\x93","\x59","\x27","\x87"),
	HX_HCSTRING("onbeforecut","\x64","\xcd","\xa7","\xab"),
	HX_HCSTRING("onbeforepaste","\xb5","\xd7","\x3d","\x2e"),
	HX_HCSTRING("onblur","\x46","\x1f","\xca","\xf8"),
	HX_HCSTRING("onchange","\xcf","\x13","\x8b","\x62"),
	HX_HCSTRING("onclick","\xc9","\xaa","\x6e","\x4b"),
	HX_HCSTRING("oncontextmenu","\x4f","\x84","\x3b","\xb9"),
	HX_HCSTRING("oncopy","\x54","\x98","\x75","\xf9"),
	HX_HCSTRING("oncut","\xc3","\x61","\x7b","\x32"),
	HX_HCSTRING("ondblclick","\x79","\x96","\xda","\xbd"),
	HX_HCSTRING("ondrag","\x93","\x08","\x21","\xfa"),
	HX_HCSTRING("ondragend","\x28","\x59","\xab","\xfb"),
	HX_HCSTRING("ondragenter","\xa5","\x6f","\x1e","\xc0"),
	HX_HCSTRING("ondragleave","\x84","\x37","\xeb","\xc1"),
	HX_HCSTRING("ondragover","\x67","\xdf","\xe4","\x40"),
	HX_HCSTRING("ondragstart","\xef","\x76","\xa3","\xd3"),
	HX_HCSTRING("ondrop","\xce","\x14","\x21","\xfa"),
	HX_HCSTRING("onerror","\x49","\xfa","\x39","\x76"),
	HX_HCSTRING("onfocus","\x59","\x8e","\x99","\x07"),
	HX_HCSTRING("onfullscreenchange","\x0a","\x79","\x99","\xa0"),
	HX_HCSTRING("onfullscreenerror","\x6e","\x55","\x5b","\x75"),
	HX_HCSTRING("oninput","\x8b","\xf2","\x2d","\xc1"),
	HX_HCSTRING("oninvalid","\xb8","\x6b","\xa1","\x45"),
	HX_HCSTRING("onkeydown","\x42","\xce","\xc7","\xbb"),
	HX_HCSTRING("onkeypress","\xa3","\xa1","\xc9","\x7d"),
	HX_HCSTRING("onkeyup","\x3b","\x04","\x0f","\xe2"),
	HX_HCSTRING("onload","\xc5","\x76","\x68","\xff"),
	HX_HCSTRING("onmousedown","\x08","\x88","\x59","\x84"),
	HX_HCSTRING("onmousemove","\xb7","\x72","\x4c","\x8a"),
	HX_HCSTRING("onmouseout","\xa8","\x47","\x3b","\xa8"),
	HX_HCSTRING("onmouseover","\xfa","\x20","\xa4","\x8b"),
	HX_HCSTRING("onmouseup","\x81","\xa0","\xcc","\xca"),
	HX_HCSTRING("onmousewheel","\x35","\x56","\xec","\x35"),
	HX_HCSTRING("onpaste","\xd4","\x81","\x66","\xc0"),
	HX_HCSTRING("onreset","\x50","\x78","\xd8","\xe9"),
	HX_HCSTRING("onscroll","\x6c","\x5a","\x7d","\xf2"),
	HX_HCSTRING("onsearch","\xc7","\x21","\x10","\x0e"),
	HX_HCSTRING("onselect","\x5b","\x9d","\x4b","\x15"),
	HX_HCSTRING("onselectstart","\x27","\x8d","\x00","\xc9"),
	HX_HCSTRING("onsubmit","\x77","\xda","\x1e","\x45"),
	HX_HCSTRING("ontouchcancel","\xba","\x63","\x8d","\x67"),
	HX_HCSTRING("ontouchend","\x9b","\x25","\x27","\x04"),
	HX_HCSTRING("ontouchmove","\x51","\x49","\x64","\xa3"),
	HX_HCSTRING("ontouchstart","\x22","\x86","\x01","\xcc"),
	HX_HCSTRING("outerHTML","\x66","\x6f","\x05","\xa8"),
	HX_HCSTRING("outerText","\xc8","\x0a","\x01","\xb0"),
	HX_HCSTRING("ownerDocument","\x6e","\x2e","\xab","\x6f"),
	HX_HCSTRING("parentElement","\xb2","\x2a","\x69","\x10"),
	HX_HCSTRING("parentNode","\x4c","\x18","\x1c","\xe8"),
	HX_HCSTRING("prefix","\x92","\xd9","\xb6","\xae"),
	HX_HCSTRING("previousElementSibling","\x3d","\xd8","\x15","\x50"),
	HX_HCSTRING("previousSibling","\x8b","\x9d","\xdb","\x33"),
	HX_HCSTRING("pseudo","\x7e","\xcb","\x28","\x42"),
	HX_HCSTRING("scrollHeight","\xd4","\x5b","\x0e","\x5a"),
	HX_HCSTRING("scrollLeft","\xb4","\x96","\x6f","\x05"),
	HX_HCSTRING("scrollTop","\x88","\x0c","\x0a","\x3e"),
	HX_HCSTRING("scrollWidth","\xb9","\xfe","\x3f","\x14"),
	HX_HCSTRING("spellcheck","\x20","\x7a","\x48","\x3b"),
	HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"),
	HX_HCSTRING("tabIndex","\x7d","\x1c","\xb9","\x2c"),
	HX_HCSTRING("tagName","\xc5","\x2d","\x76","\x22"),
	HX_HCSTRING("textContent","\x0c","\x88","\xf7","\xf4"),
	HX_HCSTRING("title","\x98","\x15","\x3b","\x10"),
	HX_HCSTRING("translate","\x4e","\xd7","\x7f","\x49"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("appendChild","\x62","\x41","\x30","\x82"),
	HX_HCSTRING("blur","\xa7","\x42","\x19","\x41"),
	HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),
	HX_HCSTRING("cloneNode","\xff","\xbb","\x0f","\x13"),
	HX_HCSTRING("compareDocumentPosition","\xa9","\xad","\x76","\x44"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("dispatchEvent","\x00","\xc7","\x64","\xc6"),
	HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04"),
	HX_HCSTRING("getAttribute","\xa6","\x0c","\x47","\x0a"),
	HX_HCSTRING("getAttributeNS","\x6b","\x46","\xa0","\x73"),
	HX_HCSTRING("getAttributeNode","\xc8","\x8d","\x24","\xd1"),
	HX_HCSTRING("getAttributeNodeNS","\x0d","\xd4","\xb9","\xcd"),
	HX_HCSTRING("getBoundingClientRect","\xc9","\x87","\xd7","\x2a"),
	HX_HCSTRING("getClientRects","\x8e","\xfb","\x7f","\x4c"),
	HX_HCSTRING("getElementsByClassName","\xdf","\x45","\xae","\x3e"),
	HX_HCSTRING("getElementsByTagName","\x01","\x5a","\x56","\x6b"),
	HX_HCSTRING("getElementsByTagNameNS","\x86","\xe0","\x21","\xb1"),
	HX_HCSTRING("hasAttribute","\x62","\x55","\x42","\x88"),
	HX_HCSTRING("hasAttributeNS","\x27","\x36","\x8c","\xdd"),
	HX_HCSTRING("hasAttributes","\xd1","\x60","\xc8","\xb1"),
	HX_HCSTRING("hasChildNodes","\xef","\xe0","\x90","\x58"),
	HX_HCSTRING("insertAdjacentElement","\xe1","\x56","\xb5","\x37"),
	HX_HCSTRING("insertAdjacentHTML","\x06","\x30","\xeb","\x6e"),
	HX_HCSTRING("insertAdjacentText","\x68","\xcb","\xe6","\x76"),
	HX_HCSTRING("insertBefore","\x98","\xbc","\xbf","\x10"),
	HX_HCSTRING("isDefaultNamespace","\xa4","\x7d","\x65","\x23"),
	HX_HCSTRING("isEqualNode","\x8c","\xa6","\x1a","\x84"),
	HX_HCSTRING("isSameNode","\x92","\x76","\x3c","\xde"),
	HX_HCSTRING("isSupported","\xe4","\x7c","\x8a","\xf3"),
	HX_HCSTRING("lookupNamespaceURI","\x2b","\xed","\x43","\x8f"),
	HX_HCSTRING("lookupPrefix","\xac","\x07","\x21","\x61"),
	HX_HCSTRING("matchesSelector","\x32","\xd7","\x5d","\xc0"),
	HX_HCSTRING("normalize","\x8d","\x37","\xa1","\xab"),
	HX_HCSTRING("querySelector","\x47","\xc2","\x97","\x8e"),
	HX_HCSTRING("querySelectorAll","\x1a","\x55","\x4d","\xd4"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("removeAttribute","\x38","\x0b","\x0f","\x3c"),
	HX_HCSTRING("removeAttributeNS","\x7d","\x8d","\x52","\xa6"),
	HX_HCSTRING("removeAttributeNode","\x5a","\x3d","\x44","\xca"),
	HX_HCSTRING("removeChild","\xb8","\x86","\xed","\x43"),
	HX_HCSTRING("removeEventListener","\xca","\x87","\x75","\x55"),
	HX_HCSTRING("replaceChild","\xc8","\x94","\x48","\x39"),
	HX_HCSTRING("requestFullScreen","\x8a","\x6a","\x8e","\x3a"),
	HX_HCSTRING("requestFullscreen","\x6a","\xf6","\xf9","\x05"),
	HX_HCSTRING("requestPointerLock","\x39","\x18","\x0d","\x9b"),
	HX_HCSTRING("scrollByLines","\x1b","\x88","\xdc","\xc6"),
	HX_HCSTRING("scrollByPages","\x60","\xd5","\x27","\x0f"),
	HX_HCSTRING("scrollIntoView","\x52","\x5c","\xe3","\x63"),
	HX_HCSTRING("scrollIntoViewIfNeeded","\x64","\x5c","\x40","\x4d"),
	HX_HCSTRING("setAttribute","\x1a","\x30","\x40","\x1f"),
	HX_HCSTRING("setAttributeNS","\xdf","\x2e","\xc0","\x93"),
	HX_HCSTRING("setAttributeNode","\x3c","\x7b","\x66","\x27"),
	HX_HCSTRING("setAttributeNodeNS","\x81","\x06","\x69","\xaa"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DOMRenderContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DOMRenderContext_obj::__mClass,"__mClass");
};

#endif

hx::Class DOMRenderContext_obj::__mClass;

void DOMRenderContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.DOMRenderContext","\xe1","\x7f","\xd1","\x7c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DOMRenderContext_obj >;
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
} // end namespace graphics
