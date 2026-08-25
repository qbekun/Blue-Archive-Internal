#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class CustomRenderTexture; }

#define UNITYENGINE_CUSTOMRENDERTEXTUREMANAGER_INVOKEONTEXTURELOADED_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA1F11C0)
#define UNITYENGINE_CUSTOMRENDERTEXTUREMANAGER_INVOKEONTEXTUREUNLOADED_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA1F1220)

namespace UnityEngine
{
	inline static constexpr unsigned int CustomRenderTextureManager_TypeDefinitionIndex = 30988;

	class CustomRenderTextureManager : public Il2CppObject
	{
	public:
		Il2CppObject* textureLoaded; // 0x0
		Il2CppObject* textureUnloaded; // 0x8

		::System::Void InvokeOnTextureLoaded_Internal(::UnityEngine::CustomRenderTexture* arg)
		{
			((::System::Void(*)(::UnityEngine::CustomRenderTexture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUSTOMRENDERTEXTUREMANAGER_INVOKEONTEXTURELOADED_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeOnTextureUnloaded_Internal(::UnityEngine::CustomRenderTexture* arg)
		{
			((::System::Void(*)(::UnityEngine::CustomRenderTexture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUSTOMRENDERTEXTUREMANAGER_INVOKEONTEXTUREUNLOADED_INTERNAL_OFFSET))(arg, nullptr);
		}

	};
}

