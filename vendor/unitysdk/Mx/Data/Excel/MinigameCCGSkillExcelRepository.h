#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1BA2E80)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1BA3280)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1BA3580)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1BA36F0)
#define MX_DATA_EXCEL_MINIGAMECCGSKILLEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BA3A10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGSkillExcelRepository_TypeDefinitionIndex = 18557;

	class MinigameCCGSkillExcelRepository : public ::MXUnderCover::UCConditionAlwaysTrue
	{
	public:
		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSKILLEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

