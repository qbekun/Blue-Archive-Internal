#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class PropertySymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class SymWithType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PROPWITHTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x90D0EE0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PROPWITHTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E08B0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int PropWithType_TypeDefinitionIndex = 34616;

	class PropWithType : public Il2CppObject
	{
	public:
		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::PropertySymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::PropertySymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PROPWITHTYPE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PROPWITHTYPE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

