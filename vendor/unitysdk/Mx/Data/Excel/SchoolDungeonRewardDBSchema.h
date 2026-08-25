#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDDBSCHEMA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C6B6A0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C6B6B0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONREWARDDBSCHEMA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C6B6C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int SchoolDungeonRewardDBSchema_TypeDefinitionIndex = 19340;

	class SchoolDungeonRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _GroupId_k__BackingField; // 0x20

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDDBSCHEMA_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONREWARDDBSCHEMA_SET_GROUPID_OFFSET))(arg, nullptr);
		}

	};
}

