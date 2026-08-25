#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class DisplayGroupType; }

#define MX_DATA_EXCEL_KEYMAPPINGGROUPINFODBSCHEMA_SET_DISPLAYGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1B6FCE0)
#define MX_DATA_EXCEL_KEYMAPPINGGROUPINFODBSCHEMA_GET_DISPLAYGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1B6FCF0)
#define MX_DATA_EXCEL_KEYMAPPINGGROUPINFODBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B6FD00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int KeyMappingGroupInfoDBSchema_TypeDefinitionIndex = 18312;

	class KeyMappingGroupInfoDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::DisplayGroupType* _DisplayGroupType_k__BackingField; // 0x20

		::System::Void set_DisplayGroupType(::FlatData::DisplayGroupType* arg)
		{
			((::System::Void(*)(::FlatData::DisplayGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGGROUPINFODBSCHEMA_SET_DISPLAYGROUPTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::DisplayGroupType* get_DisplayGroupType()
		{
			return (return (::FlatData::DisplayGroupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGGROUPINFODBSCHEMA_GET_DISPLAYGROUPTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGGROUPINFODBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

