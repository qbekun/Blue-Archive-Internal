#pragma once
#include "unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Syntax { class TokenKind; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class PredefinedName; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExpressionKind; }

#define OPERATORINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x90BA880)

	inline static constexpr unsigned int OperatorInfo_TypeDefinitionIndex = 34481;

	class OperatorInfo : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Syntax::TokenKind* TokenKind; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedName* MethodName; // 0x14
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* ExpressionKind; // 0x18

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Syntax::TokenKind* arg, ::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedName* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::TokenKind*, ::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedName*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::PVOID))((::PBYTE)hIl2Cpp + OPERATORINFO_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};

