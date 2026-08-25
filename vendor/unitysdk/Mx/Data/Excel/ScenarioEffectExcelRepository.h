#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCENARIOEFFECTEXCELREPOSITORY_SELECT_NAME_OFFSET UNITYSDK_OFFSET(0x1C5E730)
#define MX_DATA_EXCEL_SCENARIOEFFECTEXCELREPOSITORY_SELECT_NAMES_OFFSET UNITYSDK_OFFSET(0x1C5EA30)
#define MX_DATA_EXCEL_SCENARIOEFFECTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C5EE30)
#define MX_DATA_EXCEL_SCENARIOEFFECTEXCELREPOSITORY_SELECTFIRST_NAME_OFFSET UNITYSDK_OFFSET(0x1C5EFA0)
#define MX_DATA_EXCEL_SCENARIOEFFECTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F2C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioEffectExcelRepository_TypeDefinitionIndex = 19289;

	class ScenarioEffectExcelRepository : public ::MXUnderCover::UCParticleModel
	{
	public:
		Il2CppObject* Select_Name(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOEFFECTEXCELREPOSITORY_SELECT_NAME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Names(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOEFFECTEXCELREPOSITORY_SELECT_NAMES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOEFFECTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Name(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOEFFECTEXCELREPOSITORY_SELECTFIRST_NAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOEFFECTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

