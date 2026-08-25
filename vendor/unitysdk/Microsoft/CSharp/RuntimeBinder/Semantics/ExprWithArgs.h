#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprMemberGroup; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExpressionKind; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class SymWithType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRWITHARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CE3F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRWITHARGS_GET_MEMBERGROUP_OFFSET UNITYSDK_OFFSET(0x90CF0D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRWITHARGS_SET_MEMBERGROUP_OFFSET UNITYSDK_OFFSET(0x90CF0E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRWITHARGS_GET_OPTIONALARGUMENTS_OFFSET UNITYSDK_OFFSET(0x90CF0F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRWITHARGS_SET_OPTIONALARGUMENTS_OFFSET UNITYSDK_OFFSET(0x90CF100)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRWITHARGS_GETSYMWITHTYPE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprWithArgs_TypeDefinitionIndex = 34567;

	class ExprWithArgs : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup* _MemberGroup_k__BackingField; // 0x40
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _OptionalArguments_k__BackingField; // 0x48

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRWITHARGS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup* get_MemberGroup()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRWITHARGS_GET_MEMBERGROUP_OFFSET))(nullptr);
		}

		::System::Void set_MemberGroup(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRWITHARGS_SET_MEMBERGROUP_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_OptionalArguments()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRWITHARGS_GET_OPTIONALARGUMENTS_OFFSET))(nullptr);
		}

		::System::Void set_OptionalArguments(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRWITHARGS_SET_OPTIONALARGUMENTS_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* GetSymWithType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRWITHARGS_GETSYMWITHTYPE_OFFSET))(nullptr);
		}

	};
}

