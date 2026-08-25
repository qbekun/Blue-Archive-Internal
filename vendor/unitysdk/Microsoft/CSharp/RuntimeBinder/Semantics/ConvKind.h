#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ConvKind; }

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ConvKind_TypeDefinitionIndex = 34486;

	class ConvKind : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::ConvKind* Identity; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ConvKind* Implicit; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ConvKind* Explicit; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ConvKind* Unknown; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ConvKind* None; // 0x0

	};
}

