#pragma once
#include "unitysdk.h"

class UILabel;
class ParcelTooltipInfo;

#define UIPARCELTOOLTIP_CANNOTUSESHORTCUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x274E2B0)
#define UIPARCELTOOLTIP_CANNOTUSESHORTCUT_SETDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x274E2F0)

	inline static constexpr unsigned int UIParcelTooltip_CannotUseShortcut_TypeDefinitionIndex = 7254;

	class UIParcelTooltip_CannotUseShortcut : public ::UnityEngine::InputSystem::LowLevel::GyroscopeState
	{
	public:
		UILabel* nameLabel; // 0x48
		UILabel* descLabel; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPARCELTOOLTIP_CANNOTUSESHORTCUT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDataInternal(ParcelTooltipInfo* arg)
		{
			((::System::Void(*)(ParcelTooltipInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPARCELTOOLTIP_CANNOTUSESHORTCUT_SETDATAINTERNAL_OFFSET))(arg, nullptr);
		}

	};

