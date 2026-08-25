#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethWithInst; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethPropWithInst; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExpressionKind; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPROPERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CE1F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPROPERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CF010)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPROPERATOR_GET_OPTIONALUSERDEFINEDCALL_OFFSET UNITYSDK_OFFSET(0x90CF080)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPROPERATOR_GET_PREDEFINEDMETHODTOCALL_OFFSET UNITYSDK_OFFSET(0x90CF090)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPROPERATOR_SET_PREDEFINEDMETHODTOCALL_OFFSET UNITYSDK_OFFSET(0x90CF0A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPROPERATOR_GET_USERDEFINEDCALLMETHOD_OFFSET UNITYSDK_OFFSET(0x90CF0B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPROPERATOR_SET_USERDEFINEDCALLMETHOD_OFFSET UNITYSDK_OFFSET(0x90CF0C0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprOperator_TypeDefinitionIndex = 34566;

	class ExprOperator : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _OptionalUserDefinedCall_k__BackingField; // 0x40
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst* _PredefinedMethodToCall_k__BackingField; // 0x48
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* _UserDefinedCallMethod_k__BackingField; // 0x50

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPROPERATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPROPERATOR_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_OptionalUserDefinedCall()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPROPERATOR_GET_OPTIONALUSERDEFINEDCALL_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst* get_PredefinedMethodToCall()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPROPERATOR_GET_PREDEFINEDMETHODTOCALL_OFFSET))(nullptr);
		}

		::System::Void set_PredefinedMethodToCall(::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPROPERATOR_SET_PREDEFINEDMETHODTOCALL_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* get_UserDefinedCallMethod()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPROPERATOR_GET_USERDEFINEDCALLMETHOD_OFFSET))(nullptr);
		}

		::System::Void set_UserDefinedCallMethod(::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPROPERATOR_SET_USERDEFINEDCALLMETHOD_OFFSET))(arg, nullptr);
		}

	};
}

