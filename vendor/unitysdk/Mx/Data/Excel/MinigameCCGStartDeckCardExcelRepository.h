#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCELREPOSITORY_SELECT_CCGID_OFFSET UNITYSDK_OFFSET(0x1BA3EC0)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCELREPOSITORY_SELECTFIRST_CCGID_OFFSET UNITYSDK_OFFSET(0x1BA41C0)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BA44E0)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCELREPOSITORY_SELECT_CCGIDS_OFFSET UNITYSDK_OFFSET(0x1BA4520)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1BA4920)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGStartDeckCardExcelRepository_TypeDefinitionIndex = 18564;

	class MinigameCCGStartDeckCardExcelRepository : public ::MXUnderCover::UCConditionAlwaysFalse
	{
	public:
		Il2CppObject* Select_CCGId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCELREPOSITORY_SELECT_CCGID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_CCGId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCELREPOSITORY_SELECTFIRST_CCGID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_CCGIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCELREPOSITORY_SELECT_CCGIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

