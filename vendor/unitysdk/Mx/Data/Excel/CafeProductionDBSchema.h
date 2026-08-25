#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CAFEPRODUCTIONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19FA740)
#define MX_DATA_EXCEL_CAFEPRODUCTIONDBSCHEMA_SET_CAFEID_OFFSET UNITYSDK_OFFSET(0x19FA750)
#define MX_DATA_EXCEL_CAFEPRODUCTIONDBSCHEMA_GET_CAFEID_OFFSET UNITYSDK_OFFSET(0x19FA760)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CafeProductionDBSchema_TypeDefinitionIndex = 16848;

	class CafeProductionDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _CafeId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CafeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONDBSCHEMA_SET_CAFEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CafeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONDBSCHEMA_GET_CAFEID_OFFSET))(nullptr);
		}

	};
}

