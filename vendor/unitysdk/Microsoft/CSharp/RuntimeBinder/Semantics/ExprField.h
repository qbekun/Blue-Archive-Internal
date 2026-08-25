#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class FieldWithType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CF440)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFIELD_GET_OPTIONALOBJECT_OFFSET UNITYSDK_OFFSET(0x90CF590)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFIELD_SET_OPTIONALOBJECT_OFFSET UNITYSDK_OFFSET(0x90CF5A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFIELD_GET_FIELDWITHTYPE_OFFSET UNITYSDK_OFFSET(0x90CF5B0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprField_TypeDefinitionIndex = 34570;

	class ExprField : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _OptionalObject_k__BackingField; // 0x40
		::Microsoft::CSharp::RuntimeBinder::Semantics::FieldWithType* _FieldWithType_k__BackingField; // 0x48

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::FieldWithType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::FieldWithType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFIELD_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_OptionalObject()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFIELD_GET_OPTIONALOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_OptionalObject(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFIELD_SET_OPTIONALOBJECT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::FieldWithType* get_FieldWithType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::FieldWithType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFIELD_GET_FIELDWITHTYPE_OFFSET))(nullptr);
		}

	};
}

