#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ARENANPCDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19D2120)
#define MX_DATA_EXCEL_ARENANPCDBSCHEMA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D2130)
#define MX_DATA_EXCEL_ARENANPCDBSCHEMA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D2140)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ArenaNPCDBSchema_TypeDefinitionIndex = 16652;

	class ArenaNPCDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCDBSCHEMA_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCDBSCHEMA_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

	};
}

