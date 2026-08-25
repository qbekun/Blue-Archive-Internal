#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Symbol; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PARENTSYMBOL_ADDTOCHILDLIST_OFFSET UNITYSDK_OFFSET(0x90CB900)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PARENTSYMBOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CAF10)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ParentSymbol_TypeDefinitionIndex = 34538;

	class ParentSymbol : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* firstChild; // 0x38
		::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* _lastChild; // 0x40

		::System::Void AddToChildList(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PARENTSYMBOL_ADDTOCHILDLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PARENTSYMBOL_.CTOR_OFFSET))(nullptr);
		}

	};
}

