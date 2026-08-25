#pragma once
#include "../unitysdk.h"

#define SYSTEM_SHAREDSTATICS_.CTOR_OFFSET UNITYSDK_OFFSET(0x93AE1B0)
#define SYSTEM_SHAREDSTATICS_GETSHAREDSTRINGMAKER_OFFSET UNITYSDK_OFFSET(0x93AE1D0)
#define SYSTEM_SHAREDSTATICS_RELEASESHAREDSTRINGMAKER_OFFSET UNITYSDK_OFFSET(0x93AE3F0)
#define SYSTEM_SHAREDSTATICS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93AE550)

namespace System
{
	inline static constexpr unsigned int SharedStatics_TypeDefinitionIndex = 23941;

	class SharedStatics : public Il2CppObject
	{
	public:
		::System::SharedStatics* _sharedStatics; // 0x0
		StringMaker* _maker; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SHAREDSTATICS_.CTOR_OFFSET))(nullptr);
		}

		StringMaker* GetSharedStringMaker()
		{
			return (return (StringMaker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SHAREDSTATICS_GETSHAREDSTRINGMAKER_OFFSET))(nullptr);
		}

		::System::Void ReleaseSharedStringMaker(StringMaker&* arg)
		{
			((::System::Void(*)(StringMaker&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SHAREDSTATICS_RELEASESHAREDSTRINGMAKER_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SHAREDSTATICS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

