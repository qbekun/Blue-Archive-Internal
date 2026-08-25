#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B99FE0)
#define MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B9A020)
#define MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B9A420)
#define MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B9A590)
#define MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B9A8B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGLogicEffectExcelRepository_TypeDefinitionIndex = 18509;

	class MinigameCCGLogicEffectExcelRepository : public ::MXUnderCover::UCConditionAnd
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLOGICEFFECTEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

