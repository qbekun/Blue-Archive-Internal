#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class EventContentCardExcel; }

#define MX_DATA_EVENTCONTENTCARDINFO_SET_MAINREWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1842E70)
#define MX_DATA_EVENTCONTENTCARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1842E80)
#define MX_DATA_EVENTCONTENTCARDINFO_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x18430D0)
#define MX_DATA_EVENTCONTENTCARDINFO_GET_CARDNAME_OFFSET UNITYSDK_OFFSET(0x18430E0)
#define MX_DATA_EVENTCONTENTCARDINFO_GET_BACKICONPATH_OFFSET UNITYSDK_OFFSET(0x18430F0)
#define MX_DATA_EVENTCONTENTCARDINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1843100)
#define MX_DATA_EVENTCONTENTCARDINFO_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1843110)
#define MX_DATA_EVENTCONTENTCARDINFO_SET_CARDID_OFFSET UNITYSDK_OFFSET(0x1843120)
#define MX_DATA_EVENTCONTENTCARDINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1843130)
#define MX_DATA_EVENTCONTENTCARDINFO_GET_CARDID_OFFSET UNITYSDK_OFFSET(0x1843140)
#define MX_DATA_EVENTCONTENTCARDINFO_SET_CARDNAME_OFFSET UNITYSDK_OFFSET(0x1843150)
#define MX_DATA_EVENTCONTENTCARDINFO_GET_MAINREWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1843160)
#define MX_DATA_EVENTCONTENTCARDINFO_SET_BACKICONPATH_OFFSET UNITYSDK_OFFSET(0x1843170)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentCardInfo_TypeDefinitionIndex = 15793;

	class EventContentCardInfo : public Il2CppObject
	{
	public:
		::System::Int64 _CardId_k__BackingField; // 0x10
		::System::String* _CardName_k__BackingField; // 0x18
		::System::String* _IconPath_k__BackingField; // 0x20
		::System::String* _BackIconPath_k__BackingField; // 0x28
		::System::Int64 _EventContentId_k__BackingField; // 0x30
		Il2CppObject* _MainRewardParcelInfos_k__BackingField; // 0x38

		::System::Void set_MainRewardParcelInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDINFO_SET_MAINREWARDPARCELINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentCardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentCardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDINFO_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::String* get_CardName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDINFO_GET_CARDNAME_OFFSET))(nullptr);
		}

		::System::String* get_BackIconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDINFO_GET_BACKICONPATH_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_IconPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDINFO_SET_ICONPATH_OFFSET))(str, nullptr);
		}

		::System::Void set_CardId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDINFO_SET_CARDID_OFFSET))(arg, nullptr);
		}

		::System::String* get_IconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDINFO_GET_ICONPATH_OFFSET))(nullptr);
		}

		::System::Int64 get_CardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDINFO_GET_CARDID_OFFSET))(nullptr);
		}

		::System::Void set_CardName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDINFO_SET_CARDNAME_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_MainRewardParcelInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDINFO_GET_MAINREWARDPARCELINFOS_OFFSET))(nullptr);
		}

		::System::Void set_BackIconPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDINFO_SET_BACKICONPATH_OFFSET))(str, nullptr);
		}

	};
}

