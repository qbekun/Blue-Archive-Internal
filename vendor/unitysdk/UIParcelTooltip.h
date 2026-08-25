#pragma once
#include "unitysdk.h"

class UILabel;
class UIWidget;
class MXButton;
class TooltipShortcutScrollController;
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
class ParcelTooltipInfo;

#define UIPARCELTOOLTIP_GET_SCROLLCONTROLLER_OFFSET UNITYSDK_OFFSET(0x274DB00)
#define UIPARCELTOOLTIP_ONCLICKMULTISWEEP_OFFSET UNITYSDK_OFFSET(0x274DB70)
#define UIPARCELTOOLTIP_RESIZE_OFFSET UNITYSDK_OFFSET(0x274DCF0)
#define UIPARCELTOOLTIP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x274DD90)
#define UIPARCELTOOLTIP_SETDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x274DDC0)
#define UIPARCELTOOLTIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x274E130)

	inline static constexpr unsigned int UIParcelTooltip_TypeDefinitionIndex = 7253;

	class UIParcelTooltip : public ::UnityEngine::InputSystem::LowLevel::GyroscopeState
	{
	public:
		UILabel* nameLabel; // 0x48
		UILabel* descLabel; // 0x50
		UIWidget* multiSweepRoot; // 0x58
		MXButton* multiSweepButton; // 0x60
		TooltipShortcutScrollController* scrollController; // 0x68

		TooltipShortcutScrollController* get_ScrollController()
		{
			return ((TooltipShortcutScrollController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPARCELTOOLTIP_GET_SCROLLCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void OnclickMultiSweep(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + UIPARCELTOOLTIP_ONCLICKMULTISWEEP_OFFSET))(arg, nullptr);
		}

		::System::Void Resize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPARCELTOOLTIP_RESIZE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPARCELTOOLTIP_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetDataInternal(ParcelTooltipInfo* arg)
		{
			((::System::Void(*)(ParcelTooltipInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPARCELTOOLTIP_SETDATAINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPARCELTOOLTIP_.CTOR_OFFSET))(nullptr);
		}

	};

