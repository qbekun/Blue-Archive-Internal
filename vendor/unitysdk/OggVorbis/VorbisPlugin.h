#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AudioClip; }

#define OGGVORBIS_VORBISPLUGIN_LOAD_OFFSET UNITYSDK_OFFSET(0xA14050)
#define OGGVORBIS_VORBISPLUGIN_GETOGGVORBIS_OFFSET UNITYSDK_OFFSET(0xA14480)
#define OGGVORBIS_VORBISPLUGIN_SAVE_OFFSET UNITYSDK_OFFSET(0xA14940)
#define OGGVORBIS_VORBISPLUGIN_TOAUDIOCLIP_OFFSET UNITYSDK_OFFSET(0xA14CD0)

namespace OggVorbis
{
	inline static constexpr unsigned int VorbisPlugin_TypeDefinitionIndex = 36575;

	class VorbisPlugin : public Il2CppObject
	{
	public:
		::UnityEngine::AudioClip* Load(::System::String* str, ::System::Int32 arg)
		{
			return (return (::UnityEngine::AudioClip*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + OGGVORBIS_VORBISPLUGIN_LOAD_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetOggVorbis(::UnityEngine::AudioClip* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::AudioClip*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + OGGVORBIS_VORBISPLUGIN_GETOGGVORBIS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Save(::System::String* str, ::UnityEngine::AudioClip* arg, ::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::AudioClip*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + OGGVORBIS_VORBISPLUGIN_SAVE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::UnityEngine::AudioClip* ToAudioClip(::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::UnityEngine::AudioClip*(*)(::Il2CppArray<::System::Object*>*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + OGGVORBIS_VORBISPLUGIN_TOAUDIOCLIP_OFFSET))(arg, str, arg, nullptr);
		}

	};
}

