#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodKindEnum; }

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int MethodKindEnum_TypeDefinitionIndex = 34514;

	class MethodKindEnum : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum* None; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum* Constructor; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum* Destructor; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum* PropAccessor; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum* EventAccessor; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum* ExplicitConv; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum* ImplicitConv; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum* Anonymous; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum* Invoke; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum* BeginInvoke; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum* EndInvoke; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum* AnonymousTypeToString; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum* AnonymousTypeEquals; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum* AnonymousTypeGetHashCode; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum* IteratorDispose; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum* IteratorReset; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum* IteratorGetEnumerator; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum* IteratorGetEnumeratorDelegating; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum* IteratorMoveNext; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum* Latent; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum* Actual; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum* IteratorFinally; // 0x0

	};
}

