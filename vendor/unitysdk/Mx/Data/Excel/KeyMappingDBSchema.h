#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_KEYMAPPINGDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B6ECD0)
#define MX_DATA_EXCEL_KEYMAPPINGDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B6ECE0)
#define MX_DATA_EXCEL_KEYMAPPINGDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B6ECF0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int KeyMappingDBSchema_TypeDefinitionIndex = 18305;

	class KeyMappingDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::String* _Id_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_Id()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDBSCHEMA_SET_ID_OFFSET))(str, nullptr);
		}

	};
}

