#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Rect; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Material; }

#define UITEXTURE_LOADTEXTURE_OFFSET UNITYSDK_OFFSET(0x2441CF0)
#define UITEXTURE_GET_SHADER_OFFSET UNITYSDK_OFFSET(0x2441E10)
#define UITEXTURE_SET_FIXEDASPECT_OFFSET UNITYSDK_OFFSET(0x2441EF0)
#define UITEXTURE_SETLOCALIZEPATHTEXTURE_OFFSET UNITYSDK_OFFSET(0x2441F30)
#define UITEXTURE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x24420A0)
#define UITEXTURE_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x24420C0)
#define UITEXTURE_CLEARTEXTURELOADER_OFFSET UNITYSDK_OFFSET(0x24420D0)
#define UITEXTURE_MAKEPIXELPERFECT_OFFSET UNITYSDK_OFFSET(0x2442150)
#define UITEXTURE_GET_BORDER_OFFSET UNITYSDK_OFFSET(0x24422A0)
#define UITEXTURE_GET_DRAWINGDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x24422B0)
#define UITEXTURE_SET_BORDER_OFFSET UNITYSDK_OFFSET(0x2442630)
#define UITEXTURE_GET_UVRECT_OFFSET UNITYSDK_OFFSET(0x24426A0)
#define UITEXTURE_GET_PREMULTIPLIEDALPHA_OFFSET UNITYSDK_OFFSET(0x24426B0)
#define UITEXTURE_GET_FIXEDASPECT_OFFSET UNITYSDK_OFFSET(0x2442800)
#define UITEXTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2442810)
#define UITEXTURE_AWAKE_OFFSET UNITYSDK_OFFSET(0x2442930)
#define UITEXTURE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x2442A30)
#define UITEXTURE_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x2442AF0)
#define UITEXTURE_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x2442B80)
#define UITEXTURE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x2442C50)
#define UITEXTURE_SET_SHADER_OFFSET UNITYSDK_OFFSET(0x2442E00)
#define UITEXTURE_ONFILL_OFFSET UNITYSDK_OFFSET(0x2442F80)
#define UITEXTURE_SET_UVRECT_OFFSET UNITYSDK_OFFSET(0x24433E0)
#define UITEXTURE__SETLOCALIZEPATHTEXTURE_B__31_0_OFFSET UNITYSDK_OFFSET(0x2443440)
#define UITEXTURE_SET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x24434C0)
#define UITEXTURE_SETTRANSLATIONPATHTEXTURE_OFFSET UNITYSDK_OFFSET(0x2442970)

	inline static constexpr unsigned int UITexture_TypeDefinitionIndex = 268;

	class UITexture : public Il2CppObject
	{
	public:
		::UnityEngine::Rect* mRect; // 0x200
		::UnityEngine::Texture* mTexture; // 0x210
		::UnityEngine::Shader* mShader; // 0x218
		::UnityEngine::Vector4* mBorder; // 0x220
		::System::Boolean mFixedAspect; // 0x230
		::System::Int32 mPMA; // 0x234
		::System::String* LocalizePath; // 0x238
		::System::String* TranslationPath; // 0x240
		::System::String* loadingPathCache; // 0x248
		::System::String* errorPathCache; // 0x250

		::System::Void LoadTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTURE_LOADTEXTURE_OFFSET))(nullptr);
		}

		::UnityEngine::Shader* get_shader()
		{
			return ((::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTURE_GET_SHADER_OFFSET))(nullptr);
		}

		::System::Void set_fixedAspect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITEXTURE_SET_FIXEDASPECT_OFFSET))(arg, nullptr);
		}

		::System::Void SetLocalizePathTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTURE_SETLOCALIZEPATHTEXTURE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTURE_ONDESTROY_OFFSET))(nullptr);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTURE_GET_MATERIAL_OFFSET))(nullptr);
		}

		::System::Void ClearTextureLoader()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTURE_CLEARTEXTURELOADER_OFFSET))(nullptr);
		}

		::System::Void MakePixelPerfect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTURE_MAKEPIXELPERFECT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_border()
		{
			return ((::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTURE_GET_BORDER_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_drawingDimensions()
		{
			return ((::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTURE_GET_DRAWINGDIMENSIONS_OFFSET))(nullptr);
		}

		::System::Void set_border(::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UITEXTURE_SET_BORDER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rect* get_uvRect()
		{
			return ((::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTURE_GET_UVRECT_OFFSET))(nullptr);
		}

		::System::Boolean get_premultipliedAlpha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTURE_GET_PREMULTIPLIEDALPHA_OFFSET))(nullptr);
		}

		::System::Boolean get_fixedAspect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTURE_GET_FIXEDASPECT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTURE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTURE_AWAKE_OFFSET))(nullptr);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTURE_GET_MAINTEXTURE_OFFSET))(nullptr);
		}

		::System::Void SetTexture(::System::String* str, ::System::String* str2, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITEXTURE_SETTEXTURE_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Void set_material(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UITEXTURE_SET_MATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void OnUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTURE_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void set_shader(::UnityEngine::Shader* arg)
		{
			((::System::Void(*)(::UnityEngine::Shader*, ::PVOID))((::PBYTE)hIl2Cpp + UITEXTURE_SET_SHADER_OFFSET))(arg, nullptr);
		}

		::System::Void OnFill(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UITEXTURE_ONFILL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_uvRect(::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UITEXTURE_SET_UVRECT_OFFSET))(arg, nullptr);
		}

		::System::Void _SetLocalizePathTexture_b__31_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UITEXTURE__SETLOCALIZEPATHTEXTURE_B__31_0_OFFSET))(arg, nullptr);
		}

		::System::Void set_mainTexture(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UITEXTURE_SET_MAINTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void SetTranslationPathTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTURE_SETTRANSLATIONPATHTEXTURE_OFFSET))(nullptr);
		}

	};

