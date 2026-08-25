#pragma once
#include "unitysdk.h"

class MXButton;
namespace MX::Data { class CampaignStageInfo; }
namespace FlatData { class MissionCompleteConditionType; }
namespace MX::Data { class MiniGameDefenseStageInfo; }

#define UIPOPUP_CHALLENGEMISSION_AWAKE_OFFSET UNITYSDK_OFFSET(0x26FCC90)
#define UIPOPUP_CHALLENGEMISSION_HASVALIDMISSION_OFFSET UNITYSDK_OFFSET(0x26FCEA0)
#define UIPOPUP_CHALLENGEMISSION_ISVALIDMISSION_OFFSET UNITYSDK_OFFSET(0x26FD110)
#define UIPOPUP_CHALLENGEMISSION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x26FD130)
#define UIPOPUP_CHALLENGEMISSION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x26FD6F0)
#define UIPOPUP_CHALLENGEMISSION_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x26FD9F0)
#define UIPOPUP_CHALLENGEMISSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x26FDA80)

	inline static constexpr unsigned int UIPopup_ChallengeMission_TypeDefinitionIndex = 7058;

	class UIPopup_ChallengeMission : public Il2CppObject
	{
	public:
		MXButton* confirmButton; // 0xD8
		MXButton* closeButton; // 0xE0
		Il2CppObject* challangeMissionItems; // 0xE8

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CHALLENGEMISSION_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean HasValidMission(::MX::Data::CampaignStageInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CHALLENGEMISSION_HASVALIDMISSION_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValidMIssion(::FlatData::MissionCompleteConditionType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::MissionCompleteConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CHALLENGEMISSION_ISVALIDMISSION_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CHALLENGEMISSION_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::Data::MiniGameDefenseStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::MiniGameDefenseStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CHALLENGEMISSION_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CHALLENGEMISSION_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CHALLENGEMISSION_.CTOR_OFFSET))(nullptr);
		}

	};

