#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C00920)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_DICEGROUP_OFFSET UNITYSDK_OFFSET(0x1C00A90)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCELREPOSITORY_SELECT_EVENTCONTENTID_DICEGROUP_OFFSET UNITYSDK_OFFSET(0x1C00E90)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCELREPOSITORY_SELECT_EVENTCONTENTID_DICEGROUP_OFFSET UNITYSDK_OFFSET(0x1C01270)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C01810)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameTBGDiceExcelRepository_TypeDefinitionIndex = 18865;

	class MinigameTBGDiceExcelRepository : public ::MXUnderCover::UCInteractionToggle
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_DiceGroup(::System::Int64 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_DICEGROUP_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_DiceGroup(::System::Int64 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCELREPOSITORY_SELECT_EVENTCONTENTID_DICEGROUP_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_DiceGroup(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCELREPOSITORY_SELECT_EVENTCONTENTID_DICEGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

