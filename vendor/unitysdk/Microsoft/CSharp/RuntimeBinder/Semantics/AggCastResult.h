#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggCastResult; }

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int AggCastResult_TypeDefinitionIndex = 34498;

	class AggCastResult : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::AggCastResult* Success; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::AggCastResult* Failure; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::AggCastResult* Abort; // 0x0

	};
}

