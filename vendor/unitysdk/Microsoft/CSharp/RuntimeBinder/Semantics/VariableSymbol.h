#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_VARIABLESYMBOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CAA30)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int VariableSymbol_TypeDefinitionIndex = 34552;

	class VariableSymbol : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* type; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_VARIABLESYMBOL_.CTOR_OFFSET))(nullptr);
		}

	};
}

