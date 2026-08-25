#pragma once
#include "unitysdk.h"

class UIWidget;

#define TOOLTIPSHORTCUTSCROLLCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2747660)
#define TOOLTIPSHORTCUTSCROLLCONTROLLER_RESIZE_OFFSET UNITYSDK_OFFSET(0x27476A0)
#define TOOLTIPSHORTCUTSCROLLCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x2747800)

	inline static constexpr unsigned int TooltipShortcutScrollController_TypeDefinitionIndex = 7238;

	class TooltipShortcutScrollController : public ::System::Xml::PositionInfo
	{
	public:
		UIWidget* resizeTarget; // 0x90
		::System::Int32 dy; // 0x98

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPSHORTCUTSCROLLCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Resize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPSHORTCUTSCROLLCONTROLLER_RESIZE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPSHORTCUTSCROLLCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

	};

