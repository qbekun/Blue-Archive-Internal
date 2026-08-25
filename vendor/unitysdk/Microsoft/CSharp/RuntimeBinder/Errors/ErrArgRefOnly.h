#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Symbol; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARGREFONLY_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E1C10)

namespace Microsoft::CSharp::RuntimeBinder::Errors
{
	inline static constexpr unsigned int ErrArgRefOnly_TypeDefinitionIndex = 34628;

	class ErrArgRefOnly : public Il2CppObject
	{
	public:
		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARGREFONLY_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

