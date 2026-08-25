#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CURRENCYDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A7B6C0)
#define MX_DATA_EXCEL_CURRENCYDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1A7B6D0)
#define MX_DATA_EXCEL_CURRENCYDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A7B6E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CurrencyDBSchema_TypeDefinitionIndex = 17365;

	class CurrencyDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _ID_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ID(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CURRENCYDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

	};
}

