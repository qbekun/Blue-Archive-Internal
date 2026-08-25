#pragma once
#include "unitysdk.h"

class UICharacterCard;
class UILabel;
class MXButton;
namespace MX::GameLogic::DBModel { class ClanAssistRewardInfo; }

#define UIPOPUP_ASSISTREWARD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x220AA60)
#define UIPOPUP_ASSISTREWARD_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x220DD40)
#define UIPOPUP_ASSISTREWARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x220DD50)
#define UIPOPUP_ASSISTREWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x220DE80)

	inline static constexpr unsigned int UIPopup_AssistReward_TypeDefinitionIndex = 4361;

	class UIPopup_AssistReward : public Il2CppObject
	{
	public:
		UICharacterCard* characterCard; // 0xD8
		UILabel* cumulativeTime; // 0xE0
		UILabel* cumulativeCredit; // 0xE8
		UILabel* rentCount; // 0xF0
		UILabel* rentCredit; // 0xF8
		MXButton* okButton; // 0x100

		::System::Void Initialize(::MX::GameLogic::DBModel::ClanAssistRewardInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTREWARD_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTREWARD_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTREWARD_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ASSISTREWARD_.CTOR_OFFSET))(nullptr);
		}

	};

