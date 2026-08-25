#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Object; }
class UISpriteData;
namespace UnityEngine { class Material; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Color; }
class INGUIAtlas;
namespace UnityEngine { class Texture; }

#define UISPRITE_SET_FIXEDASPECT_OFFSET UNITYSDK_OFFSET(0x24383C0)
#define UISPRITE_AWAKE_OFFSET UNITYSDK_OFFSET(0x2438400)
#define UISPRITE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x24384D0)
#define UISPRITE_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x2438B50)
#define UISPRITE_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x2438C50)
#define UISPRITE_SET_GRADIENTBOTTOM_OFFSET UNITYSDK_OFFSET(0x2438C90)
#define UISPRITE_MARKASCHANGED_OFFSET UNITYSDK_OFFSET(0x2438D10)
#define UISPRITE_GET_PREMULTIPLIEDALPHA_OFFSET UNITYSDK_OFFSET(0x2438D50)
#define UISPRITE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2438E00)
#define UISPRITE_GET_APPLYGRADIENT_OFFSET UNITYSDK_OFFSET(0x2438E20)
#define UISPRITE_ONINIT_OFFSET UNITYSDK_OFFSET(0x2438E30)
#define UISPRITE_GET_BORDER_OFFSET UNITYSDK_OFFSET(0x2438E60)
#define UISPRITE_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x2438EB0)
#define UISPRITE_GET_FIXEDASPECT_OFFSET UNITYSDK_OFFSET(0x2439190)
#define UISPRITE_GETATLASSPRITE_OFFSET UNITYSDK_OFFSET(0x2438840)
#define UISPRITE_GET_FILLCENTER_OFFSET UNITYSDK_OFFSET(0x2439270)
#define UISPRITE_SET_SPRITENAME_OFFSET UNITYSDK_OFFSET(0x242DDA0)
#define UISPRITE_GET_DRAWINGDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x2439280)
#define UISPRITE_GETSPRITE_OFFSET UNITYSDK_OFFSET(0x2439B50)
#define UISPRITE_SET_GRADIENTTOP_OFFSET UNITYSDK_OFFSET(0x2439C60)
#define UISPRITE_SET_ATLAS_OFFSET UNITYSDK_OFFSET(0x2439CE0)
#define UISPRITE_GET_PIXELSIZE_OFFSET UNITYSDK_OFFSET(0x2439FB0)
#define UISPRITE_SET_APPLYGRADIENT_OFFSET UNITYSDK_OFFSET(0x243A0B0)
#define UISPRITE_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x243A0E0)
#define UISPRITE_GET_GRADIENTTOP_OFFSET UNITYSDK_OFFSET(0x243A3C0)
#define UISPRITE_MAKEPIXELPERFECT_OFFSET UNITYSDK_OFFSET(0x243A3D0)
#define UISPRITE_GET_GRADIENTBOTTOM_OFFSET UNITYSDK_OFFSET(0x243A640)
#define UISPRITE_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x243A650)
#define UISPRITE_.CTOR_OFFSET UNITYSDK_OFFSET(0x243A660)
#define UISPRITE_GET_ATLAS_OFFSET UNITYSDK_OFFSET(0x2439C20)
#define UISPRITE_GET_SPRITENAME_OFFSET UNITYSDK_OFFSET(0x243A6B0)
#define UISPRITE_SETATLASSPRITE_OFFSET UNITYSDK_OFFSET(0x24391A0)
#define UISPRITE_SET_FILLCENTER_OFFSET UNITYSDK_OFFSET(0x243A6C0)
#define UISPRITE_SET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x243A720)
#define UISPRITE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x243A730)
#define UISPRITE_ONFILL_OFFSET UNITYSDK_OFFSET(0x243A840)

	inline static constexpr unsigned int UISprite_TypeDefinitionIndex = 252;

	class UISprite : public Il2CppObject
	{
	public:
		::UnityEngine::Object* mAtlas; // 0x200
		::System::String* mSpriteName; // 0x208
		::System::Boolean mFixedAspect; // 0x210
		::System::Boolean mFillCenter; // 0x211
		UISpriteData* mSprite; // 0x218
		::System::Boolean mSpriteSet; // 0x220
		::System::String* ImageName; // 0x228

		::System::Void set_fixedAspect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_SET_FIXEDASPECT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_ONUPDATE_OFFSET))(nullptr);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_GET_MATERIAL_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_padding()
		{
			return ((::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_GET_PADDING_OFFSET))(nullptr);
		}

		::System::Void set_gradientBottom(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_SET_GRADIENTBOTTOM_OFFSET))(arg, nullptr);
		}

		::System::Void MarkAsChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_MARKASCHANGED_OFFSET))(nullptr);
		}

		::System::Boolean get_premultipliedAlpha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_GET_PREMULTIPLIEDALPHA_OFFSET))(nullptr);
		}

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Boolean get_applyGradient()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_GET_APPLYGRADIENT_OFFSET))(nullptr);
		}

		::System::Void OnInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_ONINIT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_border()
		{
			return ((::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_GET_BORDER_OFFSET))(nullptr);
		}

		::System::Int32 get_minHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_GET_MINHEIGHT_OFFSET))(nullptr);
		}

		::System::Boolean get_fixedAspect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_GET_FIXEDASPECT_OFFSET))(nullptr);
		}

		UISpriteData* GetAtlasSprite()
		{
			return ((UISpriteData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_GETATLASSPRITE_OFFSET))(nullptr);
		}

		::System::Boolean get_fillCenter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_GET_FILLCENTER_OFFSET))(nullptr);
		}

		::System::Void set_spriteName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_SET_SPRITENAME_OFFSET))(str, nullptr);
		}

		::UnityEngine::Vector4* get_drawingDimensions()
		{
			return ((::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_GET_DRAWINGDIMENSIONS_OFFSET))(nullptr);
		}

		UISpriteData* GetSprite(::System::String* str)
		{
			return ((UISpriteData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_GETSPRITE_OFFSET))(str, nullptr);
		}

		::System::Void set_gradientTop(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_SET_GRADIENTTOP_OFFSET))(arg, nullptr);
		}

		::System::Void set_atlas(INGUIAtlas* arg)
		{
			((::System::Void(*)(INGUIAtlas*, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_SET_ATLAS_OFFSET))(arg, nullptr);
		}

		::System::Single get_pixelSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_GET_PIXELSIZE_OFFSET))(nullptr);
		}

		::System::Void set_applyGradient(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_SET_APPLYGRADIENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_minWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_GET_MINWIDTH_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_gradientTop()
		{
			return ((::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_GET_GRADIENTTOP_OFFSET))(nullptr);
		}

		::System::Void MakePixelPerfect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_MAKEPIXELPERFECT_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_gradientBottom()
		{
			return ((::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_GET_GRADIENTBOTTOM_OFFSET))(nullptr);
		}

		::System::Void set_material(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_SET_MATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_.CTOR_OFFSET))(nullptr);
		}

		INGUIAtlas* get_atlas()
		{
			return ((INGUIAtlas*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_GET_ATLAS_OFFSET))(nullptr);
		}

		::System::String* get_spriteName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_GET_SPRITENAME_OFFSET))(nullptr);
		}

		::System::Void SetAtlasSprite(UISpriteData* arg)
		{
			((::System::Void(*)(UISpriteData*, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_SETATLASSPRITE_OFFSET))(arg, nullptr);
		}

		::System::Void set_fillCenter(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_SET_FILLCENTER_OFFSET))(arg, nullptr);
		}

		::System::Void set_mainTexture(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_SET_MAINTEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_GET_MAINTEXTURE_OFFSET))(nullptr);
		}

		::System::Void OnFill(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITE_ONFILL_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

