#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }

#define MULTISWEEPLISTSCROLLINFO_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x2708C00)
#define MULTISWEEPLISTSCROLLINFO_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x2708C10)
#define MULTISWEEPLISTSCROLLINFO_GET_STAGEHISTORYDB_OFFSET UNITYSDK_OFFSET(0x2708C20)
#define MULTISWEEPLISTSCROLLINFO_SET_STAGEHISTORYDB_OFFSET UNITYSDK_OFFSET(0x2708C30)
#define MULTISWEEPLISTSCROLLINFO_GET_ONSWEEPSTAGESELECT_OFFSET UNITYSDK_OFFSET(0x2708C40)
#define MULTISWEEPLISTSCROLLINFO_SET_ONSWEEPSTAGESELECT_OFFSET UNITYSDK_OFFSET(0x2708C50)
#define MULTISWEEPLISTSCROLLINFO_GET_REFRESHHARDSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x2708C60)
#define MULTISWEEPLISTSCROLLINFO_SET_REFRESHHARDSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x2708C70)
#define MULTISWEEPLISTSCROLLINFO_GET_SWEEPSTAGESELECT_OFFSET UNITYSDK_OFFSET(0x2708C80)
#define MULTISWEEPLISTSCROLLINFO_SET_SWEEPSTAGESELECT_OFFSET UNITYSDK_OFFSET(0x2708C90)
#define MULTISWEEPLISTSCROLLINFO_GET_SWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0x2708CA0)
#define MULTISWEEPLISTSCROLLINFO_SET_SWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0x2708CB0)
#define MULTISWEEPLISTSCROLLINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2708CC0)
#define MULTISWEEPLISTSCROLLINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2708E70)

	inline static constexpr unsigned int MultiSweepListScrollInfo_TypeDefinitionIndex = 7106;

	class MultiSweepListScrollInfo : public Il2CppObject
	{
	public:
		::MX::Data::CampaignStageInfo* _StageInfo_k__BackingField; // 0x10
		::MX::GameLogic::DBModel::CampaignStageHistoryDB* _StageHistoryDB_k__BackingField; // 0x18
		Il2CppObject* _onSweepStageSelect_k__BackingField; // 0x20
		Il2CppObject* _RefreshHardStageInfo_k__BackingField; // 0x28
		::System::Boolean _SweepStageSelect_k__BackingField; // 0x30
		::System::Int32 _SweepCount_k__BackingField; // 0x34

		::MX::Data::CampaignStageInfo* get_StageInfo()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPLISTSCROLLINFO_GET_STAGEINFO_OFFSET))(nullptr);
		}

		::System::Void set_StageInfo(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPLISTSCROLLINFO_SET_STAGEINFO_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CampaignStageHistoryDB* get_StageHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::CampaignStageHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPLISTSCROLLINFO_GET_STAGEHISTORYDB_OFFSET))(nullptr);
		}

		::System::Void set_StageHistoryDB(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPLISTSCROLLINFO_SET_STAGEHISTORYDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_onSweepStageSelect()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPLISTSCROLLINFO_GET_ONSWEEPSTAGESELECT_OFFSET))(nullptr);
		}

		::System::Void set_onSweepStageSelect(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPLISTSCROLLINFO_SET_ONSWEEPSTAGESELECT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RefreshHardStageInfo()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPLISTSCROLLINFO_GET_REFRESHHARDSTAGEINFO_OFFSET))(nullptr);
		}

		::System::Void set_RefreshHardStageInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPLISTSCROLLINFO_SET_REFRESHHARDSTAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SweepStageSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPLISTSCROLLINFO_GET_SWEEPSTAGESELECT_OFFSET))(nullptr);
		}

		::System::Void set_SweepStageSelect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPLISTSCROLLINFO_SET_SWEEPSTAGESELECT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SweepCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPLISTSCROLLINFO_GET_SWEEPCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_SweepCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPLISTSCROLLINFO_SET_SWEEPCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::CampaignStageInfo* arg, Il2CppObject* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPLISTSCROLLINFO_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::Data::CampaignStageInfo* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEPLISTSCROLLINFO_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

