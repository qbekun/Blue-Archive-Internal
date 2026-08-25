#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Rect; }
namespace UnityEngine { class GUIStyle; }

#define UNITYENGINE_GUILAYOUTENTRY_GET_STYLE_OFFSET UNITYSDK_OFFSET(0xA285210)
#define UNITYENGINE_GUILAYOUTENTRY_SET_STYLE_OFFSET UNITYSDK_OFFSET(0xA27DCE0)
#define UNITYENGINE_GUILAYOUTENTRY_GET_MARGINLEFT_OFFSET UNITYSDK_OFFSET(0xA285220)
#define UNITYENGINE_GUILAYOUTENTRY_GET_MARGINRIGHT_OFFSET UNITYSDK_OFFSET(0xA285250)
#define UNITYENGINE_GUILAYOUTENTRY_GET_MARGINTOP_OFFSET UNITYSDK_OFFSET(0xA285280)
#define UNITYENGINE_GUILAYOUTENTRY_GET_MARGINBOTTOM_OFFSET UNITYSDK_OFFSET(0xA2852B0)
#define UNITYENGINE_GUILAYOUTENTRY_GET_MARGINHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xA2852E0)
#define UNITYENGINE_GUILAYOUTENTRY_GET_MARGINVERTICAL_OFFSET UNITYSDK_OFFSET(0xA285320)
#define UNITYENGINE_GUILAYOUTENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA285360)
#define UNITYENGINE_GUILAYOUTENTRY_CALCWIDTH_OFFSET UNITYSDK_OFFSET(0xA2854B0)
#define UNITYENGINE_GUILAYOUTENTRY_CALCHEIGHT_OFFSET UNITYSDK_OFFSET(0xA2854C0)
#define UNITYENGINE_GUILAYOUTENTRY_SETHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xA2854D0)
#define UNITYENGINE_GUILAYOUTENTRY_SETVERTICAL_OFFSET UNITYSDK_OFFSET(0xA285510)
#define UNITYENGINE_GUILAYOUTENTRY_APPLYSTYLESETTINGS_OFFSET UNITYSDK_OFFSET(0xA285550)
#define UNITYENGINE_GUILAYOUTENTRY_APPLYOPTIONS_OFFSET UNITYSDK_OFFSET(0xA285680)
#define UNITYENGINE_GUILAYOUTENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA285980)
#define UNITYENGINE_GUILAYOUTENTRY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA286140)

namespace UnityEngine
{
	inline static constexpr unsigned int GUILayoutEntry_TypeDefinitionIndex = 36552;

	class GUILayoutEntry : public Il2CppObject
	{
	public:
		::System::Single minWidth; // 0x10
		::System::Single maxWidth; // 0x14
		::System::Single minHeight; // 0x18
		::System::Single maxHeight; // 0x1C
		::UnityEngine::Rect* rect; // 0x20
		::System::Int32 stretchWidth; // 0x30
		::System::Int32 stretchHeight; // 0x34
		::System::Boolean consideredForMargin; // 0x38
		::UnityEngine::GUIStyle* m_Style; // 0x40
		::UnityEngine::Rect* kDummyRect; // 0x0
		::System::Int32 indent; // 0x10

		::UnityEngine::GUIStyle* get_style()
		{
			return (return (::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_GET_STYLE_OFFSET))(nullptr);
		}

		::System::Void set_style(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_SET_STYLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_marginLeft()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_GET_MARGINLEFT_OFFSET))(nullptr);
		}

		::System::Int32 get_marginRight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_GET_MARGINRIGHT_OFFSET))(nullptr);
		}

		::System::Int32 get_marginTop()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_GET_MARGINTOP_OFFSET))(nullptr);
		}

		::System::Int32 get_marginBottom()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_GET_MARGINBOTTOM_OFFSET))(nullptr);
		}

		::System::Int32 get_marginHorizontal()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_GET_MARGINHORIZONTAL_OFFSET))(nullptr);
		}

		::System::Int32 get_marginVertical()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_GET_MARGINVERTICAL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CalcWidth()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_CALCWIDTH_OFFSET))(nullptr);
		}

		::System::Void CalcHeight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_CALCHEIGHT_OFFSET))(nullptr);
		}

		::System::Void SetHorizontal(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_SETHORIZONTAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetVertical(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_SETVERTICAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ApplyStyleSettings(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_APPLYSTYLESETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyOptions(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_APPLYOPTIONS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTENTRY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

