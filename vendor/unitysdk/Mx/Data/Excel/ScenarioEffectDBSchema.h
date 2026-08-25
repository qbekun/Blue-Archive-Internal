#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCENARIOEFFECTDBSCHEMA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1C5E700)
#define MX_DATA_EXCEL_SCENARIOEFFECTDBSCHEMA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C5E710)
#define MX_DATA_EXCEL_SCENARIOEFFECTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C5E720)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioEffectDBSchema_TypeDefinitionIndex = 19284;

	class ScenarioEffectDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::UInt32 _Name_k__BackingField; // 0x20

		::System::Void set_Name(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOEFFECTDBSCHEMA_SET_NAME_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_Name()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOEFFECTDBSCHEMA_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOEFFECTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

