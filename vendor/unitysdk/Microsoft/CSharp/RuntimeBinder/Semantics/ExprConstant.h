#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ConstVal; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONSTANT_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CE8A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONSTANT_GET_OPTIONALCONSTRUCTORCALL_OFFSET UNITYSDK_OFFSET(0x90CE8F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONSTANT_SET_OPTIONALCONSTRUCTORCALL_OFFSET UNITYSDK_OFFSET(0x90CE900)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONSTANT_GET_ISZERO_OFFSET UNITYSDK_OFFSET(0x90CE910)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONSTANT_GET_VAL_OFFSET UNITYSDK_OFFSET(0x90CE990)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONSTANT_GET_UINT64VALUE_OFFSET UNITYSDK_OFFSET(0x90CE9A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONSTANT_GET_INT64VALUE_OFFSET UNITYSDK_OFFSET(0x90CEA00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONSTANT_GET_OBJECT_OFFSET UNITYSDK_OFFSET(0x90CEAE0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprConstant_TypeDefinitionIndex = 34564;

	class ExprConstant : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _OptionalConstructorCall_k__BackingField; // 0x40
		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal* _Val_k__BackingField; // 0x48

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONSTANT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_OptionalConstructorCall()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONSTANT_GET_OPTIONALCONSTRUCTORCALL_OFFSET))(nullptr);
		}

		::System::Void set_OptionalConstructorCall(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONSTANT_SET_OPTIONALCONSTRUCTORCALL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsZero()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONSTANT_GET_ISZERO_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal* get_Val()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONSTANT_GET_VAL_OFFSET))(nullptr);
		}

		::System::UInt64 get_UInt64Value()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONSTANT_GET_UINT64VALUE_OFFSET))(nullptr);
		}

		::System::Int64 get_Int64Value()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONSTANT_GET_INT64VALUE_OFFSET))(nullptr);
		}

		::System::Object* get_Object()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCONSTANT_GET_OBJECT_OFFSET))(nullptr);
		}

	};
}

