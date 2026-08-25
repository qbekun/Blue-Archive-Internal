#pragma once
#include "../../../../unitysdk.h"

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SCOPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CBA50)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int Scope_TypeDefinitionIndex = 34540;

	class Scope : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SCOPE_.CTOR_OFFSET))(nullptr);
		}

	};
}

