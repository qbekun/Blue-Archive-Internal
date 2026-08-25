#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTENTERSUBSTAGERESPONSEMESSAGE_SET_STAGEHISTORY_OFFSET UNITYSDK_OFFSET(0x1F6A660)
#define EVENTCONTENTENTERSUBSTAGERESPONSEMESSAGE_SET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F6A670)
#define EVENTCONTENTENTERSUBSTAGERESPONSEMESSAGE_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F6A680)
#define EVENTCONTENTENTERSUBSTAGERESPONSEMESSAGE_GET_STAGEHISTORY_OFFSET UNITYSDK_OFFSET(0x1F6A690)
#define EVENTCONTENTENTERSUBSTAGERESPONSEMESSAGE_GET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F6A6A0)
#define EVENTCONTENTENTERSUBSTAGERESPONSEMESSAGE_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F6A6B0)
#define EVENTCONTENTENTERSUBSTAGERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F6A6C0)

	inline static constexpr unsigned int EventContentEnterSubStageResponseMessage_TypeDefinitionIndex = 2468;

	class EventContentEnterSubStageResponseMessage : public Il2CppObject
	{
	public:
		::MX::Data::CampaignStageInfo* _StageInfo_k__BackingField; // 0x20
		::MX::GameLogic::DBModel::CampaignStageHistoryDB* _StageHistory_k__BackingField; // 0x28
		::System::Int64 _EchelonNumber_k__BackingField; // 0x30

		::System::Void set_StageHistory(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERSUBSTAGERESPONSEMESSAGE_SET_STAGEHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Void set_EchelonNumber(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERSUBSTAGERESPONSEMESSAGE_SET_ECHELONNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void set_StageInfo(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERSUBSTAGERESPONSEMESSAGE_SET_STAGEINFO_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* get_StageHistory()
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERSUBSTAGERESPONSEMESSAGE_GET_STAGEHISTORY_OFFSET))(nullptr);
		}

		::System::Int64 get_EchelonNumber()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERSUBSTAGERESPONSEMESSAGE_GET_ECHELONNUMBER_OFFSET))(nullptr);
		}

		::MX::Data::CampaignStageInfo* get_StageInfo()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERSUBSTAGERESPONSEMESSAGE_GET_STAGEINFO_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::Data::CampaignStageInfo* arg2, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::Data::CampaignStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERSUBSTAGERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

