#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCELREPOSITORY_SELECTFIRST_SKILLID_OFFSET UNITYSDK_OFFSET(0x1B5B500)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCELREPOSITORY_SELECT_SKILLIDS_OFFSET UNITYSDK_OFFSET(0x1B5B820)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B5BC20)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCELREPOSITORY_SELECT_SKILLID_OFFSET UNITYSDK_OFFSET(0x1B5BC60)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B5BF60)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int InteractiveWorldRaidCarrierRecipeExcelRepository_TypeDefinitionIndex = 18238;

	class InteractiveWorldRaidCarrierRecipeExcelRepository : public <GetEnumerator>d__2
	{
	public:
		Il2CppObject* SelectFirst_SkillId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCELREPOSITORY_SELECTFIRST_SKILLID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_SkillIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCELREPOSITORY_SELECT_SKILLIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_SkillId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCELREPOSITORY_SELECT_SKILLID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDCARRIERRECIPEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

