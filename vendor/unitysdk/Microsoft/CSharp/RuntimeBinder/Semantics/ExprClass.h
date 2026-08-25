#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCLASS_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CE5E0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprClass_TypeDefinitionIndex = 34560;

	class ExprClass : public Il2CppObject
	{
	public:
		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCLASS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

