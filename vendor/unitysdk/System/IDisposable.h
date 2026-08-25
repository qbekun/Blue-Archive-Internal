#pragma once
#include "../unitysdk.h"

#define SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int IDisposable_TypeDefinitionIndex = 23772;

	class IDisposable : public Il2CppObject
	{
	public:
		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(nullptr);
		}

	};
}

