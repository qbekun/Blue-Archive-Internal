#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_EXECUTEALWAYS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22EA50)

namespace UnityEngine
{
	inline static constexpr unsigned int ExecuteAlways_TypeDefinitionIndex = 31138;

	class ExecuteAlways : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXECUTEALWAYS_.CTOR_OFFSET))(nullptr);
		}

	};
}

