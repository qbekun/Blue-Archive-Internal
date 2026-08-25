#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class NamespaceSymbol; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NAMESPACESYMBOL_GETROOTNAMESPACESYMBOL_OFFSET UNITYSDK_OFFSET(0x90CB800)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NAMESPACESYMBOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CB8A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NAMESPACESYMBOL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x90CB8B0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int NamespaceSymbol_TypeDefinitionIndex = 34537;

	class NamespaceSymbol : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::NamespaceSymbol* Root; // 0x0

		::Microsoft::CSharp::RuntimeBinder::Semantics::NamespaceSymbol* GetRootNamespaceSymbol()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::NamespaceSymbol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NAMESPACESYMBOL_GETROOTNAMESPACESYMBOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NAMESPACESYMBOL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NAMESPACESYMBOL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

