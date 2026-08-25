#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define CAMPAIGNENTERSUBSTAGENETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F18620)
#define CAMPAIGNENTERSUBSTAGENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F18630)
#define CAMPAIGNENTERSUBSTAGENETWORKTASK_SET_STAGEHISTORY_OFFSET UNITYSDK_OFFSET(0x1F18930)
#define CAMPAIGNENTERSUBSTAGENETWORKTASK_SET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F18940)
#define CAMPAIGNENTERSUBSTAGENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F18950)
#define CAMPAIGNENTERSUBSTAGENETWORKTASK_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F18960)
#define CAMPAIGNENTERSUBSTAGENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F18970)
#define CAMPAIGNENTERSUBSTAGENETWORKTASK_GET_STAGEHISTORY_OFFSET UNITYSDK_OFFSET(0x1F18A00)
#define CAMPAIGNENTERSUBSTAGENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F18A10)
#define CAMPAIGNENTERSUBSTAGENETWORKTASK_GET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F18A20)
#define CAMPAIGNENTERSUBSTAGENETWORKTASK_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F18A30)

	inline static constexpr unsigned int CampaignEnterSubStageNetworkTask_TypeDefinitionIndex = 2078;

	class CampaignEnterSubStageNetworkTask : public Il2CppObject
	{
	public:
		::MX::Data::CampaignStageInfo* _StageInfo_k__BackingField; // 0x40
		::MX::GameLogic::DBModel::CampaignStageHistoryDB* _StageHistory_k__BackingField; // 0x48
		::System::Int64 _EchelonNumber_k__BackingField; // 0x50

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERSUBSTAGENETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERSUBSTAGENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_StageHistory(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERSUBSTAGENETWORKTASK_SET_STAGEHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Void set_EchelonNumber(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERSUBSTAGENETWORKTASK_SET_ECHELONNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERSUBSTAGENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_StageInfo(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERSUBSTAGENETWORKTASK_SET_STAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERSUBSTAGENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* get_StageHistory()
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERSUBSTAGENETWORKTASK_GET_STAGEHISTORY_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERSUBSTAGENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Int64 get_EchelonNumber()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERSUBSTAGENETWORKTASK_GET_ECHELONNUMBER_OFFSET))(nullptr);
		}

		::MX::Data::CampaignStageInfo* get_StageInfo()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERSUBSTAGENETWORKTASK_GET_STAGEINFO_OFFSET))(nullptr);
		}

	};

