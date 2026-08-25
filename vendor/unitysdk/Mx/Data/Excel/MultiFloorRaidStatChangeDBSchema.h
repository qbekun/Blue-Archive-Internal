#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEDBSCHEMA_SET_STATCHANGEID_OFFSET UNITYSDK_OFFSET(0x1C1BD60)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEDBSCHEMA_GET_STATCHANGEID_OFFSET UNITYSDK_OFFSET(0x1C1BD70)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C1BD80)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MultiFloorRaidStatChangeDBSchema_TypeDefinitionIndex = 18975;

	class MultiFloorRaidStatChangeDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _StatChangeId_k__BackingField; // 0x20

		::System::Void set_StatChangeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEDBSCHEMA_SET_STATCHANGEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StatChangeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEDBSCHEMA_GET_STATCHANGEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

