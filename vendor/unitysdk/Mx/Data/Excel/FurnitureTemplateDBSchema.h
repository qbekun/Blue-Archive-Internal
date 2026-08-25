#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_FURNITURETEMPLATEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B2F350)
#define MX_DATA_EXCEL_FURNITURETEMPLATEDBSCHEMA_GET_FURNITURETEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1B2F360)
#define MX_DATA_EXCEL_FURNITURETEMPLATEDBSCHEMA_SET_FURNITURETEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1B2F370)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FurnitureTemplateDBSchema_TypeDefinitionIndex = 18039;

	class FurnitureTemplateDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _FurnitureTemplateId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_FurnitureTemplateId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEDBSCHEMA_GET_FURNITURETEMPLATEID_OFFSET))(nullptr);
		}

		::System::Void set_FurnitureTemplateId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEDBSCHEMA_SET_FURNITURETEMPLATEID_OFFSET))(arg, nullptr);
		}

	};
}

