#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Rect; }

#define UNITYENGINE_UIELEMENTS_TOOLTIPEVENT_SET_TOOLTIP_OFFSET UNITYSDK_OFFSET(0xA3FE7C0)
#define UNITYENGINE_UIELEMENTS_TOOLTIPEVENT_SET_RECT_OFFSET UNITYSDK_OFFSET(0xA3FE7D0)
#define UNITYENGINE_UIELEMENTS_TOOLTIPEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xA3FE7E0)
#define UNITYENGINE_UIELEMENTS_TOOLTIPEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0xA3FE880)
#define UNITYENGINE_UIELEMENTS_TOOLTIPEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3FE8F0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TooltipEvent_TypeDefinitionIndex = 30544;

	class TooltipEvent : public ::MX::GameLogic::DBModel::EchelonPresetDB
	{
	public:
		::System::String* _tooltip_k__BackingField; // 0x80
		::UnityEngine::Rect* _rect_k__BackingField; // 0x88

		::System::Void set_tooltip(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TOOLTIPEVENT_SET_TOOLTIP_OFFSET))(str, nullptr);
		}

		::System::Void set_rect(::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TOOLTIPEVENT_SET_RECT_OFFSET))(arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TOOLTIPEVENT_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TOOLTIPEVENT_LOCALINIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TOOLTIPEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

