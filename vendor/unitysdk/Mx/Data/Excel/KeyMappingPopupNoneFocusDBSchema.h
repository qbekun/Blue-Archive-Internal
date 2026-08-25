#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSDBSCHEMA_SET_PREFABNAME_OFFSET UNITYSDK_OFFSET(0x1B720E0)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSDBSCHEMA_GET_PREFABNAME_OFFSET UNITYSDK_OFFSET(0x1B720F0)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B72100)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int KeyMappingPopupNoneFocusDBSchema_TypeDefinitionIndex = 18326;

	class KeyMappingPopupNoneFocusDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::String* _PrefabName_k__BackingField; // 0x20

		::System::Void set_PrefabName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSDBSCHEMA_SET_PREFABNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_PrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSDBSCHEMA_GET_PREFABNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

