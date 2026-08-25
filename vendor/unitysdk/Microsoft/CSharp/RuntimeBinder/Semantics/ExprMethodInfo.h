#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethWithInst; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMETHODINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CF940)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMETHODINFO_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x90CFB20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMETHODINFO_GET_METHODINFO_OFFSET UNITYSDK_OFFSET(0x90CFB30)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMETHODINFO_GET_CONSTRUCTORINFO_OFFSET UNITYSDK_OFFSET(0x90D0620)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMETHODINFO_GET_OBJECT_OFFSET UNITYSDK_OFFSET(0x90D0BD0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprMethodInfo_TypeDefinitionIndex = 34575;

	class ExprMethodInfo : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst* _Method_k__BackingField; // 0x40

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMETHODINFO_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst* get_Method()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMETHODINFO_GET_METHOD_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* get_MethodInfo()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMETHODINFO_GET_METHODINFO_OFFSET))(nullptr);
		}

		::System::Reflection::ConstructorInfo* get_ConstructorInfo()
		{
			return (return (::System::Reflection::ConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMETHODINFO_GET_CONSTRUCTORINFO_OFFSET))(nullptr);
		}

		::System::Object* get_Object()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRMETHODINFO_GET_OBJECT_OFFSET))(nullptr);
		}

	};
}

