#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D870)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEDBSCHEMA_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1C6D880)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEDBSCHEMA_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1C6D890)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int SchoolDungeonStageDBSchema_TypeDefinitionIndex = 19347;

	class SchoolDungeonStageDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _StageId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_StageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEDBSCHEMA_SET_STAGEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEDBSCHEMA_GET_STAGEID_OFFSET))(nullptr);
		}

	};
}

