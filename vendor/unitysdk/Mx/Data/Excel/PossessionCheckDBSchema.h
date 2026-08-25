#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_POSSESSIONCHECKDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C920)
#define MX_DATA_EXCEL_POSSESSIONCHECKDBSCHEMA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C2C930)
#define MX_DATA_EXCEL_POSSESSIONCHECKDBSCHEMA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C2C940)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int PossessionCheckDBSchema_TypeDefinitionIndex = 19058;

	class PossessionCheckDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKDBSCHEMA_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKDBSCHEMA_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

	};
}

