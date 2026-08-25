#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class ITooltipManager; }
namespace RuntimeInspectorNamespace { class ITooltipContent; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RUNTIMEINSPECTORNAMESPACE_TOOLTIPLISTENER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x958E4E0)
#define RUNTIMEINSPECTORNAMESPACE_TOOLTIPLISTENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x958E4F0)
#define RUNTIMEINSPECTORNAMESPACE_TOOLTIPLISTENER_ONDRAWERHOVERED_OFFSET UNITYSDK_OFFSET(0x958E320)
#define RUNTIMEINSPECTORNAMESPACE_TOOLTIPLISTENER_UPDATE_OFFSET UNITYSDK_OFFSET(0x958E500)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int TooltipListener_TypeDefinitionIndex = 35727;

	class TooltipListener : public Il2CppObject
	{
	public:
		::RuntimeInspectorNamespace::ITooltipManager* manager; // 0x18
		::RuntimeInspectorNamespace::ITooltipContent* hoveredDrawer; // 0x20
		::UnityEngine::EventSystems::PointerEventData* hoveringPointer; // 0x28
		::System::Single hoveredDrawerTooltipShowTime; // 0x30

		::System::Void Initialize(::RuntimeInspectorNamespace::ITooltipManager* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::ITooltipManager*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_TOOLTIPLISTENER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_TOOLTIPLISTENER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDrawerHovered(::RuntimeInspectorNamespace::ITooltipContent* arg, ::UnityEngine::EventSystems::PointerEventData* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::ITooltipContent*, ::UnityEngine::EventSystems::PointerEventData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_TOOLTIPLISTENER_ONDRAWERHOVERED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_TOOLTIPLISTENER_UPDATE_OFFSET))(nullptr);
		}

	};
}

