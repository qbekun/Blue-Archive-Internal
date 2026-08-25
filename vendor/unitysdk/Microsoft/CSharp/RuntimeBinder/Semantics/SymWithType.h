#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Symbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class SymWithType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodOrPropertySymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class PropertySymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class FieldSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class EventSymbol; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E04D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E04E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_CLEAR_OFFSET UNITYSDK_OFFSET(0x90E0570)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_GET_ATS_OFFSET UNITYSDK_OFFSET(0x90E05B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_GET_SYM_OFFSET UNITYSDK_OFFSET(0x90E05C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_GETTYPE_OFFSET UNITYSDK_OFFSET(0x90C97A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x90E05D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x90D0D80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x90E0630)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x90E06B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x90E0710)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_METHPROP_OFFSET UNITYSDK_OFFSET(0x90E0730)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_METH_OFFSET UNITYSDK_OFFSET(0x90D0480)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_PROP_OFFSET UNITYSDK_OFFSET(0x90D1390)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_FIELD_OFFSET UNITYSDK_OFFSET(0x90CF520)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_EVENT_OFFSET UNITYSDK_OFFSET(0x90E07A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_SET_OFFSET UNITYSDK_OFFSET(0x90E0530)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int SymWithType_TypeDefinitionIndex = 34613;

	class SymWithType : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* _ats; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* _sym; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_CLEAR_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* get_Ats()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_GET_ATS_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* get_Sym()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_GET_SYM_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* GetType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_GETTYPE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Implicit(::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol* MethProp()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_METHPROP_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* Meth()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_METH_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::PropertySymbol* Prop()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::PropertySymbol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_PROP_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::FieldSymbol* Field()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::FieldSymbol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_FIELD_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::EventSymbol* Event()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::EventSymbol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_EVENT_OFFSET))(nullptr);
		}

		::System::Void Set(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMWITHTYPE_SET_OFFSET))(arg, arg, nullptr);
		}

	};
}

