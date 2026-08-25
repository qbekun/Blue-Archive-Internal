#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_KEYMAPPINGTABDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B73770)
#define MX_DATA_EXCEL_KEYMAPPINGTABDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B73780)
#define MX_DATA_EXCEL_KEYMAPPINGTABDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B73790)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int KeyMappingTabDBSchema_TypeDefinitionIndex = 18333;

	class KeyMappingTabDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::String* _Id_k__BackingField; // 0x20

		::System::Void set_Id(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABDBSCHEMA_SET_ID_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_Id()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

	};
}

