#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprCall; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUSERLOGICALOP_GET_TRUEFALSECALL_OFFSET UNITYSDK_OFFSET(0x90D1700)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUSERLOGICALOP_SET_TRUEFALSECALL_OFFSET UNITYSDK_OFFSET(0x90D1710)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUSERLOGICALOP_GET_OPERATORCALL_OFFSET UNITYSDK_OFFSET(0x90D1720)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUSERLOGICALOP_SET_OPERATORCALL_OFFSET UNITYSDK_OFFSET(0x90D1730)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUSERLOGICALOP_GET_FIRSTOPERANDTOEXAMINE_OFFSET UNITYSDK_OFFSET(0x90D1740)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUSERLOGICALOP_SET_FIRSTOPERANDTOEXAMINE_OFFSET UNITYSDK_OFFSET(0x90D1750)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprUserLogicalOp_TypeDefinitionIndex = 34583;

	class ExprUserLogicalOp : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _TrueFalseCall_k__BackingField; // 0x40
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* _OperatorCall_k__BackingField; // 0x48
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _FirstOperandToExamine_k__BackingField; // 0x50

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_TrueFalseCall()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUSERLOGICALOP_GET_TRUEFALSECALL_OFFSET))(nullptr);
		}

		::System::Void set_TrueFalseCall(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUSERLOGICALOP_SET_TRUEFALSECALL_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* get_OperatorCall()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUSERLOGICALOP_GET_OPERATORCALL_OFFSET))(nullptr);
		}

		::System::Void set_OperatorCall(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUSERLOGICALOP_SET_OPERATORCALL_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_FirstOperandToExamine()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUSERLOGICALOP_GET_FIRSTOPERANDTOEXAMINE_OFFSET))(nullptr);
		}

		::System::Void set_FirstOperandToExamine(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUSERLOGICALOP_SET_FIRSTOPERANDTOEXAMINE_OFFSET))(arg, nullptr);
		}

	};
}

