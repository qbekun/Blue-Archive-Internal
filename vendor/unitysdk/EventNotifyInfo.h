#pragma once
#include "unitysdk.h"

namespace FlatData { class EventNotifyType; }
namespace FlatData { class EventTargetType; }
namespace MX::Data::Excel { class EventContentNotifyExcel; }

#define EVENTNOTIFYINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x214A5E0)
#define EVENTNOTIFYINFO_SET_ISSHORTCUTENABLE_OFFSET UNITYSDK_OFFSET(0x214A5F0)
#define EVENTNOTIFYINFO_GETEVENTDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x214A600)
#define EVENTNOTIFYINFO_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x214A690)
#define EVENTNOTIFYINFO_SET_EVENTNOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x214A6A0)
#define EVENTNOTIFYINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x214A6B0)
#define EVENTNOTIFYINFO_GET_EVENTNOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x214A6C0)
#define EVENTNOTIFYINFO_SET_EVENTTARGETTYPE_OFFSET UNITYSDK_OFFSET(0x214A6D0)
#define EVENTNOTIFYINFO_SET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x214A6E0)
#define EVENTNOTIFYINFO_GET_MULTIPLIER_OFFSET UNITYSDK_OFFSET(0x214A6F0)
#define EVENTNOTIFYINFO_SET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x214A700)
#define EVENTNOTIFYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x214A710)
#define EVENTNOTIFYINFO_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x214A7A0)
#define EVENTNOTIFYINFO_GET_SHORTCUTEVENTTARGETTYPE_OFFSET UNITYSDK_OFFSET(0x214A7B0)
#define EVENTNOTIFYINFO_GET_ISSHORTCUTENABLE_OFFSET UNITYSDK_OFFSET(0x214A7C0)
#define EVENTNOTIFYINFO_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x214A7D0)
#define EVENTNOTIFYINFO_GETEVENTNAME_OFFSET UNITYSDK_OFFSET(0x214A7E0)
#define EVENTNOTIFYINFO_GET_EVENTTARGETTYPE_OFFSET UNITYSDK_OFFSET(0x214A870)
#define EVENTNOTIFYINFO_SET_SHORTCUTEVENTTARGETTYPE_OFFSET UNITYSDK_OFFSET(0x214A880)
#define EVENTNOTIFYINFO_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x214A890)
#define EVENTNOTIFYINFO_SET_MULTIPLIER_OFFSET UNITYSDK_OFFSET(0x214A8A0)

	inline static constexpr unsigned int EventNotifyInfo_TypeDefinitionIndex = 3957;

	class EventNotifyInfo : public Il2CppObject
	{
	public:
		::System::Int32 _uniqueId_k__BackingField; // 0x10
		::System::UInt32 _LocalizeEtcId_k__BackingField; // 0x14
		::System::String* _IconPath_k__BackingField; // 0x18
		::FlatData::EventNotifyType* _EventNotifyType_k__BackingField; // 0x20
		::FlatData::EventTargetType* _EventTargetType_k__BackingField; // 0x24
		::FlatData::EventTargetType* _ShortcutEventTargetType_k__BackingField; // 0x28
		::System::Boolean _IsShortcutEnable_k__BackingField; // 0x2C
		::System::Int64 _Multiplier_k__BackingField; // 0x30
		::System::DateTime* _EndDate_k__BackingField; // 0x38

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTIFYINFO_GET_ICONPATH_OFFSET))(nullptr);
		}

		::System::Void set_IsShortcutEnable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTIFYINFO_SET_ISSHORTCUTENABLE_OFFSET))(arg, nullptr);
		}

		::System::String* GetEventDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTIFYINFO_GETEVENTDESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void set_uniqueId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTIFYINFO_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventNotifyType(::FlatData::EventNotifyType* arg)
		{
			((::System::Void(*)(::FlatData::EventNotifyType*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTIFYINFO_SET_EVENTNOTIFYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_uniqueId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTIFYINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::FlatData::EventNotifyType* get_EventNotifyType()
		{
			return ((::FlatData::EventNotifyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTIFYINFO_GET_EVENTNOTIFYTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EventTargetType(::FlatData::EventTargetType* arg)
		{
			((::System::Void(*)(::FlatData::EventTargetType*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTIFYINFO_SET_EVENTTARGETTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_LocalizeEtcId(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTIFYINFO_SET_LOCALIZEETCID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Multiplier()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTIFYINFO_GET_MULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void set_EndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTIFYINFO_SET_ENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentNotifyExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentNotifyExcel*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTIFYINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTIFYINFO_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::FlatData::EventTargetType* get_ShortcutEventTargetType()
		{
			return ((::FlatData::EventTargetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTIFYINFO_GET_SHORTCUTEVENTTARGETTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsShortcutEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTIFYINFO_GET_ISSHORTCUTENABLE_OFFSET))(nullptr);
		}

		::System::DateTime* get_EndDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTIFYINFO_GET_ENDDATE_OFFSET))(nullptr);
		}

		::System::String* GetEventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTIFYINFO_GETEVENTNAME_OFFSET))(nullptr);
		}

		::FlatData::EventTargetType* get_EventTargetType()
		{
			return ((::FlatData::EventTargetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTIFYINFO_GET_EVENTTARGETTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ShortcutEventTargetType(::FlatData::EventTargetType* arg)
		{
			((::System::Void(*)(::FlatData::EventTargetType*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTIFYINFO_SET_SHORTCUTEVENTTARGETTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IconPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTIFYINFO_SET_ICONPATH_OFFSET))(str, nullptr);
		}

		::System::Void set_Multiplier(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTNOTIFYINFO_SET_MULTIPLIER_OFFSET))(arg, nullptr);
		}

	};

