#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define SCENARIOCONFIRMMAINSTAGERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F95950)
#define SCENARIOCONFIRMMAINSTAGERESPONSEMESSAGE_GET_MISSIONSTART_OFFSET UNITYSDK_OFFSET(0x1F95990)
#define SCENARIOCONFIRMMAINSTAGERESPONSEMESSAGE_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F959A0)
#define SCENARIOCONFIRMMAINSTAGERESPONSEMESSAGE_SET_MISSIONSTART_OFFSET UNITYSDK_OFFSET(0x1F959B0)
#define SCENARIOCONFIRMMAINSTAGERESPONSEMESSAGE_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F959C0)

	inline static constexpr unsigned int ScenarioConfirmMainStageResponseMessage_TypeDefinitionIndex = 2744;

	class ScenarioConfirmMainStageResponseMessage : public Il2CppObject
	{
	public:
		::MX::Data::CampaignStageInfo* _StageInfo_k__BackingField; // 0x20
		::System::Boolean _MissionStart_k__BackingField; // 0x28

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::Data::CampaignStageInfo* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::Data::CampaignStageInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCONFIRMMAINSTAGERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_MissionStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCONFIRMMAINSTAGERESPONSEMESSAGE_GET_MISSIONSTART_OFFSET))(nullptr);
		}

		::System::Void set_StageInfo(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCONFIRMMAINSTAGERESPONSEMESSAGE_SET_STAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_MissionStart(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCONFIRMMAINSTAGERESPONSEMESSAGE_SET_MISSIONSTART_OFFSET))(arg, nullptr);
		}

		::MX::Data::CampaignStageInfo* get_StageInfo()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCONFIRMMAINSTAGERESPONSEMESSAGE_GET_STAGEINFO_OFFSET))(nullptr);
		}

	};

