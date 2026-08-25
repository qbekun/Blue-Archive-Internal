#pragma once
#include "unitysdk.h"

#define GUIDRESULT_INIT_OFFSET UNITYSDK_OFFSET(0x9354740)
#define GUIDRESULT_SETFAILURE_OFFSET UNITYSDK_OFFSET(0x9353370)
#define GUIDRESULT_SETFAILURE_OFFSET UNITYSDK_OFFSET(0x9351C70)
#define GUIDRESULT_SETFAILURE_OFFSET UNITYSDK_OFFSET(0x9352E20)
#define GUIDRESULT_SETFAILURE_OFFSET UNITYSDK_OFFSET(0x9352A70)
#define GUIDRESULT_GETGUIDPARSEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9351630)

	inline static constexpr unsigned int GuidResult_TypeDefinitionIndex = 23763;

	class GuidResult : public Il2CppObject
	{
	public:
		::System::Guid* _parsedGuid; // 0x10
		GuidParseThrowStyle* _throwStyle; // 0x20
		ParseFailureKind* _failure; // 0x24
		::System::String* _failureMessageID; // 0x28
		::System::Object* _failureMessageFormatArgument; // 0x30
		::System::String* _failureArgumentName; // 0x38
		::System::Exception* _innerException; // 0x40

		::System::Void Init(GuidParseThrowStyle* arg)
		{
			((::System::Void(*)(GuidParseThrowStyle*, ::PVOID))((::PBYTE)hIl2Cpp + GUIDRESULT_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetFailure(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + GUIDRESULT_SETFAILURE_OFFSET))(arg, nullptr);
		}

		::System::Void SetFailure(ParseFailureKind* arg, ::System::String* str)
		{
			((::System::Void(*)(ParseFailureKind*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GUIDRESULT_SETFAILURE_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetFailure(ParseFailureKind* arg, ::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(ParseFailureKind*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GUIDRESULT_SETFAILURE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void SetFailure(ParseFailureKind* arg, ::System::String* str, ::System::Object* arg, ::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(ParseFailureKind*, ::System::String*, ::System::Object*, ::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + GUIDRESULT_SETFAILURE_OFFSET))(arg, str, arg, str, arg, nullptr);
		}

		::System::Exception* GetGuidParseException()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDRESULT_GETGUIDPARSEEXCEPTION_OFFSET))(nullptr);
		}

	};

