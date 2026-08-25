#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_WEEKDUNGEONEXCELREPOSITORY_SELECT_STAGEID_OFFSET UNITYSDK_OFFSET(0x1CBBC00)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCELREPOSITORY_SELECTFIRST_STAGEID_OFFSET UNITYSDK_OFFSET(0x1CBBF00)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CBC220)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCELREPOSITORY_SELECT_STAGEIDS_OFFSET UNITYSDK_OFFSET(0x1CBC260)
#define MX_DATA_EXCEL_WEEKDUNGEONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CBC660)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WeekDungeonExcelRepository_TypeDefinitionIndex = 19735;

	class WeekDungeonExcelRepository : public ::MXUnderCover::LoadedSavePointMessage
	{
	public:
		Il2CppObject* Select_StageId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCELREPOSITORY_SELECT_STAGEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_StageId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCELREPOSITORY_SELECTFIRST_STAGEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_StageIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCELREPOSITORY_SELECT_STAGEIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

