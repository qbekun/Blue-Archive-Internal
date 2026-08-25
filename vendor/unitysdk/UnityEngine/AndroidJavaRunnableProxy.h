#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AndroidJavaRunnable; }

#define UNITYENGINE_ANDROIDJAVARUNNABLEPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1B3E90)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJavaRunnableProxy_TypeDefinitionIndex = 37061;

	class AndroidJavaRunnableProxy : public ::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider
	{
	public:
		::UnityEngine::AndroidJavaRunnable* mRunnable; // 0x20

		::System::Void .ctor(::UnityEngine::AndroidJavaRunnable* arg)
		{
			((::System::Void(*)(::UnityEngine::AndroidJavaRunnable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVARUNNABLEPROXY_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

