#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_EXECUTEINEDITMODE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22EA40)

namespace UnityEngine
{
	inline static constexpr unsigned int ExecuteInEditMode_TypeDefinitionIndex = 31137;

	class ExecuteInEditMode : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXECUTEINEDITMODE_.CTOR_OFFSET))(nullptr);
		}

	};
}

