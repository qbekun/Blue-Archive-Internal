#pragma once
#include "../unitysdk.h"

#define SYSTEM_CONTEXTSTATICATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93955E0)

namespace System
{
	inline static constexpr unsigned int ContextStaticAttribute_TypeDefinitionIndex = 23921;

	class ContextStaticAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONTEXTSTATICATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

