#pragma once
#include "../unitysdk.h"

#define SYSTEM_MONOTODOATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x983DDE0)

namespace System
{
	inline static constexpr unsigned int MonoTODOAttribute_TypeDefinitionIndex = 27604;

	class MonoTODOAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOTODOATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

