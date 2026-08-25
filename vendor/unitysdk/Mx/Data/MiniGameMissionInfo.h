#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class MiniGameMissionExcel; }
namespace MX::Data::Excel { class EventContentSeasonExcel; }
namespace MX::Data { class EventContentSeasonInfo; }

#define MX_DATA_MINIGAMEMISSIONINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x18F9450)
#define MX_DATA_MINIGAMEMISSIONINFO_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x18F9460)
#define MX_DATA_MINIGAMEMISSIONINFO_GET_EVENTCONTENTEXTENSIONDATE_OFFSET UNITYSDK_OFFSET(0x18F9470)
#define MX_DATA_MINIGAMEMISSIONINFO_SET_EVENTCONTENTEXTENSIONDATE_OFFSET UNITYSDK_OFFSET(0x18F9480)
#define MX_DATA_MINIGAMEMISSIONINFO_GET_EVENTCONTENTCLOSEDATE_OFFSET UNITYSDK_OFFSET(0x18F9490)
#define MX_DATA_MINIGAMEMISSIONINFO_SET_EVENTCONTENTCLOSEDATE_OFFSET UNITYSDK_OFFSET(0x18F94A0)
#define MX_DATA_MINIGAMEMISSIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18F94B0)
#define MX_DATA_MINIGAMEMISSIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18F94C0)
#define MX_DATA_MINIGAMEMISSIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18F9E50)
#define MX_DATA_MINIGAMEMISSIONINFO_CANRECEIVEREWARD_OFFSET UNITYSDK_OFFSET(0x18FA650)

namespace MX::Data
{
	inline static constexpr unsigned int MiniGameMissionInfo_TypeDefinitionIndex = 16190;

	class MiniGameMissionInfo : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0xF8
		::System::DateTime* _EventContentExtensionDate_k__BackingField; // 0x100
		::System::DateTime* _EventContentCloseDate_k__BackingField; // 0x108

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEMISSIONINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEMISSIONINFO_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_EventContentExtensionDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEMISSIONINFO_GET_EVENTCONTENTEXTENSIONDATE_OFFSET))(nullptr);
		}

		::System::Void set_EventContentExtensionDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEMISSIONINFO_SET_EVENTCONTENTEXTENSIONDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_EventContentCloseDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEMISSIONINFO_GET_EVENTCONTENTCLOSEDATE_OFFSET))(nullptr);
		}

		::System::Void set_EventContentCloseDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEMISSIONINFO_SET_EVENTCONTENTCLOSEDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEMISSIONINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MiniGameMissionExcel* arg, ::MX::Data::Excel::EventContentSeasonExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameMissionExcel*, ::MX::Data::Excel::EventContentSeasonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEMISSIONINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MiniGameMissionExcel* arg, ::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameMissionExcel*, ::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEMISSIONINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanReceiveReward(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEMISSIONINFO_CANRECEIVEREWARD_OFFSET))(arg, nullptr);
		}

	};
}

