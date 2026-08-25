#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Canvas; }
namespace RuntimeInspectorNamespace { class UISkin; }

#define RUNTIMEINSPECTORNAMESPACE_ITOOLTIPMANAGER_GET_TOOLTIPDELAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_ITOOLTIPMANAGER_GET_CANVAS_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_ITOOLTIPMANAGER_GET_SKIN_OFFSET UNITYSDK_OFFSET(0x000000)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int ITooltipManager_TypeDefinitionIndex = 35726;

	class ITooltipManager : public Il2CppObject
	{
	public:
		::System::Single get_TooltipDelay()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ITOOLTIPMANAGER_GET_TOOLTIPDELAY_OFFSET))(nullptr);
		}

		::UnityEngine::Canvas* get_Canvas()
		{
			return (return (::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ITOOLTIPMANAGER_GET_CANVAS_OFFSET))(nullptr);
		}

		::RuntimeInspectorNamespace::UISkin* get_Skin()
		{
			return (return (::RuntimeInspectorNamespace::UISkin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ITOOLTIPMANAGER_GET_SKIN_OFFSET))(nullptr);
		}

	};
}

