#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MemLookFlags; }

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int MemLookFlags_TypeDefinitionIndex = 34510;

	class MemLookFlags : public Il2CppObject
	{
	public:
		::System::UInt32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::MemLookFlags* None; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MemLookFlags* Ctor; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MemLookFlags* NewObj; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MemLookFlags* Operator; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MemLookFlags* Indexer; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MemLookFlags* UserCallable; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MemLookFlags* BaseCall; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MemLookFlags* MustBeInvocable; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MemLookFlags* All; // 0x0

	};
}

