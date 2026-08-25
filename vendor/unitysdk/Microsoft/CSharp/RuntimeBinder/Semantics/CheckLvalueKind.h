#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CheckLvalueKind; }

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int CheckLvalueKind_TypeDefinitionIndex = 34504;

	class CheckLvalueKind : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::CheckLvalueKind* Assignment; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::CheckLvalueKind* Increment; // 0x0

	};
}

