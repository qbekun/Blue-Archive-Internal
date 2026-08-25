#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class EventContentMissionExcel; }
namespace MX::Data { class EventContentSeasonInfo; }

#define MX_DATA_EVENTCONTENTMISSIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x183FCC0)
#define MX_DATA_EVENTCONTENTMISSIONINFO_SET_EVENTCONTENTOPENDATE_OFFSET UNITYSDK_OFFSET(0x18409D0)
#define MX_DATA_EVENTCONTENTMISSIONINFO_SET_EVENTCONTENTEXTENSIONDATE_OFFSET UNITYSDK_OFFSET(0x18409E0)
#define MX_DATA_EVENTCONTENTMISSIONINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x18409F0)
#define MX_DATA_EVENTCONTENTMISSIONINFO_CANRECEIVEREWARD_OFFSET UNITYSDK_OFFSET(0x1840A00)
#define MX_DATA_EVENTCONTENTMISSIONINFO_GET_EVENTCONTENTEXTENSIONDATE_OFFSET UNITYSDK_OFFSET(0x1840A90)
#define MX_DATA_EVENTCONTENTMISSIONINFO_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1840AA0)
#define MX_DATA_EVENTCONTENTMISSIONINFO_GET_EVENTCONTENTCLOSEDATE_OFFSET UNITYSDK_OFFSET(0x1840AB0)
#define MX_DATA_EVENTCONTENTMISSIONINFO_GET_EVENTCONTENTOPENDATE_OFFSET UNITYSDK_OFFSET(0x1840AC0)
#define MX_DATA_EVENTCONTENTMISSIONINFO_SET_EVENTCONTENTCLOSEDATE_OFFSET UNITYSDK_OFFSET(0x1840AD0)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentMissionInfo_TypeDefinitionIndex = 15780;

	class EventContentMissionInfo : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0xF8
		::System::DateTime* _EventContentOpenDate_k__BackingField; // 0x100
		::System::DateTime* _EventContentExtensionDate_k__BackingField; // 0x108
		::System::DateTime* _EventContentCloseDate_k__BackingField; // 0x110

		::System::Void .ctor(::MX::Data::Excel::EventContentMissionExcel* arg, ::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentMissionExcel*, ::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMISSIONINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_EventContentOpenDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMISSIONINFO_SET_EVENTCONTENTOPENDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentExtensionDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMISSIONINFO_SET_EVENTCONTENTEXTENSIONDATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMISSIONINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean CanReceiveReward(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMISSIONINFO_CANRECEIVEREWARD_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_EventContentExtensionDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMISSIONINFO_GET_EVENTCONTENTEXTENSIONDATE_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMISSIONINFO_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_EventContentCloseDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMISSIONINFO_GET_EVENTCONTENTCLOSEDATE_OFFSET))(nullptr);
		}

		::System::DateTime* get_EventContentOpenDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMISSIONINFO_GET_EVENTCONTENTOPENDATE_OFFSET))(nullptr);
		}

		::System::Void set_EventContentCloseDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMISSIONINFO_SET_EVENTCONTENTCLOSEDATE_OFFSET))(arg, nullptr);
		}

	};
}

