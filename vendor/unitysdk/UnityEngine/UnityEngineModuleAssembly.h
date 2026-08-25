#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_UNITYENGINEMODULEASSEMBLY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5660)

namespace UnityEngine
{
	inline static constexpr unsigned int UnityEngineModuleAssembly_TypeDefinitionIndex = 37874;

	class UnityEngineModuleAssembly : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYENGINEMODULEASSEMBLY_.CTOR_OFFSET))(nullptr);
		}

	};
}

