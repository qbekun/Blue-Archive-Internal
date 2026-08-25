#pragma once
#include "unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class LiftFlags; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class UnaOpFuncKind; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExpressionBinder; }

#define UNAOPFULLSIG_.CTOR_OFFSET UNITYSDK_OFFSET(0x90B8500)
#define UNAOPFULLSIG_.CTOR_OFFSET UNITYSDK_OFFSET(0x90B8570)
#define UNAOPFULLSIG_FPREDEF_OFFSET UNITYSDK_OFFSET(0x90B8640)
#define UNAOPFULLSIG_ISLIFTED_OFFSET UNITYSDK_OFFSET(0x90B8650)
#define UNAOPFULLSIG_CONVERT_OFFSET UNITYSDK_OFFSET(0x90B8660)
#define UNAOPFULLSIG_GETTYPE_OFFSET UNITYSDK_OFFSET(0x90B8670)

	inline static constexpr unsigned int UnaOpFullSig_TypeDefinitionIndex = 34475;

	class UnaOpFullSig : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::LiftFlags* _grflt; // 0x30
		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* _type; // 0x38

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, PfnBindUnaOp* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::LiftFlags* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpFuncKind* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, PfnBindUnaOp*, ::Microsoft::CSharp::RuntimeBinder::Semantics::LiftFlags*, ::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpFuncKind*, ::PVOID))((::PBYTE)hIl2Cpp + UNAOPFULLSIG_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder* arg, UnaOpSig* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder*, UnaOpSig*, ::PVOID))((::PBYTE)hIl2Cpp + UNAOPFULLSIG_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean FPreDef()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNAOPFULLSIG_FPREDEF_OFFSET))(nullptr);
		}

		::System::Boolean isLifted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNAOPFULLSIG_ISLIFTED_OFFSET))(nullptr);
		}

		::System::Boolean Convert()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNAOPFULLSIG_CONVERT_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* GetType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNAOPFULLSIG_GETTYPE_OFFSET))(nullptr);
		}

	};

