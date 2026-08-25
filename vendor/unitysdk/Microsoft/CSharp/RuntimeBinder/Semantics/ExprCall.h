#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethWithInst; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class PREDEFMETH; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class NullableCallLiftKind; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class EXPRFLAG; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprMemberGroup; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class SymWithType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCALL_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CE350)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCALL_GET_METHWITHINST_OFFSET UNITYSDK_OFFSET(0x90CE430)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCALL_SET_METHWITHINST_OFFSET UNITYSDK_OFFSET(0x90CE440)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCALL_GET_PREDEFINEDMETHOD_OFFSET UNITYSDK_OFFSET(0x90CE450)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCALL_SET_PREDEFINEDMETHOD_OFFSET UNITYSDK_OFFSET(0x90CE460)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCALL_GET_NULLABLECALLLIFTKIND_OFFSET UNITYSDK_OFFSET(0x90CE470)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCALL_SET_NULLABLECALLLIFTKIND_OFFSET UNITYSDK_OFFSET(0x90CE480)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCALL_GET_PCONVERSIONS_OFFSET UNITYSDK_OFFSET(0x90CE490)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCALL_SET_PCONVERSIONS_OFFSET UNITYSDK_OFFSET(0x90CE4A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCALL_GET_CASTOFNONLIFTEDRESULTTOLIFTEDTYPE_OFFSET UNITYSDK_OFFSET(0x90CE4B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCALL_SET_CASTOFNONLIFTEDRESULTTOLIFTEDTYPE_OFFSET UNITYSDK_OFFSET(0x90CE4C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCALL_GETSYMWITHTYPE_OFFSET UNITYSDK_OFFSET(0x90CE4D0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprCall_TypeDefinitionIndex = 34558;

	class ExprCall : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst* _MethWithInst_k__BackingField; // 0x50
		::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH* _PredefinedMethod_k__BackingField; // 0x58
		::Microsoft::CSharp::RuntimeBinder::Semantics::NullableCallLiftKind* _NullableCallLiftKind_k__BackingField; // 0x5C
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _PConversions_k__BackingField; // 0x60
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _CastOfNonLiftedResultToLiftedType_k__BackingField; // 0x68

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCALL_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst* get_MethWithInst()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCALL_GET_METHWITHINST_OFFSET))(nullptr);
		}

		::System::Void set_MethWithInst(::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCALL_SET_METHWITHINST_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH* get_PredefinedMethod()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCALL_GET_PREDEFINEDMETHOD_OFFSET))(nullptr);
		}

		::System::Void set_PredefinedMethod(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCALL_SET_PREDEFINEDMETHOD_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::NullableCallLiftKind* get_NullableCallLiftKind()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::NullableCallLiftKind*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCALL_GET_NULLABLECALLLIFTKIND_OFFSET))(nullptr);
		}

		::System::Void set_NullableCallLiftKind(::Microsoft::CSharp::RuntimeBinder::Semantics::NullableCallLiftKind* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::NullableCallLiftKind*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCALL_SET_NULLABLECALLLIFTKIND_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_PConversions()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCALL_GET_PCONVERSIONS_OFFSET))(nullptr);
		}

		::System::Void set_PConversions(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCALL_SET_PCONVERSIONS_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_CastOfNonLiftedResultToLiftedType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCALL_GET_CASTOFNONLIFTEDRESULTTOLIFTEDTYPE_OFFSET))(nullptr);
		}

		::System::Void set_CastOfNonLiftedResultToLiftedType(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCALL_SET_CASTOFNONLIFTEDRESULTTOLIFTEDTYPE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* GetSymWithType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCALL_GETSYMWITHTYPE_OFFSET))(nullptr);
		}

	};
}

