#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Scope; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRBOUNDLAMBDA_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CE280)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRBOUNDLAMBDA_GET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x90CE2E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRBOUNDLAMBDA_GET_DELEGATETYPE_OFFSET UNITYSDK_OFFSET(0x90CE2F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRBOUNDLAMBDA_GET_ARGUMENTSCOPE_OFFSET UNITYSDK_OFFSET(0x90CE340)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprBoundLambda_TypeDefinitionIndex = 34557;

	class ExprBoundLambda : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _Expression_k__BackingField; // 0x40
		::Microsoft::CSharp::RuntimeBinder::Semantics::Scope* _ArgumentScope_k__BackingField; // 0x48

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Scope* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Scope*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRBOUNDLAMBDA_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_Expression()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRBOUNDLAMBDA_GET_EXPRESSION_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* get_DelegateType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRBOUNDLAMBDA_GET_DELEGATETYPE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Scope* get_ArgumentScope()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Scope*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRBOUNDLAMBDA_GET_ARGUMENTSCOPE_OFFSET))(nullptr);
		}

	};
}

