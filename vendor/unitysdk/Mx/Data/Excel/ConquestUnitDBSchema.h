#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CONQUESTUNITDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A6CFD0)
#define MX_DATA_EXCEL_CONQUESTUNITDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A6CFE0)
#define MX_DATA_EXCEL_CONQUESTUNITDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1A6CFF0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestUnitDBSchema_TypeDefinitionIndex = 17303;

	class ConquestUnitDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNITDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

