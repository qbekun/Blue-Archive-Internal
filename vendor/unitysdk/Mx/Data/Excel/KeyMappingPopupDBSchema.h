#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_KEYMAPPINGPOPUPDBSCHEMA_GET_PREFABNAME_OFFSET UNITYSDK_OFFSET(0x1B710B0)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B710C0)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPDBSCHEMA_SET_PREFABNAME_OFFSET UNITYSDK_OFFSET(0x1B710D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int KeyMappingPopupDBSchema_TypeDefinitionIndex = 18319;

	class KeyMappingPopupDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::String* _PrefabName_k__BackingField; // 0x20

		::System::String* get_PrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPDBSCHEMA_GET_PREFABNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_PrefabName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPDBSCHEMA_SET_PREFABNAME_OFFSET))(str, nullptr);
		}

	};
}

