#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelCost; }
namespace FlatData { class GachaTicketType; }
namespace MX::Data::Excel { class GachaCombinedCostExcel; }

#define MX_DATA_GACHACOMBINEDCOSTDATAINFO_SET_GACHACOMBINEDCOSTLIST_OFFSET UNITYSDK_OFFSET(0x1848D20)
#define MX_DATA_GACHACOMBINEDCOSTDATAINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1848D30)
#define MX_DATA_GACHACOMBINEDCOSTDATAINFO_SORT_OFFSET UNITYSDK_OFFSET(0x1848D40)
#define MX_DATA_GACHACOMBINEDCOSTDATAINFO_GET_GACHACOMBINEDCOSTLIST_OFFSET UNITYSDK_OFFSET(0x1848EA0)
#define MX_DATA_GACHACOMBINEDCOSTDATAINFO_VALIDATECOST_OFFSET UNITYSDK_OFFSET(0x1848EB0)
#define MX_DATA_GACHACOMBINEDCOSTDATAINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1849070)
#define MX_DATA_GACHACOMBINEDCOSTDATAINFO_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1849100)
#define MX_DATA_GACHACOMBINEDCOSTDATAINFO_ADD_OFFSET UNITYSDK_OFFSET(0x1849110)

namespace MX::Data
{
	inline static constexpr unsigned int GachaCombinedCostDataInfo_TypeDefinitionIndex = 15829;

	class GachaCombinedCostDataInfo : public Il2CppObject
	{
	public:
		::System::Int64 _GroupId_k__BackingField; // 0x10
		Il2CppObject* _GachaCombinedCostList_k__BackingField; // 0x18

		::System::Void set_GachaCombinedCostList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHACOMBINEDCOSTDATAINFO_SET_GACHACOMBINEDCOSTLIST_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHACOMBINEDCOSTDATAINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void Sort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHACOMBINEDCOSTDATAINFO_SORT_OFFSET))(nullptr);
		}

		Il2CppObject* get_GachaCombinedCostList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHACOMBINEDCOSTDATAINFO_GET_GACHACOMBINEDCOSTLIST_OFFSET))(nullptr);
		}

		::System::Boolean ValidateCost(::MX::GameLogic::Parcel::ParcelCost* arg, ::FlatData::GachaTicketType* arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::MX::GameLogic::Parcel::ParcelCost*, ::FlatData::GachaTicketType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHACOMBINEDCOSTDATAINFO_VALIDATECOST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::GachaCombinedCostExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::GachaCombinedCostExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHACOMBINEDCOSTDATAINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHACOMBINEDCOSTDATAINFO_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::MX::Data::Excel::GachaCombinedCostExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::GachaCombinedCostExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHACOMBINEDCOSTDATAINFO_ADD_OFFSET))(arg, nullptr);
		}

	};
}

