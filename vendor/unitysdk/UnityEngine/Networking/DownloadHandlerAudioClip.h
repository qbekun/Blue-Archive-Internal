#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Networking { class DownloadHandlerAudioClip; }
namespace UnityEngine { class AudioType; }
namespace UnityEngine { class AudioClip; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERAUDIOCLIP_CREATE_OFFSET UNITYSDK_OFFSET(0xA49FB60)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERAUDIOCLIP_INTERNALCREATEAUDIOCLIP_OFFSET UNITYSDK_OFFSET(0xA49FBB0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERAUDIOCLIP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA49FB10)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERAUDIOCLIP_GETNATIVEDATA_OFFSET UNITYSDK_OFFSET(0xA49FC00)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERAUDIOCLIP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA49FC20)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERAUDIOCLIP_GETTEXT_OFFSET UNITYSDK_OFFSET(0xA49FC50)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERAUDIOCLIP_GET_AUDIOCLIP_OFFSET UNITYSDK_OFFSET(0xA49FCB0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERAUDIOCLIP_SET_STREAMAUDIO_OFFSET UNITYSDK_OFFSET(0xA49FCF0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERAUDIOCLIP_GETCONTENT_OFFSET UNITYSDK_OFFSET(0xA49FD30)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int DownloadHandlerAudioClip_TypeDefinitionIndex = 38031;

	class DownloadHandlerAudioClip : public Il2CppObject
	{
	public:
		Il2CppObject* m_NativeData; // 0x18

		::System::Int32 Create(::UnityEngine::Networking::DownloadHandlerAudioClip* arg, ::System::String* str, ::UnityEngine::AudioType* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Networking::DownloadHandlerAudioClip*, ::System::String*, ::UnityEngine::AudioType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERAUDIOCLIP_CREATE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void InternalCreateAudioClip(::System::String* str, ::UnityEngine::AudioType* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::AudioType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERAUDIOCLIP_INTERNALCREATEAUDIOCLIP_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::UnityEngine::AudioType* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::AudioType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERAUDIOCLIP_.CTOR_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* GetNativeData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERAUDIOCLIP_GETNATIVEDATA_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERAUDIOCLIP_DISPOSE_OFFSET))(nullptr);
		}

		::System::String* GetText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERAUDIOCLIP_GETTEXT_OFFSET))(nullptr);
		}

		::UnityEngine::AudioClip* get_audioClip()
		{
			return (return (::UnityEngine::AudioClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERAUDIOCLIP_GET_AUDIOCLIP_OFFSET))(nullptr);
		}

		::System::Void set_streamAudio(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERAUDIOCLIP_SET_STREAMAUDIO_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AudioClip* GetContent(::UnityEngine::Networking::UnityWebRequest* arg)
		{
			return (return (::UnityEngine::AudioClip*(*)(::UnityEngine::Networking::UnityWebRequest*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERAUDIOCLIP_GETCONTENT_OFFSET))(arg, nullptr);
		}

	};
}

