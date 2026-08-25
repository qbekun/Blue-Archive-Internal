#pragma once
#include "unitysdk.h"

class DescriptionTooltipWidget;
class DescTooltipInfo;

#define UIDESCRIPTIONTOOLTIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x274D120)
#define UIDESCRIPTIONTOOLTIP_SETWIDGETS_OFFSET UNITYSDK_OFFSET(0x274D160)
#define UIDESCRIPTIONTOOLTIP_SETDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x274D1E0)

	inline static constexpr unsigned int UIDescriptionTooltip_TypeDefinitionIndex = 7249;

	class UIDescriptionTooltip : public ::UnityEngine::InputSystem::LowLevel::MouseButton
	{
	public:
		DescriptionTooltipWidget* descriptionOnlyTooltip; // 0x48
		DescriptionTooltipWidget* descriptionWithAmountTooltip; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDESCRIPTIONTOOLTIP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetWidgets(DescriptionTooltipWidget* arg)
		{
			((::System::Void(*)(DescriptionTooltipWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UIDESCRIPTIONTOOLTIP_SETWIDGETS_OFFSET))(arg, nullptr);
		}

		::System::Void SetDataInternal(DescTooltipInfo* arg)
		{
			((::System::Void(*)(DescTooltipInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIDESCRIPTIONTOOLTIP_SETDATAINTERNAL_OFFSET))(arg, nullptr);
		}

	};

