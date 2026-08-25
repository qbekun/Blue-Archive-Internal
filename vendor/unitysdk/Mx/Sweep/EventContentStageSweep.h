#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class EventContentStageInfo; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }

#define MX_SWEEP_EVENTCONTENTSTAGESWEEP_.CTOR_OFFSET UNITYSDK_OFFSET(0xE15400)
#define MX_SWEEP_EVENTCONTENTSTAGESWEEP_ISDAILYOPEN_OFFSET UNITYSDK_OFFSET(0xE15480)
#define MX_SWEEP_EVENTCONTENTSTAGESWEEP_ISSUBEVENTSTAGEDAYCLEAR_OFFSET UNITYSDK_OFFSET(0xE154E0)
#define MX_SWEEP_EVENTCONTENTSTAGESWEEP_REFRESHLISTITEM_OFFSET UNITYSDK_OFFSET(0xE15650)
#define MX_SWEEP_EVENTCONTENTSTAGESWEEP_REQUESTSWEEP_OFFSET UNITYSDK_OFFSET(0xE15880)
#define MX_SWEEP_EVENTCONTENTSTAGESWEEP__REFRESHHISTORY_B__7_0_OFFSET UNITYSDK_OFFSET(0xE15960)
#define MX_SWEEP_EVENTCONTENTSTAGESWEEP_REFRESHMAXSWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xE15990)
#define MX_SWEEP_EVENTCONTENTSTAGESWEEP_GET_HARDSTAGEPLAYCOUNT_OFFSET UNITYSDK_OFFSET(0xE15A90)
#define MX_SWEEP_EVENTCONTENTSTAGESWEEP_CHECKHARDCOUNTISENOUGH_OFFSET UNITYSDK_OFFSET(0xE15AB0)
#define MX_SWEEP_EVENTCONTENTSTAGESWEEP_REFRESHHISTORY_OFFSET UNITYSDK_OFFSET(0xE15C90)

namespace Mx::Sweep
{
	inline static constexpr unsigned int EventContentStageSweep_TypeDefinitionIndex = 10320;

	class EventContentStageSweep : public Il2CppObject
	{
	public:
		::MX::Data::EventContentStageInfo* eventContentStageInfo; // 0x68

		::System::Void .ctor(::MX::Data::EventContentStageInfo* arg, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Data::EventContentStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_EVENTCONTENTSTAGESWEEP_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsDailyOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_EVENTCONTENTSTAGESWEEP_ISDAILYOPEN_OFFSET))(nullptr);
		}

		::System::Boolean IsSubEventStageDayClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_EVENTCONTENTSTAGESWEEP_ISSUBEVENTSTAGEDAYCLEAR_OFFSET))(nullptr);
		}

		::System::Void RefreshListItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_EVENTCONTENTSTAGESWEEP_REFRESHLISTITEM_OFFSET))(nullptr);
		}

		::System::Void RequestSweep()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_EVENTCONTENTSTAGESWEEP_REQUESTSWEEP_OFFSET))(nullptr);
		}

		::System::Boolean _RefreshHistory_b__7_0(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_EVENTCONTENTSTAGESWEEP__REFRESHHISTORY_B__7_0_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshMaxSweepCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_EVENTCONTENTSTAGESWEEP_REFRESHMAXSWEEPCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_HardStagePlayCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_EVENTCONTENTSTAGESWEEP_GET_HARDSTAGEPLAYCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean CheckHardCountIsEnough()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_EVENTCONTENTSTAGESWEEP_CHECKHARDCOUNTISENOUGH_OFFSET))(nullptr);
		}

		::System::Void RefreshHistory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_EVENTCONTENTSTAGESWEEP_REFRESHHISTORY_OFFSET))(nullptr);
		}

	};
}

