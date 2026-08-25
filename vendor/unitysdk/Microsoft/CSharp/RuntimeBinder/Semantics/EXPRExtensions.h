#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPREXTENSIONS_MAP_OFFSET UNITYSDK_OFFSET(0x90BB6C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPREXTENSIONS_TOENUMERABLE_OFFSET UNITYSDK_OFFSET(0x90BBA80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPREXTENSIONS_ISLVALUE_OFFSET UNITYSDK_OFFSET(0x90BBC70)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPREXTENSIONS_ISCHECKED_OFFSET UNITYSDK_OFFSET(0x90BBC90)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPREXTENSIONS_ISNULL_OFFSET UNITYSDK_OFFSET(0x90BBCB0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPREXTENSIONS_ISZERO_OFFSET UNITYSDK_OFFSET(0x90B82D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPREXTENSIONS_GETSEQVAL_OFFSET UNITYSDK_OFFSET(0x90BBDA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPREXTENSIONS_GETCONST_OFFSET UNITYSDK_OFFSET(0x90B02B0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int EXPRExtensions_TypeDefinitionIndex = 34492;

	class EXPRExtensions : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* Map(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, Il2CppObject* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPREXTENSIONS_MAP_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ToEnumerable(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (Il2CppObject*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPREXTENSIONS_TOENUMERABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean isLvalue(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPREXTENSIONS_ISLVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean isChecked(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPREXTENSIONS_ISCHECKED_OFFSET))(arg, nullptr);
		}

		::System::Boolean isNull(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPREXTENSIONS_ISNULL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsZero(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPREXTENSIONS_ISZERO_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* GetSeqVal(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPREXTENSIONS_GETSEQVAL_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* GetConst(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPREXTENSIONS_GETCONST_OFFSET))(arg, nullptr);
		}

	};
}

