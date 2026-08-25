#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define EVENTCONTENTENTERMAINGROUNDSTAGENETWORKTASK_GET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F69230)
#define EVENTCONTENTENTERMAINGROUNDSTAGENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F69240)
#define EVENTCONTENTENTERMAINGROUNDSTAGENETWORKTASK_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F692B0)
#define EVENTCONTENTENTERMAINGROUNDSTAGENETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F692C0)
#define EVENTCONTENTENTERMAINGROUNDSTAGENETWORKTASK_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F692D0)
#define EVENTCONTENTENTERMAINGROUNDSTAGENETWORKTASK_GET_STAGEHISTORY_OFFSET UNITYSDK_OFFSET(0x1F692E0)
#define EVENTCONTENTENTERMAINGROUNDSTAGENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F692F0)
#define EVENTCONTENTENTERMAINGROUNDSTAGENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F69300)
#define EVENTCONTENTENTERMAINGROUNDSTAGENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F69580)
#define EVENTCONTENTENTERMAINGROUNDSTAGENETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F69590)
#define EVENTCONTENTENTERMAINGROUNDSTAGENETWORKTASK__PROCESSSESSION_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F695A0)
#define EVENTCONTENTENTERMAINGROUNDSTAGENETWORKTASK_SET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F695B0)
#define EVENTCONTENTENTERMAINGROUNDSTAGENETWORKTASK_SET_STAGEHISTORY_OFFSET UNITYSDK_OFFSET(0x1F695C0)

	inline static constexpr unsigned int EventContentEnterMainGroundStageNetworkTask_TypeDefinitionIndex = 2461;

	class EventContentEnterMainGroundStageNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::MX::Data::CampaignStageInfo* _StageInfo_k__BackingField; // 0x48
		::MX::GameLogic::DBModel::CampaignStageHistoryDB* _StageHistory_k__BackingField; // 0x50
		::System::Int64 _EchelonNumber_k__BackingField; // 0x58

		::System::Int64 get_EchelonNumber()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINGROUNDSTAGENETWORKTASK_GET_ECHELONNUMBER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINGROUNDSTAGENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_StageInfo(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINGROUNDSTAGENETWORKTASK_SET_STAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINGROUNDSTAGENETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::MX::Data::CampaignStageInfo* get_StageInfo()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINGROUNDSTAGENETWORKTASK_GET_STAGEINFO_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* get_StageHistory()
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINGROUNDSTAGENETWORKTASK_GET_STAGEHISTORY_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINGROUNDSTAGENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINGROUNDSTAGENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINGROUNDSTAGENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINGROUNDSTAGENETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__16_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINGROUNDSTAGENETWORKTASK__PROCESSSESSION_B__16_0_OFFSET))(nullptr);
		}

		::System::Void set_EchelonNumber(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINGROUNDSTAGENETWORKTASK_SET_ECHELONNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void set_StageHistory(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERMAINGROUNDSTAGENETWORKTASK_SET_STAGEHISTORY_OFFSET))(arg, nullptr);
		}

	};

