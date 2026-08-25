#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExpressionKind; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONKINDEXTENSIONS_ISRELATIONAL_OFFSET UNITYSDK_OFFSET(0x90BD430)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONKINDEXTENSIONS_ISUNARYOPERATOR_OFFSET UNITYSDK_OFFSET(0x90BCE00)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExpressionKindExtensions_TypeDefinitionIndex = 34508;

	class ExpressionKindExtensions : public Il2CppObject
	{
	public:
		::System::Boolean IsRelational(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONKINDEXTENSIONS_ISRELATIONAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsUnaryOperator(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONKINDEXTENSIONS_ISUNARYOPERATOR_OFFSET))(arg, nullptr);
		}

	};
}

