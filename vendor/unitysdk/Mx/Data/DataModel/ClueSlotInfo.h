#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_DATAMODEL_CLUESLOTINFO_GET_COSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1984650)
#define MX_DATA_DATAMODEL_CLUESLOTINFO_GET_CLUEID_OFFSET UNITYSDK_OFFSET(0x1984660)
#define MX_DATA_DATAMODEL_CLUESLOTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x19845D0)
#define MX_DATA_DATAMODEL_CLUESLOTINFO_GET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0x1984670)

namespace MX::Data::DataModel
{
	inline static constexpr unsigned int ClueSlotInfo_TypeDefinitionIndex = 16534;

	class ClueSlotInfo : public Il2CppObject
	{
	public:
		::System::Int32 _SlotNumber_k__BackingField; // 0x10
		::System::Int64 _ClueId_k__BackingField; // 0x18
		::System::Int64 _CostAmount_k__BackingField; // 0x20

		::System::Int64 get_CostAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMODEL_CLUESLOTINFO_GET_COSTAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_ClueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMODEL_CLUESLOTINFO_GET_CLUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMODEL_CLUESLOTINFO_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_SlotNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DATAMODEL_CLUESLOTINFO_GET_SLOTNUMBER_OFFSET))(nullptr);
		}

	};
}

