#pragma once
#include "unitysdk.h"

class TooltipShortcutScrollController;
class ShortcutTooltipInfo;

#define UISHORTCUTTOOLTIP_SETDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x275D130)
#define UISHORTCUTTOOLTIP_RESIZE_OFFSET UNITYSDK_OFFSET(0x275D300)
#define UISHORTCUTTOOLTIP_GET_SCROLLCONTROLLER_OFFSET UNITYSDK_OFFSET(0x275D290)
#define UISHORTCUTTOOLTIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x275D3B0)

	inline static constexpr unsigned int UIShortcutTooltip_TypeDefinitionIndex = 7280;

	class UIShortcutTooltip : public ::UnityEngine::InputSystem::LowLevel::GravityState
	{
	public:
		TooltipShortcutScrollController* scrollController; // 0x48

		::System::Void SetDataInternal(ShortcutTooltipInfo* arg)
		{
			((::System::Void(*)(ShortcutTooltipInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISHORTCUTTOOLTIP_SETDATAINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void Resize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHORTCUTTOOLTIP_RESIZE_OFFSET))(nullptr);
		}

		TooltipShortcutScrollController* get_ScrollController()
		{
			return ((TooltipShortcutScrollController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHORTCUTTOOLTIP_GET_SCROLLCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHORTCUTTOOLTIP_.CTOR_OFFSET))(nullptr);
		}

	};

