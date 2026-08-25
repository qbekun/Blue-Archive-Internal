#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C58FE0)
#define MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCELREPOSITORY_SELECT_NAME_OFFSET UNITYSDK_OFFSET(0x1C59150)
#define MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCELREPOSITORY_SELECT_NAMES_OFFSET UNITYSDK_OFFSET(0x1C59450)
#define MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C59850)
#define MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCELREPOSITORY_SELECTFIRST_NAME_OFFSET UNITYSDK_OFFSET(0x1C59890)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioCharacterEmotionExcelRepository_TypeDefinitionIndex = 19261;

	class ScenarioCharacterEmotionExcelRepository : public TemporaryDataInternal
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Name(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCELREPOSITORY_SELECT_NAME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Names(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCELREPOSITORY_SELECT_NAMES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Name(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTEREMOTIONEXCELREPOSITORY_SELECTFIRST_NAME_OFFSET))(arg, arg, nullptr);
		}

	};
}

