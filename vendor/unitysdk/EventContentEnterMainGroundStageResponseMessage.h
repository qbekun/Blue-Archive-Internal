#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTENTERMAINGROUNDSTAGERESPONSEMESSAGE_SET_STAGEHISTORY_OFFSET UNITYSDK_OFFSET(0x1F69170)
#define EVENTCONTENTENTERMAINGROUNDSTAGERESPONSEMESSAGE_SET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F69180)
#define EVENTCONTENTENTERMAINGROUNDSTAGERESPONSEMESSAGE_GET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F69190)
#define EVENTCONTENTENTERMAINGROUNDSTAGERESPONSEMESSAGE_GET_STAGEHISTORY_OFFSET UNITYSDK_OFFSET(0x1F691A0)
#define EVENTCONTENTENTERMAINGROUNDSTAGERESPONSEMESSAGE_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F691B0)
#define EVENTCONTENTENTERMAINGROUNDSTAGERESPONSEMESSAGE_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F691C0)
#define EVENTCONTENTENTERMAINGROUNDSTAGERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F691D0)

	inline static constexpr unsigned int EventContentEnterMainGroundStageResponseMessage_TypeDefinitionIndex = 2459;

	class EventContentEnterMainGroundStageResponseMessage : public Il2CppObject
	{
	public:
		::MX::Data::CampaignStageInfo* _StageInfo_k__BackingField; // 0x20
		::MX::GameLogic::DBModel::CampaignStageHistoryDB* _StageHistory_k__BackingField; // 0x28
		::System::Int64 _EchelonNumber_k__BackingField; // 0x30

		::System::Void set_StageHistory(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINGROUNDSTAGERESPONSEMESSAGE_SET_STAGEHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Void set_EchelonNumber(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINGROUNDSTAGERESPONSEMESSAGE_SET_ECHELONNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EchelonNumber()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINGROUNDSTAGERESPONSEMESSAGE_GET_ECHELONNUMBER_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* get_StageHistory()
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINGROUNDSTAGERESPONSEMESSAGE_GET_STAGEHISTORY_OFFSET))(nullptr);
		}

		::System::Void set_StageInfo(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINGROUNDSTAGERESPONSEMESSAGE_SET_STAGEINFO_OFFSET))(arg, nullptr);
		}

		::MX::Data::CampaignStageInfo* get_StageInfo()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINGROUNDSTAGERESPONSEMESSAGE_GET_STAGEINFO_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::Data::CampaignStageInfo* arg2, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::Data::CampaignStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINGROUNDSTAGERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

