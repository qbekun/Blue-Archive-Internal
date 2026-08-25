#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class OpSigFlags; }

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int OpSigFlags_TypeDefinitionIndex = 34502;

	class OpSigFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::OpSigFlags* None; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::OpSigFlags* Convert; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::OpSigFlags* CanLift; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::OpSigFlags* AutoLift; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::OpSigFlags* Value; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::OpSigFlags* Reference; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::OpSigFlags* BoolBit; // 0x0

	};
}

