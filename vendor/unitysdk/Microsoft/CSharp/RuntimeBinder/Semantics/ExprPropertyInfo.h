#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class PropWithType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class PropertySymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRPROPERTYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x90D0E20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRPROPERTYINFO_GET_PROPERTY_OFFSET UNITYSDK_OFFSET(0x90D0F30)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRPROPERTYINFO_GET_PROPERTYINFO_OFFSET UNITYSDK_OFFSET(0x90D0F40)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprPropertyInfo_TypeDefinitionIndex = 34578;

	class ExprPropertyInfo : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::PropWithType* _Property_k__BackingField; // 0x40

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::PropertySymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::PropertySymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRPROPERTYINFO_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::PropWithType* get_Property()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::PropWithType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRPROPERTYINFO_GET_PROPERTY_OFFSET))(nullptr);
		}

		::System::Reflection::PropertyInfo* get_PropertyInfo()
		{
			return (return (::System::Reflection::PropertyInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRPROPERTYINFO_GET_PROPERTYINFO_OFFSET))(nullptr);
		}

	};
}

