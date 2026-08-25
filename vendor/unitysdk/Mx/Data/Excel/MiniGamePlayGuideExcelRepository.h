#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BC4520)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1BC4820)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BC4990)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BC4CB0)
#define MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1BC4CF0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGamePlayGuideExcelRepository_TypeDefinitionIndex = 18708;

	class MiniGamePlayGuideExcelRepository : public MovePropInteractionStartPosition
	{
	public:
		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEPLAYGUIDEEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

