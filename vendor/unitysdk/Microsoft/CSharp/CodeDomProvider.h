#pragma once
#include "../../unitysdk.h"

#define MICROSOFT_CSHARP_CODEDOMPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x983DDC0)

namespace Microsoft::CSharp
{
	inline static constexpr unsigned int CodeDomProvider_TypeDefinitionIndex = 27602;

	class CodeDomProvider : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_CODEDOMPROVIDER_.CTOR_OFFSET))(nullptr);
		}

	};
}

