#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethPropWithInst; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHWITHINST_.CTOR_OFFSET UNITYSDK_OFFSET(0x90D6F70)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHWITHINST_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CFA70)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHWITHINST_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E0BF0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int MethWithInst_TypeDefinitionIndex = 34620;

	class MethWithInst : public Il2CppObject
	{
	public:
		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHWITHINST_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHWITHINST_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHWITHINST_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

