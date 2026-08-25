#pragma once
#include "unitysdk.h"

class UITexture;
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define NGUININEPATCHMASKWIDGET_.CCTOR_OFFSET UNITYSDK_OFFSET(0x207CB80)
#define NGUININEPATCHMASKWIDGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x207CC60)
#define NGUININEPATCHMASKWIDGET_UPDATESHADERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x207CC70)
#define NGUININEPATCHMASKWIDGET_ONFILL_OFFSET UNITYSDK_OFFSET(0x207CE70)
#define NGUININEPATCHMASKWIDGET_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x207D4D0)
#define NGUININEPATCHMASKWIDGET_SET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x207D5E0)
#define NGUININEPATCHMASKWIDGET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x207D5F0)
#define NGUININEPATCHMASKWIDGET_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x207DA00)
#define NGUININEPATCHMASKWIDGET_GET_INVISIBLEMATERIAL_OFFSET UNITYSDK_OFFSET(0x207D8D0)
#define NGUININEPATCHMASKWIDGET_GET_INVISIBLESHADER_OFFSET UNITYSDK_OFFSET(0x207DA10)

	inline static constexpr unsigned int NGUINinepatchMaskWidget_TypeDefinitionIndex = 153;

	class NGUINinepatchMaskWidget : public Il2CppObject
	{
	public:
		UITexture* targetUITexture; // 0x190
		::UnityEngine::Texture2D* maskTexture; // 0x198
		::UnityEngine::Vector4* ninePatchBorder; // 0x1A0
		::System::Boolean seeNinePatch; // 0x1B0
		::System::Boolean drawOnfill; // 0x1B1
		::UnityEngine::Shader* invisibleShader; // 0x0
		::UnityEngine::Material* invisibleMaterial; // 0x8
		::System::Int32 PropMaskSize; // 0x10
		::System::Int32 PropMaskTex; // 0x14
		::System::Int32 PropCorner; // 0x18
		::System::Int32 PropBorder; // 0x1C

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUININEPATCHMASKWIDGET_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUININEPATCHMASKWIDGET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateShaderProperties(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + NGUININEPATCHMASKWIDGET_UPDATESHADERPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Void OnFill(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGUININEPATCHMASKWIDGET_ONFILL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUININEPATCHMASKWIDGET_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void set_mainTexture(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + NGUININEPATCHMASKWIDGET_SET_MAINTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUININEPATCHMASKWIDGET_ONENABLE_OFFSET))(nullptr);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUININEPATCHMASKWIDGET_GET_MAINTEXTURE_OFFSET))(nullptr);
		}

		::UnityEngine::Material* get_InvisibleMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUININEPATCHMASKWIDGET_GET_INVISIBLEMATERIAL_OFFSET))(nullptr);
		}

		::UnityEngine::Shader* get_InvisibleShader()
		{
			return ((::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUININEPATCHMASKWIDGET_GET_INVISIBLESHADER_OFFSET))(nullptr);
		}

	};

