#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class EXPRFLAG; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCAST_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CE4E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCAST_GET_ARGUMENT_OFFSET UNITYSDK_OFFSET(0x90CE540)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCAST_SET_ARGUMENT_OFFSET UNITYSDK_OFFSET(0x90CE550)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCAST_GET_ISBOXINGCAST_OFFSET UNITYSDK_OFFSET(0x90CE560)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCAST_GET_OBJECT_OFFSET UNITYSDK_OFFSET(0x90CE570)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprCast_TypeDefinitionIndex = 34559;

	class ExprCast : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _Argument_k__BackingField; // 0x40

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCAST_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_Argument()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCAST_GET_ARGUMENT_OFFSET))(nullptr);
		}

		::System::Void set_Argument(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCAST_SET_ARGUMENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsBoxingCast()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCAST_GET_ISBOXINGCAST_OFFSET))(nullptr);
		}

		::System::Object* get_Object()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRCAST_GET_OBJECT_OFFSET))(nullptr);
		}

	};
}

