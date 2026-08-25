#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_SERIALIZEREFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA236FF0)

namespace UnityEngine
{
	inline static constexpr unsigned int SerializeReference_TypeDefinitionIndex = 31190;

	class SerializeReference : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SERIALIZEREFERENCE_.CTOR_OFFSET))(nullptr);
		}

	};
}

