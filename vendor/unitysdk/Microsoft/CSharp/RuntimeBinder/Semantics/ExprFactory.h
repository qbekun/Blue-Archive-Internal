#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprCall; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class EXPRFLAG; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprMemberGroup; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethWithInst; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprField; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class FieldWithType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprArrayInit; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprProperty; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class PropWithType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethWithType; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class Name; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class SYMKIND; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CMemberLookupResults; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethPropWithInst; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprUserDefinedConversion; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprCast; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprLocal; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class LocalVariableSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprBoundLambda; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Scope; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprMethodInfo; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprPropertyInfo; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class PropertySymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprFieldInfo; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class FieldSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprTypeOf; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprConcat; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprConstant; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprMultiGet; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprMulti; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ConstVal; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprArrayIndex; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprBinOp; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExpressionKind; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprUnaryOp; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprOperator; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprAssignment; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprNamedArgumentSpecification; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprWrap; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr&; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprList; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprClass; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATECALL_OFFSET UNITYSDK_OFFSET(0x90B7C00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEFIELD_OFFSET UNITYSDK_OFFSET(0x90B5AF0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEARRAYINIT_OFFSET UNITYSDK_OFFSET(0x90BC020)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x90BC0B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEMEMGROUP_OFFSET UNITYSDK_OFFSET(0x90BC150)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEMEMGROUP_OFFSET UNITYSDK_OFFSET(0x90B7A00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEUSERDEFINEDCONVERSION_OFFSET UNITYSDK_OFFSET(0x90BC240)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATECAST_OFFSET UNITYSDK_OFFSET(0x90B5B60)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATECAST_OFFSET UNITYSDK_OFFSET(0x90B8760)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATELOCAL_OFFSET UNITYSDK_OFFSET(0x90BC2B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEANONYMOUSMETHOD_OFFSET UNITYSDK_OFFSET(0x90BC310)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEMETHODINFO_OFFSET UNITYSDK_OFFSET(0x90BC380)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEMETHODINFO_OFFSET UNITYSDK_OFFSET(0x90BC3C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEPROPERTYINFO_OFFSET UNITYSDK_OFFSET(0x90BC490)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEFIELDINFO_OFFSET UNITYSDK_OFFSET(0x90BC540)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATETYPEOF_OFFSET UNITYSDK_OFFSET(0x90BC5F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATECONCAT_OFFSET UNITYSDK_OFFSET(0x90BC690)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATESTRINGCONSTANT_OFFSET UNITYSDK_OFFSET(0x90BC6F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEMULTIGET_OFFSET UNITYSDK_OFFSET(0x90BC7E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEMULTI_OFFSET UNITYSDK_OFFSET(0x90BC850)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEZEROINIT_OFFSET UNITYSDK_OFFSET(0x90B58F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATECONSTANT_OFFSET UNITYSDK_OFFSET(0x90B5760)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEINTEGERCONSTANT_OFFSET UNITYSDK_OFFSET(0x90BC8D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEBOOLCONSTANT_OFFSET UNITYSDK_OFFSET(0x90BCA30)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEARRAYINDEX_OFFSET UNITYSDK_OFFSET(0x90BCBA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEBINOP_OFFSET UNITYSDK_OFFSET(0x90BCC10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEUNARYOP_OFFSET UNITYSDK_OFFSET(0x90BCC90)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEOPERATOR_OFFSET UNITYSDK_OFFSET(0x90BCD00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEUSERDEFINEDUNARYOPERATOR_OFFSET UNITYSDK_OFFSET(0x90BCE40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATENEG_OFFSET UNITYSDK_OFFSET(0x90BCED0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATESEQUENCE_OFFSET UNITYSDK_OFFSET(0x90BCF50)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x90BCFD0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATENAMEDARGUMENTSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x90BD030)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEWRAP_OFFSET UNITYSDK_OFFSET(0x90BD090)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATESAVE_OFFSET UNITYSDK_OFFSET(0x90BD0F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATENULL_OFFSET UNITYSDK_OFFSET(0x90B5810)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_APPENDITEMTOLIST_OFFSET UNITYSDK_OFFSET(0x90BBB00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATELIST_OFFSET UNITYSDK_OFFSET(0x90BD180)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATELIST_OFFSET UNITYSDK_OFFSET(0x90BD1E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATELIST_OFFSET UNITYSDK_OFFSET(0x90BD290)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATECLASS_OFFSET UNITYSDK_OFFSET(0x90BD390)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprFactory_TypeDefinitionIndex = 34494;

	class ExprFactory : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* CreateCall(::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATECALL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprField* CreateField(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::FieldWithType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprField*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::FieldWithType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEFIELD_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprArrayInit* CreateArrayInit(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprArrayInit*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEARRAYINIT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprProperty* CreateProperty(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::PropWithType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprProperty*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup*, ::Microsoft::CSharp::RuntimeBinder::Semantics::PropWithType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEPROPERTY_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup* CreateMemGroup(::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CMemberLookupResults* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CMemberLookupResults*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEMEMGROUP_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup* CreateMemGroup(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEMEMGROUP_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUserDefinedConversion* CreateUserDefinedConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUserDefinedConversion*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEUSERDEFINEDCONVERSION_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCast* CreateCast(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCast*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATECAST_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCast* CreateCast(::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCast*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATECAST_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprLocal* CreateLocal(::Microsoft::CSharp::RuntimeBinder::Semantics::LocalVariableSymbol* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprLocal*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::LocalVariableSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATELOCAL_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBoundLambda* CreateAnonymousMethod(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Scope* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBoundLambda*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Scope*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEANONYMOUSMETHOD_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMethodInfo* CreateMethodInfo(::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMethodInfo*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEMETHODINFO_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMethodInfo* CreateMethodInfo(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMethodInfo*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEMETHODINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprPropertyInfo* CreatePropertyInfo(::Microsoft::CSharp::RuntimeBinder::Semantics::PropertySymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprPropertyInfo*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::PropertySymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEPROPERTYINFO_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprFieldInfo* CreateFieldInfo(::Microsoft::CSharp::RuntimeBinder::Semantics::FieldSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprFieldInfo*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::FieldSymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEFIELDINFO_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprTypeOf* CreateTypeOf(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprTypeOf*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATETYPEOF_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConcat* CreateConcat(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConcat*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATECONCAT_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConstant* CreateStringConstant(::System::String* str)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConstant*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATESTRINGCONSTANT_OFFSET))(str, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMultiGet* CreateMultiGet(::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMulti* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMultiGet*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMulti*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEMULTIGET_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMulti* CreateMulti(::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMulti*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEMULTI_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* CreateZeroInit(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEZEROINIT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConstant* CreateConstant(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConstant*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATECONSTANT_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConstant* CreateIntegerConstant(::System::Int32 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConstant*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEINTEGERCONSTANT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConstant* CreateBoolConstant(::System::Boolean arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConstant*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEBOOLCONSTANT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprArrayIndex* CreateArrayIndex(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprArrayIndex*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEARRAYINDEX_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* CreateBinop(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEBINOP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp* CreateUnaryOp(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEUNARYOP_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprOperator* CreateOperator(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprOperator*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEOPERATOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp* CreateUserDefinedUnaryOperator(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEUSERDEFINEDUNARYOPERATOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp* CreateNeg(::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATENEG_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* CreateSequence(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATESEQUENCE_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprAssignment* CreateAssignment(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprAssignment*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEASSIGNMENT_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprNamedArgumentSpecification* CreateNamedArgumentSpecification(::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprNamedArgumentSpecification*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATENAMEDARGUMENTSPECIFICATION_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprWrap* CreateWrap(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprWrap*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATEWRAP_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* CreateSave(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprWrap* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprWrap*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATESAVE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConstant* CreateNull()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConstant*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATENULL_OFFSET))(nullptr);
		}

		::System::Void AppendItemToList(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_APPENDITEMTOLIST_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprList* CreateList(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprList*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATELIST_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprList* CreateList(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprList*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATELIST_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprList* CreateList(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprList*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATELIST_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprClass* CreateClass(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprClass*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFACTORY_CREATECLASS_OFFSET))(arg, nullptr);
		}

	};
}

