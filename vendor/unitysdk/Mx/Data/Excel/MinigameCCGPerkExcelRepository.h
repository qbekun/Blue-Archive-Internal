#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B9D860)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B9DB60)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCELREPOSITORY_SELECT_CCGID_OFFSET UNITYSDK_OFFSET(0x1B9DE80)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E190)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B9E1D0)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCELREPOSITORY_SELECTFIRST_CCGID_OFFSET UNITYSDK_OFFSET(0x1B9E5D0)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCELREPOSITORY_SELECT_CCGIDS_OFFSET UNITYSDK_OFFSET(0x1B9E8F0)
#define MX_DATA_EXCEL_MINIGAMECCGPERKEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B9ED00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGPerkExcelRepository_TypeDefinitionIndex = 18529;

	class MinigameCCGPerkExcelRepository : public ::MXUnderCover::UCConditionHasItem
	{
	public:
		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CCGId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCELREPOSITORY_SELECT_CCGID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_CCGId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCELREPOSITORY_SELECTFIRST_CCGID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CCGIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCELREPOSITORY_SELECT_CCGIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGPERKEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

