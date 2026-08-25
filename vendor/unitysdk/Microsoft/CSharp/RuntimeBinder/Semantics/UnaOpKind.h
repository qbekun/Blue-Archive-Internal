#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class UnaOpKind; }

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int UnaOpKind_TypeDefinitionIndex = 34500;

	class UnaOpKind : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpKind* Plus; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpKind* Minus; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpKind* Tilde; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpKind* Bang; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpKind* IncDec; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpKind* Lim; // 0x0

	};
}

