#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExpressionKind; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethPropWithInst; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUNARYOP_.CTOR_OFFSET UNITYSDK_OFFSET(0x90D1510)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUNARYOP_.CTOR_OFFSET UNITYSDK_OFFSET(0x90D1560)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUNARYOP_GET_CHILD_OFFSET UNITYSDK_OFFSET(0x90D15E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUNARYOP_SET_CHILD_OFFSET UNITYSDK_OFFSET(0x90D15F0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprUnaryOp_TypeDefinitionIndex = 34581;

	class ExprUnaryOp : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _Child_k__BackingField; // 0x58

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUNARYOP_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUNARYOP_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_Child()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUNARYOP_GET_CHILD_OFFSET))(nullptr);
		}

		::System::Void set_Child(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRUNARYOP_SET_CHILD_OFFSET))(arg, nullptr);
		}

	};
}

