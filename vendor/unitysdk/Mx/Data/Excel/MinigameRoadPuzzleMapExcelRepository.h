#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BCCEB0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BCD1D0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCELREPOSITORY_SELECT_MAPGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1BCD4F0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BCD900)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1BCDC10)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1BCDF70)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1BCE370)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCELREPOSITORY_SELECT_MAPGROUPID_OFFSET UNITYSDK_OFFSET(0x1BCE780)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCELREPOSITORY_SELECTFIRST_MAPGROUPID_OFFSET UNITYSDK_OFFSET(0x1BCEA90)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BCEDB0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BCF0B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameRoadPuzzleMapExcelRepository_TypeDefinitionIndex = 18755;

	class MinigameRoadPuzzleMapExcelRepository : public ::MXUnderCover::IUCEntityComposition
	{
	public:
		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_MapGroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCELREPOSITORY_SELECT_MAPGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_UniqueIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_MapGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCELREPOSITORY_SELECT_MAPGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_MapGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCELREPOSITORY_SELECTFIRST_MAPGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEMAPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

