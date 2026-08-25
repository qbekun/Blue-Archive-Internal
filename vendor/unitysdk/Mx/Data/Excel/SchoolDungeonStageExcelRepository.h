#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCELREPOSITORY_SELECTFIRST_STAGEID_OFFSET UNITYSDK_OFFSET(0x1C6D8A0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCELREPOSITORY_SELECT_STAGEIDS_OFFSET UNITYSDK_OFFSET(0x1C6DBC0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C6DFC0)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCELREPOSITORY_SELECT_STAGEID_OFFSET UNITYSDK_OFFSET(0x1C6E000)
#define MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C6E300)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int SchoolDungeonStageExcelRepository_TypeDefinitionIndex = 19352;

	class SchoolDungeonStageExcelRepository : public SaveDataInternal
	{
	public:
		Il2CppObject* SelectFirst_StageId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCELREPOSITORY_SELECTFIRST_STAGEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_StageIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCELREPOSITORY_SELECT_STAGEIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_StageId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCELREPOSITORY_SELECT_STAGEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCHOOLDUNGEONSTAGEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

