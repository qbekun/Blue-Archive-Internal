#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Networking { class UnityWebRequest; }
namespace UnityEngine { class AudioType; }

#define UNITYENGINE_NETWORKING_UNITYWEBREQUESTMULTIMEDIA_GETAUDIOCLIP_OFFSET UNITYSDK_OFFSET(0xA49FA40)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int UnityWebRequestMultimedia_TypeDefinitionIndex = 38030;

	class UnityWebRequestMultimedia : public Il2CppObject
	{
	public:
		::UnityEngine::Networking::UnityWebRequest* GetAudioClip(::System::String* str, ::UnityEngine::AudioType* arg)
		{
			return (return (::UnityEngine::Networking::UnityWebRequest*(*)(::System::String*, ::UnityEngine::AudioType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UNITYWEBREQUESTMULTIMEDIA_GETAUDIOCLIP_OFFSET))(str, arg, nullptr);
		}

	};
}

