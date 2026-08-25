#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARGNOREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E1C50)

namespace Microsoft::CSharp::RuntimeBinder::Errors
{
	inline static constexpr unsigned int ErrArgNoRef_TypeDefinitionIndex = 34629;

	class ErrArgNoRef : public Il2CppObject
	{
	public:
		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARGNOREF_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

