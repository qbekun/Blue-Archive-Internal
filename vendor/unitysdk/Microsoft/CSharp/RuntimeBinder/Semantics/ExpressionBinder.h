#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class BindingContext; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class BetterType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CandidateFunctionMember; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ArgInfos; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class Name; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethPropWithInst; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CandidateFunctionMember&; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ConvKind; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class PredefinedType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CONVERTTYPE; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder { class RuntimeBinderException; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr&; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethWithInst; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ConstCastResult; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprConstant; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class EXPRFLAG; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprCall; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprMemberGroup; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MemLookFlags; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class FieldWithType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class BindingFlag; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprProperty; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class PropWithType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExpressionKind; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprWithArgs; }
namespace Microsoft::CSharp::RuntimeBinder::Errors { class ErrorCode; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CheckLvalueKind; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethWithType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethWithType&; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class SymWithType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodOrPropertySymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray&; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprAssignment; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprCall&; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class OperatorKind; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class UnaryOperatorSignatureFindResult; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class UnaOpKind; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class UnaOpMask; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprOperator; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExpressionBinder; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ConstVal; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprMulti; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprBinOp; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprUnaryOp; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprConcat; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class PREDEFMETH; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_WHICHMETHODISBETTERTIEBREAKER_OFFSET UNITYSDK_OFFSET(0x909F900)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_COMPARETYPES_OFFSET UNITYSDK_OFFSET(0x909FF70)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_FINDNAME_OFFSET UNITYSDK_OFFSET(0x90A01D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_REARRANGENAMEDARGUMENTS_OFFSET UNITYSDK_OFFSET(0x909FB40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_WHICHMETHODISBETTER_OFFSET UNITYSDK_OFFSET(0x90A0220)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_WHICHCONVERSIONISBETTER_OFFSET UNITYSDK_OFFSET(0x90A05C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_FINDBESTMETHOD_OFFSET UNITYSDK_OFFSET(0x90A0880)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_ROUNDTOFLOAT_OFFSET UNITYSDK_OFFSET(0x90A0CB0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_I64_OFFSET UNITYSDK_OFFSET(0x90A0CC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_I64_OFFSET UNITYSDK_OFFSET(0x90A0CD0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_GETCONVKIND_OFFSET UNITYSDK_OFFSET(0x90A0CE0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_ISUSERDEFINEDCONVERSION_OFFSET UNITYSDK_OFFSET(0x90A0DB0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_WHICHSIMPLECONVERSIONISBETTER_OFFSET UNITYSDK_OFFSET(0x90A0E50)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_WHICHTYPEISBETTER_OFFSET UNITYSDK_OFFSET(0x90A0F00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_WHICHTYPEISBETTER_OFFSET UNITYSDK_OFFSET(0x90A1040)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x90A12E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x90A0820)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x90A1490)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x90A14F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_MUSTCONVERTCORE_OFFSET UNITYSDK_OFFSET(0x90A15F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_MUSTCONVERTCORE_OFFSET UNITYSDK_OFFSET(0x90A1650)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_TRYCONVERT_OFFSET UNITYSDK_OFFSET(0x908AB60)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_TRYCONVERT_OFFSET UNITYSDK_OFFSET(0x90A1DA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_MUSTCONVERT_OFFSET UNITYSDK_OFFSET(0x908D4B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_MUSTCONVERT_OFFSET UNITYSDK_OFFSET(0x90A1F50)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_MUSTCASTCORE_OFFSET UNITYSDK_OFFSET(0x90A1FC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CANTCONVERT_OFFSET UNITYSDK_OFFSET(0x90A28E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_MUSTCAST_OFFSET UNITYSDK_OFFSET(0x908ABC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_MUSTCAST_OFFSET UNITYSDK_OFFSET(0x9090240)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_MUSTCASTINUNCHECKEDCONTEXT_OFFSET UNITYSDK_OFFSET(0x90A2A30)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CANCAST_OFFSET UNITYSDK_OFFSET(0x90A1CA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDIMPLICITCONVERSION_OFFSET UNITYSDK_OFFSET(0x90A13E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDIMPLICITCONVERSION_OFFSET UNITYSDK_OFFSET(0x90A1B60)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDIMPLICITCONVERSION_OFFSET UNITYSDK_OFFSET(0x90A2BC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDEXPLICITCONVERSION_OFFSET UNITYSDK_OFFSET(0x90A2CB0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDEXPLICITCONVERSION_OFFSET UNITYSDK_OFFSET(0x90A26F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDEXPLICITCONVERSION_OFFSET UNITYSDK_OFFSET(0x90A2B10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDUSERDEFINEDCONVERSION_OFFSET UNITYSDK_OFFSET(0x90A2DA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_HANDLEAMBIGUITY_OFFSET UNITYSDK_OFFSET(0x90A49C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_MARKASINTERMEDIATECONVERSION_OFFSET UNITYSDK_OFFSET(0x90A4BB0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDUDCONVERSIONCORE_OFFSET UNITYSDK_OFFSET(0x90A4C50)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDUDCONVERSIONCORE_OFFSET UNITYSDK_OFFSET(0x90A4CF0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDCONSTANTCAST_OFFSET UNITYSDK_OFFSET(0x90A4DD0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_COMPARESRCTYPESBASED_OFFSET UNITYSDK_OFFSET(0x90A4820)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_COMPAREDSTTYPESBASED_OFFSET UNITYSDK_OFFSET(0x90A48F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDDECIMALCONSTCAST_OFFSET UNITYSDK_OFFSET(0x90A5300)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CANEXPLICITCONVERSIONBEBOUNDINUNCHECKEDCONTEXT_OFFSET UNITYSDK_OFFSET(0x90A27C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x90A6000)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x90A6010)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_GETPREDEFINDTYPE_OFFSET UNITYSDK_OFFSET(0x90A1030)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_GENERATEASSIGNMENTCONVERSION_OFFSET UNITYSDK_OFFSET(0x90A6020)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x90902B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDARRAYINDEXCORE_OFFSET UNITYSDK_OFFSET(0x908CC20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDSIMPLECAST_OFFSET UNITYSDK_OFFSET(0x90A6390)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDSIMPLECAST_OFFSET UNITYSDK_OFFSET(0x90A6400)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDTOMETHOD_OFFSET UNITYSDK_OFFSET(0x90A65C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDTOFIELD_OFFSET UNITYSDK_OFFSET(0x908CEF0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDTOPROPERTY_OFFSET UNITYSDK_OFFSET(0x908BEB0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDUDUNOP_OFFSET UNITYSDK_OFFSET(0x908F170)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDLIFTEDUDUNOP_OFFSET UNITYSDK_OFFSET(0x90A7050)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDUDUNOPCALL_OFFSET UNITYSDK_OFFSET(0x90A7470)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDMETHODGROUPTOARGUMENTSCORE_OFFSET UNITYSDK_OFFSET(0x90A76F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDMETHODGROUPTOARGUMENTS_OFFSET UNITYSDK_OFFSET(0x908C520)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_FINDNAMEDARGUMENTSTYPE_OFFSET UNITYSDK_OFFSET(0x90A7840)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BADOPERATORTYPESERROR_OFFSET UNITYSDK_OFFSET(0x90A7920)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_GETSTANDARDLVALUEERROR_OFFSET UNITYSDK_OFFSET(0x90A7B40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CHECKLVALUEPROP_OFFSET UNITYSDK_OFFSET(0x90A7B60)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CHECKPROPERTYACCESS_OFFSET UNITYSDK_OFFSET(0x90A7BE0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CHECKLVALUE_OFFSET UNITYSDK_OFFSET(0x90A6120)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_POSTBINDMETHOD_OFFSET UNITYSDK_OFFSET(0x90A6770)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_POSTBINDPROPERTY_OFFSET UNITYSDK_OFFSET(0x90A6CD0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_ADJUSTMEMBEROBJECT_OFFSET UNITYSDK_OFFSET(0x90A68B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_ISMATCHINGSTATIC_OFFSET UNITYSDK_OFFSET(0x90A7E50)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_VERIFYMETHODARGS_OFFSET UNITYSDK_OFFSET(0x90A6B70)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_ADJUSTCALLARGUMENTSFORPARAMS_OFFSET UNITYSDK_OFFSET(0x90A7EF0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CHOOSEARRAYINDEXTYPE_OFFSET UNITYSDK_OFFSET(0x908FD20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_FILLINARGINFOFROMARGLIST_OFFSET UNITYSDK_OFFSET(0x908E4E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_TRYGETEXPANDEDPARAMS_OFFSET UNITYSDK_OFFSET(0x90A8A30)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_ISMETHPROPCALLABLE_OFFSET UNITYSDK_OFFSET(0x90A8C50)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_ISCONVINTABLE_OFFSET UNITYSDK_OFFSET(0x90A4610)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_ISCONSTANTINRANGE_OFFSET UNITYSDK_OFFSET(0x90A8CA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_ISCONSTANTINRANGE_OFFSET UNITYSDK_OFFSET(0x90A5BD0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_EXPRESSIONKINDNAME_OFFSET UNITYSDK_OFFSET(0x90A6F10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CHECKUNSAFE_OFFSET UNITYSDK_OFFSET(0x90A1C30)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_GET_CONTEXTFORMEMBERLOOKUP_OFFSET UNITYSDK_OFFSET(0x90A6EC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_GENERATEOPTIMIZEDASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x90A6380)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_COUNTARGUMENTS_OFFSET UNITYSDK_OFFSET(0x908E470)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_ISNULLABLECONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x90A8D00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDNUBVALUE_OFFSET UNITYSDK_OFFSET(0x90A8DA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDNUBNEW_OFFSET UNITYSDK_OFFSET(0x90A8F40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_LIFTARGUMENT_OFFSET UNITYSDK_OFFSET(0x90A90A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CALCULATEEXPRANDUNARYOPKINDS_OFFSET UNITYSDK_OFFSET(0x90A9610)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDSTANDARDUNARYOPERATOR_OFFSET UNITYSDK_OFFSET(0x908E980)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_POPULATESIGNATURELIST_OFFSET UNITYSDK_OFFSET(0x90A9720)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_FINDAPPLICABLESIGNATURES_OFFSET UNITYSDK_OFFSET(0x90A9B00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDLIFTEDSTANDARDUNOP_OFFSET UNITYSDK_OFFSET(0x90AA580)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_WHICHUOFSISBETTER_OFFSET UNITYSDK_OFFSET(0x90AA130)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDINTBINOP_OFFSET UNITYSDK_OFFSET(0x90AA780)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDINTUNAOP_OFFSET UNITYSDK_OFFSET(0x90AA920)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDREALBINOP_OFFSET UNITYSDK_OFFSET(0x90AA9C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDREALUNAOP_OFFSET UNITYSDK_OFFSET(0x90AAAC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDINCOP_OFFSET UNITYSDK_OFFSET(0x90AA450)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDINCOPCORE_OFFSET UNITYSDK_OFFSET(0x90AB1B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_LSCALAR_OFFSET UNITYSDK_OFFSET(0x90AB590)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDNONLIFTEDINCOP_OFFSET UNITYSDK_OFFSET(0x90AAFA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDLIFTEDINCOP_OFFSET UNITYSDK_OFFSET(0x90AAB10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDDECBINOP_OFFSET UNITYSDK_OFFSET(0x90AB6F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDDECUNAOP_OFFSET UNITYSDK_OFFSET(0x90AB7A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDSTRBINOP_OFFSET UNITYSDK_OFFSET(0x90AB840)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDSHIFTOP_OFFSET UNITYSDK_OFFSET(0x90AB8B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDBOOLBINOP_OFFSET UNITYSDK_OFFSET(0x90AB910)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDLIFTEDBOOLBITWISEOP_OFFSET UNITYSDK_OFFSET(0x90AB980)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDBOOLUNAOP_OFFSET UNITYSDK_OFFSET(0x90AB990)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDSTRCMPOP_OFFSET UNITYSDK_OFFSET(0x90ABA80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDENUMUNAOP_OFFSET UNITYSDK_OFFSET(0x90ABC80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDINTOP_OFFSET UNITYSDK_OFFSET(0x90AA820)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDINTEGERNEG_OFFSET UNITYSDK_OFFSET(0x90ABDE0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDFLOATOP_OFFSET UNITYSDK_OFFSET(0x90AAA20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDSTRINGCONCAT_OFFSET UNITYSDK_OFFSET(0x90AB8A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_AMBIGUOUSOPERATORERROR_OFFSET UNITYSDK_OFFSET(0x90AA230)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CREATEBINOPFORPREDEFMETHODCALL_OFFSET UNITYSDK_OFFSET(0x90ABB10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CREATEUNARYOPFORPREDEFMETHODCALL_OFFSET UNITYSDK_OFFSET(0x90AB430)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x90ABEF0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExpressionBinder_TypeDefinitionIndex = 34477;

	class ExpressionBinder : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_betterConversionTable; // 0x0
		::Il2CppArray<::System::Object*>* s_simpleTypeConversions; // 0x8
		::Il2CppArray<::System::Object*>* s_simpleTypeBetter; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::BindingContext* _Context_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* s_rgptIntOp; // 0x18
		::Il2CppArray<::System::Object*>* s_EK2NAME; // 0x20
		::Il2CppArray<::System::Object*>* s_binopSignatures; // 0x28
		::Il2CppArray<::System::Object*>* s_rguos; // 0x30

		::Microsoft::CSharp::RuntimeBinder::Semantics::BetterType* WhichMethodIsBetterTieBreaker(::Microsoft::CSharp::RuntimeBinder::Semantics::CandidateFunctionMember* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CandidateFunctionMember* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::BetterType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CandidateFunctionMember*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CandidateFunctionMember*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_WHICHMETHODISBETTERTIEBREAKER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::BetterType* CompareTypes(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::BetterType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_COMPARETYPES_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 FindName(Il2CppObject* arg, ::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_FINDNAME_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* RearrangeNamedArguments(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_REARRANGENAMEDARGUMENTS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::BetterType* WhichMethodIsBetter(::Microsoft::CSharp::RuntimeBinder::Semantics::CandidateFunctionMember* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CandidateFunctionMember* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::BetterType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CandidateFunctionMember*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CandidateFunctionMember*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_WHICHMETHODISBETTER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::BetterType* WhichConversionIsBetter(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::BetterType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_WHICHCONVERSIONISBETTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CandidateFunctionMember* FindBestMethod(Il2CppObject* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CandidateFunctionMember&* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CandidateFunctionMember&* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CandidateFunctionMember*(*)(Il2CppObject*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CandidateFunctionMember&*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CandidateFunctionMember&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_FINDBESTMETHOD_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void RoundToFloat(::System::Double arg, float&* arg)
		{
			((::System::Void(*)(::System::Double, float&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_ROUNDTOFLOAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 I64(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_I64_OFFSET))(arg, nullptr);
		}

		::System::Int64 I64(::System::UInt64 arg)
		{
			return (return (::System::Int64(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_I64_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ConvKind* GetConvKind(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg, ::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ConvKind*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_GETCONVKIND_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean isUserDefinedConversion(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg, ::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_ISUSERDEFINEDCONVERSION_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::BetterType* WhichSimpleConversionIsBetter(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg, ::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::BetterType*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_WHICHSIMPLECONVERSIONISBETTER_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::BetterType* WhichTypeIsBetter(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg, ::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::BetterType*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_WHICHTYPEISBETTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::BetterType* WhichTypeIsBetter(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::BetterType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_WHICHTYPEISBETTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean canConvert(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CANCONVERT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean canConvert(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CANCONVERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean canConvert(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CANCONVERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean canConvert(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CANCONVERT_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* mustConvertCore(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_MUSTCONVERTCORE_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* mustConvertCore(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_MUSTCONVERTCORE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* tryConvert(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_TRYCONVERT_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* tryConvert(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_TRYCONVERT_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* mustConvert(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_MUSTCONVERT_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* mustConvert(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_MUSTCONVERT_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* mustCastCore(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_MUSTCASTCORE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::RuntimeBinderException* CantConvert(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::RuntimeBinderException*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CANTCONVERT_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* mustCast(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_MUSTCAST_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* mustCast(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_MUSTCAST_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* MustCastInUncheckedContext(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_MUSTCASTINUNCHECKEDCONTEXT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean canCast(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CANCAST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean BindImplicitConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDIMPLICITCONVERSION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean BindImplicitConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDIMPLICITCONVERSION_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean BindImplicitConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::System::Boolean arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::System::Boolean, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDIMPLICITCONVERSION_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean BindExplicitConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::System::Boolean arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::System::Boolean, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDEXPLICITCONVERSION_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean BindExplicitConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDEXPLICITCONVERSION_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean BindExplicitConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDEXPLICITCONVERSION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean bindUserDefinedConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::System::Boolean arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::System::Boolean, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDUSERDEFINEDCONVERSION_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::RuntimeBinderException* HandleAmbiguity(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::RuntimeBinderException*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_HANDLEAMBIGUITY_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void MarkAsIntermediateConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_MARKASINTERMEDIATECONVERSION_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* BindUDConversionCore(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDUDCONVERSIONCORE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* BindUDConversionCore(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDUDCONVERSIONCORE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstCastResult* bindConstantCast(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::System::Boolean arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&* arg, ::System::Boolean arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ConstCastResult*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::System::Boolean, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDCONSTANTCAST_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 CompareSrcTypesBased(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::System::Boolean arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::System::Boolean, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_COMPARESRCTYPESBASED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 CompareDstTypesBased(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::System::Boolean arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::System::Boolean, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_COMPAREDSTTYPESBASED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* BindDecimalConstCast(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConstant* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConstant*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDDECIMALCONSTCAST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CanExplicitConversionBeBoundInUncheckedContext(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CONVERTTYPE*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CANEXPLICITCONVERSIONBEBOUNDINUNCHECKEDCONTEXT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::BindingContext* get_Context()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::BindingContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_GET_CONTEXT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::BindingContext* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::BindingContext*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* GetPredefindType(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_GETPREDEFINDTYPE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* GenerateAssignmentConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::System::Boolean arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_GENERATEASSIGNMENTCONVERSION_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* BindAssignment(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::System::Boolean arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDASSIGNMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* BindArrayIndexCore(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDARRAYINDEXCORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void bindSimpleCast(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDSIMPLECAST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void bindSimpleCast(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&*, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDSIMPLECAST_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* BindToMethod(::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MemLookFlags* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MemLookFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDTOMETHOD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* BindToField(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::FieldWithType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::FieldWithType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDTOFIELD_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprProperty* BindToProperty(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::PropWithType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprProperty*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::PropWithType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDTOPROPERTY_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* bindUDUnop(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDUDUNOP_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* BindLiftedUDUnop(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDLIFTEDUDUNOP_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* BindUDUnopCall(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDUDUNOPCALL_OFFSET))(arg, arg, arg, nullptr);
		}

		GroupToArgsBinderResult* BindMethodGroupToArgumentsCore(::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::System::Int32 arg, NamedArgumentsKind* arg)
		{
			return (return (GroupToArgsBinderResult*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::System::Int32, NamedArgumentsKind*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDMETHODGROUPTOARGUMENTSCORE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprWithArgs* BindMethodGroupToArguments(::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprWithArgs*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDMETHODGROUPTOARGUMENTS_OFFSET))(arg, arg, arg, nullptr);
		}

		NamedArgumentsKind* FindNamedArgumentsType(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (NamedArgumentsKind*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_FINDNAMEDARGUMENTSTYPE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::RuntimeBinderException* BadOperatorTypesError(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::RuntimeBinderException*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BADOPERATORTYPESERROR_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode* GetStandardLvalueError(::Microsoft::CSharp::RuntimeBinder::Semantics::CheckLvalueKind* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Errors::ErrorCode*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CheckLvalueKind*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_GETSTANDARDLVALUEERROR_OFFSET))(arg, nullptr);
		}

		::System::Void CheckLvalueProp(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprProperty* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprProperty*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CHECKLVALUEPROP_OFFSET))(arg, nullptr);
		}

		::System::Void CheckPropertyAccess(::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::PropWithType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::PropWithType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CHECKPROPERTYACCESS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CheckLvalue(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CheckLvalueKind* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CheckLvalueKind*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CHECKLVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PostBindMethod(::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithInst*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_POSTBINDMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Void PostBindProperty(::Microsoft::CSharp::RuntimeBinder::Semantics::PropWithType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithType&* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithType&* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::PropWithType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithType&*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithType&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_POSTBINDPROPERTY_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* AdjustMemberObject(::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_ADJUSTMEMBEROBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsMatchingStatic(::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_ISMATCHINGSTATIC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void verifyMethodArgs(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprWithArgs* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprWithArgs*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_VERIFYMETHODARGS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AdjustCallArgumentsForParams(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_ADJUSTCALLARGUMENTSFORPARAMS_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* ChooseArrayIndexType(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CHOOSEARRAYINDEXTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void FillInArgInfoFromArgList(::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_FILLINARGINFOFROMARGLIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetExpandedParams(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::System::Int32 arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray&* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::System::Int32, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_TRYGETEXPANDEDPARAMS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsMethPropCallable(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_ISMETHPROPCALLABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsConvInTable(Il2CppObject* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_ISCONVINTABLE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean isConstantInRange(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConstant* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConstant*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_ISCONSTANTINRANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean isConstantInRange(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConstant* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConstant*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_ISCONSTANTINRANGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Syntax::Name* ExpressionKindName(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Syntax::Name*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_EXPRESSIONKINDNAME_OFFSET))(arg, nullptr);
		}

		::System::Void CheckUnsafe(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CHECKUNSAFE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* get_ContextForMemberLookup()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_GET_CONTEXTFORMEMBERLOOKUP_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprAssignment* GenerateOptimizedAssignment(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprAssignment*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_GENERATEOPTIMIZEDASSIGNMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CountArguments(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::System::Int32(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_COUNTARGUMENTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNullableConstructor(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall&* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_ISNULLABLECONSTRUCTOR_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* BindNubValue(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDNUBVALUE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* BindNubNew(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDNUBNEW_OFFSET))(arg, nullptr);
		}

		::System::Void LiftArgument(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::System::Boolean arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::System::Boolean, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_LIFTARGUMENT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* CalculateExprAndUnaryOpKinds(::Microsoft::CSharp::RuntimeBinder::Syntax::OperatorKind* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::OperatorKind*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CALCULATEEXPRANDUNARYOPKINDS_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* BindStandardUnaryOperator(::Microsoft::CSharp::RuntimeBinder::Syntax::OperatorKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::OperatorKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDSTANDARDUNARYOPERATOR_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::UnaryOperatorSignatureFindResult* PopulateSignatureList(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpMask* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, Il2CppObject* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::UnaryOperatorSignatureFindResult*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpMask*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, Il2CppObject*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_POPULATESIGNATURELIST_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean FindApplicableSignatures(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpMask* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::UnaOpMask*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_FINDAPPLICABLESIGNATURES_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprOperator* BindLiftedStandardUnop(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, UnaOpFullSig* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprOperator*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, UnaOpFullSig*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDLIFTEDSTANDARDUNOP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 WhichUofsIsBetter(UnaOpFullSig* arg, UnaOpFullSig* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Int32(*)(UnaOpFullSig*, UnaOpFullSig*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_WHICHUOFSISBETTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprOperator* BindIntBinOp(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprOperator*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDINTBINOP_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprOperator* BindIntUnaOp(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprOperator*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDINTUNAOP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprOperator* BindRealBinOp(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprOperator*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDREALBINOP_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprOperator* BindRealUnaOp(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprOperator*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDREALUNAOP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* BindIncOp(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, UnaOpFullSig* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, UnaOpFullSig*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDINCOP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* BindIncOpCore(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDINCOPCORE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* LScalar(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_LSCALAR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMulti* BindNonliftedIncOp(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, UnaOpFullSig* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMulti*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, UnaOpFullSig*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDNONLIFTEDINCOP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMulti* BindLiftedIncOp(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, UnaOpFullSig* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMulti*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, UnaOpFullSig*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDLIFTEDINCOP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* BindDecBinOp(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDDECBINOP_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp* BindDecUnaOp(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDDECUNAOP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* BindStrBinOp(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDSTRBINOP_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* BindShiftOp(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDSHIFTOP_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* BindBoolBinOp(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDBOOLBINOP_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* BindLiftedBoolBitwiseOp(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDLIFTEDBOOLBITWISEOP_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* BindBoolUnaOp(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDBOOLUNAOP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* BindStrCmpOp(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDSTRCMPOP_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* BindEnumUnaOp(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDENUMUNAOP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprOperator* BindIntOp(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprOperator*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDINTOP_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprOperator* BindIntegerNeg(::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprOperator*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDINTEGERNEG_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprOperator* BindFloatOp(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprOperator*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDFLOATOP_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConcat* BindStringConcat(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprConcat*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_BINDSTRINGCONCAT_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::RuntimeBinderException* AmbiguousOperatorError(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::RuntimeBinderException*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_AMBIGUOUSOPERATORERROR_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp* CreateBinopForPredefMethodCall(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBinOp*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CREATEBINOPFORPREDEFMETHODCALL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp* CreateUnaryOpForPredefMethodCall(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprUnaryOp*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_CREATEUNARYOPFORPREDEFMETHODCALL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRESSIONBINDER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

