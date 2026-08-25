#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
class UIPopup_HardPlayCountRecover;

#define MX_SWEEP_CAMPAIGNSTAGESWEEP__CHECKHARDCOUNTISENOUGH_B__6_0_OFFSET UNITYSDK_OFFSET(0xE14380)
#define MX_SWEEP_CAMPAIGNSTAGESWEEP_ISOPEN_OFFSET UNITYSDK_OFFSET(0xE143B0)
#define MX_SWEEP_CAMPAIGNSTAGESWEEP_REFRESHMAXSWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xE143E0)
#define MX_SWEEP_CAMPAIGNSTAGESWEEP_BEGINSWEEP_OFFSET UNITYSDK_OFFSET(0xE144B0)
#define MX_SWEEP_CAMPAIGNSTAGESWEEP_REFRESHLISTITEM_OFFSET UNITYSDK_OFFSET(0xE148A0)
#define MX_SWEEP_CAMPAIGNSTAGESWEEP_REFRESHHISTORY_OFFSET UNITYSDK_OFFSET(0xE149B0)
#define MX_SWEEP_CAMPAIGNSTAGESWEEP_CANSWEEP_OFFSET UNITYSDK_OFFSET(0xE14A60)
#define MX_SWEEP_CAMPAIGNSTAGESWEEP_CHECKHARDCOUNTISENOUGH_OFFSET UNITYSDK_OFFSET(0xE14BC0)
#define MX_SWEEP_CAMPAIGNSTAGESWEEP_REQUESTSWEEP_OFFSET UNITYSDK_OFFSET(0xE14D00)
#define MX_SWEEP_CAMPAIGNSTAGESWEEP_.CTOR_OFFSET UNITYSDK_OFFSET(0xE14DD0)
#define MX_SWEEP_CAMPAIGNSTAGESWEEP_INITCOST_OFFSET UNITYSDK_OFFSET(0xE14F70)
#define MX_SWEEP_CAMPAIGNSTAGESWEEP_GET_HARDSTAGEPLAYCOUNT_OFFSET UNITYSDK_OFFSET(0xE15020)

namespace Mx::Sweep
{
	inline static constexpr unsigned int CampaignStageSweep_TypeDefinitionIndex = 10318;

	class CampaignStageSweep : public Il2CppObject
	{
	public:
		::MX::Data::CampaignStageInfo* stageInfo; // 0x50
		::MX::GameLogic::DBModel::CampaignStageHistoryDB* history; // 0x58
		::System::Int64 maxTicketCount; // 0x60

		::System::Void _CheckHardCountIsEnough_b__6_0(UIPopup_HardPlayCountRecover* arg)
		{
			((::System::Void(*)(UIPopup_HardPlayCountRecover*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_CAMPAIGNSTAGESWEEP__CHECKHARDCOUNTISENOUGH_B__6_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_CAMPAIGNSTAGESWEEP_ISOPEN_OFFSET))(nullptr);
		}

		::System::Void RefreshMaxSweepCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_CAMPAIGNSTAGESWEEP_REFRESHMAXSWEEPCOUNT_OFFSET))(nullptr);
		}

		::System::Void BeginSweep()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_CAMPAIGNSTAGESWEEP_BEGINSWEEP_OFFSET))(nullptr);
		}

		::System::Void RefreshListItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_CAMPAIGNSTAGESWEEP_REFRESHLISTITEM_OFFSET))(nullptr);
		}

		::System::Void RefreshHistory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_CAMPAIGNSTAGESWEEP_REFRESHHISTORY_OFFSET))(nullptr);
		}

		::System::Boolean CanSweep(::System::Action* arg)
		{
			return ((::System::Boolean(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_CAMPAIGNSTAGESWEEP_CANSWEEP_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckHardCountIsEnough()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_CAMPAIGNSTAGESWEEP_CHECKHARDCOUNTISENOUGH_OFFSET))(nullptr);
		}

		::System::Void RequestSweep()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_CAMPAIGNSTAGESWEEP_REQUESTSWEEP_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::CampaignStageInfo* arg, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_CAMPAIGNSTAGESWEEP_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void InitCost()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_CAMPAIGNSTAGESWEEP_INITCOST_OFFSET))(nullptr);
		}

		::System::Int64 get_HardStagePlayCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_CAMPAIGNSTAGESWEEP_GET_HARDSTAGEPLAYCOUNT_OFFSET))(nullptr);
		}

	};
}

