#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_THREADANDSERIALIZATIONSAFEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5630)

namespace UnityEngine
{
	inline static constexpr unsigned int ThreadAndSerializationSafeAttribute_TypeDefinitionIndex = 37871;

	class ThreadAndSerializationSafeAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADANDSERIALIZATIONSAFEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

