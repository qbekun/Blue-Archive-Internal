#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Animation; }

#define MX_UI_UIHPWIDGETS_ICUSTOMGAUGEUI_RESETPREVANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_UI_UIHPWIDGETS_ICUSTOMGAUGEUI_SETTRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_UI_UIHPWIDGETS_ICUSTOMGAUGEUI_TRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_UI_UIHPWIDGETS_ICUSTOMGAUGEUI_RESETBOOLVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_UI_UIHPWIDGETS_ICUSTOMGAUGEUI_GETALLBOOLVALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_UI_UIHPWIDGETS_ICUSTOMGAUGEUI_SETBOOLVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_UI_UIHPWIDGETS_ICUSTOMGAUGEUI_GETPREVANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_UI_UIHPWIDGETS_ICUSTOMGAUGEUI_SETPREVANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_UI_UIHPWIDGETS_ICUSTOMGAUGEUI_GETBOOLVALUE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::UI::UIHPWidgets
{
	inline static constexpr unsigned int ICustomGaugeUI_TypeDefinitionIndex = 20058;

	class ICustomGaugeUI : public Il2CppObject
	{
	public:
		::System::Void ResetPrevAnimationClip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_UI_UIHPWIDGETS_ICUSTOMGAUGEUI_RESETPREVANIMATIONCLIP_OFFSET))(nullptr);
		}

		::System::Void SetTriggerEvent(Il2CppObject&* arg, ::System::Object[]&* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Object[]&*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_UI_UIHPWIDGETS_ICUSTOMGAUGEUI_SETTRIGGEREVENT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void TriggerEvent(Il2CppObject&* arg, ::System::Object[]&* arg, TriggerType* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Object[]&*, TriggerType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_UI_UIHPWIDGETS_ICUSTOMGAUGEUI_TRIGGEREVENT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ResetBoolValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_UI_UIHPWIDGETS_ICUSTOMGAUGEUI_RESETBOOLVALUE_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllBoolValues()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_UI_UIHPWIDGETS_ICUSTOMGAUGEUI_GETALLBOOLVALUES_OFFSET))(nullptr);
		}

		::System::Void SetBoolValue(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_UI_UIHPWIDGETS_ICUSTOMGAUGEUI_SETBOOLVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::String* GetPrevAnimationClip(::UnityEngine::Animation* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::Animation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_UI_UIHPWIDGETS_ICUSTOMGAUGEUI_GETPREVANIMATIONCLIP_OFFSET))(arg, nullptr);
		}

		::System::Void SetPrevAnimationClip(::UnityEngine::Animation* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Animation*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_UI_UIHPWIDGETS_ICUSTOMGAUGEUI_SETPREVANIMATIONCLIP_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean GetBoolValue(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_UI_UIHPWIDGETS_ICUSTOMGAUGEUI_GETBOOLVALUE_OFFSET))(str, nullptr);
		}

	};
}

