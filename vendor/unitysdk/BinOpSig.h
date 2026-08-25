#pragma once
#include "unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Syntax { class PredefinedType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class BinOpMask; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class OpSigFlags; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class BinOpFuncKind; }

#define BINOPSIG_.CTOR_OFFSET UNITYSDK_OFFSET(0x90AEB80)

	inline static constexpr unsigned int BinOpSig_TypeDefinitionIndex = 34464;

	class BinOpSig : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* pt1; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* pt2; // 0x14
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpMask* mask; // 0x18
		::System::Int32 cbosSkip; // 0x1C
		PfnBindBinOp* pfn; // 0x20
		::Microsoft::CSharp::RuntimeBinder::Semantics::OpSigFlags* grfos; // 0x28
		::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpFuncKind* fnkind; // 0x2C

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg, ::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpMask* arg, ::System::Int32 arg, PfnBindBinOp* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::OpSigFlags* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpFuncKind* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpMask*, ::System::Int32, PfnBindBinOp*, ::Microsoft::CSharp::RuntimeBinder::Semantics::OpSigFlags*, ::Microsoft::CSharp::RuntimeBinder::Semantics::BinOpFuncKind*, ::PVOID))((::PBYTE)hIl2Cpp + BINOPSIG_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};

