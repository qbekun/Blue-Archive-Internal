#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_ASSETFILENAMEEXTENSIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A55E0)

namespace UnityEngine
{
	inline static constexpr unsigned int AssetFileNameExtensionAttribute_TypeDefinitionIndex = 37870;

	class AssetFileNameExtensionAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _preferredExtension_k__BackingField; // 0x10
		Il2CppObject* _otherExtensions_k__BackingField; // 0x18

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETFILENAMEEXTENSIONATTRIBUTE_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

