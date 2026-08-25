#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MX::NetworkProtocol { class Protocol; }
namespace MX::NetworkProtocol { class ErrorPacket; }

#define SCENARIOENTERMAINSTAGENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F96FA0)
#define SCENARIOENTERMAINSTAGENETWORKTASK_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F97030)
#define SCENARIOENTERMAINSTAGENETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F97040)
#define SCENARIOENTERMAINSTAGENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F97050)
#define SCENARIOENTERMAINSTAGENETWORKTASK_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F97060)
#define SCENARIOENTERMAINSTAGENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F97070)
#define SCENARIOENTERMAINSTAGENETWORKTASK_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1F97370)
#define SCENARIOENTERMAINSTAGENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F97380)
#define SCENARIOENTERMAINSTAGENETWORKTASK_SET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1F97390)
#define SCENARIOENTERMAINSTAGENETWORKTASK_WEBAPIERRORACTION_OFFSET UNITYSDK_OFFSET(0x1F973A0)
#define SCENARIOENTERMAINSTAGENETWORKTASK_GET_STAGEHISTORY_OFFSET UNITYSDK_OFFSET(0x1F97440)
#define SCENARIOENTERMAINSTAGENETWORKTASK_SET_STAGEHISTORY_OFFSET UNITYSDK_OFFSET(0x1F97450)

	inline static constexpr unsigned int ScenarioEnterMainStageNetworkTask_TypeDefinitionIndex = 2755;

	class ScenarioEnterMainStageNetworkTask : public Il2CppObject
	{
	public:
		::MX::Data::CampaignStageInfo* _StageInfo_k__BackingField; // 0x40
		::MX::GameLogic::DBModel::CampaignStageHistoryDB* _StageHistory_k__BackingField; // 0x48
		::System::Boolean _IsPlaying_k__BackingField; // 0x50

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERMAINSTAGENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_StageInfo(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERMAINSTAGENETWORKTASK_SET_STAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERMAINSTAGENETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERMAINSTAGENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::MX::Data::CampaignStageInfo* get_StageInfo()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERMAINSTAGENETWORKTASK_GET_STAGEINFO_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERMAINSTAGENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERMAINSTAGENETWORKTASK_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERMAINSTAGENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsPlaying(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERMAINSTAGENETWORKTASK_SET_ISPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Boolean WebAPIErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERMAINSTAGENETWORKTASK_WEBAPIERRORACTION_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* get_StageHistory()
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERMAINSTAGENETWORKTASK_GET_STAGEHISTORY_OFFSET))(nullptr);
		}

		::System::Void set_StageHistory(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERMAINSTAGENETWORKTASK_SET_STAGEHISTORY_OFFSET))(arg, nullptr);
		}

	};

