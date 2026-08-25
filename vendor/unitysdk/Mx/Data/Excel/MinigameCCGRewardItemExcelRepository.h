#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BA1B40)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1BA1B80)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCELREPOSITORY_SELECT_CCGID_OFFSET UNITYSDK_OFFSET(0x1BA1CF0)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCELREPOSITORY_SELECT_CCGIDS_OFFSET UNITYSDK_OFFSET(0x1BA1FF0)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCELREPOSITORY_SELECTFIRST_CCGID_OFFSET UNITYSDK_OFFSET(0x1BA23F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGRewardItemExcelRepository_TypeDefinitionIndex = 18550;

	class MinigameCCGRewardItemExcelRepository : public ::MXUnderCover::UCConditionAllPlayerInSaveArea
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_CCGId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCELREPOSITORY_SELECT_CCGID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CCGIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCELREPOSITORY_SELECT_CCGIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_CCGId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDITEMEXCELREPOSITORY_SELECTFIRST_CCGID_OFFSET))(arg, arg, nullptr);
		}

	};
}

