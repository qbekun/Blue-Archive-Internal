#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class AcademyZoneExcel; }
namespace MX::Data { class AcademyScheduleData; }

#define MX_DATA_ACADEMYZONEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x180E860)
#define MX_DATA_ACADEMYZONEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x180E870)
#define MX_DATA_ACADEMYZONEDATA_GET_LOCATIONID_OFFSET UNITYSDK_OFFSET(0x180E880)
#define MX_DATA_ACADEMYZONEDATA_SET_LOCATIONID_OFFSET UNITYSDK_OFFSET(0x180E890)
#define MX_DATA_ACADEMYZONEDATA_GET_LOCATIONRANKFORUNLOCK_OFFSET UNITYSDK_OFFSET(0x180E8A0)
#define MX_DATA_ACADEMYZONEDATA_SET_LOCATIONRANKFORUNLOCK_OFFSET UNITYSDK_OFFSET(0x180E8B0)
#define MX_DATA_ACADEMYZONEDATA_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x180E8C0)
#define MX_DATA_ACADEMYZONEDATA_SET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x180E8D0)
#define MX_DATA_ACADEMYZONEDATA_GET_VISITPROBABILITYS_OFFSET UNITYSDK_OFFSET(0x180E8E0)
#define MX_DATA_ACADEMYZONEDATA_SET_VISITPROBABILITYS_OFFSET UNITYSDK_OFFSET(0x180E8F0)
#define MX_DATA_ACADEMYZONEDATA_GET_SCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x180E900)
#define MX_DATA_ACADEMYZONEDATA_SET_SCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x180E910)
#define MX_DATA_ACADEMYZONEDATA_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x180E920)
#define MX_DATA_ACADEMYZONEDATA_SET_TAGS_OFFSET UNITYSDK_OFFSET(0x180E930)
#define MX_DATA_ACADEMYZONEDATA_GET_TAGSWITHCOUNT_OFFSET UNITYSDK_OFFSET(0x180E940)
#define MX_DATA_ACADEMYZONEDATA_SET_TAGSWITHCOUNT_OFFSET UNITYSDK_OFFSET(0x180E950)
#define MX_DATA_ACADEMYZONEDATA_GET_SCHEDULES_OFFSET UNITYSDK_OFFSET(0x180E960)
#define MX_DATA_ACADEMYZONEDATA_SET_SCHEDULES_OFFSET UNITYSDK_OFFSET(0x180E970)
#define MX_DATA_ACADEMYZONEDATA_GET_FAVORSCHEDULES_OFFSET UNITYSDK_OFFSET(0x180E980)
#define MX_DATA_ACADEMYZONEDATA_SET_FAVORSCHEDULES_OFFSET UNITYSDK_OFFSET(0x180E990)
#define MX_DATA_ACADEMYZONEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x180E9A0)
#define MX_DATA_ACADEMYZONEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x180EB60)
#define MX_DATA_ACADEMYZONEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x180F030)
#define MX_DATA_ACADEMYZONEDATA_GETOPENSCHEDULE_OFFSET UNITYSDK_OFFSET(0x180F350)

namespace MX::Data
{
	inline static constexpr unsigned int AcademyZoneData_TypeDefinitionIndex = 15710;

	class AcademyZoneData : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::Int64 _LocationId_k__BackingField; // 0x18
		::System::Int64 _LocationRankForUnlock_k__BackingField; // 0x20
		::System::UInt32 _LocalizeEtcId_k__BackingField; // 0x28
		Il2CppObject* _VisitProbabilitys_k__BackingField; // 0x30
		::System::Int64 _ScheduleGroupId_k__BackingField; // 0x38
		Il2CppObject* _Tags_k__BackingField; // 0x40
		Il2CppObject* _TagsWithCount_k__BackingField; // 0x48
		Il2CppObject* _Schedules_k__BackingField; // 0x50
		Il2CppObject* _FavorSchedules_k__BackingField; // 0x58

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYZONEDATA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYZONEDATA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LocationId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYZONEDATA_GET_LOCATIONID_OFFSET))(nullptr);
		}

		::System::Void set_LocationId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYZONEDATA_SET_LOCATIONID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LocationRankForUnlock()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYZONEDATA_GET_LOCATIONRANKFORUNLOCK_OFFSET))(nullptr);
		}

		::System::Void set_LocationRankForUnlock(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYZONEDATA_SET_LOCATIONRANKFORUNLOCK_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYZONEDATA_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::Void set_LocalizeEtcId(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYZONEDATA_SET_LOCALIZEETCID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_VisitProbabilitys()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYZONEDATA_GET_VISITPROBABILITYS_OFFSET))(nullptr);
		}

		::System::Void set_VisitProbabilitys(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYZONEDATA_SET_VISITPROBABILITYS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ScheduleGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYZONEDATA_GET_SCHEDULEGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_ScheduleGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYZONEDATA_SET_SCHEDULEGROUPID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Tags()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYZONEDATA_GET_TAGS_OFFSET))(nullptr);
		}

		::System::Void set_Tags(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYZONEDATA_SET_TAGS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_TagsWithCount()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYZONEDATA_GET_TAGSWITHCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_TagsWithCount(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYZONEDATA_SET_TAGSWITHCOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Schedules()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYZONEDATA_GET_SCHEDULES_OFFSET))(nullptr);
		}

		::System::Void set_Schedules(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYZONEDATA_SET_SCHEDULES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_FavorSchedules()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYZONEDATA_GET_FAVORSCHEDULES_OFFSET))(nullptr);
		}

		::System::Void set_FavorSchedules(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYZONEDATA_SET_FAVORSCHEDULES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYZONEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::AcademyZoneExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::AcademyZoneExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYZONEDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::AcademyZoneExcel* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::AcademyZoneExcel*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYZONEDATA_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::MX::Data::AcademyScheduleData* GetOpenSchedule(::System::Int64 arg)
		{
			return (return (::MX::Data::AcademyScheduleData*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYZONEDATA_GETOPENSCHEDULE_OFFSET))(arg, nullptr);
		}

	};
}

