#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class Name; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class EXPRFLAG; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class symbmask_t; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ArgInfos; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CMEMBERLOOKUPRESULTS_GET_CONTAININGTYPES_OFFSET UNITYSDK_OFFSET(0x90BF7B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CMEMBERLOOKUPRESULTS_.CTOR_OFFSET UNITYSDK_OFFSET(0x90BC1F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CMEMBERLOOKUPRESULTS_GETMETHODITERATOR_OFFSET UNITYSDK_OFFSET(0x90B3070)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int CMemberLookupResults_TypeDefinitionIndex = 34513;

	class CMemberLookupResults : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* _ContainingTypes_k__BackingField; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Syntax::Name* _pName; // 0x18

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* get_ContainingTypes()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CMEMBERLOOKUPRESULTS_GET_CONTAININGTYPES_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CMEMBERLOOKUPRESULTS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		CMethodIterator* GetMethodIterator(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg, ::System::Int32 arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::symbmask_t* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos* arg)
		{
			return (return (CMethodIterator*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::System::Int32, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::symbmask_t*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CMEMBERLOOKUPRESULTS_GETMETHODITERATOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

