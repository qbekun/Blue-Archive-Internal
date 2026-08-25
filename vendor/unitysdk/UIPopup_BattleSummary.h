#pragma once
#include "unitysdk.h"

class UIBattleSummary;
class MXButton;
namespace MX::Logic::Battles::Summary { class GroupSummary; }

#define UIPOPUP_BATTLESUMMARY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x225AB50)
#define UIPOPUP_BATTLESUMMARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x225ABD0)
#define UIPOPUP_BATTLESUMMARY_ONCLOSEBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x225ABE0)
#define UIPOPUP_BATTLESUMMARY_AWAKE_OFFSET UNITYSDK_OFFSET(0x225AC70)

	inline static constexpr unsigned int UIPopup_BattleSummary_TypeDefinitionIndex = 4554;

	class UIPopup_BattleSummary : public Il2CppObject
	{
	public:
		UIBattleSummary* uiBattleSummary; // 0xD8
		MXButton* closeButton; // 0xE0

		::System::Void Initialize(::MX::Logic::Battles::Summary::GroupSummary* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::GroupSummary*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BATTLESUMMARY_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BATTLESUMMARY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnCloseButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BATTLESUMMARY_ONCLOSEBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BATTLESUMMARY_AWAKE_OFFSET))(nullptr);
		}

	};

