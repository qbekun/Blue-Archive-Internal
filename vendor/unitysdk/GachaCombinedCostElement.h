#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelCost; }
namespace FlatData { class GachaTicketType; }
namespace MX::Data::Excel { class GachaCombinedCostExcel; }

#define GACHACOMBINEDCOSTELEMENT_GET_CONSUMEGACHATICKETAMOUNT_OFFSET UNITYSDK_OFFSET(0x1849320)
#define GACHACOMBINEDCOSTELEMENT_SET_CONSUMEGACHATICKETAMOUNT_OFFSET UNITYSDK_OFFSET(0x1849330)
#define GACHACOMBINEDCOSTELEMENT_SET_CONSUMEGACHATICKETTYPE_OFFSET UNITYSDK_OFFSET(0x1849340)
#define GACHACOMBINEDCOSTELEMENT_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1849350)
#define GACHACOMBINEDCOSTELEMENT_GET_CONSUMEPARCELCOST_OFFSET UNITYSDK_OFFSET(0x1849360)
#define GACHACOMBINEDCOSTELEMENT_GET_CONSUMEGACHATICKETTYPE_OFFSET UNITYSDK_OFFSET(0x1849370)
#define GACHACOMBINEDCOSTELEMENT_SET_CONSUMEPARCELCOST_OFFSET UNITYSDK_OFFSET(0x1849380)
#define GACHACOMBINEDCOSTELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x18491F0)
#define GACHACOMBINEDCOSTELEMENT_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1849390)

	inline static constexpr unsigned int GachaCombinedCostElement_TypeDefinitionIndex = 15827;

	class GachaCombinedCostElement : public Il2CppObject
	{
	public:
		::System::Int64 _Priority_k__BackingField; // 0x10
		::MX::GameLogic::Parcel::ParcelCost* _ConsumeParcelCost_k__BackingField; // 0x18
		::FlatData::GachaTicketType* _ConsumeGachaTicketType_k__BackingField; // 0x20
		::System::Int64 _ConsumeGachaTicketAmount_k__BackingField; // 0x28

		::System::Int64 get_ConsumeGachaTicketAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHACOMBINEDCOSTELEMENT_GET_CONSUMEGACHATICKETAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_ConsumeGachaTicketAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + GACHACOMBINEDCOSTELEMENT_SET_CONSUMEGACHATICKETAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_ConsumeGachaTicketType(::FlatData::GachaTicketType* arg)
		{
			((::System::Void(*)(::FlatData::GachaTicketType*, ::PVOID))((::PBYTE)hIl2Cpp + GACHACOMBINEDCOSTELEMENT_SET_CONSUMEGACHATICKETTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Priority()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHACOMBINEDCOSTELEMENT_GET_PRIORITY_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelCost* get_ConsumeParcelCost()
		{
			return (return (::MX::GameLogic::Parcel::ParcelCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHACOMBINEDCOSTELEMENT_GET_CONSUMEPARCELCOST_OFFSET))(nullptr);
		}

		::FlatData::GachaTicketType* get_ConsumeGachaTicketType()
		{
			return (return (::FlatData::GachaTicketType*(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHACOMBINEDCOSTELEMENT_GET_CONSUMEGACHATICKETTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ConsumeParcelCost(::MX::GameLogic::Parcel::ParcelCost* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelCost*, ::PVOID))((::PBYTE)hIl2Cpp + GACHACOMBINEDCOSTELEMENT_SET_CONSUMEPARCELCOST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::GachaCombinedCostExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::GachaCombinedCostExcel*, ::PVOID))((::PBYTE)hIl2Cpp + GACHACOMBINEDCOSTELEMENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_Priority(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + GACHACOMBINEDCOSTELEMENT_SET_PRIORITY_OFFSET))(arg, nullptr);
		}

	};

