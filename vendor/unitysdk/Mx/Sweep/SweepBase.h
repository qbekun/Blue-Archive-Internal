#pragma once
#include "../../unitysdk.h"

class TooltipTargetParcelTracker;
namespace FlatData { class ContentType; }
namespace FlatData { class StageDifficulty; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define MX_SWEEP_SWEEPBASE_ADD_ONSWEEPCOUNTCHANGED_OFFSET UNITYSDK_OFFSET(0xE18FD0)
#define MX_SWEEP_SWEEPBASE_CANSWEEP_OFFSET UNITYSDK_OFFSET(0xE14B20)
#define MX_SWEEP_SWEEPBASE_GETMAXSWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xE198A0)
#define MX_SWEEP_SWEEPBASE_ISDAILYOPEN_OFFSET UNITYSDK_OFFSET(0xE19C00)
#define MX_SWEEP_SWEEPBASE_CHECKCURRENCYISENOUGH_OFFSET UNITYSDK_OFFSET(0xE19070)
#define MX_SWEEP_SWEEPBASE_SET_MAXSWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xE19C10)
#define MX_SWEEP_SWEEPBASE_GET_PARCELTRACKER_OFFSET UNITYSDK_OFFSET(0xE19C20)
#define MX_SWEEP_SWEEPBASE_REFRESHHISTORY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SWEEP_SWEEPBASE_BEGINSWEEP_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SWEEP_SWEEPBASE_GET_MAXSWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xE19C30)
#define MX_SWEEP_SWEEPBASE_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xE19C40)
#define MX_SWEEP_SWEEPBASE_GET_SWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xE19C50)
#define MX_SWEEP_SWEEPBASE_REFRESHLISTITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SWEEP_SWEEPBASE_SET_PARCELTRACKER_OFFSET UNITYSDK_OFFSET(0xE19C60)
#define MX_SWEEP_SWEEPBASE_REMOVE_ONSWEEPCOUNTCHANGED_OFFSET UNITYSDK_OFFSET(0xE19C70)
#define MX_SWEEP_SWEEPBASE_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xE19D10)
#define MX_SWEEP_SWEEPBASE_REFRESH_OFFSET UNITYSDK_OFFSET(0xE19D20)
#define MX_SWEEP_SWEEPBASE_REFRESHMAXSWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SWEEP_SWEEPBASE_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xE19EF0)
#define MX_SWEEP_SWEEPBASE_REQUESTSWEEP_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SWEEP_SWEEPBASE_ISOPEN_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SWEEP_SWEEPBASE_GETREDUCEAMOUNT_OFFSET UNITYSDK_OFFSET(0xE18D40)
#define MX_SWEEP_SWEEPBASE_INITCOST_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SWEEP_SWEEPBASE_CLEAR_OFFSET UNITYSDK_OFFSET(0xE19F00)
#define MX_SWEEP_SWEEPBASE_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xE19F20)
#define MX_SWEEP_SWEEPBASE_SET_SWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xE19E50)
#define MX_SWEEP_SWEEPBASE_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xE19F30)
#define MX_SWEEP_SWEEPBASE_GET_HARDSTAGEPLAYCOUNT_OFFSET UNITYSDK_OFFSET(0xE19F40)
#define MX_SWEEP_SWEEPBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE14E40)
#define MX_SWEEP_SWEEPBASE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE19F50)
#define MX_SWEEP_SWEEPBASE_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xE19FD0)

namespace Mx::Sweep
{
	inline static constexpr unsigned int SweepBase_TypeDefinitionIndex = 10335;

	class SweepBase : public Il2CppObject
	{
	public:
		TooltipTargetParcelTracker* _ParcelTracker_k__BackingField; // 0x10
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x18
		::System::Int64 _StageId_k__BackingField; // 0x20
		::FlatData::StageDifficulty* _Difficulty_k__BackingField; // 0x28
		Il2CppObject* ParcelCosts; // 0x30
		::System::Int64 _MaxSweepCount_k__BackingField; // 0x38
		::System::Int64 _sweepCount; // 0x40
		Il2CppObject* OnSweepCountChanged; // 0x48

		::System::Void add_OnSweepCountChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_ADD_ONSWEEPCOUNTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanSweep(::System::Action* arg)
		{
			return ((::System::Boolean(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_CANSWEEP_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetMaxSweepCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_GETMAXSWEEPCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean IsDailyOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_ISDAILYOPEN_OFFSET))(nullptr);
		}

		::System::Boolean CheckCurrencyIsEnough(::System::Action* arg)
		{
			return ((::System::Boolean(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_CHECKCURRENCYISENOUGH_OFFSET))(arg, nullptr);
		}

		::System::Void set_MaxSweepCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_SET_MAXSWEEPCOUNT_OFFSET))(arg, nullptr);
		}

		TooltipTargetParcelTracker* get_ParcelTracker()
		{
			return ((TooltipTargetParcelTracker*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_GET_PARCELTRACKER_OFFSET))(nullptr);
		}

		::System::Void RefreshHistory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_REFRESHHISTORY_OFFSET))(nullptr);
		}

		::System::Void BeginSweep()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_BEGINSWEEP_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxSweepCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_GET_MAXSWEEPCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_Difficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SweepCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_GET_SWEEPCOUNT_OFFSET))(nullptr);
		}

		::System::Void RefreshListItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_REFRESHLISTITEM_OFFSET))(nullptr);
		}

		::System::Void set_ParcelTracker(TooltipTargetParcelTracker* arg)
		{
			((::System::Void(*)(TooltipTargetParcelTracker*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_SET_PARCELTRACKER_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnSweepCountChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_REMOVE_ONSWEEPCOUNTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_REFRESH_OFFSET))(nullptr);
		}

		::System::Void RefreshMaxSweepCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_REFRESHMAXSWEEPCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_StageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_GET_STAGEID_OFFSET))(nullptr);
		}

		::System::Void RequestSweep()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_REQUESTSWEEP_OFFSET))(nullptr);
		}

		::System::Boolean IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_ISOPEN_OFFSET))(nullptr);
		}

		::System::Int64 GetReduceAmount(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			return ((::System::Int64(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_GETREDUCEAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void InitCost()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_INITCOST_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_CLEAR_OFFSET))(nullptr);
		}

		::System::Void set_StageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_SET_STAGEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_SweepCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_SET_SWEEPCOUNT_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_HardStagePlayCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_GET_HARDSTAGEPLAYCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_INITIALIZE_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_Difficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SWEEP_SWEEPBASE_GET_DIFFICULTY_OFFSET))(nullptr);
		}

	};
}

