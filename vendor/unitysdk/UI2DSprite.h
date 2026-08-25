#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define UI2DSPRITE_GET_PIXELSIZE_OFFSET UNITYSDK_OFFSET(0x21C75E0)
#define UI2DSPRITE_ONFILL_OFFSET UNITYSDK_OFFSET(0x21C75F0)
#define UI2DSPRITE_GET_SPRITE2D_OFFSET UNITYSDK_OFFSET(0x21C7A20)
#define UI2DSPRITE_GET_DRAWINGDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x21C7A30)
#define UI2DSPRITE_GET_SHADER_OFFSET UNITYSDK_OFFSET(0x21C85A0)
#define UI2DSPRITE_GET_FIXEDASPECT_OFFSET UNITYSDK_OFFSET(0x21C8680)
#define UI2DSPRITE_MAKEPIXELPERFECT_OFFSET UNITYSDK_OFFSET(0x21C8690)
#define UI2DSPRITE_.CTOR_OFFSET UNITYSDK_OFFSET(0x21C8A10)
#define UI2DSPRITE_SET_FIXEDASPECT_OFFSET UNITYSDK_OFFSET(0x21C8AA0)
#define UI2DSPRITE_SET_SHADER_OFFSET UNITYSDK_OFFSET(0x21C8AE0)
#define UI2DSPRITE_GET_PREMULTIPLIEDALPHA_OFFSET UNITYSDK_OFFSET(0x21C8BC0)
#define UI2DSPRITE_SET_BORDER_OFFSET UNITYSDK_OFFSET(0x21C8CB0)
#define UI2DSPRITE_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x21C8D20)
#define UI2DSPRITE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x21C8DD0)
#define UI2DSPRITE_GET_BORDER_OFFSET UNITYSDK_OFFSET(0x21C9870)
#define UI2DSPRITE_SET_SPRITE2D_OFFSET UNITYSDK_OFFSET(0x21C97C0)
#define UI2DSPRITE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x21C9880)
#define UI2DSPRITE_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x21C9940)

	inline static constexpr unsigned int UI2DSprite_TypeDefinitionIndex = 187;

	class UI2DSprite : public Il2CppObject
	{
	public:
		::UnityEngine::Sprite* mSprite; // 0x200
		::UnityEngine::Shader* mShader; // 0x208
		::UnityEngine::Vector4* mBorder; // 0x210
		::System::Boolean mFixedAspect; // 0x220
		::System::Single mPixelSize; // 0x224
		::UnityEngine::Sprite* nextSprite; // 0x228
		::System::Int32 mPMA; // 0x230

		::System::Single get_pixelSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITE_GET_PIXELSIZE_OFFSET))(nullptr);
		}

		::System::Void OnFill(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITE_ONFILL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Sprite* get_sprite2D()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITE_GET_SPRITE2D_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_drawingDimensions()
		{
			return ((::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITE_GET_DRAWINGDIMENSIONS_OFFSET))(nullptr);
		}

		::UnityEngine::Shader* get_shader()
		{
			return ((::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITE_GET_SHADER_OFFSET))(nullptr);
		}

		::System::Boolean get_fixedAspect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITE_GET_FIXEDASPECT_OFFSET))(nullptr);
		}

		::System::Void MakePixelPerfect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITE_MAKEPIXELPERFECT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_fixedAspect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITE_SET_FIXEDASPECT_OFFSET))(arg, nullptr);
		}

		::System::Void set_shader(::UnityEngine::Shader* arg)
		{
			((::System::Void(*)(::UnityEngine::Shader*, ::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITE_SET_SHADER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_premultipliedAlpha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITE_GET_PREMULTIPLIEDALPHA_OFFSET))(nullptr);
		}

		::System::Void set_border(::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITE_SET_BORDER_OFFSET))(arg, nullptr);
		}

		::System::Void set_material(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITE_SET_MATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void OnUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITE_ONUPDATE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_border()
		{
			return ((::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITE_GET_BORDER_OFFSET))(nullptr);
		}

		::System::Void set_sprite2D(::UnityEngine::Sprite* arg)
		{
			((::System::Void(*)(::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITE_SET_SPRITE2D_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITE_GET_MAINTEXTURE_OFFSET))(nullptr);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITE_GET_MATERIAL_OFFSET))(nullptr);
		}

	};

