#pragma once
#include "../unitysdk.h"

#define SYSTEM_THREADSTATICATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9379440)

namespace System
{
	inline static constexpr unsigned int ThreadStaticAttribute_TypeDefinitionIndex = 23842;

	class ThreadStaticAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADSTATICATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

