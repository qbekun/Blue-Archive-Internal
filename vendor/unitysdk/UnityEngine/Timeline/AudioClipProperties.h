#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_TIMELINE_AUDIOCLIPPROPERTIES_.CTOR_OFFSET UNITYSDK_OFFSET(0xA19EAA0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AudioClipProperties_TypeDefinitionIndex = 36269;

	class AudioClipProperties : public Il2CppObject
	{
	public:
		::System::Single volume; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOCLIPPROPERTIES_.CTOR_OFFSET))(nullptr);
		}

	};
}

