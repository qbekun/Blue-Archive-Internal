#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_UNITYAPICOMPATIBILITYVERSIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA233E30)

namespace UnityEngine
{
	inline static constexpr unsigned int UnityAPICompatibilityVersionAttribute_TypeDefinitionIndex = 31175;

	class UnityAPICompatibilityVersionAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _version; // 0x10
		::Il2CppArray<::System::Object*>* _configurationAssembliesHashes; // 0x18

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYAPICOMPATIBILITYVERSIONATTRIBUTE_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

