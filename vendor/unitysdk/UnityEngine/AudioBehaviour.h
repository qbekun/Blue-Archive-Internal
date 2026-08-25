#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_AUDIOBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DBAA0)

namespace UnityEngine
{
	inline static constexpr unsigned int AudioBehaviour_TypeDefinitionIndex = 37470;

	class AudioBehaviour : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

	};
}

