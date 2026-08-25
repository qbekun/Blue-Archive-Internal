#pragma once
#include "../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class SymWithType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ParentSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MemberLookup; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class Name; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeParameterType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class NamespaceOrAggregateSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Symbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class NamespaceSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class FieldSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodKindEnum; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodOrPropertySymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class symbmask_t; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_POPULATESYMBOLTABLEWITHNAME_OFFSET UNITYSDK_OFFSET(0x9082E60)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_LOOKUPMEMBER_OFFSET UNITYSDK_OFFSET(0x90894D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDPARAMETERCONVERSIONS_OFFSET UNITYSDK_OFFSET(0x90926A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDNAMESONTYPE_OFFSET UNITYSDK_OFFSET(0x90925C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDNAMESININHERITANCEHIERARCHY_OFFSET UNITYSDK_OFFSET(0x9092CE0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_CREATEINHERITANCEHIERARCHYLIST_OFFSET UNITYSDK_OFFSET(0x9092760)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GETNAME_OFFSET UNITYSDK_OFFSET(0x9092620)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GETNAME_OFFSET UNITYSDK_OFFSET(0x9095530)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GETMETHODTYPEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9095710)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GETAGGREGATETYPEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9095AF0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_LOADCLASSTYPEPARAMETER_OFFSET UNITYSDK_OFFSET(0x9095E50)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ARETYPEPARAMETERSEQUIVALENT_OFFSET UNITYSDK_OFFSET(0x9095FE0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GETORIGINALTYPEPARAMETERTYPE_OFFSET UNITYSDK_OFFSET(0x9096290)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_LOADMETHODTYPEPARAMETER_OFFSET UNITYSDK_OFFSET(0x90959E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDTYPEPARAMETERTOSYMBOLTABLE_OFFSET UNITYSDK_OFFSET(0x90960A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_LOADSYMBOLSFROMTYPE_OFFSET UNITYSDK_OFFSET(0x9095090)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_PROCESSMETHODTYPEPARAMETER_OFFSET UNITYSDK_OFFSET(0x9097B30)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GETCONSTRUCTEDTYPE_OFFSET UNITYSDK_OFFSET(0x9097910)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_PROCESSSPECIALTYPEINCHAIN_OFFSET UNITYSDK_OFFSET(0x9096E30)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_BUILDDECLARATIONCHAIN_OFFSET UNITYSDK_OFFSET(0x90965C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_FINDSYMFORTYPE_OFFSET UNITYSDK_OFFSET(0x9096CF0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDNAMESPACETOSYMBOLTABLE_OFFSET UNITYSDK_OFFSET(0x9097BF0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GETCTYPEARRAYFROMTYPES_OFFSET UNITYSDK_OFFSET(0x908BB80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GETCTYPEFROMTYPE_OFFSET UNITYSDK_OFFSET(0x9088110)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDAGGREGATETOSYMBOLTABLE_OFFSET UNITYSDK_OFFSET(0x9097080)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_SETINTERFACESONAGGREGATE_OFFSET UNITYSDK_OFFSET(0x9097F50)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDFIELDTOSYMBOLTABLE_OFFSET UNITYSDK_OFFSET(0x9094580)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GET_EVENTREGISTRATIONTOKENTYPE_OFFSET UNITYSDK_OFFSET(0x908E390)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GET_WINDOWSRUNTIMEMARSHALTYPE_OFFSET UNITYSDK_OFFSET(0x908E400)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GET_EVENTREGISTRATIONTOKENTABLETYPE_OFFSET UNITYSDK_OFFSET(0x9098160)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GETTYPEBYNAME_OFFSET UNITYSDK_OFFSET(0x9098050)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDEVENTTOSYMBOLTABLE_OFFSET UNITYSDK_OFFSET(0x90948C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDPREDEFINEDPROPERTYTOSYMBOLTABLE_OFFSET UNITYSDK_OFFSET(0x90981D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDPROPERTYTOSYMBOLTABLE_OFFSET UNITYSDK_OFFSET(0x9093CB0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDPREDEFINEDMETHODTOSYMBOLTABLE_OFFSET UNITYSDK_OFFSET(0x9098B60)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDMETHODTOSYMBOLTABLE_OFFSET UNITYSDK_OFFSET(0x90937B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_SETPARAMETERDATAFORMETHPROP_OFFSET UNITYSDK_OFFSET(0x90988E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_SETPARAMETERATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9099700)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_FINDMATCHINGMETHOD_OFFSET UNITYSDK_OFFSET(0x9097D60)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GETCOUNTOFMODOPTS_OFFSET UNITYSDK_OFFSET(0x90996F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_CREATEPARAMETERARRAY_OFFSET UNITYSDK_OFFSET(0x90985C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GETTYPEOFPARAMETER_OFFSET UNITYSDK_OFFSET(0x9099F50)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_DOESMETHODHAVEPARAMETERARRAY_OFFSET UNITYSDK_OFFSET(0x9098810)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GETSLOTFOROVERRIDE_OFFSET UNITYSDK_OFFSET(0x90995A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_FINDMETHODFROMMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x909A0E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_AGGREGATECONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x908BA80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDCONVERSIONSFORTYPE_OFFSET UNITYSDK_OFFSET(0x9089B10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDCONVERSIONSFORONETYPE_OFFSET UNITYSDK_OFFSET(0x909A2C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ISOPERATOR_OFFSET UNITYSDK_OFFSET(0x9099130)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x909A8F0)

namespace Microsoft::CSharp::RuntimeBinder
{
	inline static constexpr unsigned int SymbolTable_TypeDefinitionIndex = 34454;

	class SymbolTable : public Il2CppObject
	{
	public:
		Il2CppObject* s_typesWithConversionsLoaded; // 0x0
		Il2CppObject* s_namesLoadedForEachType; // 0x8
		::System::Type* s_Sentinel; // 0x10
		::System::Type* s_EventRegistrationTokenType; // 0x18
		::System::Type* s_WindowsRuntimeMarshal; // 0x20
		::System::Type* s_EventRegistrationTokenTable; // 0x28

		::System::Void PopulateSymbolTableWithName(::System::String* str, Il2CppObject* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_POPULATESYMBOLTABLEWITHNAME_OFFSET))(str, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* LookupMember(::System::String* str, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ParentSymbol* arg, ::System::Int32 arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MemberLookup* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType*(*)(::System::String*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ParentSymbol*, ::System::Int32, ::Microsoft::CSharp::RuntimeBinder::Semantics::MemberLookup*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_LOOKUPMEMBER_OFFSET))(str, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void AddParameterConversions(::System::Reflection::MethodBase* arg)
		{
			((::System::Void(*)(::System::Reflection::MethodBase*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDPARAMETERCONVERSIONS_OFFSET))(arg, nullptr);
		}

		::System::Void AddNamesOnType(NameHashKey* arg)
		{
			((::System::Void(*)(NameHashKey*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDNAMESONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void AddNamesInInheritanceHierarchy(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDNAMESININHERITANCEHIERARCHY_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* CreateInheritanceHierarchyList(::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_CREATEINHERITANCEHIERARCHYLIST_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Syntax::Name* GetName(::System::String* str)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Syntax::Name*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GETNAME_OFFSET))(str, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Syntax::Name* GetName(::System::Type* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Syntax::Name*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GETNAME_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* GetMethodTypeParameters(::System::Reflection::MethodInfo* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*(*)(::System::Reflection::MethodInfo*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GETMETHODTYPEPARAMETERS_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* GetAggregateTypeParameters(::System::Type* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*(*)(::System::Type*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GETAGGREGATETYPEPARAMETERS_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterType* LoadClassTypeParameter(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg, ::System::Type* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_LOADCLASSTYPEPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AreTypeParametersEquivalent(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ARETYPEPARAMETERSEQUIVALENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* GetOriginalTypeParameterType(::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GETORIGINALTYPEPARAMETERTYPE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterType* LoadMethodTypeParameter(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* arg, ::System::Type* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_LOADMETHODTYPEPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterType* AddTypeParameterToSymbolTable(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* arg, ::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*, ::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDTYPEPARAMETERTOSYMBOLTABLE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* LoadSymbolsFromType(::System::Type* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_LOADSYMBOLSFROMTYPE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterType* ProcessMethodTypeParameter(::System::Reflection::MethodInfo* arg, ::System::Type* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterType*(*)(::System::Reflection::MethodInfo*, ::System::Type*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_PROCESSMETHODTYPEPARAMETER_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* GetConstructedType(::System::Type* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::System::Type*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GETCONSTRUCTEDTYPE_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* ProcessSpecialTypeInChain(::Microsoft::CSharp::RuntimeBinder::Semantics::NamespaceOrAggregateSymbol* arg, ::System::Type* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::NamespaceOrAggregateSymbol*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_PROCESSSPECIALTYPEINCHAIN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* BuildDeclarationChain(::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_BUILDDECLARATIONCHAIN_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* FindSymForType(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg, ::System::Type* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_FINDSYMFORTYPE_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::NamespaceSymbol* AddNamespaceToSymbolTable(::Microsoft::CSharp::RuntimeBinder::Semantics::NamespaceOrAggregateSymbol* arg, ::System::String* str)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::NamespaceSymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::NamespaceOrAggregateSymbol*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDNAMESPACETOSYMBOLTABLE_OFFSET))(arg, str, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCTypeArrayFromTypes(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GETCTYPEARRAYFROMTYPES_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* GetCTypeFromType(::System::Type* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GETCTYPEFROMTYPE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* AddAggregateToSymbolTable(::Microsoft::CSharp::RuntimeBinder::Semantics::NamespaceOrAggregateSymbol* arg, ::System::Type* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::NamespaceOrAggregateSymbol*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDAGGREGATETOSYMBOLTABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetInterfacesOnAggregate(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_SETINTERFACESONAGGREGATE_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::FieldSymbol* AddFieldToSymbolTable(::System::Reflection::FieldInfo* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::FieldSymbol*(*)(::System::Reflection::FieldInfo*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDFIELDTOSYMBOLTABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* get_EventRegistrationTokenType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GET_EVENTREGISTRATIONTOKENTYPE_OFFSET))(nullptr);
		}

		::System::Type* get_WindowsRuntimeMarshalType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GET_WINDOWSRUNTIMEMARSHALTYPE_OFFSET))(nullptr);
		}

		::System::Type* get_EventRegistrationTokenTableType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GET_EVENTREGISTRATIONTOKENTABLETYPE_OFFSET))(nullptr);
		}

		::System::Type* GetTypeByName(::System::Type&* arg, ::System::String* str)
		{
			return (return (::System::Type*(*)(::System::Type&*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GETTYPEBYNAME_OFFSET))(arg, str, nullptr);
		}

		::System::Void AddEventToSymbolTable(::System::Reflection::EventInfo* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::FieldSymbol* arg)
		{
			((::System::Void(*)(::System::Reflection::EventInfo*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::FieldSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDEVENTTOSYMBOLTABLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddPredefinedPropertyToSymbolTable(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDPREDEFINEDPROPERTYTOSYMBOLTABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPropertyToSymbolTable(::System::Reflection::PropertyInfo* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg)
		{
			((::System::Void(*)(::System::Reflection::PropertyInfo*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDPROPERTYTOSYMBOLTABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPredefinedMethodToSymbolTable(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDPREDEFINEDMETHODTOSYMBOLTABLE_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* AddMethodToSymbolTable(::System::Reflection::MethodBase* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*(*)(::System::Reflection::MethodBase*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDMETHODTOSYMBOLTABLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetParameterDataForMethProp(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_SETPARAMETERDATAFORMETHPROP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetParameterAttributes(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_SETPARAMETERATTRIBUTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* FindMatchingMethod(::System::Reflection::MemberInfo* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*(*)(::System::Reflection::MemberInfo*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_FINDMATCHINGMETHOD_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 GetCountOfModOpts(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::UInt32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GETCOUNTOFMODOPTS_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* CreateParameterArray(::System::Reflection::MemberInfo* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*(*)(::System::Reflection::MemberInfo*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_CREATEPARAMETERARRAY_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* GetTypeOfParameter(::System::Reflection::ParameterInfo* arg, ::System::Reflection::MemberInfo* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::System::Reflection::ParameterInfo*, ::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GETTYPEOFPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean DoesMethodHaveParameterArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_DOESMETHODHAVEPARAMETERARRAY_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* GetSlotForOverride(::System::Reflection::MethodInfo* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType*(*)(::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_GETSLOTFOROVERRIDE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* FindMethodFromMemberInfo(::System::Reflection::MemberInfo* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_FINDMETHODFROMMEMBERINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean AggregateContainsMethod(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg, ::System::String* str, ::Microsoft::CSharp::RuntimeBinder::Semantics::symbmask_t* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::System::String*, ::Microsoft::CSharp::RuntimeBinder::Semantics::symbmask_t*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_AGGREGATECONTAINSMETHOD_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void AddConversionsForType(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDCONVERSIONSFORTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void AddConversionsForOneType(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ADDCONVERSIONSFORONETYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOperator(::System::Reflection::MethodInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_ISOPERATOR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SYMBOLTABLE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

