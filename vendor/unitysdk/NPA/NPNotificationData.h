#pragma once
#include "../unitysdk.h"

namespace NPA { class NPNotificationTime; }

#define NPA_NPNOTIFICATIONDATA_GET_NOTIFICATIONID_OFFSET UNITYSDK_OFFSET(0x9BCB1F0)
#define NPA_NPNOTIFICATIONDATA_SET_NOTIFICATIONID_OFFSET UNITYSDK_OFFSET(0x9BCB200)
#define NPA_NPNOTIFICATIONDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x9BCB210)
#define NPA_NPNOTIFICATIONDATA_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x9BCB220)
#define NPA_NPNOTIFICATIONDATA_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x9BCB2D0)
#define NPA_NPNOTIFICATIONDATA_SET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x9BCB2E0)
#define NPA_NPNOTIFICATIONDATA_GET_META_OFFSET UNITYSDK_OFFSET(0x9BCB390)
#define NPA_NPNOTIFICATIONDATA_SET_META_OFFSET UNITYSDK_OFFSET(0x9BCB3A0)
#define NPA_NPNOTIFICATIONDATA_GET_TIME_OFFSET UNITYSDK_OFFSET(0x9BCB450)
#define NPA_NPNOTIFICATIONDATA_SET_TIME_OFFSET UNITYSDK_OFFSET(0x9BCB460)
#define NPA_NPNOTIFICATIONDATA_GET_PUSHTYPE_OFFSET UNITYSDK_OFFSET(0x9BCB470)
#define NPA_NPNOTIFICATIONDATA_SET_PUSHTYPE_OFFSET UNITYSDK_OFFSET(0x9BCB480)
#define NPA_NPNOTIFICATIONDATA_GET_BADGENUMBER_OFFSET UNITYSDK_OFFSET(0x9BCB490)
#define NPA_NPNOTIFICATIONDATA_SET_BADGENUMBER_OFFSET UNITYSDK_OFFSET(0x9BCB4A0)
#define NPA_NPNOTIFICATIONDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x9BCB4B0)
#define NPA_NPNOTIFICATIONDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x9BCB4C0)
#define NPA_NPNOTIFICATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCB4D0)
#define NPA_NPNOTIFICATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCB540)
#define NPA_NPNOTIFICATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCB600)
#define NPA_NPNOTIFICATIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCB6C0)

namespace NPA
{
	inline static constexpr unsigned int NPNotificationData_TypeDefinitionIndex = 25647;

	class NPNotificationData : public Il2CppObject
	{
	public:
		::System::String* _title; // 0x10
		::System::String* _message; // 0x18
		::System::String* _meta; // 0x20
		::System::Int32 _notificationID_k__BackingField; // 0x28
		::NPA::NPNotificationTime* _time_k__BackingField; // 0x30
		::System::Int32 _pushType_k__BackingField; // 0x38
		::System::Int32 _badgeNumber_k__BackingField; // 0x3C
		::System::String* _groupID_k__BackingField; // 0x40

		::System::Int32 get_notificationID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONDATA_GET_NOTIFICATIONID_OFFSET))(nullptr);
		}

		::System::Void set_notificationID(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONDATA_SET_NOTIFICATIONID_OFFSET))(arg, nullptr);
		}

		::System::String* get_title()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONDATA_GET_TITLE_OFFSET))(nullptr);
		}

		::System::Void set_title(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONDATA_SET_TITLE_OFFSET))(str, nullptr);
		}

		::System::String* get_message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONDATA_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::Void set_message(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONDATA_SET_MESSAGE_OFFSET))(str, nullptr);
		}

		::System::String* get_meta()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONDATA_GET_META_OFFSET))(nullptr);
		}

		::System::Void set_meta(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONDATA_SET_META_OFFSET))(str, nullptr);
		}

		::NPA::NPNotificationTime* get_time()
		{
			return (return (::NPA::NPNotificationTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONDATA_GET_TIME_OFFSET))(nullptr);
		}

		::System::Void set_time(::NPA::NPNotificationTime* arg)
		{
			((::System::Void(*)(::NPA::NPNotificationTime*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONDATA_SET_TIME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_pushType()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONDATA_GET_PUSHTYPE_OFFSET))(nullptr);
		}

		::System::Void set_pushType(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONDATA_SET_PUSHTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_badgeNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONDATA_GET_BADGENUMBER_OFFSET))(nullptr);
		}

		::System::Void set_badgeNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONDATA_SET_BADGENUMBER_OFFSET))(arg, nullptr);
		}

		::System::String* get_groupID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONDATA_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void set_groupID(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONDATA_SET_GROUPID_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str, ::System::String* str, ::NPA::NPNotificationTime* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::NPA::NPNotificationTime*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONDATA_.CTOR_OFFSET))(arg, str, str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str, ::System::String* str, ::NPA::NPNotificationTime* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::NPA::NPNotificationTime*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONDATA_.CTOR_OFFSET))(arg, str, str, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str, ::System::String* str, ::NPA::NPNotificationTime* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::NPA::NPNotificationTime*, ::System::Int32, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPNOTIFICATIONDATA_.CTOR_OFFSET))(arg, str, str, arg, arg, arg, str, nullptr);
		}

	};
}

