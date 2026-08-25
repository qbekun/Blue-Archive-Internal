#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_FIELDSNSPOSTDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B1EB70)
#define MX_DATA_EXCEL_FIELDSNSPOSTDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B1EB80)
#define MX_DATA_EXCEL_FIELDSNSPOSTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B1EB90)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FieldSNSPostDBSchema_TypeDefinitionIndex = 17976;

	class FieldSNSPostDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

