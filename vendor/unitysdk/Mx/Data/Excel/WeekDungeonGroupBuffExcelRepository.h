#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CBCE70)
#define MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCELREPOSITORY_SELECT_WEEKDUNGEONBUFFID_OFFSET UNITYSDK_OFFSET(0x1CBCFE0)
#define MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CBD2E0)
#define MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCELREPOSITORY_SELECTFIRST_WEEKDUNGEONBUFFID_OFFSET UNITYSDK_OFFSET(0x1CBD320)
#define MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCELREPOSITORY_SELECT_WEEKDUNGEONBUFFIDS_OFFSET UNITYSDK_OFFSET(0x1CBD640)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WeekDungeonGroupBuffExcelRepository_TypeDefinitionIndex = 19742;

	class WeekDungeonGroupBuffExcelRepository : public ::MXUnderCover::SwitchedPlayerMessage
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_WeekDungeonBuffId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCELREPOSITORY_SELECT_WEEKDUNGEONBUFFID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_WeekDungeonBuffId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCELREPOSITORY_SELECTFIRST_WEEKDUNGEONBUFFID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_WeekDungeonBuffIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WEEKDUNGEONGROUPBUFFEXCELREPOSITORY_SELECT_WEEKDUNGEONBUFFIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

