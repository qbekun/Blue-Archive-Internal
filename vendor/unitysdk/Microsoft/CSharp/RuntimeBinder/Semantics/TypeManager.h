#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ArrayType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class PointerType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class NullableType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ParameterModifierType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class SubstContext; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class PredefinedType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeParameterType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeParameterSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType&; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_GETARRAY_OFFSET UNITYSDK_OFFSET(0x90D7020)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_GETAGGREGATE_OFFSET UNITYSDK_OFFSET(0x90C9C40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_GETAGGREGATE_OFFSET UNITYSDK_OFFSET(0x90D9F30)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_GETPOINTER_OFFSET UNITYSDK_OFFSET(0x90DDA50)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_GETNULLABLE_OFFSET UNITYSDK_OFFSET(0x90D5E40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_GETPARAMETERMODIFIER_OFFSET UNITYSDK_OFFSET(0x90DDF20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_GETNULLABLE_OFFSET UNITYSDK_OFFSET(0x90D9E80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPE_OFFSET UNITYSDK_OFFSET(0x90DE190)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPE_OFFSET UNITYSDK_OFFSET(0x90D8190)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPE_OFFSET UNITYSDK_OFFSET(0x90DE6A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPEARRAY_OFFSET UNITYSDK_OFFSET(0x90DE700)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPEARRAY_OFFSET UNITYSDK_OFFSET(0x90D7E70)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPEARRAY_OFFSET UNITYSDK_OFFSET(0x90D8320)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPECORE_OFFSET UNITYSDK_OFFSET(0x90DE5F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPECORE_OFFSET UNITYSDK_OFFSET(0x90DE260)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTEQUALTYPES_OFFSET UNITYSDK_OFFSET(0x90DE950)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTEQUALTYPEARRAYS_OFFSET UNITYSDK_OFFSET(0x90DEDA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTEQUALTYPESCORE_OFFSET UNITYSDK_OFFSET(0x90DEA60)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_TYPECONTAINSTYPE_OFFSET UNITYSDK_OFFSET(0x90CB430)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_TYPECONTAINSTYVARS_OFFSET UNITYSDK_OFFSET(0x90DEF40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_GETPREDEFAGG_OFFSET UNITYSDK_OFFSET(0x90CC760)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPE_OFFSET UNITYSDK_OFFSET(0x90DF110)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPE_OFFSET UNITYSDK_OFFSET(0x90DF190)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPE_OFFSET UNITYSDK_OFFSET(0x90C9030)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPE_OFFSET UNITYSDK_OFFSET(0x90D0550)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPE_OFFSET UNITYSDK_OFFSET(0x90DF210)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPEARRAY_OFFSET UNITYSDK_OFFSET(0x90D04D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPEARRAY_OFFSET UNITYSDK_OFFSET(0x90D0AF0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_GETSTDMETHTYPEVAR_OFFSET UNITYSDK_OFFSET(0x90DF2F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_GETTYPEPARAMETER_OFFSET UNITYSDK_OFFSET(0x90DF4E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_GETBESTACCESSIBLETYPE_OFFSET UNITYSDK_OFFSET(0x90DF5C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_TRYVARIANCEADJUSTMENTTOGETACCESSIBLETYPE_OFFSET UNITYSDK_OFFSET(0x90DF8F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_TRYARRAYVARIANCEADJUSTMENTTOGETACCESSIBLETYPE_OFFSET UNITYSDK_OFFSET(0x90DFC80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_INTERNALSVISIBLETO_OFFSET UNITYSDK_OFFSET(0x90CA3F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x90DFD40)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int TypeManager_TypeDefinitionIndex = 34608;

	class TypeManager : public Il2CppObject
	{
	public:
		Il2CppObject* s_internalsVisibleToCache; // 0x0
		StdTypeVarColl* s_stvcMethod; // 0x8

		::Microsoft::CSharp::RuntimeBinder::Semantics::ArrayType* GetArray(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ArrayType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_GETARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* GetAggregate(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_GETAGGREGATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* GetAggregate(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_GETAGGREGATE_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::PointerType* GetPointer(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::PointerType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_GETPOINTER_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::NullableType* GetNullable(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::NullableType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_GETNULLABLE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ParameterModifierType* GetParameterModifier(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::System::Boolean arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ParameterModifierType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_GETPARAMETERMODIFIER_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* GetNullable()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_GETNULLABLE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* SubstType(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::System::Boolean arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* SubstType(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* SubstType(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* SubstTypeArray(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPEARRAY_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* SubstTypeArray(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPEARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* SubstTypeArray(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPEARRAY_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* SubstTypeCore(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPECORE_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* SubstTypeCore(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPECORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SubstEqualTypes(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTEQUALTYPES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean SubstEqualTypeArrays(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTEQUALTYPEARRAYS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean SubstEqualTypesCore(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTEQUALTYPESCORE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TypeContainsType(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_TYPECONTAINSTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TypeContainsTyVars(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_TYPECONTAINSTYVARS_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* GetPredefAgg(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_GETPREDEFAGG_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* SubstType(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* SubstType(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* SubstType(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* SubstType(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* SubstType(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* SubstTypeArray(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPEARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* SubstTypeArray(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_SUBSTTYPEARRAY_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterType* GetStdMethTypeVar(::System::Int32 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_GETSTDMETHTYPEVAR_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterType* GetTypeParameter(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterSymbol* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_GETTYPEPARAMETER_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* GetBestAccessibleType(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_GETBESTACCESSIBLETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryVarianceAdjustmentToGetAccessibleType(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType&* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_TRYVARIANCEADJUSTMENTTOGETACCESSIBLETYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryArrayVarianceAdjustmentToGetAccessibleType(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArrayType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType&* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArrayType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_TRYARRAYVARIANCEADJUSTMENTTOGETACCESSIBLETYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean InternalsVisibleTo(::System::Reflection::Assembly* arg, ::System::Reflection::Assembly* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::Assembly*, ::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_INTERNALSVISIBLETO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPEMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

