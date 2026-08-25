#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExpressionBinder; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ArgInfos; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray&; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeParameterType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_INFER_OFFSET UNITYSDK_OFFSET(0x90B5E30)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_.CTOR_OFFSET UNITYSDK_OFFSET(0x90BFC30)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_GETRESULTS_OFFSET UNITYSDK_OFFSET(0x90BFFB0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_ISUNFIXED_OFFSET UNITYSDK_OFFSET(0x90C0000)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_ISUNFIXED_OFFSET UNITYSDK_OFFSET(0x90C0030)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_ALLFIXED_OFFSET UNITYSDK_OFFSET(0x90C0080)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_ADDLOWERBOUND_OFFSET UNITYSDK_OFFSET(0x90C0100)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_ADDUPPERBOUND_OFFSET UNITYSDK_OFFSET(0x90C0220)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_ADDEXACTBOUND_OFFSET UNITYSDK_OFFSET(0x90C0340)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_HASBOUND_OFFSET UNITYSDK_OFFSET(0x90C0460)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_INFERTYPEARGS_OFFSET UNITYSDK_OFFSET(0x90BFF60)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_ISREALLYATYPE_OFFSET UNITYSDK_OFFSET(0x90C0790)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_INFERTYPEARGSFIRSTPHASE_OFFSET UNITYSDK_OFFSET(0x90C0510)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_INFERTYPEARGSSECONDPHASE_OFFSET UNITYSDK_OFFSET(0x90C0750)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_DOSECONDPHASE_OFFSET UNITYSDK_OFFSET(0x90C0A50)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_FIXNONDEPENDENTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x90C0AE0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_FIXDEPENDENTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x90C0E40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_INITIALIZEDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x90C0910)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_DEPENDSON_OFFSET UNITYSDK_OFFSET(0x90C2550)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_DEPENDSTRANSITIVELYON_OFFSET UNITYSDK_OFFSET(0x90C2690)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_DEDUCEALLDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x90C2520)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_DEDUCEDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x90C2760)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_SETUNKNOWNSTONOTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x90C28F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_SETINDIRECTSTOUNKNOWN_OFFSET UNITYSDK_OFFSET(0x90C25D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_UPDATEDEPENDENCIESAFTERFIX_OFFSET UNITYSDK_OFFSET(0x90C29B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_DEPENDSONANY_OFFSET UNITYSDK_OFFSET(0x90C11D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_ANYDEPENDSON_OFFSET UNITYSDK_OFFSET(0x90C24B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_EXACTINFERENCE_OFFSET UNITYSDK_OFFSET(0x90C0810)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_EXACTTYPEPARAMETERINFERENCE_OFFSET UNITYSDK_OFFSET(0x90C2A70)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_EXACTARRAYINFERENCE_OFFSET UNITYSDK_OFFSET(0x90C2B10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_EXACTNULLABLEINFERENCE_OFFSET UNITYSDK_OFFSET(0x90C2BD0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_EXACTCONSTRUCTEDINFERENCE_OFFSET UNITYSDK_OFFSET(0x90C2C80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_EXACTTYPEARGUMENTINFERENCE_OFFSET UNITYSDK_OFFSET(0x90C2CF0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_LOWERBOUNDINFERENCE_OFFSET UNITYSDK_OFFSET(0x90C08B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_LOWERBOUNDTYPEPARAMETERINFERENCE_OFFSET UNITYSDK_OFFSET(0x90C2E50)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_LOWERBOUNDARRAYINFERENCE_OFFSET UNITYSDK_OFFSET(0x90C2EF0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_LOWERBOUNDCONSTRUCTEDINFERENCE_OFFSET UNITYSDK_OFFSET(0x90C30F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_LOWERBOUNDCLASSINFERENCE_OFFSET UNITYSDK_OFFSET(0x90C34E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_LOWERBOUNDINTERFACEINFERENCE_OFFSET UNITYSDK_OFFSET(0x90C35C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_LOWERBOUNDTYPEARGUMENTINFERENCE_OFFSET UNITYSDK_OFFSET(0x90C3220)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_UPPERBOUNDINFERENCE_OFFSET UNITYSDK_OFFSET(0x90C3720)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_UPPERBOUNDTYPEPARAMETERINFERENCE_OFFSET UNITYSDK_OFFSET(0x90C3780)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_UPPERBOUNDARRAYINFERENCE_OFFSET UNITYSDK_OFFSET(0x90C3820)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_UPPERBOUNDCONSTRUCTEDINFERENCE_OFFSET UNITYSDK_OFFSET(0x90C3A20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_UPPERBOUNDCLASSINFERENCE_OFFSET UNITYSDK_OFFSET(0x90C3E10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_UPPERBOUNDINTERFACEINFERENCE_OFFSET UNITYSDK_OFFSET(0x90C3EF0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_UPPERBOUNDTYPEARGUMENTINFERENCE_OFFSET UNITYSDK_OFFSET(0x90C3B50)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_FIX_OFFSET UNITYSDK_OFFSET(0x90C1240)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int MethodTypeInferrer_TypeDefinitionIndex = 34517;

	class MethodTypeInferrer : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder* _binder; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* _pMethodTypeParameters; // 0x20
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* _pMethodFormalParameterTypes; // 0x28
		::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos* _pMethodArguments; // 0x30
		::Il2CppArray<::System::Object*>* _pExactBounds; // 0x38
		::Il2CppArray<::System::Object*>* _pUpperBounds; // 0x40
		::Il2CppArray<::System::Object*>* _pLowerBounds; // 0x48
		::Il2CppArray<::System::Object*>* _pFixedResults; // 0x50
		::Il2CppArray<::System::Object*>* _ppDependencies; // 0x58
		::System::Boolean _dependenciesDirty; // 0x60

		::System::Boolean Infer(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray&* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_INFER_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* GetResults()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_GETRESULTS_OFFSET))(nullptr);
		}

		::System::Boolean IsUnfixed(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_ISUNFIXED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsUnfixed(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_ISUNFIXED_OFFSET))(arg, nullptr);
		}

		::System::Boolean AllFixed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_ALLFIXED_OFFSET))(nullptr);
		}

		::System::Void AddLowerBound(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_ADDLOWERBOUND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUpperBound(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_ADDUPPERBOUND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExactBound(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeParameterType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_ADDEXACTBOUND_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasBound(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_HASBOUND_OFFSET))(arg, nullptr);
		}

		::System::Boolean InferTypeArgs()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_INFERTYPEARGS_OFFSET))(nullptr);
		}

		::System::Boolean IsReallyAType(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_ISREALLYATYPE_OFFSET))(arg, nullptr);
		}

		::System::Void InferTypeArgsFirstPhase()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_INFERTYPEARGSFIRSTPHASE_OFFSET))(nullptr);
		}

		::System::Boolean InferTypeArgsSecondPhase()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_INFERTYPEARGSSECONDPHASE_OFFSET))(nullptr);
		}

		NewInferenceResult* DoSecondPhase()
		{
			return (return (NewInferenceResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_DOSECONDPHASE_OFFSET))(nullptr);
		}

		NewInferenceResult* FixNondependentParameters()
		{
			return (return (NewInferenceResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_FIXNONDEPENDENTPARAMETERS_OFFSET))(nullptr);
		}

		NewInferenceResult* FixDependentParameters()
		{
			return (return (NewInferenceResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_FIXDEPENDENTPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void InitializeDependencies()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_INITIALIZEDEPENDENCIES_OFFSET))(nullptr);
		}

		::System::Boolean DependsOn(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_DEPENDSON_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean DependsTransitivelyOn(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_DEPENDSTRANSITIVELYON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DeduceAllDependencies()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_DEDUCEALLDEPENDENCIES_OFFSET))(nullptr);
		}

		::System::Boolean DeduceDependencies()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_DEDUCEDEPENDENCIES_OFFSET))(nullptr);
		}

		::System::Void SetUnknownsToNotDependent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_SETUNKNOWNSTONOTDEPENDENT_OFFSET))(nullptr);
		}

		::System::Void SetIndirectsToUnknown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_SETINDIRECTSTOUNKNOWN_OFFSET))(nullptr);
		}

		::System::Void UpdateDependenciesAfterFix(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_UPDATEDEPENDENCIESAFTERFIX_OFFSET))(arg, nullptr);
		}

		::System::Boolean DependsOnAny(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_DEPENDSONANY_OFFSET))(arg, nullptr);
		}

		::System::Boolean AnyDependsOn(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_ANYDEPENDSON_OFFSET))(arg, nullptr);
		}

		::System::Void ExactInference(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_EXACTINFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ExactTypeParameterInference(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_EXACTTYPEPARAMETERINFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ExactArrayInference(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_EXACTARRAYINFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ExactNullableInference(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_EXACTNULLABLEINFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ExactConstructedInference(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_EXACTCONSTRUCTEDINFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ExactTypeArgumentInference(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_EXACTTYPEARGUMENTINFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LowerBoundInference(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_LOWERBOUNDINFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean LowerBoundTypeParameterInference(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_LOWERBOUNDTYPEPARAMETERINFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean LowerBoundArrayInference(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_LOWERBOUNDARRAYINFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean LowerBoundConstructedInference(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_LOWERBOUNDCONSTRUCTEDINFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean LowerBoundClassInference(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_LOWERBOUNDCLASSINFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean LowerBoundInterfaceInference(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_LOWERBOUNDINTERFACEINFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LowerBoundTypeArgumentInference(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_LOWERBOUNDTYPEARGUMENTINFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpperBoundInference(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_UPPERBOUNDINFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean UpperBoundTypeParameterInference(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_UPPERBOUNDTYPEPARAMETERINFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean UpperBoundArrayInference(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_UPPERBOUNDARRAYINFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean UpperBoundConstructedInference(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_UPPERBOUNDCONSTRUCTEDINFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean UpperBoundClassInference(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_UPPERBOUNDCLASSINFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean UpperBoundInterfaceInference(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_UPPERBOUNDINTERFACEINFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpperBoundTypeArgumentInference(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_UPPERBOUNDTYPEARGUMENTINFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Fix(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODTYPEINFERRER_FIX_OFFSET))(arg, nullptr);
		}

	};
}

