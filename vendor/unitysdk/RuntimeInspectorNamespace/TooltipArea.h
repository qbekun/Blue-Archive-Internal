#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class TooltipListener; }
namespace RuntimeInspectorNamespace { class ITooltipContent; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RUNTIMEINSPECTORNAMESPACE_TOOLTIPAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x958E210)
#define RUNTIMEINSPECTORNAMESPACE_TOOLTIPAREA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x958E220)
#define RUNTIMEINSPECTORNAMESPACE_TOOLTIPAREA_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x958E260)
#define RUNTIMEINSPECTORNAMESPACE_TOOLTIPAREA_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x958E4A0)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int TooltipArea_TypeDefinitionIndex = 35724;

	class TooltipArea : public Il2CppObject
	{
	public:
		::RuntimeInspectorNamespace::TooltipListener* tooltipListener; // 0x18
		::RuntimeInspectorNamespace::ITooltipContent* tooltipContent; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_TOOLTIPAREA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::RuntimeInspectorNamespace::TooltipListener* arg, ::RuntimeInspectorNamespace::ITooltipContent* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::TooltipListener*, ::RuntimeInspectorNamespace::ITooltipContent*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_TOOLTIPAREA_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_TOOLTIPAREA_ONPOINTEREXIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_TOOLTIPAREA_ONPOINTERENTER_OFFSET))(arg, nullptr);
		}

	};
}

