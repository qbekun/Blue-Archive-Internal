#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_FIELDWARPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B1FDE0)
#define MX_DATA_EXCEL_FIELDWARPDBSCHEMA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1B1FDF0)
#define MX_DATA_EXCEL_FIELDWARPDBSCHEMA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1B1FE00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FieldWarpDBSchema_TypeDefinitionIndex = 17983;

	class FieldWarpDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPDBSCHEMA_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPDBSCHEMA_GET_UNIQUEID_OFFSET))(nullptr);
		}

	};
}

