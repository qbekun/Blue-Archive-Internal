#pragma once
#include "unitysdk.h"

#define ENUMRESULT_INIT_OFFSET UNITYSDK_OFFSET(0x939CD70)
#define ENUMRESULT_SETFAILURE_OFFSET UNITYSDK_OFFSET(0x939DE40)
#define ENUMRESULT_SETFAILURE_OFFSET UNITYSDK_OFFSET(0x939D850)
#define ENUMRESULT_SETFAILURE_OFFSET UNITYSDK_OFFSET(0x939D8A0)
#define ENUMRESULT_GETENUMPARSEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x939D6E0)

	inline static constexpr unsigned int EnumResult_TypeDefinitionIndex = 23928;

	class EnumResult : public Il2CppObject
	{
	public:
		::System::Object* parsedEnum; // 0x10
		::System::Boolean canThrow; // 0x18
		ParseFailureKind* m_failure; // 0x1C
		::System::String* m_failureMessageID; // 0x20
		::System::String* m_failureParameter; // 0x28
		::System::Object* m_failureMessageFormatArgument; // 0x30
		::System::Exception* m_innerException; // 0x38

		::System::Void Init(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ENUMRESULT_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetFailure(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + ENUMRESULT_SETFAILURE_OFFSET))(arg, nullptr);
		}

		::System::Void SetFailure(ParseFailureKind* arg, ::System::String* str)
		{
			((::System::Void(*)(ParseFailureKind*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ENUMRESULT_SETFAILURE_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetFailure(ParseFailureKind* arg, ::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(ParseFailureKind*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ENUMRESULT_SETFAILURE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Exception* GetEnumParseException()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENUMRESULT_GETENUMPARSEEXCEPTION_OFFSET))(nullptr);
		}

	};

