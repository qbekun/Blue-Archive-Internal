#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CAFEINFODBSCHEMA_SET_CAFEID_OFFSET UNITYSDK_OFFSET(0x19F7A30)
#define MX_DATA_EXCEL_CAFEINFODBSCHEMA_GET_CAFEID_OFFSET UNITYSDK_OFFSET(0x19F7A40)
#define MX_DATA_EXCEL_CAFEINFODBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19F7A50)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CafeInfoDBSchema_TypeDefinitionIndex = 16834;

	class CafeInfoDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _CafeId_k__BackingField; // 0x20

		::System::Void set_CafeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFODBSCHEMA_SET_CAFEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CafeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFODBSCHEMA_GET_CAFEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFODBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

