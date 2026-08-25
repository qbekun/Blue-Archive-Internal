#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CCONVERSIONS_FIMPREFCONV_OFFSET UNITYSDK_OFFSET(0x90BB610)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CCONVERSIONS_FEXPREFCONV_OFFSET UNITYSDK_OFFSET(0x90AF780)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CCONVERSIONS_HASGENERICDELEGATEEXPLICITREFERENCECONVERSION_OFFSET UNITYSDK_OFFSET(0x90BB660)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CCONVERSIONS_HASGENERICDELEGATEEXPLICITREFERENCECONVERSION_OFFSET UNITYSDK_OFFSET(0x90B0E30)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CCONVERSIONS_FWRAPPINGCONV_OFFSET UNITYSDK_OFFSET(0x90B79B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CCONVERSIONS_FUNWRAPPINGCONV_OFFSET UNITYSDK_OFFSET(0x90B7C90)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int CConversions_TypeDefinitionIndex = 34490;

	class CConversions : public Il2CppObject
	{
	public:
		::System::Boolean FImpRefConv(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CCONVERSIONS_FIMPREFCONV_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean FExpRefConv(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CCONVERSIONS_FEXPREFCONV_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasGenericDelegateExplicitReferenceConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CCONVERSIONS_HASGENERICDELEGATEEXPLICITREFERENCECONVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasGenericDelegateExplicitReferenceConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CCONVERSIONS_HASGENERICDELEGATEEXPLICITREFERENCECONVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean FWrappingConv(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CCONVERSIONS_FWRAPPINGCONV_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean FUnwrappingConv(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CCONVERSIONS_FUNWRAPPINGCONV_OFFSET))(arg, arg, nullptr);
		}

	};
}

