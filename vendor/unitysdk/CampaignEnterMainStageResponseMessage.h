#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CAMPAIGNENTERMAINSTAGERESPONSEMESSAGE_SET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1F17DD0)
#define CAMPAIGNENTERMAINSTAGERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F17DE0)
#define CAMPAIGNENTERMAINSTAGERESPONSEMESSAGE_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F17E40)
#define CAMPAIGNENTERMAINSTAGERESPONSEMESSAGE_GET_STAGEHISTORY_OFFSET UNITYSDK_OFFSET(0x1F17E50)
#define CAMPAIGNENTERMAINSTAGERESPONSEMESSAGE_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1F17E60)
#define CAMPAIGNENTERMAINSTAGERESPONSEMESSAGE_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F17E70)
#define CAMPAIGNENTERMAINSTAGERESPONSEMESSAGE_SET_STAGEHISTORY_OFFSET UNITYSDK_OFFSET(0x1F17E80)

	inline static constexpr unsigned int CampaignEnterMainStageResponseMessage_TypeDefinitionIndex = 2073;

	class CampaignEnterMainStageResponseMessage : public Il2CppObject
	{
	public:
		::MX::Data::CampaignStageInfo* _StageInfo_k__BackingField; // 0x20
		::MX::GameLogic::DBModel::CampaignStageHistoryDB* _StageHistory_k__BackingField; // 0x28
		::System::Boolean _IsPlaying_k__BackingField; // 0x30

		::System::Void set_IsPlaying(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERMAINSTAGERESPONSEMESSAGE_SET_ISPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::Data::CampaignStageInfo* arg2, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::Data::CampaignStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERMAINSTAGERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Data::CampaignStageInfo* get_StageInfo()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERMAINSTAGERESPONSEMESSAGE_GET_STAGEINFO_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* get_StageHistory()
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERMAINSTAGERESPONSEMESSAGE_GET_STAGEHISTORY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERMAINSTAGERESPONSEMESSAGE_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Void set_StageInfo(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERMAINSTAGERESPONSEMESSAGE_SET_STAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_StageHistory(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERMAINSTAGERESPONSEMESSAGE_SET_STAGEHISTORY_OFFSET))(arg, nullptr);
		}

	};

