#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class NullableCallLiftKind; }

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int NullableCallLiftKind_TypeDefinitionIndex = 34518;

	class NullableCallLiftKind : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::NullableCallLiftKind* NotLifted; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::NullableCallLiftKind* Operator; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::NullableCallLiftKind* EqualityOperator; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::NullableCallLiftKind* InequalityOperator; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::NullableCallLiftKind* UserDefinedConversion; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::NullableCallLiftKind* NullableConversion; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::NullableCallLiftKind* NullableConversionConstructor; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::NullableCallLiftKind* NullableIntermediateConversion; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::NullableCallLiftKind* NotLiftedIntermediateConversion; // 0x0

	};
}

