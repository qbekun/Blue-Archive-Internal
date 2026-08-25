#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class FieldContentStageInfo; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }

#define MXFIELD_UI_FIELDCONTENTSTAGESWEEP_BEGINSWEEP_OFFSET UNITYSDK_OFFSET(0xE83390)
#define MXFIELD_UI_FIELDCONTENTSTAGESWEEP_ISSWEEPABLE_OFFSET UNITYSDK_OFFSET(0xE83780)
#define MXFIELD_UI_FIELDCONTENTSTAGESWEEP_REQUESTSWEEP_OFFSET UNITYSDK_OFFSET(0xE83840)
#define MXFIELD_UI_FIELDCONTENTSTAGESWEEP_.CTOR_OFFSET UNITYSDK_OFFSET(0xE839C0)
#define MXFIELD_UI_FIELDCONTENTSTAGESWEEP_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0xE83A30)
#define MXFIELD_UI_FIELDCONTENTSTAGESWEEP__REFRESHHISTORY_B__14_0_OFFSET UNITYSDK_OFFSET(0xE83A40)
#define MXFIELD_UI_FIELDCONTENTSTAGESWEEP_REFRESHHISTORY_OFFSET UNITYSDK_OFFSET(0xE83A70)
#define MXFIELD_UI_FIELDCONTENTSTAGESWEEP_GET_HISTORYDB_OFFSET UNITYSDK_OFFSET(0xE83BA0)
#define MXFIELD_UI_FIELDCONTENTSTAGESWEEP_SET_HISTORYDB_OFFSET UNITYSDK_OFFSET(0xE83BB0)
#define MXFIELD_UI_FIELDCONTENTSTAGESWEEP_INITCOST_OFFSET UNITYSDK_OFFSET(0xE83BC0)
#define MXFIELD_UI_FIELDCONTENTSTAGESWEEP_REFRESHMAXSWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xE83C70)
#define MXFIELD_UI_FIELDCONTENTSTAGESWEEP_REFRESHLISTITEM_OFFSET UNITYSDK_OFFSET(0xE83CA0)
#define MXFIELD_UI_FIELDCONTENTSTAGESWEEP_ISOPEN_OFFSET UNITYSDK_OFFSET(0xE83DB0)
#define MXFIELD_UI_FIELDCONTENTSTAGESWEEP_ISDAILYOPEN_OFFSET UNITYSDK_OFFSET(0xE83E00)

namespace MXField::UI
{
	inline static constexpr unsigned int FieldContentStageSweep_TypeDefinitionIndex = 10635;

	class FieldContentStageSweep : public Il2CppObject
	{
	public:
		::MX::Data::FieldContentStageInfo* _StageInfo_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::CampaignStageHistoryDB* _HistoryDB_k__BackingField; // 0x58

		::System::Void BeginSweep()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDCONTENTSTAGESWEEP_BEGINSWEEP_OFFSET))(nullptr);
		}

		::System::Boolean IsSweepable(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDCONTENTSTAGESWEEP_ISSWEEPABLE_OFFSET))(arg, nullptr);
		}

		::System::Void RequestSweep()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDCONTENTSTAGESWEEP_REQUESTSWEEP_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::FieldContentStageInfo* arg, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Data::FieldContentStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDCONTENTSTAGESWEEP_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Data::FieldContentStageInfo* get_StageInfo()
		{
			return ((::MX::Data::FieldContentStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDCONTENTSTAGESWEEP_GET_STAGEINFO_OFFSET))(nullptr);
		}

		::System::Boolean _RefreshHistory_b__14_0(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDCONTENTSTAGESWEEP__REFRESHHISTORY_B__14_0_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshHistory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDCONTENTSTAGESWEEP_REFRESHHISTORY_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* get_HistoryDB()
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDCONTENTSTAGESWEEP_GET_HISTORYDB_OFFSET))(nullptr);
		}

		::System::Void set_HistoryDB(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDCONTENTSTAGESWEEP_SET_HISTORYDB_OFFSET))(arg, nullptr);
		}

		::System::Void InitCost()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDCONTENTSTAGESWEEP_INITCOST_OFFSET))(nullptr);
		}

		::System::Void RefreshMaxSweepCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDCONTENTSTAGESWEEP_REFRESHMAXSWEEPCOUNT_OFFSET))(nullptr);
		}

		::System::Void RefreshListItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDCONTENTSTAGESWEEP_REFRESHLISTITEM_OFFSET))(nullptr);
		}

		::System::Boolean IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDCONTENTSTAGESWEEP_ISOPEN_OFFSET))(nullptr);
		}

		::System::Boolean IsDailyOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDCONTENTSTAGESWEEP_ISDAILYOPEN_OFFSET))(nullptr);
		}

	};
}

