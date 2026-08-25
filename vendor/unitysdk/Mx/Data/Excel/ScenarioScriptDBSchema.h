#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCENARIOSCRIPTDBSCHEMA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C67D20)
#define MX_DATA_EXCEL_SCENARIOSCRIPTDBSCHEMA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C67D30)
#define MX_DATA_EXCEL_SCENARIOSCRIPTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C67D40)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioScriptDBSchema_TypeDefinitionIndex = 19319;

	class ScenarioScriptDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _GroupId_k__BackingField; // 0x20

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTDBSCHEMA_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTDBSCHEMA_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOSCRIPTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

