#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class EventContentLocationExcel; }

#define MX_DATA_EVENTCONTENTLOCATIONDATA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x18439F0)
#define MX_DATA_EVENTCONTENTLOCATIONDATA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1843A00)
#define MX_DATA_EVENTCONTENTLOCATIONDATA_GET_LOCATIONID_OFFSET UNITYSDK_OFFSET(0x1843A10)
#define MX_DATA_EVENTCONTENTLOCATIONDATA_SET_LOCATIONID_OFFSET UNITYSDK_OFFSET(0x1843A20)
#define MX_DATA_EVENTCONTENTLOCATIONDATA_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1843A30)
#define MX_DATA_EVENTCONTENTLOCATIONDATA_SET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1843A40)
#define MX_DATA_EVENTCONTENTLOCATIONDATA_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1843A50)
#define MX_DATA_EVENTCONTENTLOCATIONDATA_SET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1843A60)
#define MX_DATA_EVENTCONTENTLOCATIONDATA_GET_REWARDPARCEL_OFFSET UNITYSDK_OFFSET(0x1843A70)
#define MX_DATA_EVENTCONTENTLOCATIONDATA_SET_REWARDPARCEL_OFFSET UNITYSDK_OFFSET(0x1843A80)
#define MX_DATA_EVENTCONTENTLOCATIONDATA_GET_SCHEDULECOST_OFFSET UNITYSDK_OFFSET(0x1843A90)
#define MX_DATA_EVENTCONTENTLOCATIONDATA_SET_SCHEDULECOST_OFFSET UNITYSDK_OFFSET(0x1843AA0)
#define MX_DATA_EVENTCONTENTLOCATIONDATA_GET_LOCATIONRESETSCHEDULECOUNT_OFFSET UNITYSDK_OFFSET(0x1843AB0)
#define MX_DATA_EVENTCONTENTLOCATIONDATA_SET_LOCATIONRESETSCHEDULECOUNT_OFFSET UNITYSDK_OFFSET(0x1843AC0)
#define MX_DATA_EVENTCONTENTLOCATIONDATA_GET_ZONES_OFFSET UNITYSDK_OFFSET(0x1843AD0)
#define MX_DATA_EVENTCONTENTLOCATIONDATA_SET_ZONES_OFFSET UNITYSDK_OFFSET(0x1843AE0)
#define MX_DATA_EVENTCONTENTLOCATIONDATA_GET_VISITREWARDBYCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1843AF0)
#define MX_DATA_EVENTCONTENTLOCATIONDATA_SET_VISITREWARDBYCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1843B00)
#define MX_DATA_EVENTCONTENTLOCATIONDATA_GET_INFORMATIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1843B10)
#define MX_DATA_EVENTCONTENTLOCATIONDATA_SET_INFORMATIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1843B20)
#define MX_DATA_EVENTCONTENTLOCATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1843B30)
#define MX_DATA_EVENTCONTENTLOCATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1843C00)
#define MX_DATA_EVENTCONTENTLOCATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1843D80)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentLocationData_TypeDefinitionIndex = 15800;

	class EventContentLocationData : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int64 _LocationId_k__BackingField; // 0x18
		::System::UInt32 _LocalizeEtcId_k__BackingField; // 0x20
		::System::String* _PrefabPath_k__BackingField; // 0x28
		::MX::GameLogic::Parcel::ParcelInfo* _RewardParcel_k__BackingField; // 0x30
		::MX::GameLogic::Parcel::ParcelInfo* _ScheduleCost_k__BackingField; // 0x38
		::System::Int32 _LocationResetScheduleCount_k__BackingField; // 0x40
		Il2CppObject* _Zones_k__BackingField; // 0x48
		Il2CppObject* _VisitRewardByCharacterId_k__BackingField; // 0x50
		::System::Int64 _InformationGroupId_k__BackingField; // 0x58

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTLOCATIONDATA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTLOCATIONDATA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LocationId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTLOCATIONDATA_GET_LOCATIONID_OFFSET))(nullptr);
		}

		::System::Void set_LocationId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTLOCATIONDATA_SET_LOCATIONID_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTLOCATIONDATA_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::Void set_LocalizeEtcId(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTLOCATIONDATA_SET_LOCALIZEETCID_OFFSET))(arg, nullptr);
		}

		::System::String* get_PrefabPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTLOCATIONDATA_GET_PREFABPATH_OFFSET))(nullptr);
		}

		::System::Void set_PrefabPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTLOCATIONDATA_SET_PREFABPATH_OFFSET))(str, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_RewardParcel()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTLOCATIONDATA_GET_REWARDPARCEL_OFFSET))(nullptr);
		}

		::System::Void set_RewardParcel(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTLOCATIONDATA_SET_REWARDPARCEL_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_ScheduleCost()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTLOCATIONDATA_GET_SCHEDULECOST_OFFSET))(nullptr);
		}

		::System::Void set_ScheduleCost(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTLOCATIONDATA_SET_SCHEDULECOST_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LocationResetScheduleCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTLOCATIONDATA_GET_LOCATIONRESETSCHEDULECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_LocationResetScheduleCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTLOCATIONDATA_SET_LOCATIONRESETSCHEDULECOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Zones()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTLOCATIONDATA_GET_ZONES_OFFSET))(nullptr);
		}

		::System::Void set_Zones(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTLOCATIONDATA_SET_ZONES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_VisitRewardByCharacterId()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTLOCATIONDATA_GET_VISITREWARDBYCHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_VisitRewardByCharacterId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTLOCATIONDATA_SET_VISITREWARDBYCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_InformationGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTLOCATIONDATA_GET_INFORMATIONGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_InformationGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTLOCATIONDATA_SET_INFORMATIONGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTLOCATIONDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentLocationExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentLocationExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTLOCATIONDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentLocationExcel* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentLocationExcel*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTLOCATIONDATA_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

