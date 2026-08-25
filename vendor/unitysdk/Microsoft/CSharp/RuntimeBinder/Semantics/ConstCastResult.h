#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ConstCastResult; }

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ConstCastResult_TypeDefinitionIndex = 34497;

	class ConstCastResult : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstCastResult* Success; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstCastResult* Failure; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstCastResult* CheckFailure; // 0x0

	};
}

