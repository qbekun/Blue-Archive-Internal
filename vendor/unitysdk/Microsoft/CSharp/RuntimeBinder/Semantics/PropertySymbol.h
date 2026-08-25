#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodSymbol; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PROPERTYSYMBOL_GET_GETTERMETHOD_OFFSET UNITYSDK_OFFSET(0x90CB9A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PROPERTYSYMBOL_SET_GETTERMETHOD_OFFSET UNITYSDK_OFFSET(0x90CB9B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PROPERTYSYMBOL_GET_SETTERMETHOD_OFFSET UNITYSDK_OFFSET(0x90CB9D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PROPERTYSYMBOL_SET_SETTERMETHOD_OFFSET UNITYSDK_OFFSET(0x90CB9E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PROPERTYSYMBOL_GET_ASSOCIATEDPROPERTYINFO_OFFSET UNITYSDK_OFFSET(0x90CBA00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PROPERTYSYMBOL_SET_ASSOCIATEDPROPERTYINFO_OFFSET UNITYSDK_OFFSET(0x90CBA10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PROPERTYSYMBOL_GET_BOGUS_OFFSET UNITYSDK_OFFSET(0x90CBA30)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PROPERTYSYMBOL_SET_BOGUS_OFFSET UNITYSDK_OFFSET(0x90CBA40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PROPERTYSYMBOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CAA50)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int PropertySymbol_TypeDefinitionIndex = 34539;

	class PropertySymbol : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* _GetterMethod_k__BackingField; // 0xA8
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* _SetterMethod_k__BackingField; // 0xB0
		::System::Reflection::PropertyInfo* _AssociatedPropertyInfo_k__BackingField; // 0xB8
		::System::Boolean _Bogus_k__BackingField; // 0xC0

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* get_GetterMethod()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PROPERTYSYMBOL_GET_GETTERMETHOD_OFFSET))(nullptr);
		}

		::System::Void set_GetterMethod(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PROPERTYSYMBOL_SET_GETTERMETHOD_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* get_SetterMethod()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PROPERTYSYMBOL_GET_SETTERMETHOD_OFFSET))(nullptr);
		}

		::System::Void set_SetterMethod(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PROPERTYSYMBOL_SET_SETTERMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Reflection::PropertyInfo* get_AssociatedPropertyInfo()
		{
			return (return (::System::Reflection::PropertyInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PROPERTYSYMBOL_GET_ASSOCIATEDPROPERTYINFO_OFFSET))(nullptr);
		}

		::System::Void set_AssociatedPropertyInfo(::System::Reflection::PropertyInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::PropertyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PROPERTYSYMBOL_SET_ASSOCIATEDPROPERTYINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Bogus()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PROPERTYSYMBOL_GET_BOGUS_OFFSET))(nullptr);
		}

		::System::Void set_Bogus(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PROPERTYSYMBOL_SET_BOGUS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PROPERTYSYMBOL_.CTOR_OFFSET))(nullptr);
		}

	};
}

