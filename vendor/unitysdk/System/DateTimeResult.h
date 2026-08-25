#pragma once
#include "../unitysdk.h"

#define SYSTEM_DATETIMERESULT_INIT_OFFSET UNITYSDK_OFFSET(0x9350C40)
#define SYSTEM_DATETIMERESULT_SETDATE_OFFSET UNITYSDK_OFFSET(0x9350C70)
#define SYSTEM_DATETIMERESULT_SETBADFORMATSPECIFIERFAILURE_OFFSET UNITYSDK_OFFSET(0x9350C80)
#define SYSTEM_DATETIMERESULT_SETBADFORMATSPECIFIERFAILURE_OFFSET UNITYSDK_OFFSET(0x9350D00)
#define SYSTEM_DATETIMERESULT_SETBADDATETIMEFAILURE_OFFSET UNITYSDK_OFFSET(0x9350D50)
#define SYSTEM_DATETIMERESULT_SETFAILURE_OFFSET UNITYSDK_OFFSET(0x9350DA0)
#define SYSTEM_DATETIMERESULT_SETFAILURE_OFFSET UNITYSDK_OFFSET(0x9350DB0)
#define SYSTEM_DATETIMERESULT_SETFAILURE_OFFSET UNITYSDK_OFFSET(0x9350DC0)

namespace System
{
	inline static constexpr unsigned int DateTimeResult_TypeDefinitionIndex = 23757;

	class DateTimeResult : public Il2CppObject
	{
	public:
		::System::Int32 Year; // 0x10
		::System::Int32 Month; // 0x14
		::System::Int32 Day; // 0x18
		::System::Int32 Hour; // 0x1C
		::System::Int32 Minute; // 0x20
		::System::Int32 Second; // 0x24
		::System::Double fraction; // 0x28
		::System::Int32 era; // 0x30
		::System::ParseFlags* flags; // 0x34
		::System::TimeSpan* timeZoneOffset; // 0x38
		::System::Globalization::Calendar* calendar; // 0x40
		::System::DateTime* parsedDate; // 0x48
		::System::ParseFailureKind* failure; // 0x50
		::System::String* failureMessageID; // 0x58
		::System::Object* failureMessageFormatArgument; // 0x60
		::System::String* failureArgumentName; // 0x68
		Il2CppObject* originalDateTimeString; // 0x70
		Il2CppObject* failedFormatSpecifier; // 0x80

		::System::Void Init(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMERESULT_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetDate(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMERESULT_SETDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetBadFormatSpecifierFailure()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMERESULT_SETBADFORMATSPECIFIERFAILURE_OFFSET))(nullptr);
		}

		::System::Void SetBadFormatSpecifierFailure(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMERESULT_SETBADFORMATSPECIFIERFAILURE_OFFSET))(arg, nullptr);
		}

		::System::Void SetBadDateTimeFailure()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMERESULT_SETBADDATETIMEFAILURE_OFFSET))(nullptr);
		}

		::System::Void SetFailure(::System::ParseFailureKind* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::ParseFailureKind*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMERESULT_SETFAILURE_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetFailure(::System::ParseFailureKind* arg, ::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::ParseFailureKind*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMERESULT_SETFAILURE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void SetFailure(::System::ParseFailureKind* arg, ::System::String* str, ::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::ParseFailureKind*, ::System::String*, ::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMERESULT_SETFAILURE_OFFSET))(arg, str, arg, str, nullptr);
		}

	};
}

