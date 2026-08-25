#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONCAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CE750)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONCAT_TYPEFROMOPERANDS_OFFSET UNITYSDK_OFFSET(0x90CE800)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONCAT_GET_FIRSTARGUMENT_OFFSET UNITYSDK_OFFSET(0x90CE860)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONCAT_SET_FIRSTARGUMENT_OFFSET UNITYSDK_OFFSET(0x90CE870)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONCAT_GET_SECONDARGUMENT_OFFSET UNITYSDK_OFFSET(0x90CE880)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONCAT_SET_SECONDARGUMENT_OFFSET UNITYSDK_OFFSET(0x90CE890)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprConcat_TypeDefinitionIndex = 34563;

	class ExprConcat : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _FirstArgument_k__BackingField; // 0x40
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _SecondArgument_k__BackingField; // 0x48

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONCAT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* TypeFromOperands(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONCAT_TYPEFROMOPERANDS_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_FirstArgument()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONCAT_GET_FIRSTARGUMENT_OFFSET))(nullptr);
		}

		::System::Void set_FirstArgument(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONCAT_SET_FIRSTARGUMENT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_SecondArgument()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONCAT_GET_SECONDARGUMENT_OFFSET))(nullptr);
		}

		::System::Void set_SecondArgument(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONCAT_SET_SECONDARGUMENT_OFFSET))(arg, nullptr);
		}

	};
}

