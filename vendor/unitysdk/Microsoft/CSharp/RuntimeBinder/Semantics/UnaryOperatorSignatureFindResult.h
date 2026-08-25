#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class UnaryOperatorSignatureFindResult; }

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int UnaryOperatorSignatureFindResult_TypeDefinitionIndex = 34499;

	class UnaryOperatorSignatureFindResult : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaryOperatorSignatureFindResult* Match; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaryOperatorSignatureFindResult* Continue; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaryOperatorSignatureFindResult* Return; // 0x0

	};
}

