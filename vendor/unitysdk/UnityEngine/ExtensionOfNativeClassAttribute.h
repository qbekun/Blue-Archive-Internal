#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_EXTENSIONOFNATIVECLASSATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22F9B0)

namespace UnityEngine
{
	inline static constexpr unsigned int ExtensionOfNativeClassAttribute_TypeDefinitionIndex = 31152;

	class ExtensionOfNativeClassAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXTENSIONOFNATIVECLASSATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

