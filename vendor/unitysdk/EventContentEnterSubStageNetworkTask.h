#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define EVENTCONTENTENTERSUBSTAGENETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F6A720)
#define EVENTCONTENTENTERSUBSTAGENETWORKTASK_SET_STAGEHISTORY_OFFSET UNITYSDK_OFFSET(0x1F6A730)
#define EVENTCONTENTENTERSUBSTAGENETWORKTASK_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F6A740)
#define EVENTCONTENTENTERSUBSTAGENETWORKTASK_GET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F6A750)
#define EVENTCONTENTENTERSUBSTAGENETWORKTASK_GET_STAGEHISTORY_OFFSET UNITYSDK_OFFSET(0x1F6A760)
#define EVENTCONTENTENTERSUBSTAGENETWORKTASK_SET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F6A770)
#define EVENTCONTENTENTERSUBSTAGENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F6A780)
#define EVENTCONTENTENTERSUBSTAGENETWORKTASK_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F6A790)
#define EVENTCONTENTENTERSUBSTAGENETWORKTASK__PROCESSSESSION_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F6A7A0)
#define EVENTCONTENTENTERSUBSTAGENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F6A7B0)
#define EVENTCONTENTENTERSUBSTAGENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F6AAB0)
#define EVENTCONTENTENTERSUBSTAGENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F6AB40)
#define EVENTCONTENTENTERSUBSTAGENETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F6AB50)

	inline static constexpr unsigned int EventContentEnterSubStageNetworkTask_TypeDefinitionIndex = 2470;

	class EventContentEnterSubStageNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::MX::Data::CampaignStageInfo* _StageInfo_k__BackingField; // 0x48
		::MX::GameLogic::DBModel::CampaignStageHistoryDB* _StageHistory_k__BackingField; // 0x50
		::System::Int64 _EchelonNumber_k__BackingField; // 0x58

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERSUBSTAGENETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_StageHistory(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERSUBSTAGENETWORKTASK_SET_STAGEHISTORY_OFFSET))(arg, nullptr);
		}

		::MX::Data::CampaignStageInfo* get_StageInfo()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERSUBSTAGENETWORKTASK_GET_STAGEINFO_OFFSET))(nullptr);
		}

		::System::Int64 get_EchelonNumber()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERSUBSTAGENETWORKTASK_GET_ECHELONNUMBER_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* get_StageHistory()
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERSUBSTAGENETWORKTASK_GET_STAGEHISTORY_OFFSET))(nullptr);
		}

		::System::Void set_EchelonNumber(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERSUBSTAGENETWORKTASK_SET_ECHELONNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERSUBSTAGENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_StageInfo(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERSUBSTAGENETWORKTASK_SET_STAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__16_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERSUBSTAGENETWORKTASK__PROCESSSESSION_B__16_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERSUBSTAGENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERSUBSTAGENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERSUBSTAGENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERSUBSTAGENETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};

