#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ACCOUNTLEVELDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19CACE0)
#define MX_DATA_EXCEL_ACCOUNTLEVELDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x19CACF0)
#define MX_DATA_EXCEL_ACCOUNTLEVELDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x19CAD00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AccountLevelDBSchema_TypeDefinitionIndex = 16614;

	class AccountLevelDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

	};
}

