#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Errors { class ErrorCode; }
namespace Microsoft::CSharp::RuntimeBinder::Errors { class MessageID; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRORFACTS_GETMESSAGE_OFFSET UNITYSDK_OFFSET(0x90E0CE0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRORFACTS_GETMESSAGE_OFFSET UNITYSDK_OFFSET(0x90E1570)

namespace Microsoft::CSharp::RuntimeBinder::Errors
{
	inline static constexpr unsigned int ErrorFacts_TypeDefinitionIndex = 34622;

	class ErrorFacts : public Il2CppObject
	{
	public:
		::System::String* GetMessage(::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* arg)
		{
			return (return (::System::String*(*)(::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRORFACTS_GETMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::String* GetMessage(::Microsoft::CSharp::RuntimeBinder::Errors::MessageID* arg)
		{
			return (return (::System::String*(*)(::Microsoft::CSharp::RuntimeBinder::Errors::MessageID*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRORFACTS_GETMESSAGE_OFFSET))(arg, nullptr);
		}

	};
}

