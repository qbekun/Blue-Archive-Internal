#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALDBSCHEMA_SET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0x1C57F30)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALDBSCHEMA_GET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0x1C57F40)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C57F50)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioBGName_GlobalDBSchema_TypeDefinitionIndex = 19249;

	class ScenarioBGName_GlobalDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::UInt32 _GroupName_k__BackingField; // 0x20

		::System::Void set_GroupName(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALDBSCHEMA_SET_GROUPNAME_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_GroupName()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALDBSCHEMA_GET_GROUPNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

