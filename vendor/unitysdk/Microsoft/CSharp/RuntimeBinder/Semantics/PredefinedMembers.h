#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class PropertySymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class PREDEFPROP; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class Name; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class PREDEFMETH; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class PredefinedType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ACCESS; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class PredefinedPropertyInfo; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class PredefinedMethodInfo; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_LOADPROPERTY_OFFSET UNITYSDK_OFFSET(0x90C4110)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_LOADPROPERTY_OFFSET UNITYSDK_OFFSET(0x90C42D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_GETPREDEFAGG_OFFSET UNITYSDK_OFFSET(0x90C4460)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_LOADTYPEFROMSIGNATURE_OFFSET UNITYSDK_OFFSET(0x90C45A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_LOADTYPEARRAYFROMSIGNATURE_OFFSET UNITYSDK_OFFSET(0x90C4900)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x90C4A50)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_GETMETHOD_OFFSET UNITYSDK_OFFSET(0x90C4470)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_LOADMETHOD_OFFSET UNITYSDK_OFFSET(0x90C4CF0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_LOOKUPMETHODWHILELOADING_OFFSET UNITYSDK_OFFSET(0x90C4E50)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_LOADMETHOD_OFFSET UNITYSDK_OFFSET(0x90C4B80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_GETPROPGETTER_OFFSET UNITYSDK_OFFSET(0x90C50E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_GETPROPPREDEFTYPE_OFFSET UNITYSDK_OFFSET(0x90C4380)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_GETPROPINFO_OFFSET UNITYSDK_OFFSET(0x90C4240)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_GETMETHINFO_OFFSET UNITYSDK_OFFSET(0x90C5050)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x90C51D0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int PredefinedMembers_TypeDefinitionIndex = 34525;

	class PredefinedMembers : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _methods; // 0x0
		::Il2CppArray<::System::Object*>* _properties; // 0x8
		::Il2CppArray<::System::Object*>* s_predefinedProperties; // 0x10
		::Il2CppArray<::System::Object*>* s_predefinedMethods; // 0x18

		::Microsoft::CSharp::RuntimeBinder::Semantics::PropertySymbol* LoadProperty(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFPROP* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::PropertySymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFPROP*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_LOADPROPERTY_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::PropertySymbol* LoadProperty(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFPROP* arg, ::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::PropertySymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFPROP*, ::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_LOADPROPERTY_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* GetPredefAgg(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_GETPREDEFAGG_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* LoadTypeFromSignature(::Il2CppArray<::System::Object*>* arg, int32_t&* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::Il2CppArray<::System::Object*>*, int32_t&*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_LOADTYPEFROMSIGNATURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* LoadTypeArrayFromSignature(::Il2CppArray<::System::Object*>* arg, int32_t&* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*(*)(::Il2CppArray<::System::Object*>*, int32_t&*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_LOADTYPEARRAYFROMSIGNATURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::PropertySymbol* GetProperty(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFPROP* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::PropertySymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFPROP*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_GETPROPERTY_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* GetMethod(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_GETMETHOD_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* LoadMethod(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ACCESS* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ACCESS*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_LOADMETHOD_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* LookupMethodWhileLoading(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg, ::System::Int32 arg, ::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ACCESS* arg, ::System::Boolean arg, ::System::Boolean arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::System::Int32, ::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ACCESS*, ::System::Boolean, ::System::Boolean, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_LOOKUPMETHODWHILELOADING_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* LoadMethod(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_LOADMETHOD_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH* GetPropGetter(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFPROP* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFPROP*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_GETPROPGETTER_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* GetPropPredefType(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFPROP* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFPROP*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_GETPROPPREDEFTYPE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::PredefinedPropertyInfo* GetPropInfo(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFPROP* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::PredefinedPropertyInfo*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFPROP*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_GETPROPINFO_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::PredefinedMethodInfo* GetMethInfo(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::PredefinedMethodInfo*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_GETMETHINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMEMBERS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

