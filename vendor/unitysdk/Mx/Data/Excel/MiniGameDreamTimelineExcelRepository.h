#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1BBDA30)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_DREAMMAKERDAYS_OFFSET UNITYSDK_OFFSET(0x1BBDC90)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCELREPOSITORY_SELECT_EVENTCONTENTID_DREAMMAKERDAYS_OFFSET UNITYSDK_OFFSET(0x1BBE090)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCELREPOSITORY_SELECT_EVENTCONTENTID_DREAMMAKERDAYS_OFFSET UNITYSDK_OFFSET(0x1BBE470)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_DREAMMAKERDAYS_DREAMMAKERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x1BBEA10)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCELREPOSITORY_SELECT_EVENTCONTENTID_DREAMMAKERDAYS_DREAMMAKERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x1BBEEF0)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCELREPOSITORY_SELECT_EVENTCONTENTID_DREAMMAKERDAYS_DREAMMAKERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x1BBF3C0)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BBFA00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDreamTimelineExcelRepository_TypeDefinitionIndex = 18687;

	class MiniGameDreamTimelineExcelRepository : public AnimationChangeStateTriggeredBT
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_DreamMakerDays(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_DREAMMAKERDAYS_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_DreamMakerDays(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCELREPOSITORY_SELECT_EVENTCONTENTID_DREAMMAKERDAYS_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_DreamMakerDays(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCELREPOSITORY_SELECT_EVENTCONTENTID_DREAMMAKERDAYS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_DreamMakerDays_DreamMakerActionPoint(::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_DREAMMAKERDAYS_DREAMMAKERACTIONPOINT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_DreamMakerDays_DreamMakerActionPoint(::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCELREPOSITORY_SELECT_EVENTCONTENTID_DREAMMAKERDAYS_DREAMMAKERACTIONPOINT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_DreamMakerDays_DreamMakerActionPoint(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCELREPOSITORY_SELECT_EVENTCONTENTID_DREAMMAKERDAYS_DREAMMAKERACTIONPOINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

