#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Symbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class SYMKIND; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class Name; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ParentSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class NamespaceSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class NamespaceOrAggregateSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class FieldSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class LocalVariableSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Scope; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class PropertySymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class EventSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeParameterSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class IndexerSymbol; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMFACTORY_NEWBASICSYMBOL_OFFSET UNITYSDK_OFFSET(0x90CBA60)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMFACTORY_CREATENAMESPACE_OFFSET UNITYSDK_OFFSET(0x90CBD00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMFACTORY_CREATEAGGREGATE_OFFSET UNITYSDK_OFFSET(0x90CBD70)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMFACTORY_CREATEMEMBERVAR_OFFSET UNITYSDK_OFFSET(0x90CBEA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMFACTORY_CREATELOCALVAR_OFFSET UNITYSDK_OFFSET(0x90CBF20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMFACTORY_CREATEMETHOD_OFFSET UNITYSDK_OFFSET(0x90CBFC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMFACTORY_CREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x90CC020)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMFACTORY_CREATEEVENT_OFFSET UNITYSDK_OFFSET(0x90CC0A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMFACTORY_CREATEMETHODTYPEPARAMETER_OFFSET UNITYSDK_OFFSET(0x90CC100)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMFACTORY_CREATECLASSTYPEPARAMETER_OFFSET UNITYSDK_OFFSET(0x90CC190)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMFACTORY_CREATESCOPE_OFFSET UNITYSDK_OFFSET(0x90CC220)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMFACTORY_CREATEINDEXER_OFFSET UNITYSDK_OFFSET(0x90CC280)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int SymFactory_TypeDefinitionIndex = 34541;

	class SymFactory : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* NewBasicSymbol(::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND* arg, ::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ParentSymbol* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND*, ::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ParentSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMFACTORY_NEWBASICSYMBOL_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::NamespaceSymbol* CreateNamespace(::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::NamespaceSymbol* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::NamespaceSymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::Microsoft::CSharp::RuntimeBinder::Semantics::NamespaceSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMFACTORY_CREATENAMESPACE_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* CreateAggregate(::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::NamespaceOrAggregateSymbol* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::Microsoft::CSharp::RuntimeBinder::Semantics::NamespaceOrAggregateSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMFACTORY_CREATEAGGREGATE_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::FieldSymbol* CreateMemberVar(::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::FieldSymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMFACTORY_CREATEMEMBERVAR_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::LocalVariableSymbol* CreateLocalVar(::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Scope* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::LocalVariableSymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Scope*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMFACTORY_CREATELOCALVAR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* CreateMethod(::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMFACTORY_CREATEMETHOD_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::PropertySymbol* CreateProperty(::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::PropertySymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMFACTORY_CREATEPROPERTY_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::EventSymbol* CreateEvent(::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::EventSymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMFACTORY_CREATEEVENT_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterSymbol* CreateMethodTypeParameter(::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterSymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMFACTORY_CREATEMETHODTYPEPARAMETER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterSymbol* CreateClassTypeParameter(::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterSymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMFACTORY_CREATECLASSTYPEPARAMETER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Scope* CreateScope()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Scope*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMFACTORY_CREATESCOPE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::IndexerSymbol* CreateIndexer(::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ParentSymbol* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::IndexerSymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ParentSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMFACTORY_CREATEINDEXER_OFFSET))(arg, arg, nullptr);
		}

	};
}

