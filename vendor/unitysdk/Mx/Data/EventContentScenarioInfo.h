#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelCost; }
namespace MX::Data::Excel { class EventContentScenarioExcel; }

#define MX_DATA_EVENTCONTENTSCENARIOINFO_GET_SCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x18427B0)
#define MX_DATA_EVENTCONTENTSCENARIOINFO_SET_ORDER_OFFSET UNITYSDK_OFFSET(0x18427C0)
#define MX_DATA_EVENTCONTENTSCENARIOINFO_SET_ISOMNIBUS_OFFSET UNITYSDK_OFFSET(0x18427D0)
#define MX_DATA_EVENTCONTENTSCENARIOINFO_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x18427E0)
#define MX_DATA_EVENTCONTENTSCENARIOINFO_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x18427F0)
#define MX_DATA_EVENTCONTENTSCENARIOINFO_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1842800)
#define MX_DATA_EVENTCONTENTSCENARIOINFO_GET_PARCELCOST_OFFSET UNITYSDK_OFFSET(0x1842810)
#define MX_DATA_EVENTCONTENTSCENARIOINFO_SET_SCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x18428A0)
#define MX_DATA_EVENTCONTENTSCENARIOINFO_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x18428B0)
#define MX_DATA_EVENTCONTENTSCENARIOINFO_GET_ISMEETUP_OFFSET UNITYSDK_OFFSET(0x18428C0)
#define MX_DATA_EVENTCONTENTSCENARIOINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18428D0)
#define MX_DATA_EVENTCONTENTSCENARIOINFO_SET_COSTS_OFFSET UNITYSDK_OFFSET(0x1842DC0)
#define MX_DATA_EVENTCONTENTSCENARIOINFO_SET_ISMEETUP_OFFSET UNITYSDK_OFFSET(0x1842DD0)
#define MX_DATA_EVENTCONTENTSCENARIOINFO_GET_COSTS_OFFSET UNITYSDK_OFFSET(0x1842DE0)
#define MX_DATA_EVENTCONTENTSCENARIOINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x1842DF0)
#define MX_DATA_EVENTCONTENTSCENARIOINFO_GET_ISRECOLLECTION_OFFSET UNITYSDK_OFFSET(0x1842E00)
#define MX_DATA_EVENTCONTENTSCENARIOINFO_SET_CLEAREDSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1842E10)
#define MX_DATA_EVENTCONTENTSCENARIOINFO_GET_CLEAREDSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1842E20)
#define MX_DATA_EVENTCONTENTSCENARIOINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x1842E30)
#define MX_DATA_EVENTCONTENTSCENARIOINFO_GET_ISOMNIBUS_OFFSET UNITYSDK_OFFSET(0x1842E40)
#define MX_DATA_EVENTCONTENTSCENARIOINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1842E50)
#define MX_DATA_EVENTCONTENTSCENARIOINFO_SET_ISRECOLLECTION_OFFSET UNITYSDK_OFFSET(0x1842E60)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentScenarioInfo_TypeDefinitionIndex = 15792;

	class EventContentScenarioInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::Int64 _EventContentId_k__BackingField; // 0x18
		::System::Int64 _Order_k__BackingField; // 0x20
		::System::Boolean _IsMeetUp_k__BackingField; // 0x28
		::System::Boolean _IsRecollection_k__BackingField; // 0x29
		::System::Boolean _IsOmnibus_k__BackingField; // 0x2A
		::System::Int64 _ClearedScenarioGroupId_k__BackingField; // 0x30
		Il2CppObject* _ScenarioGroupId_k__BackingField; // 0x38
		Il2CppObject* _Costs_k__BackingField; // 0x40
		Il2CppObject* _Rewards_k__BackingField; // 0x48

		Il2CppObject* get_ScenarioGroupId()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSCENARIOINFO_GET_SCENARIOGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_Order(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSCENARIOINFO_SET_ORDER_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsOmnibus(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSCENARIOINFO_SET_ISOMNIBUS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Order()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSCENARIOINFO_GET_ORDER_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSCENARIOINFO_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Rewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSCENARIOINFO_SET_REWARDS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelCost* get_ParcelCost()
		{
			return (return (::MX::GameLogic::Parcel::ParcelCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSCENARIOINFO_GET_PARCELCOST_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioGroupId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSCENARIOINFO_SET_SCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSCENARIOINFO_GET_REWARDS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMeetUp()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSCENARIOINFO_GET_ISMEETUP_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentScenarioExcel* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentScenarioExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSCENARIOINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_Costs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSCENARIOINFO_SET_COSTS_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsMeetUp(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSCENARIOINFO_SET_ISMEETUP_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Costs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSCENARIOINFO_GET_COSTS_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSCENARIOINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsRecollection()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSCENARIOINFO_GET_ISRECOLLECTION_OFFSET))(nullptr);
		}

		::System::Void set_ClearedScenarioGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSCENARIOINFO_SET_CLEAREDSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ClearedScenarioGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSCENARIOINFO_GET_CLEAREDSCENARIOGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSCENARIOINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsOmnibus()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSCENARIOINFO_GET_ISOMNIBUS_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSCENARIOINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_IsRecollection(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSCENARIOINFO_SET_ISRECOLLECTION_OFFSET))(arg, nullptr);
		}

	};
}

