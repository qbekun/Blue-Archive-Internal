#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MX::NetworkProtocol { class Protocol; }
namespace MX::NetworkProtocol { class ErrorPacket; }

#define EVENTCONTENTENTERMAINSTAGENETWORKTASK__PROCESSSESSION_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F69940)
#define EVENTCONTENTENTERMAINSTAGENETWORKTASK_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F69950)
#define EVENTCONTENTENTERMAINSTAGENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F69960)
#define EVENTCONTENTENTERMAINSTAGENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F69BF0)
#define EVENTCONTENTENTERMAINSTAGENETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F69C80)
#define EVENTCONTENTENTERMAINSTAGENETWORKTASK_SET_STAGEHISTORY_OFFSET UNITYSDK_OFFSET(0x1F69C90)
#define EVENTCONTENTENTERMAINSTAGENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F69CA0)
#define EVENTCONTENTENTERMAINSTAGENETWORKTASK_WEBAPIERRORACTION_OFFSET UNITYSDK_OFFSET(0x1F69CB0)
#define EVENTCONTENTENTERMAINSTAGENETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F69D50)
#define EVENTCONTENTENTERMAINSTAGENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F69D60)
#define EVENTCONTENTENTERMAINSTAGENETWORKTASK_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F69D70)
#define EVENTCONTENTENTERMAINSTAGENETWORKTASK_GET_STAGEHISTORY_OFFSET UNITYSDK_OFFSET(0x1F69D80)
#define EVENTCONTENTENTERMAINSTAGENETWORKTASK_SET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1F69D90)
#define EVENTCONTENTENTERMAINSTAGENETWORKTASK_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1F69DA0)

	inline static constexpr unsigned int EventContentEnterMainStageNetworkTask_TypeDefinitionIndex = 2464;

	class EventContentEnterMainStageNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::MX::Data::CampaignStageInfo* _StageInfo_k__BackingField; // 0x48
		::MX::GameLogic::DBModel::CampaignStageHistoryDB* _StageHistory_k__BackingField; // 0x50
		::System::Boolean _IsPlaying_k__BackingField; // 0x58

		::System::Boolean _ProcessSession_b__16_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINSTAGENETWORKTASK__PROCESSSESSION_B__16_0_OFFSET))(nullptr);
		}

		::MX::Data::CampaignStageInfo* get_StageInfo()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINSTAGENETWORKTASK_GET_STAGEINFO_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINSTAGENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINSTAGENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINSTAGENETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_StageHistory(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINSTAGENETWORKTASK_SET_STAGEHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINSTAGENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean WebAPIErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINSTAGENETWORKTASK_WEBAPIERRORACTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINSTAGENETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINSTAGENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_StageInfo(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINSTAGENETWORKTASK_SET_STAGEINFO_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* get_StageHistory()
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINSTAGENETWORKTASK_GET_STAGEHISTORY_OFFSET))(nullptr);
		}

		::System::Void set_IsPlaying(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINSTAGENETWORKTASK_SET_ISPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINSTAGENETWORKTASK_GET_ISPLAYING_OFFSET))(nullptr);
		}

	};

