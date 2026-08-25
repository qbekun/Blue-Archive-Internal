#pragma once
#include "../../unitysdk.h"

#define MICROSOFT_CSHARP_CSHARPCODEPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x983DDD0)

namespace Microsoft::CSharp
{
	inline static constexpr unsigned int CSharpCodeProvider_TypeDefinitionIndex = 27603;

	class CSharpCodeProvider : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_CSHARPCODEPROVIDER_.CTOR_OFFSET))(nullptr);
		}

	};
}

