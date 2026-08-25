#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BCB4E0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BCB520)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BCB840)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1BCBB40)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1BCBF40)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameRoadPuzzleInfoExcelRepository_TypeDefinitionIndex = 18742;

	class MiniGameRoadPuzzleInfoExcelRepository : public MoveToPosition
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEINFOEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

