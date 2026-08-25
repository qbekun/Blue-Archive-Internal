#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCELREPOSITORY_SELECT_MINIGAMEDEFENSEFIXEDSTATIDS_OFFSET UNITYSDK_OFFSET(0x1BA78A0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCELREPOSITORY_SELECTFIRST_MINIGAMEDEFENSEFIXEDSTATID_OFFSET UNITYSDK_OFFSET(0x1BA7CA0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BA7FC0)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCELREPOSITORY_SELECT_MINIGAMEDEFENSEFIXEDSTATID_OFFSET UNITYSDK_OFFSET(0x1BA8000)
#define MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1BA8300)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDefenseFixedStatExcelRepository_TypeDefinitionIndex = 18585;

	class MiniGameDefenseFixedStatExcelRepository : public Clear
	{
	public:
		Il2CppObject* Select_MinigameDefenseFixedStatIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCELREPOSITORY_SELECT_MINIGAMEDEFENSEFIXEDSTATIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_MinigameDefenseFixedStatId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCELREPOSITORY_SELECTFIRST_MINIGAMEDEFENSEFIXEDSTATID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_MinigameDefenseFixedStatId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCELREPOSITORY_SELECT_MINIGAMEDEFENSEFIXEDSTATID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDEFENSEFIXEDSTATEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

