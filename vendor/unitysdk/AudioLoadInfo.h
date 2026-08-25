#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AudioType; }

#define AUDIOLOADINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xDF4200)

	inline static constexpr unsigned int AudioLoadInfo_TypeDefinitionIndex = 10180;

	class AudioLoadInfo : public Il2CppObject
	{
	public:
		::System::String* file; // 0x10
		Il2CppObject* onComplete; // 0x18
		::UnityEngine::AudioType* audioType; // 0x20
		::System::Boolean isStreaming; // 0x24
		::System::Boolean noCache; // 0x25

		::System::Void .ctor(::System::String* str, Il2CppObject* arg, ::UnityEngine::AudioType* arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::UnityEngine::AudioType*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + AUDIOLOADINFO_.CTOR_OFFSET))(str, arg, arg2, arg3, arg4, nullptr);
		}

	};

