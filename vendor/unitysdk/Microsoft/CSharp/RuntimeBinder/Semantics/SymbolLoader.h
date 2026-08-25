#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class PredefinedType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Symbol; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class Name; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class symbmask_t; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ArrayType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_GETPREDEFAGG_OFFSET UNITYSDK_OFFSET(0x90CC6C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_GETPREDEFINDTYPE_OFFSET UNITYSDK_OFFSET(0x90CC7B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_LOOKUPAGGMEMBER_OFFSET UNITYSDK_OFFSET(0x90CA9C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_ISBASEINTERFACE_OFFSET UNITYSDK_OFFSET(0x90CC9A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_ISBASECLASSOFCLASS_OFFSET UNITYSDK_OFFSET(0x90CCCB0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_ISBASECLASS_OFFSET UNITYSDK_OFFSET(0x90CCD00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_HASCOVARIANTARRAYCONVERSION_OFFSET UNITYSDK_OFFSET(0x90CCDE0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_HASIDENTITYORIMPLICITREFERENCECONVERSION_OFFSET UNITYSDK_OFFSET(0x90CD1C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_ARETYPESEQUALFORCONVERSION_OFFSET UNITYSDK_OFFSET(0x90CCB40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_HASARRAYCONVERSIONTOINTERFACE_OFFSET UNITYSDK_OFFSET(0x90CD210)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_HASIMPLICITREFERENCECONVERSION_OFFSET UNITYSDK_OFFSET(0x90CCE30)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_HASANYBASEINTERFACECONVERSION_OFFSET UNITYSDK_OFFSET(0x90CD360)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_HASINTERFACECONVERSION_OFFSET UNITYSDK_OFFSET(0x90CD490)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_HASDELEGATECONVERSION_OFFSET UNITYSDK_OFFSET(0x90CD4A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_HASVARIANTCONVERSION_OFFSET UNITYSDK_OFFSET(0x90CD4B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_HASIMPLICITBOXINGCONVERSION_OFFSET UNITYSDK_OFFSET(0x90CD710)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_HASBASECONVERSION_OFFSET UNITYSDK_OFFSET(0x90CD7C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_ISBASEAGGREGATE_OFFSET UNITYSDK_OFFSET(0x90CD870)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int SymbolLoader_TypeDefinitionIndex = 34547;

	class SymbolLoader : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* GetPredefAgg(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_GETPREDEFAGG_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* GetPredefindType(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_GETPREDEFINDTYPE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* LookupAggMember(::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::symbmask_t* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::symbmask_t*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_LOOKUPAGGMEMBER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsBaseInterface(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_ISBASEINTERFACE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsBaseClassOfClass(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_ISBASECLASSOFCLASS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsBaseClass(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_ISBASECLASS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasCovariantArrayConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::ArrayType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArrayType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ArrayType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArrayType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_HASCOVARIANTARRAYCONVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasIdentityOrImplicitReferenceConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_HASIDENTITYORIMPLICITREFERENCECONVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AreTypesEqualForConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_ARETYPESEQUALFORCONVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasArrayConversionToInterface(::Microsoft::CSharp::RuntimeBinder::Semantics::ArrayType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ArrayType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_HASARRAYCONVERSIONTOINTERFACE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasImplicitReferenceConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_HASIMPLICITREFERENCECONVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasAnyBaseInterfaceConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_HASANYBASEINTERFACECONVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasInterfaceConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_HASINTERFACECONVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasDelegateConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_HASDELEGATECONVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasVariantConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_HASVARIANTCONVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasImplicitBoxingConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_HASIMPLICITBOXINGCONVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasBaseConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_HASBASECONVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsBaseAggregate(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLLOADER_ISBASEAGGREGATE_OFFSET))(arg, arg, nullptr);
		}

	};
}

