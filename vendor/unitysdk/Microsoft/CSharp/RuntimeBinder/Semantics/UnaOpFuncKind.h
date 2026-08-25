#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class UnaOpFuncKind; }

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int UnaOpFuncKind_TypeDefinitionIndex = 34506;

	class UnaOpFuncKind : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpFuncKind* BoolUnaOp; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpFuncKind* DecUnaOp; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpFuncKind* EnumUnaOp; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpFuncKind* IntUnaOp; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpFuncKind* RealUnaOp; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpFuncKind* LiftedIncOpCore; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpFuncKind* None; // 0x0

	};
}

