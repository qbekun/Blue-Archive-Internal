#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1BBC130)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_DREAMMAKERSCHEDULEGROUP_OFFSET UNITYSDK_OFFSET(0x1BBC2A0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCELREPOSITORY_SELECT_EVENTCONTENTID_DREAMMAKERSCHEDULEGROUP_OFFSET UNITYSDK_OFFSET(0x1BBC6A0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCELREPOSITORY_SELECT_EVENTCONTENTID_DREAMMAKERSCHEDULEGROUP_OFFSET UNITYSDK_OFFSET(0x1BBCA80)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD020)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDreamScheduleResultExcelRepository_TypeDefinitionIndex = 18677;

	class MiniGameDreamScheduleResultExcelRepository : public <co_InternalInvoke>d__2
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_DreamMakerScheduleGroup(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_DREAMMAKERSCHEDULEGROUP_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_DreamMakerScheduleGroup(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCELREPOSITORY_SELECT_EVENTCONTENTID_DREAMMAKERSCHEDULEGROUP_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_DreamMakerScheduleGroup(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCELREPOSITORY_SELECT_EVENTCONTENTID_DREAMMAKERSCHEDULEGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

