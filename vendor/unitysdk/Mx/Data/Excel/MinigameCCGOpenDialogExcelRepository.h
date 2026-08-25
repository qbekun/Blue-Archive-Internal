#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCELREPOSITORY_SELECTFIRST_DIALOGID_OFFSET UNITYSDK_OFFSET(0x1B9B3B0)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCELREPOSITORY_SELECTFIRST_CONDITIONCARD_OFFSET UNITYSDK_OFFSET(0x1B9B6D0)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B9F0)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCELREPOSITORY_SELECT_DIALOGIDS_OFFSET UNITYSDK_OFFSET(0x1B9BA30)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCELREPOSITORY_SELECT_CONDITIONCARD_OFFSET UNITYSDK_OFFSET(0x1B9BE30)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B9C140)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCELREPOSITORY_SELECT_CONDITIONCARDS_OFFSET UNITYSDK_OFFSET(0x1B9C3A0)
#define MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCELREPOSITORY_SELECT_DIALOGID_OFFSET UNITYSDK_OFFSET(0x1B9C7B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGOpenDialogExcelRepository_TypeDefinitionIndex = 18519;

	class MinigameCCGOpenDialogExcelRepository : public ::MXUnderCover::UCConditionEntityType
	{
	public:
		Il2CppObject* SelectFirst_DialogId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCELREPOSITORY_SELECTFIRST_DIALOGID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_ConditionCard(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCELREPOSITORY_SELECTFIRST_CONDITIONCARD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_DialogIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCELREPOSITORY_SELECT_DIALOGIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ConditionCard(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCELREPOSITORY_SELECT_CONDITIONCARD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_ConditionCards(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCELREPOSITORY_SELECT_CONDITIONCARDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_DialogId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGOPENDIALOGEXCELREPOSITORY_SELECT_DIALOGID_OFFSET))(arg, arg, nullptr);
		}

	};
}

