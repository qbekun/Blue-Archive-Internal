#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }
namespace MX::NetworkProtocol { class Protocol; }

#define SCENARIOCONFIRMMAINSTAGENETWORKTASK_SET_MISSIONSTART_OFFSET UNITYSDK_OFFSET(0x1F959D0)
#define SCENARIOCONFIRMMAINSTAGENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F959E0)
#define SCENARIOCONFIRMMAINSTAGENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F959F0)
#define SCENARIOCONFIRMMAINSTAGENETWORKTASK_GET_MISSIONSTART_OFFSET UNITYSDK_OFFSET(0x1F95A00)
#define SCENARIOCONFIRMMAINSTAGENETWORKTASK_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F95A10)
#define SCENARIOCONFIRMMAINSTAGENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F95A20)
#define SCENARIOCONFIRMMAINSTAGENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F95D20)
#define SCENARIOCONFIRMMAINSTAGENETWORKTASK_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F95DB0)
#define SCENARIOCONFIRMMAINSTAGENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F95DC0)

	inline static constexpr unsigned int ScenarioConfirmMainStageNetworkTask_TypeDefinitionIndex = 2746;

	class ScenarioConfirmMainStageNetworkTask : public Il2CppObject
	{
	public:
		::MX::Data::CampaignStageInfo* _StageInfo_k__BackingField; // 0x40
		::System::Boolean _MissionStart_k__BackingField; // 0x48

		::System::Void set_MissionStart(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCONFIRMMAINSTAGENETWORKTASK_SET_MISSIONSTART_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCONFIRMMAINSTAGENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCONFIRMMAINSTAGENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Boolean get_MissionStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCONFIRMMAINSTAGENETWORKTASK_GET_MISSIONSTART_OFFSET))(nullptr);
		}

		::MX::Data::CampaignStageInfo* get_StageInfo()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCONFIRMMAINSTAGENETWORKTASK_GET_STAGEINFO_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCONFIRMMAINSTAGENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCONFIRMMAINSTAGENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_StageInfo(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCONFIRMMAINSTAGENETWORKTASK_SET_STAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCONFIRMMAINSTAGENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

