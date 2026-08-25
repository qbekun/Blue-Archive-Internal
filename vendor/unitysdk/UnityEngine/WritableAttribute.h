#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_WRITABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5640)

namespace UnityEngine
{
	inline static constexpr unsigned int WritableAttribute_TypeDefinitionIndex = 37872;

	class WritableAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WRITABLEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

