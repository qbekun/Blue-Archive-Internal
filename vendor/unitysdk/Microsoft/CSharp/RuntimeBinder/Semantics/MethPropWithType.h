#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodOrPropertySymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHPROPWITHTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E07F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHPROPWITHTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E0800)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int MethPropWithType_TypeDefinitionIndex = 34614;

	class MethPropWithType : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHPROPWITHTYPE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHPROPWITHTYPE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

