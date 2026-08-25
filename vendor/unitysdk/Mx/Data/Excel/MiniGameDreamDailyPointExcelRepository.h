#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BAE5A0)
#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1BAE8C0)
#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BAECC0)
#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1BAEFC0)
#define MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BAF130)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDreamDailyPointExcelRepository_TypeDefinitionIndex = 18616;

	class MiniGameDreamDailyPointExcelRepository : public PlayerMovingBlock
	{
	public:
		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMDAILYPOINTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

