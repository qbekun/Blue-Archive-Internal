#pragma once
#include "unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExpressionBinder; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExpressionKind; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class EXPRFLAG; }

#define PFNBINDUNAOP_.CTOR_OFFSET UNITYSDK_OFFSET(0x90B12A0)
#define PFNBINDUNAOP_INVOKE_OFFSET UNITYSDK_OFFSET(0x90B1370)

	inline static constexpr unsigned int PfnBindUnaOp_TypeDefinitionIndex = 34468;

	class PfnBindUnaOp : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PFNBINDUNAOP_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* Invoke(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + PFNBINDUNAOP_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

