#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB9780)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BB9790)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEDBSCHEMA_GET_DREAMMAKERSCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x1BB97A0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEDBSCHEMA_SET_DREAMMAKERSCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x1BB97B0)
#define MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BB97C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDreamScheduleDBSchema_TypeDefinitionIndex = 18662;

	class MiniGameDreamScheduleDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::System::Int64 _DreamMakerScheduleGroupId_k__BackingField; // 0x28

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_DreamMakerScheduleGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEDBSCHEMA_GET_DREAMMAKERSCHEDULEGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_DreamMakerScheduleGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEDBSCHEMA_SET_DREAMMAKERSCHEDULEGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMSCHEDULEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

