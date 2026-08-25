#pragma once
#include "unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExpressionBinder; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class BindingFlag; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprMemberGroup; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ArgInfos; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodOrPropertySymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethPropWithInst; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethWithType; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class Name; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder { class RuntimeBinderException; }

#define GROUPTOARGSBINDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x90B13B0)
#define GROUPTOARGSBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x90B17C0)
#define GROUPTOARGSBINDER_GETRESULTSOFBIND_OFFSET UNITYSDK_OFFSET(0x90B3020)
#define GROUPTOARGSBINDER_GETTYPEQUALIFIER_OFFSET UNITYSDK_OFFSET(0x90B3030)
#define GROUPTOARGSBINDER_LOOKFORCANDIDATES_OFFSET UNITYSDK_OFFSET(0x90B1810)
#define GROUPTOARGSBINDER_COPYARGINFOS_OFFSET UNITYSDK_OFFSET(0x90B36A0)
#define GROUPTOARGSBINDER_GETRESULTOFBIND_OFFSET UNITYSDK_OFFSET(0x90B1F80)
#define GROUPTOARGSBINDER_REORDERARGSFORNAMEDARGUMENTS_OFFSET UNITYSDK_OFFSET(0x90B3810)
#define GROUPTOARGSBINDER_REORDERARGSFORNAMEDARGUMENTS_OFFSET UNITYSDK_OFFSET(0x90B48B0)
#define GROUPTOARGSBINDER_GENERATEOPTIONALARGUMENT_OFFSET UNITYSDK_OFFSET(0x90B5100)
#define GROUPTOARGSBINDER_FINDMOSTDERIVEDMETHOD_OFFSET UNITYSDK_OFFSET(0x90B4660)
#define GROUPTOARGSBINDER_FINDMOSTDERIVEDMETHOD_OFFSET UNITYSDK_OFFSET(0x90B5BD0)
#define GROUPTOARGSBINDER_HASOPTIONALPARAMETERS_OFFSET UNITYSDK_OFFSET(0x90B38D0)
#define GROUPTOARGSBINDER_ADDARGUMENTSFOROPTIONALPARAMETERS_OFFSET UNITYSDK_OFFSET(0x90B3930)
#define GROUPTOARGSBINDER_FINDARGUMENTWITHNAME_OFFSET UNITYSDK_OFFSET(0x90B5060)
#define GROUPTOARGSBINDER_NAMEDARGUMENTNAMESAPPEARINPARAMETERLIST_OFFSET UNITYSDK_OFFSET(0x90B4680)
#define GROUPTOARGSBINDER_GETNEXTSYM_OFFSET UNITYSDK_OFFSET(0x90B32C0)
#define GROUPTOARGSBINDER_CONSTRUCTEXPANDEDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x90B3170)
#define GROUPTOARGSBINDER_DETERMINECURRENTTYPEARGS_OFFSET UNITYSDK_OFFSET(0x90B3F90)
#define GROUPTOARGSBINDER_ARGUMENTSARECONVERTIBLE_OFFSET UNITYSDK_OFFSET(0x90B4190)
#define GROUPTOARGSBINDER_UPDATEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x90B5FF0)
#define GROUPTOARGSBINDER_DOESTYPEARGUMENTSCONTAINERRORSYM_OFFSET UNITYSDK_OFFSET(0x90B61C0)
#define GROUPTOARGSBINDER_REPORTERRORSONSUCCESS_OFFSET UNITYSDK_OFFSET(0x90B45B0)
#define GROUPTOARGSBINDER_REPORTERRORSONFAILURE_OFFSET UNITYSDK_OFFSET(0x90B23F0)
#define GROUPTOARGSBINDER_REPORTERRORSFORBESTMATCHING_OFFSET UNITYSDK_OFFSET(0x90B6290)

	inline static constexpr unsigned int GroupToArgsBinder_TypeDefinitionIndex = 34471;

	class GroupToArgsBinder : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder* _pExprBinder; // 0x10
		::System::Boolean _fCandidatesUnsupported; // 0x20
		::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* _fBindFlags; // 0x24
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup* _pGroup; // 0x28
		::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos* _pArguments; // 0x30
		::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos* _pOriginalArguments; // 0x38
		NamedArgumentsKind* _namedArgumentsKind; // 0x40
		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* _pCurrentType; // 0x48
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol* _pCurrentSym; // 0x50
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* _pCurrentTypeArgs; // 0x58
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* _pCurrentParameters; // 0x60
		::System::Int32 _nArgBest; // 0x68
		GroupToArgsBinderResult* _results; // 0x70
		Il2CppObject* _methList; // 0x78
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* _mpwiParamTypeConstraints; // 0x80
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* _mpwiBogus; // 0x88
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* _misnamed; // 0x90
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* _mpwiCantInferInstArg; // 0x98
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithType* _mwtBadArity; // 0xA0
		::Microsoft::CSharp::RuntimeBinder::Syntax::Name* _pInvalidSpecifiedName; // 0xA8
		::Microsoft::CSharp::RuntimeBinder::Syntax::Name* _pNameUsedInPositionalArgument; // 0xB0
		::Microsoft::CSharp::RuntimeBinder::Syntax::Name* _pDuplicateSpecifiedName; // 0xB8
		Il2CppObject* _HiddenTypes; // 0xC0
		::System::Boolean _bArgumentsChangedForNamedOrOptionalArguments; // 0xC8

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos* arg, NamedArgumentsKind* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder*, ::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos*, NamedArgumentsKind*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDER_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Bind()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDER_BIND_OFFSET))(nullptr);
		}

		GroupToArgsBinderResult* GetResultsOfBind()
		{
			return (return (GroupToArgsBinderResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDER_GETRESULTSOFBIND_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* GetTypeQualifier(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDER_GETTYPEQUALIFIER_OFFSET))(arg, nullptr);
		}

		::System::Void LookForCandidates()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDER_LOOKFORCANDIDATES_OFFSET))(nullptr);
		}

		::System::Void CopyArgInfos(::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDER_COPYARGINFOS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetResultOfBind()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDER_GETRESULTOFBIND_OFFSET))(nullptr);
		}

		::System::Boolean ReOrderArgsForNamedArguments()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDER_REORDERARGSFORNAMEDARGUMENTS_OFFSET))(nullptr);
		}

		::System::Boolean ReOrderArgsForNamedArguments(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDER_REORDERARGSFORNAMEDARGUMENTS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* GenerateOptionalArgument(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::System::Int32 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDER_GENERATEOPTIONALARGUMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol* FindMostDerivedMethod(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDER_FINDMOSTDERIVEDMETHOD_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol* FindMostDerivedMethod(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDER_FINDMOSTDERIVEDMETHOD_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasOptionalParameters()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDER_HASOPTIONALPARAMETERS_OFFSET))(nullptr);
		}

		::System::Boolean AddArgumentsForOptionalParameters()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDER_ADDARGUMENTSFOROPTIONALPARAMETERS_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* FindArgumentWithName(::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos* arg, ::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos*, ::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDER_FINDARGUMENTWITHNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean NamedArgumentNamesAppearInParameterList(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDER_NAMEDARGUMENTNAMESAPPEARINPARAMETERLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetNextSym(CMethodIterator* arg)
		{
			return (return (::System::Boolean(*)(CMethodIterator*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDER_GETNEXTSYM_OFFSET))(arg, nullptr);
		}

		::System::Boolean ConstructExpandedParameters()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDER_CONSTRUCTEXPANDEDPARAMETERS_OFFSET))(nullptr);
		}

		Result* DetermineCurrentTypeArgs()
		{
			return (return (Result*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDER_DETERMINECURRENTTYPEARGS_OFFSET))(nullptr);
		}

		::System::Boolean ArgumentsAreConvertible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDER_ARGUMENTSARECONVERTIBLE_OFFSET))(nullptr);
		}

		::System::Void UpdateArguments()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDER_UPDATEARGUMENTS_OFFSET))(nullptr);
		}

		::System::Boolean DoesTypeArgumentsContainErrorSym(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDER_DOESTYPEARGUMENTSCONTAINERRORSYM_OFFSET))(arg, nullptr);
		}

		::System::Void ReportErrorsOnSuccess()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDER_REPORTERRORSONSUCCESS_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::RuntimeBinderException* ReportErrorsOnFailure()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::RuntimeBinderException*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDER_REPORTERRORSONFAILURE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::RuntimeBinderException* ReportErrorsForBestMatching(::System::Boolean arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::RuntimeBinderException*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GROUPTOARGSBINDER_REPORTERRORSFORBESTMATCHING_OFFSET))(arg, nullptr);
		}

	};

