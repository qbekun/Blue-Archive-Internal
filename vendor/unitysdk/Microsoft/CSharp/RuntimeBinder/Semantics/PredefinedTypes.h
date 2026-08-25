#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class PredefinedType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPES_DELAYLOADPREDEFSYM_OFFSET UNITYSDK_OFFSET(0x90DA400)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPES_INITIALIZEPREDEFINEDTYPE_OFFSET UNITYSDK_OFFSET(0x90DA680)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPES_GETPREDEFINEDAGGREGATE_OFFSET UNITYSDK_OFFSET(0x90D95A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPES_GETNICENAME_OFFSET UNITYSDK_OFFSET(0x90DA6E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPES_GETNICENAME_OFFSET UNITYSDK_OFFSET(0x90DA8E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x90DA9A0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int PredefinedTypes_TypeDefinitionIndex = 34598;

	class PredefinedTypes : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_predefSymbols; // 0x0

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* DelayLoadPredefSym(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPES_DELAYLOADPREDEFSYM_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* InitializePredefinedType(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPES_INITIALIZEPREDEFINEDTYPE_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* GetPredefinedAggregate(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPES_GETPREDEFINEDAGGREGATE_OFFSET))(arg, nullptr);
		}

		::System::String* GetNiceName(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg)
		{
			return (return (::System::String*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPES_GETNICENAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetNiceName(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg)
		{
			return (return (::System::String*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPES_GETNICENAME_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

