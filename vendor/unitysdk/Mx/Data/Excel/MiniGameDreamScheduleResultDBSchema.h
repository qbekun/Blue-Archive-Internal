#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BBC0E0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTDBSCHEMA_GET_DREAMMAKERSCHEDULEGROUP_OFFSET UNITYSDK_OFFSET(0x1BBC0F0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BBC100)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTDBSCHEMA_SET_DREAMMAKERSCHEDULEGROUP_OFFSET UNITYSDK_OFFSET(0x1BBC110)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BBC120)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDreamScheduleResultDBSchema_TypeDefinitionIndex = 18672;

	class MiniGameDreamScheduleResultDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::System::Int64 _DreamMakerScheduleGroup_k__BackingField; // 0x28

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_DreamMakerScheduleGroup()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTDBSCHEMA_GET_DREAMMAKERSCHEDULEGROUP_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_DreamMakerScheduleGroup(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTDBSCHEMA_SET_DREAMMAKERSCHEDULEGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULERESULTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

