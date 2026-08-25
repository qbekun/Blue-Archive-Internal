#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class EventContentZoneExcel; }
namespace MX::Data { class EventContentScheduleData; }

#define MX_DATA_EVENTCONTENTZONEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1844430)
#define MX_DATA_EVENTCONTENTZONEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1844440)
#define MX_DATA_EVENTCONTENTZONEDATA_GET_ORIGINALZONEID_OFFSET UNITYSDK_OFFSET(0x1844450)
#define MX_DATA_EVENTCONTENTZONEDATA_SET_ORIGINALZONEID_OFFSET UNITYSDK_OFFSET(0x1844460)
#define MX_DATA_EVENTCONTENTZONEDATA_GET_LOCATIONID_OFFSET UNITYSDK_OFFSET(0x1844470)
#define MX_DATA_EVENTCONTENTZONEDATA_SET_LOCATIONID_OFFSET UNITYSDK_OFFSET(0x1844480)
#define MX_DATA_EVENTCONTENTZONEDATA_GET_LOCATIONRANK_OFFSET UNITYSDK_OFFSET(0x1844490)
#define MX_DATA_EVENTCONTENTZONEDATA_SET_LOCATIONRANK_OFFSET UNITYSDK_OFFSET(0x18444A0)
#define MX_DATA_EVENTCONTENTZONEDATA_GET_EVENTPOINTFORLOCATIONRANK_OFFSET UNITYSDK_OFFSET(0x18444B0)
#define MX_DATA_EVENTCONTENTZONEDATA_SET_EVENTPOINTFORLOCATIONRANK_OFFSET UNITYSDK_OFFSET(0x18444C0)
#define MX_DATA_EVENTCONTENTZONEDATA_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x18444D0)
#define MX_DATA_EVENTCONTENTZONEDATA_SET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x18444E0)
#define MX_DATA_EVENTCONTENTZONEDATA_GET_VISITPROBABILITYS_OFFSET UNITYSDK_OFFSET(0x18444F0)
#define MX_DATA_EVENTCONTENTZONEDATA_SET_VISITPROBABILITYS_OFFSET UNITYSDK_OFFSET(0x1844500)
#define MX_DATA_EVENTCONTENTZONEDATA_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x1844510)
#define MX_DATA_EVENTCONTENTZONEDATA_SET_TAGS_OFFSET UNITYSDK_OFFSET(0x1844520)
#define MX_DATA_EVENTCONTENTZONEDATA_GET_TAGSWITHCOUNT_OFFSET UNITYSDK_OFFSET(0x1844530)
#define MX_DATA_EVENTCONTENTZONEDATA_SET_TAGSWITHCOUNT_OFFSET UNITYSDK_OFFSET(0x1844540)
#define MX_DATA_EVENTCONTENTZONEDATA_GET_WHITELISTTAGS_OFFSET UNITYSDK_OFFSET(0x1844550)
#define MX_DATA_EVENTCONTENTZONEDATA_SET_WHITELISTTAGS_OFFSET UNITYSDK_OFFSET(0x1844560)
#define MX_DATA_EVENTCONTENTZONEDATA_GET_SCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x1844570)
#define MX_DATA_EVENTCONTENTZONEDATA_SET_SCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x1844580)
#define MX_DATA_EVENTCONTENTZONEDATA_GET_SCHEDULES_OFFSET UNITYSDK_OFFSET(0x1844590)
#define MX_DATA_EVENTCONTENTZONEDATA_SET_SCHEDULES_OFFSET UNITYSDK_OFFSET(0x18445A0)
#define MX_DATA_EVENTCONTENTZONEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18445B0)
#define MX_DATA_EVENTCONTENTZONEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1844750)
#define MX_DATA_EVENTCONTENTZONEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1844CD0)
#define MX_DATA_EVENTCONTENTZONEDATA_GETOPENSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1844E80)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentZoneData_TypeDefinitionIndex = 15803;

	class EventContentZoneData : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::Int64 _OriginalZoneId_k__BackingField; // 0x18
		::System::Int64 _LocationId_k__BackingField; // 0x20
		::System::Int64 _LocationRank_k__BackingField; // 0x28
		::System::Int64 _EventPointForLocationRank_k__BackingField; // 0x30
		::System::UInt32 _LocalizeEtcId_k__BackingField; // 0x38
		Il2CppObject* _VisitProbabilitys_k__BackingField; // 0x40
		Il2CppObject* _Tags_k__BackingField; // 0x48
		Il2CppObject* _TagsWithCount_k__BackingField; // 0x50
		Il2CppObject* _WhiteListTags_k__BackingField; // 0x58
		::System::Int64 _ScheduleGroupId_k__BackingField; // 0x60
		Il2CppObject* _Schedules_k__BackingField; // 0x68

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_OriginalZoneId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_GET_ORIGINALZONEID_OFFSET))(nullptr);
		}

		::System::Void set_OriginalZoneId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_SET_ORIGINALZONEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LocationId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_GET_LOCATIONID_OFFSET))(nullptr);
		}

		::System::Void set_LocationId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_SET_LOCATIONID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LocationRank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_GET_LOCATIONRANK_OFFSET))(nullptr);
		}

		::System::Void set_LocationRank(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_SET_LOCATIONRANK_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventPointForLocationRank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_GET_EVENTPOINTFORLOCATIONRANK_OFFSET))(nullptr);
		}

		::System::Void set_EventPointForLocationRank(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_SET_EVENTPOINTFORLOCATIONRANK_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::Void set_LocalizeEtcId(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_SET_LOCALIZEETCID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_VisitProbabilitys()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_GET_VISITPROBABILITYS_OFFSET))(nullptr);
		}

		::System::Void set_VisitProbabilitys(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_SET_VISITPROBABILITYS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Tags()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_GET_TAGS_OFFSET))(nullptr);
		}

		::System::Void set_Tags(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_SET_TAGS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_TagsWithCount()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_GET_TAGSWITHCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_TagsWithCount(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_SET_TAGSWITHCOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_WhiteListTags()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_GET_WHITELISTTAGS_OFFSET))(nullptr);
		}

		::System::Void set_WhiteListTags(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_SET_WHITELISTTAGS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ScheduleGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_GET_SCHEDULEGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_ScheduleGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_SET_SCHEDULEGROUPID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Schedules()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_GET_SCHEDULES_OFFSET))(nullptr);
		}

		::System::Void set_Schedules(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_SET_SCHEDULES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentZoneExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentZoneExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentZoneExcel* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentZoneExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::EventContentScheduleData* GetOpenSchedule(::System::Int64 arg)
		{
			return (return (::MX::Data::EventContentScheduleData*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTZONEDATA_GETOPENSCHEDULE_OFFSET))(arg, nullptr);
		}

	};
}

