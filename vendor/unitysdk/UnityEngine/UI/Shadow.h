#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine { class Color32; }

#define UNITYENGINE_UI_SHADOW_GET_EFFECTDISTANCE_OFFSET UNITYSDK_OFFSET(0xA48AAF0)
#define UNITYENGINE_UI_SHADOW_SET_EFFECTDISTANCE_OFFSET UNITYSDK_OFFSET(0xA48AB00)
#define UNITYENGINE_UI_SHADOW_SET_EFFECTCOLOR_OFFSET UNITYSDK_OFFSET(0xA48ABE0)
#define UNITYENGINE_UI_SHADOW_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0xA48AC80)
#define UNITYENGINE_UI_SHADOW_.CTOR_OFFSET UNITYSDK_OFFSET(0xA48B280)
#define UNITYENGINE_UI_SHADOW_APPLYSHADOWZEROALLOC_OFFSET UNITYSDK_OFFSET(0xA48B2B0)
#define UNITYENGINE_UI_SHADOW_GET_EFFECTCOLOR_OFFSET UNITYSDK_OFFSET(0xA48B630)
#define UNITYENGINE_UI_SHADOW_GET_USEGRAPHICALPHA_OFFSET UNITYSDK_OFFSET(0xA48B640)
#define UNITYENGINE_UI_SHADOW_SET_USEGRAPHICALPHA_OFFSET UNITYSDK_OFFSET(0xA48B650)
#define UNITYENGINE_UI_SHADOW_APPLYSHADOW_OFFSET UNITYSDK_OFFSET(0xA48B240)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Shadow_TypeDefinitionIndex = 34873;

	class Shadow : public ::TriInspector::TableListAttribute
	{
	public:
		::UnityEngine::Color* m_EffectColor; // 0x20
		::UnityEngine::Vector2* m_EffectDistance; // 0x30
		::System::Boolean m_UseGraphicAlpha; // 0x38
		::System::Single kMaxEffectDistance; // 0x0

		::UnityEngine::Vector2* get_effectDistance()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_GET_EFFECTDISTANCE_OFFSET))(nullptr);
		}

		::System::Void set_effectDistance(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_SET_EFFECTDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void set_effectColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_SET_EFFECTCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::VertexHelper*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_MODIFYMESH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ApplyShadowZeroAlloc(Il2CppObject* arg, ::UnityEngine::Color32* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Color32*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_APPLYSHADOWZEROALLOC_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Color* get_effectColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_GET_EFFECTCOLOR_OFFSET))(nullptr);
		}

		::System::Boolean get_useGraphicAlpha()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_GET_USEGRAPHICALPHA_OFFSET))(nullptr);
		}

		::System::Void set_useGraphicAlpha(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_SET_USEGRAPHICALPHA_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyShadow(Il2CppObject* arg, ::UnityEngine::Color32* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Color32*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADOW_APPLYSHADOW_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

