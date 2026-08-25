#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C5BD50)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETDBSCHEMA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1C5BD60)
#define MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETDBSCHEMA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C5BD70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioCharacterSituationSetDBSchema_TypeDefinitionIndex = 19270;

	class ScenarioCharacterSituationSetDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::UInt32 _Name_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETDBSCHEMA_SET_NAME_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_Name()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERSITUATIONSETDBSCHEMA_GET_NAME_OFFSET))(nullptr);
		}

	};
}

