#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B917F0)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B91B10)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B91D70)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B92090)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET UNITYSDK_OFFSET(0x1B920D0)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B924E0)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCELREPOSITORY_SELECT_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B928E0)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B92BF0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGEnemyExcelRepository_TypeDefinitionIndex = 18467;

	class MinigameCCGEnemyExcelRepository : public ::MXUnderCover::UCAction
	{
	public:
		Il2CppObject* SelectFirst_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_GroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCELREPOSITORY_SELECT_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

