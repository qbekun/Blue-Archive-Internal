#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTENTERMAINSTAGERESPONSEMESSAGE_GET_STAGEHISTORY_OFFSET UNITYSDK_OFFSET(0x1F69880)
#define EVENTCONTENTENTERMAINSTAGERESPONSEMESSAGE_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F69890)
#define EVENTCONTENTENTERMAINSTAGERESPONSEMESSAGE_SET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1F698A0)
#define EVENTCONTENTENTERMAINSTAGERESPONSEMESSAGE_SET_STAGEHISTORY_OFFSET UNITYSDK_OFFSET(0x1F698B0)
#define EVENTCONTENTENTERMAINSTAGERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F698C0)
#define EVENTCONTENTENTERMAINSTAGERESPONSEMESSAGE_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F69920)
#define EVENTCONTENTENTERMAINSTAGERESPONSEMESSAGE_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1F69930)

	inline static constexpr unsigned int EventContentEnterMainStageResponseMessage_TypeDefinitionIndex = 2462;

	class EventContentEnterMainStageResponseMessage : public Il2CppObject
	{
	public:
		::MX::Data::CampaignStageInfo* _StageInfo_k__BackingField; // 0x20
		::MX::GameLogic::DBModel::CampaignStageHistoryDB* _StageHistory_k__BackingField; // 0x28
		::System::Boolean _IsPlaying_k__BackingField; // 0x30

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* get_StageHistory()
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINSTAGERESPONSEMESSAGE_GET_STAGEHISTORY_OFFSET))(nullptr);
		}

		::MX::Data::CampaignStageInfo* get_StageInfo()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINSTAGERESPONSEMESSAGE_GET_STAGEINFO_OFFSET))(nullptr);
		}

		::System::Void set_IsPlaying(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINSTAGERESPONSEMESSAGE_SET_ISPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Void set_StageHistory(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINSTAGERESPONSEMESSAGE_SET_STAGEHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::Data::CampaignStageInfo* arg2, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::Data::CampaignStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINSTAGERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void set_StageInfo(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINSTAGERESPONSEMESSAGE_SET_STAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINSTAGERESPONSEMESSAGE_GET_ISPLAYING_OFFSET))(nullptr);
		}

	};

