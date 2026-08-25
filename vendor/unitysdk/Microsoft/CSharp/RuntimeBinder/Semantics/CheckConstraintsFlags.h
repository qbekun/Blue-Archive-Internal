#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CheckConstraintsFlags; }

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int CheckConstraintsFlags_TypeDefinitionIndex = 34587;

	class CheckConstraintsFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::CheckConstraintsFlags* None; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::CheckConstraintsFlags* Outer; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::CheckConstraintsFlags* NoErrors; // 0x0

	};
}

