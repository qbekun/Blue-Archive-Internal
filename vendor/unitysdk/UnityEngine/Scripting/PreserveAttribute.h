#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_SCRIPTING_PRESERVEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA24B4B0)

namespace UnityEngine::Scripting
{
	inline static constexpr unsigned int PreserveAttribute_TypeDefinitionIndex = 31307;

	class PreserveAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_PRESERVEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

