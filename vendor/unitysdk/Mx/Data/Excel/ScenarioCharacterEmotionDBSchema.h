#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONDBSCHEMA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1C58FB0)
#define MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONDBSCHEMA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C58FC0)
#define MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C58FD0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioCharacterEmotionDBSchema_TypeDefinitionIndex = 19256;

	class ScenarioCharacterEmotionDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::UInt32 _Name_k__BackingField; // 0x20

		::System::Void set_Name(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONDBSCHEMA_SET_NAME_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_Name()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONDBSCHEMA_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

