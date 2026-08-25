#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ASSISTSLOTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19DB840)
#define MX_DATA_EXCEL_ASSISTSLOTDBSCHEMA_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0x19DB850)
#define MX_DATA_EXCEL_ASSISTSLOTDBSCHEMA_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0x19DB860)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AssistSlotDBSchema_TypeDefinitionIndex = 16700;

	class AssistSlotDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _SlotId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_SlotId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTDBSCHEMA_GET_SLOTID_OFFSET))(nullptr);
		}

		::System::Void set_SlotId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTSLOTDBSCHEMA_SET_SLOTID_OFFSET))(arg, nullptr);
		}

	};
}

