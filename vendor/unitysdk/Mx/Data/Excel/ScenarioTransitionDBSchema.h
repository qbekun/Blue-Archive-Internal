#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCENARIOTRANSITIONDBSCHEMA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1C6A240)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C6A250)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONDBSCHEMA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C6A260)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioTransitionDBSchema_TypeDefinitionIndex = 19333;

	class ScenarioTransitionDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::UInt32 _Name_k__BackingField; // 0x20

		::System::Void set_Name(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONDBSCHEMA_SET_NAME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::UInt32 get_Name()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONDBSCHEMA_GET_NAME_OFFSET))(nullptr);
		}

	};
}

