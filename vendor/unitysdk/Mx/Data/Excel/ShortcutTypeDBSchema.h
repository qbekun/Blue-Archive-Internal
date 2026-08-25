#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SHORTCUTTYPEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C85D80)
#define MX_DATA_EXCEL_SHORTCUTTYPEDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C85D90)
#define MX_DATA_EXCEL_SHORTCUTTYPEDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C85DA0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShortcutTypeDBSchema_TypeDefinitionIndex = 19458;

	class ShortcutTypeDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

	};
}

