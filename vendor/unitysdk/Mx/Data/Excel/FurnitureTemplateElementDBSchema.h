#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTDBSCHEMA_SET_FURNITURETEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1B2E170)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B2E180)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTDBSCHEMA_GET_FURNITURETEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1B2E190)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FurnitureTemplateElementDBSchema_TypeDefinitionIndex = 18032;

	class FurnitureTemplateElementDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _FurnitureTemplateId_k__BackingField; // 0x20

		::System::Void set_FurnitureTemplateId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTDBSCHEMA_SET_FURNITURETEMPLATEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_FurnitureTemplateId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTDBSCHEMA_GET_FURNITURETEMPLATEID_OFFSET))(nullptr);
		}

	};
}

