#pragma once
#include "../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder { class CSharpBinderFlags; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_BINDER_GETMEMBER_OFFSET UNITYSDK_OFFSET(0x9080070)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_BINDER_SETMEMBER_OFFSET UNITYSDK_OFFSET(0x9080210)

namespace Microsoft::CSharp::RuntimeBinder
{
	inline static constexpr unsigned int Binder_TypeDefinitionIndex = 34423;

	class Binder : public Il2CppObject
	{
	public:
		::System::Runtime::CompilerServices::CallSiteBinder* GetMember(::Microsoft::CSharp::RuntimeBinder::CSharpBinderFlags* arg, ::System::String* str, ::System::Type* arg, Il2CppObject* arg)
		{
			return (return (::System::Runtime::CompilerServices::CallSiteBinder*(*)(::Microsoft::CSharp::RuntimeBinder::CSharpBinderFlags*, ::System::String*, ::System::Type*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_BINDER_GETMEMBER_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Runtime::CompilerServices::CallSiteBinder* SetMember(::Microsoft::CSharp::RuntimeBinder::CSharpBinderFlags* arg, ::System::String* str, ::System::Type* arg, Il2CppObject* arg)
		{
			return (return (::System::Runtime::CompilerServices::CallSiteBinder*(*)(::Microsoft::CSharp::RuntimeBinder::CSharpBinderFlags*, ::System::String*, ::System::Type*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_BINDER_SETMEMBER_OFFSET))(arg, str, arg, arg, nullptr);
		}

	};
}

