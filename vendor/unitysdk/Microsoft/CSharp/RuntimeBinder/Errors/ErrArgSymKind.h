#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Symbol; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARGSYMKIND_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E1C90)

namespace Microsoft::CSharp::RuntimeBinder::Errors
{
	inline static constexpr unsigned int ErrArgSymKind_TypeDefinitionIndex = 34630;

	class ErrArgSymKind : public Il2CppObject
	{
	public:
		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARGSYMKIND_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

