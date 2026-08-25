#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodOrPropertySymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHPROPWITHINST_GET_TYPEARGS_OFFSET UNITYSDK_OFFSET(0x90E0A00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHPROPWITHINST_SET_TYPEARGS_OFFSET UNITYSDK_OFFSET(0x90E0A10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHPROPWITHINST_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E0A20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHPROPWITHINST_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E0AD0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHPROPWITHINST_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E0B30)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHPROPWITHINST_CLEAR_OFFSET UNITYSDK_OFFSET(0x90E0BA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHPROPWITHINST_SET_OFFSET UNITYSDK_OFFSET(0x90E0A70)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int MethPropWithInst_TypeDefinitionIndex = 34619;

	class MethPropWithInst : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* _TypeArgs_k__BackingField; // 0x20

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* get_TypeArgs()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHPROPWITHINST_GET_TYPEARGS_OFFSET))(nullptr);
		}

		::System::Void set_TypeArgs(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHPROPWITHINST_SET_TYPEARGS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHPROPWITHINST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHPROPWITHINST_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHPROPWITHINST_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHPROPWITHINST_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Set(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHPROPWITHINST_SET_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

