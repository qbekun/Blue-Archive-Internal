#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprList; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CF1A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONITERATOR_ATEND_OFFSET UNITYSDK_OFFSET(0x90CF2D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONITERATOR_CURRENT_OFFSET UNITYSDK_OFFSET(0x90CF2F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONITERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x90CF300)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONITERATOR_COUNT_OFFSET UNITYSDK_OFFSET(0x90CF3C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONITERATOR_INIT_OFFSET UNITYSDK_OFFSET(0x90CF240)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExpressionIterator_TypeDefinitionIndex = 34569;

	class ExpressionIterator : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprList* _pList; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _pCurrent; // 0x18

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONITERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean AtEnd()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONITERATOR_ATEND_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* Current()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONITERATOR_CURRENT_OFFSET))(nullptr);
		}

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONITERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Int32 Count(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::System::Int32(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONITERATOR_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONITERATOR_INIT_OFFSET))(arg, nullptr);
		}

	};
}

