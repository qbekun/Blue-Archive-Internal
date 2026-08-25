#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SKILLDBSCHEMA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C89290)
#define MX_DATA_EXCEL_SKILLDBSCHEMA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1C892A0)
#define MX_DATA_EXCEL_SKILLDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C892B0)
#define MX_DATA_EXCEL_SKILLDBSCHEMA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1C892C0)
#define MX_DATA_EXCEL_SKILLDBSCHEMA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C892D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int SkillDBSchema_TypeDefinitionIndex = 19472;

	class SkillDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::String* _GroupId_k__BackingField; // 0x20
		::System::Int32 _Level_k__BackingField; // 0x28

		::System::String* get_GroupId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLDBSCHEMA_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLDBSCHEMA_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLDBSCHEMA_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SKILLDBSCHEMA_SET_GROUPID_OFFSET))(str, nullptr);
		}

	};
}

