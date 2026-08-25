#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class BinOpFuncKind; }

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int BinOpFuncKind_TypeDefinitionIndex = 34505;

	class BinOpFuncKind : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpFuncKind* BoolBinOp; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpFuncKind* BoolBitwiseOp; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpFuncKind* DecBinOp; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpFuncKind* DelBinOp; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpFuncKind* EnumBinOp; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpFuncKind* IntBinOp; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpFuncKind* RealBinOp; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpFuncKind* RefCmpOp; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpFuncKind* ShiftOp; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpFuncKind* StrBinOp; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpFuncKind* StrCmpOp; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpFuncKind* None; // 0x0

	};
}

