#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Syntax { class Name; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class SYMKIND; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CMemberLookupResults; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class EXPRFLAG; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMEMBERGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CF750)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMEMBERGROUP_GET_NAME_OFFSET UNITYSDK_OFFSET(0x90CF8B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMEMBERGROUP_GET_TYPEARGS_OFFSET UNITYSDK_OFFSET(0x90CF8C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMEMBERGROUP_GET_SYMKIND_OFFSET UNITYSDK_OFFSET(0x90CF8D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMEMBERGROUP_GET_OPTIONALOBJECT_OFFSET UNITYSDK_OFFSET(0x90CF8E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMEMBERGROUP_SET_OPTIONALOBJECT_OFFSET UNITYSDK_OFFSET(0x90CF8F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMEMBERGROUP_SET_OPTIONALLHS_OFFSET UNITYSDK_OFFSET(0x90CF900)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMEMBERGROUP_GET_MEMBERLOOKUPRESULTS_OFFSET UNITYSDK_OFFSET(0x90CF910)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMEMBERGROUP_GET_PARENTTYPE_OFFSET UNITYSDK_OFFSET(0x90CF920)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMEMBERGROUP_GET_ISDELEGATE_OFFSET UNITYSDK_OFFSET(0x90CF930)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprMemberGroup_TypeDefinitionIndex = 34574;

	class ExprMemberGroup : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Syntax::Name* _Name_k__BackingField; // 0x40
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* _TypeArgs_k__BackingField; // 0x48
		::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND* _SymKind_k__BackingField; // 0x50
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _OptionalObject_k__BackingField; // 0x58
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _OptionalLHS_k__BackingField; // 0x60
		::Microsoft::CSharp::RuntimeBinder::Semantics::CMemberLookupResults* _MemberLookupResults_k__BackingField; // 0x68
		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* _ParentType_k__BackingField; // 0x70

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CMemberLookupResults* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CMemberLookupResults*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMEMBERGROUP_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Syntax::Name* get_Name()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Syntax::Name*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMEMBERGROUP_GET_NAME_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* get_TypeArgs()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMEMBERGROUP_GET_TYPEARGS_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND* get_SymKind()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMEMBERGROUP_GET_SYMKIND_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_OptionalObject()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMEMBERGROUP_GET_OPTIONALOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_OptionalObject(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMEMBERGROUP_SET_OPTIONALOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void set_OptionalLHS(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMEMBERGROUP_SET_OPTIONALLHS_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CMemberLookupResults* get_MemberLookupResults()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CMemberLookupResults*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMEMBERGROUP_GET_MEMBERLOOKUPRESULTS_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* get_ParentType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMEMBERGROUP_GET_PARENTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDelegate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMEMBERGROUP_GET_ISDELEGATE_OFFSET))(nullptr);
		}

	};
}

