#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEDBSCHEMA_SET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x1C5A960)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A970)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEDBSCHEMA_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x1C5A980)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioCharacterNameDBSchema_TypeDefinitionIndex = 19263;

	class ScenarioCharacterNameDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::UInt32 _CharacterName_k__BackingField; // 0x20

		::System::Void set_CharacterName(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEDBSCHEMA_SET_CHARACTERNAME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::UInt32 get_CharacterName()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEDBSCHEMA_GET_CHARACTERNAME_OFFSET))(nullptr);
		}

	};
}

