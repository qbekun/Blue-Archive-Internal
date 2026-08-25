#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class PredefinedType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class FUNDTYPE; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ConstValKind; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x90D8070)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_OUTERTYPE_OFFSET UNITYSDK_OFFSET(0x90D8170)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_OWNINGAGGREGATE_OFFSET UNITYSDK_OFFSET(0x90D8180)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_BASECLASS_OFFSET UNITYSDK_OFFSET(0x90CCB70)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_TYPEHIERARCHY_OFFSET UNITYSDK_OFFSET(0x90D8250)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_TYPEARGSTHIS_OFFSET UNITYSDK_OFFSET(0x90D8300)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_TYPEARGSALL_OFFSET UNITYSDK_OFFSET(0x90D8310)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_IFACESALL_OFFSET UNITYSDK_OFFSET(0x90CCA60)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISCOLLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x90D8380)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_WINRTCOLLECTIONIFACESALL_OFFSET UNITYSDK_OFFSET(0x90D8760)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISREFERENCETYPE_OFFSET UNITYSDK_OFFSET(0x90D8930)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISNONNULLABLEVALUETYPE_OFFSET UNITYSDK_OFFSET(0x90D8960)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISVALUETYPE_OFFSET UNITYSDK_OFFSET(0x90D8980)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISSTATICCLASS_OFFSET UNITYSDK_OFFSET(0x90D89B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISPREDEFINED_OFFSET UNITYSDK_OFFSET(0x90D89E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_PREDEFINEDTYPE_OFFSET UNITYSDK_OFFSET(0x90D8A00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_ISPREDEFTYPE_OFFSET UNITYSDK_OFFSET(0x90D8A20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISDELEGATETYPE_OFFSET UNITYSDK_OFFSET(0x90D8A60)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x90D8A90)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISSIMPLEORENUM_OFFSET UNITYSDK_OFFSET(0x90D8B10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISSIMPLEORENUMORSTRING_OFFSET UNITYSDK_OFFSET(0x90D8B90)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISNUMERICTYPE_OFFSET UNITYSDK_OFFSET(0x90D8C10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISSTRUCTTYPE_OFFSET UNITYSDK_OFFSET(0x90D8CB0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISENUMTYPE_OFFSET UNITYSDK_OFFSET(0x90D8CE0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISINTERFACETYPE_OFFSET UNITYSDK_OFFSET(0x90D8D10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISCLASSTYPE_OFFSET UNITYSDK_OFFSET(0x90D8D40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_UNDERLYINGENUMTYPE_OFFSET UNITYSDK_OFFSET(0x90D8D70)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ASSOCIATEDSYSTEMTYPE_OFFSET UNITYSDK_OFFSET(0x90D8D90)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_CALCULATEASSOCIATEDSYSTEMTYPE_OFFSET UNITYSDK_OFFSET(0x90D8DD0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_FUNDAMENTALTYPE_OFFSET UNITYSDK_OFFSET(0x90D9010)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_CONSTVALKIND_OFFSET UNITYSDK_OFFSET(0x90D91E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GETATS_OFFSET UNITYSDK_OFFSET(0x90D9330)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int AggregateType_TypeDefinitionIndex = 34590;

	class AggregateType : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* _baseType; // 0x18
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* _ifacesAll; // 0x20
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* _winrtifacesAll; // 0x28
		::System::Type* _associatedSystemType; // 0x30
		Il2CppObject* ConstraintError; // 0x38
		::System::Boolean AllHidden; // 0x3A
		::System::Boolean DiffHidden; // 0x3B
		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* _OuterType_k__BackingField; // 0x40
		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* _OwningAggregate_k__BackingField; // 0x48
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* _TypeArgsThis_k__BackingField; // 0x50
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* _TypeArgsAll_k__BackingField; // 0x58

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* get_OuterType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_OUTERTYPE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* get_OwningAggregate()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_OWNINGAGGREGATE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* get_BaseClass()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_BASECLASS_OFFSET))(nullptr);
		}

		Il2CppObject* get_TypeHierarchy()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_TYPEHIERARCHY_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* get_TypeArgsThis()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_TYPEARGSTHIS_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* get_TypeArgsAll()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_TYPEARGSALL_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* get_IfacesAll()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_IFACESALL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCollectionType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISCOLLECTIONTYPE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* get_WinRTCollectionIfacesAll()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_WINRTCOLLECTIONIFACESALL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReferenceType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISREFERENCETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNonNullableValueType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISNONNULLABLEVALUETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValueType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISVALUETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsStaticClass()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISSTATICCLASS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPredefined()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISPREDEFINED_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* get_PredefinedType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_PREDEFINEDTYPE_OFFSET))(nullptr);
		}

		::System::Boolean IsPredefType(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_ISPREDEFTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDelegateType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISDELEGATETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSimpleType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISSIMPLETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSimpleOrEnum()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISSIMPLEORENUM_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSimpleOrEnumOrString()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISSIMPLEORENUMORSTRING_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNumericType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISNUMERICTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsStructType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISSTRUCTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEnumType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISENUMTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInterfaceType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISINTERFACETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsClassType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ISCLASSTYPE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* get_UnderlyingEnumType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_UNDERLYINGENUMTYPE_OFFSET))(nullptr);
		}

		::System::Type* get_AssociatedSystemType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_ASSOCIATEDSYSTEMTYPE_OFFSET))(nullptr);
		}

		::System::Type* CalculateAssociatedSystemType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_CALCULATEASSOCIATEDSYSTEMTYPE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::FUNDTYPE* get_FundamentalType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::FUNDTYPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_FUNDAMENTALTYPE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstValKind* get_ConstValKind()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ConstValKind*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GET_CONSTVALKIND_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* GetAts()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATETYPE_GETATS_OFFSET))(nullptr);
		}

	};
}

