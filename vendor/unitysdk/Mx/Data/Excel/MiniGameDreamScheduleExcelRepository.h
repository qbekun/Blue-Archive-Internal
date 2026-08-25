#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1BB97D0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB9A30)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB9D50)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1BBA050)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_DREAMMAKERSCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x1BBA450)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCELREPOSITORY_SELECT_EVENTCONTENTID_DREAMMAKERSCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x1BBA850)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCELREPOSITORY_SELECT_EVENTCONTENTID_DREAMMAKERSCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x1BBAC30)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BBB1D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDreamScheduleExcelRepository_TypeDefinitionIndex = 18670;

	class MiniGameDreamScheduleExcelRepository : public AnimationChangeStateTriggeredPlayer
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_DreamMakerScheduleGroupId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_DREAMMAKERSCHEDULEGROUPID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_DreamMakerScheduleGroupId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCELREPOSITORY_SELECT_EVENTCONTENTID_DREAMMAKERSCHEDULEGROUPID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_DreamMakerScheduleGroupId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCELREPOSITORY_SELECT_EVENTCONTENTID_DREAMMAKERSCHEDULEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

