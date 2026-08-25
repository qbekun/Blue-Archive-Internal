#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethWithInst; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUSERDEFINEDCONVERSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x90D1600)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUSERDEFINEDCONVERSION_GET_ARGUMENT_OFFSET UNITYSDK_OFFSET(0x90D16C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUSERDEFINEDCONVERSION_SET_ARGUMENT_OFFSET UNITYSDK_OFFSET(0x90D16D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUSERDEFINEDCONVERSION_GET_USERDEFINEDCALL_OFFSET UNITYSDK_OFFSET(0x90D16E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUSERDEFINEDCONVERSION_SET_USERDEFINEDCALL_OFFSET UNITYSDK_OFFSET(0x90D1680)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUSERDEFINEDCONVERSION_GET_USERDEFINEDCALLMETHOD_OFFSET UNITYSDK_OFFSET(0x90D16F0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprUserDefinedConversion_TypeDefinitionIndex = 34582;

	class ExprUserDefinedConversion : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _userDefinedCall; // 0x40
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _Argument_k__BackingField; // 0x48
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst* _UserDefinedCallMethod_k__BackingField; // 0x50

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUSERDEFINEDCONVERSION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_Argument()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUSERDEFINEDCONVERSION_GET_ARGUMENT_OFFSET))(nullptr);
		}

		::System::Void set_Argument(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUSERDEFINEDCONVERSION_SET_ARGUMENT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_UserDefinedCall()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUSERDEFINEDCONVERSION_GET_USERDEFINEDCALL_OFFSET))(nullptr);
		}

		::System::Void set_UserDefinedCall(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUSERDEFINEDCONVERSION_SET_USERDEFINEDCALL_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst* get_UserDefinedCallMethod()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUSERDEFINEDCONVERSION_GET_USERDEFINEDCALLMETHOD_OFFSET))(nullptr);
		}

	};
}

