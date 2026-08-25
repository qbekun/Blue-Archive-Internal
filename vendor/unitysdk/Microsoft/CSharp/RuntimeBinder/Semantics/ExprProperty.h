#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class PropWithType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethWithType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprMemberGroup; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class SymWithType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRPROPERTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x90D0CB0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRPROPERTY_GET_OPTIONALOBJECTTHROUGH_OFFSET UNITYSDK_OFFSET(0x90D0DE0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRPROPERTY_GET_PROPWITHTYPESLOT_OFFSET UNITYSDK_OFFSET(0x90D0DF0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRPROPERTY_GET_METHWITHTYPESET_OFFSET UNITYSDK_OFFSET(0x90D0E00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRPROPERTY_GETSYMWITHTYPE_OFFSET UNITYSDK_OFFSET(0x90D0E10)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprProperty_TypeDefinitionIndex = 34577;

	class ExprProperty : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* _OptionalObjectThrough_k__BackingField; // 0x50
		::Microsoft::CSharp::RuntimeBinder::Semantics::PropWithType* _PropWithTypeSlot_k__BackingField; // 0x58
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithType* _MethWithTypeSet_k__BackingField; // 0x60

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::PropWithType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup*, ::Microsoft::CSharp::RuntimeBinder::Semantics::PropWithType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRPROPERTY_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* get_OptionalObjectThrough()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRPROPERTY_GET_OPTIONALOBJECTTHROUGH_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::PropWithType* get_PropWithTypeSlot()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::PropWithType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRPROPERTY_GET_PROPWITHTYPESLOT_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithType* get_MethWithTypeSet()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRPROPERTY_GET_METHWITHTYPESET_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* GetSymWithType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRPROPERTY_GETSYMWITHTYPE_OFFSET))(nullptr);
		}

	};
}

