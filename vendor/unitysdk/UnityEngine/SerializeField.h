#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_SERIALIZEFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA236FE0)

namespace UnityEngine
{
	inline static constexpr unsigned int SerializeField_TypeDefinitionIndex = 31189;

	class SerializeField : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SERIALIZEFIELD_.CTOR_OFFSET))(nullptr);
		}

	};
}

