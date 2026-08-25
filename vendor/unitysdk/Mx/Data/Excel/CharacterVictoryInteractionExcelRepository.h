#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCELREPOSITORY_SELECT_COSTUMEID01_OFFSET UNITYSDK_OFFSET(0x1A42F50)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCELREPOSITORY_SELECT_COSTUMEID01S_OFFSET UNITYSDK_OFFSET(0x1A43250)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A43650)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCELREPOSITORY_SELECTFIRST_COSTUMEID01_OFFSET UNITYSDK_OFFSET(0x1A437C0)
#define MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A43AE0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterVictoryInteractionExcelRepository_TypeDefinitionIndex = 17123;

	class CharacterVictoryInteractionExcelRepository : public ::FlatData::DialogCondition
	{
	public:
		Il2CppObject* Select_CostumeId01(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCELREPOSITORY_SELECT_COSTUMEID01_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CostumeId01s(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCELREPOSITORY_SELECT_COSTUMEID01S_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_CostumeId01(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCELREPOSITORY_SELECTFIRST_COSTUMEID01_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVICTORYINTERACTIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

