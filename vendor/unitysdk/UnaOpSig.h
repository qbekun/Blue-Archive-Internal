#pragma once
#include "unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Syntax { class PredefinedType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class UnaOpMask; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class UnaOpFuncKind; }

#define UNAOPSIG_.CTOR_OFFSET UNITYSDK_OFFSET(0x90B8490)
#define UNAOPSIG_.CTOR_OFFSET UNITYSDK_OFFSET(0x90B84A0)

	inline static constexpr unsigned int UnaOpSig_TypeDefinitionIndex = 34474;

	class UnaOpSig : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* pt; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpMask* grfuom; // 0x14
		::System::Int32 cuosSkip; // 0x18
		PfnBindUnaOp* pfn; // 0x20
		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpFuncKind* fnkind; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNAOPSIG_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpMask* arg, ::System::Int32 arg, PfnBindUnaOp* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpFuncKind* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpMask*, ::System::Int32, PfnBindUnaOp*, ::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpFuncKind*, ::PVOID))((::PBYTE)hIl2Cpp + UNAOPSIG_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};

