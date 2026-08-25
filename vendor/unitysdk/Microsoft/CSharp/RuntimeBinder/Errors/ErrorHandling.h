#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder { class RuntimeBinderException; }
namespace Microsoft::CSharp::RuntimeBinder::Errors { class ErrorCode; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRORHANDLING_ERROR_OFFSET UNITYSDK_OFFSET(0x90E1CD0)

namespace Microsoft::CSharp::RuntimeBinder::Errors
{
	inline static constexpr unsigned int ErrorHandling_TypeDefinitionIndex = 34631;

	class ErrorHandling : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::RuntimeBinderException* Error(::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::RuntimeBinderException*(*)(::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRORHANDLING_ERROR_OFFSET))(arg, arg, nullptr);
		}

	};
}

