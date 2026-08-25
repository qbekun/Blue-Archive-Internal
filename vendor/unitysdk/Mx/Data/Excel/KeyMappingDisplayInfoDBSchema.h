#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFODBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B6CD80)
#define MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFODBSCHEMA_GET_KEYMAPPINGKEYCODE_OFFSET UNITYSDK_OFFSET(0x1B6CD90)
#define MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFODBSCHEMA_SET_KEYMAPPINGKEYCODE_OFFSET UNITYSDK_OFFSET(0x1B6CDA0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int KeyMappingDisplayInfoDBSchema_TypeDefinitionIndex = 18298;

	class KeyMappingDisplayInfoDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::String* _KeyMappingKeyCode_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFODBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_KeyMappingKeyCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFODBSCHEMA_GET_KEYMAPPINGKEYCODE_OFFSET))(nullptr);
		}

		::System::Void set_KeyMappingKeyCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGDISPLAYINFODBSCHEMA_SET_KEYMAPPINGKEYCODE_OFFSET))(str, nullptr);
		}

	};
}

