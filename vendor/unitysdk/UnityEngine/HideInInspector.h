#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_HIDEININSPECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22EA60)

namespace UnityEngine
{
	inline static constexpr unsigned int HideInInspector_TypeDefinitionIndex = 31139;

	class HideInInspector : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HIDEININSPECTOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

