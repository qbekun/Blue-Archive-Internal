#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class LiftFlags; }

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int LiftFlags_TypeDefinitionIndex = 34503;

	class LiftFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::LiftFlags* None; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::LiftFlags* Lift1; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::LiftFlags* Lift2; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::LiftFlags* Convert1; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::LiftFlags* Convert2; // 0x0

	};
}

