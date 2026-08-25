#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AudioClip; }
namespace UnityEngine { class AudioClipLoadType; }
namespace UnityEngine { class AudioDataLoadState; }

#define UNITYENGINE_AUDIOCLIP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DA9F0)
#define UNITYENGINE_AUDIOCLIP_GETDATA_OFFSET UNITYSDK_OFFSET(0xA1DAA60)
#define UNITYENGINE_AUDIOCLIP_SETDATA_OFFSET UNITYSDK_OFFSET(0xA1DAAB0)
#define UNITYENGINE_AUDIOCLIP_CONSTRUCT_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA1DAB00)
#define UNITYENGINE_AUDIOCLIP_GETNAME_OFFSET UNITYSDK_OFFSET(0xA1DAB40)
#define UNITYENGINE_AUDIOCLIP_CREATEUSERSOUND_OFFSET UNITYSDK_OFFSET(0xA1DAB80)
#define UNITYENGINE_AUDIOCLIP_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0xA1DABD0)
#define UNITYENGINE_AUDIOCLIP_GET_SAMPLES_OFFSET UNITYSDK_OFFSET(0xA1DAC10)
#define UNITYENGINE_AUDIOCLIP_GET_CHANNELS_OFFSET UNITYSDK_OFFSET(0xA1DAC50)
#define UNITYENGINE_AUDIOCLIP_GET_FREQUENCY_OFFSET UNITYSDK_OFFSET(0xA1DAC90)
#define UNITYENGINE_AUDIOCLIP_GET_ISREADYTOPLAY_OFFSET UNITYSDK_OFFSET(0xA1DACD0)
#define UNITYENGINE_AUDIOCLIP_GET_LOADTYPE_OFFSET UNITYSDK_OFFSET(0xA1DAD10)
#define UNITYENGINE_AUDIOCLIP_LOADAUDIODATA_OFFSET UNITYSDK_OFFSET(0xA1DAD50)
#define UNITYENGINE_AUDIOCLIP_UNLOADAUDIODATA_OFFSET UNITYSDK_OFFSET(0xA1DAD90)
#define UNITYENGINE_AUDIOCLIP_GET_PRELOADAUDIODATA_OFFSET UNITYSDK_OFFSET(0xA1DADD0)
#define UNITYENGINE_AUDIOCLIP_GET_AMBISONIC_OFFSET UNITYSDK_OFFSET(0xA1DAE10)
#define UNITYENGINE_AUDIOCLIP_GET_LOADINBACKGROUND_OFFSET UNITYSDK_OFFSET(0xA1DAE50)
#define UNITYENGINE_AUDIOCLIP_GET_LOADSTATE_OFFSET UNITYSDK_OFFSET(0xA1DAE90)
#define UNITYENGINE_AUDIOCLIP_GETDATA_OFFSET UNITYSDK_OFFSET(0xA1DAED0)
#define UNITYENGINE_AUDIOCLIP_SETDATA_OFFSET UNITYSDK_OFFSET(0xA1DB060)
#define UNITYENGINE_AUDIOCLIP_CREATE_OFFSET UNITYSDK_OFFSET(0xA1DB290)
#define UNITYENGINE_AUDIOCLIP_CREATE_OFFSET UNITYSDK_OFFSET(0xA1DB2D0)
#define UNITYENGINE_AUDIOCLIP_CREATE_OFFSET UNITYSDK_OFFSET(0xA1DB5C0)
#define UNITYENGINE_AUDIOCLIP_CREATE_OFFSET UNITYSDK_OFFSET(0xA1DB2B0)
#define UNITYENGINE_AUDIOCLIP_CREATE_OFFSET UNITYSDK_OFFSET(0xA1DB5F0)
#define UNITYENGINE_AUDIOCLIP_CREATE_OFFSET UNITYSDK_OFFSET(0xA1DB300)
#define UNITYENGINE_AUDIOCLIP_ADD_M_PCMREADERCALLBACK_OFFSET UNITYSDK_OFFSET(0xA1DB620)
#define UNITYENGINE_AUDIOCLIP_REMOVE_M_PCMREADERCALLBACK_OFFSET UNITYSDK_OFFSET(0xA1DB760)
#define UNITYENGINE_AUDIOCLIP_ADD_M_PCMSETPOSITIONCALLBACK_OFFSET UNITYSDK_OFFSET(0xA1DB6C0)
#define UNITYENGINE_AUDIOCLIP_REMOVE_M_PCMSETPOSITIONCALLBACK_OFFSET UNITYSDK_OFFSET(0xA1DB800)
#define UNITYENGINE_AUDIOCLIP_INVOKEPCMREADERCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA1DB8A0)
#define UNITYENGINE_AUDIOCLIP_INVOKEPCMSETPOSITIONCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA1DB8C0)

namespace UnityEngine
{
	inline static constexpr unsigned int AudioClip_TypeDefinitionIndex = 37469;

	class AudioClip : public Il2CppObject
	{
	public:
		PCMReaderCallback* m_PCMReaderCallback; // 0x18
		PCMSetPositionCallback* m_PCMSetPositionCallback; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean GetData(::UnityEngine::AudioClip* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::AudioClip*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GETDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean SetData(::UnityEngine::AudioClip* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::AudioClip*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_SETDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::AudioClip* Construct_Internal()
		{
			return (return (::UnityEngine::AudioClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_CONSTRUCT_INTERNAL_OFFSET))(nullptr);
		}

		::System::String* GetName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GETNAME_OFFSET))(nullptr);
		}

		::System::Void CreateUserSound(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_CREATEUSERSOUND_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Single get_length()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int32 get_samples()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GET_SAMPLES_OFFSET))(nullptr);
		}

		::System::Int32 get_channels()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GET_CHANNELS_OFFSET))(nullptr);
		}

		::System::Int32 get_frequency()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GET_FREQUENCY_OFFSET))(nullptr);
		}

		::System::Boolean get_isReadyToPlay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GET_ISREADYTOPLAY_OFFSET))(nullptr);
		}

		::UnityEngine::AudioClipLoadType* get_loadType()
		{
			return (return (::UnityEngine::AudioClipLoadType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GET_LOADTYPE_OFFSET))(nullptr);
		}

		::System::Boolean LoadAudioData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_LOADAUDIODATA_OFFSET))(nullptr);
		}

		::System::Boolean UnloadAudioData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_UNLOADAUDIODATA_OFFSET))(nullptr);
		}

		::System::Boolean get_preloadAudioData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GET_PRELOADAUDIODATA_OFFSET))(nullptr);
		}

		::System::Boolean get_ambisonic()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GET_AMBISONIC_OFFSET))(nullptr);
		}

		::System::Boolean get_loadInBackground()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GET_LOADINBACKGROUND_OFFSET))(nullptr);
		}

		::UnityEngine::AudioDataLoadState* get_loadState()
		{
			return (return (::UnityEngine::AudioDataLoadState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GET_LOADSTATE_OFFSET))(nullptr);
		}

		::System::Boolean GetData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_GETDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SetData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_SETDATA_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::AudioClip* Create(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::AudioClip*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_CREATE_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::AudioClip* Create(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg, PCMReaderCallback* arg)
		{
			return (return (::UnityEngine::AudioClip*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, PCMReaderCallback*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_CREATE_OFFSET))(str, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::AudioClip* Create(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg, PCMReaderCallback* arg, PCMSetPositionCallback* arg)
		{
			return (return (::UnityEngine::AudioClip*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, PCMReaderCallback*, PCMSetPositionCallback*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_CREATE_OFFSET))(str, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::AudioClip* Create(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::AudioClip*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_CREATE_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::AudioClip* Create(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, PCMReaderCallback* arg)
		{
			return (return (::UnityEngine::AudioClip*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, PCMReaderCallback*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_CREATE_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::AudioClip* Create(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, PCMReaderCallback* arg, PCMSetPositionCallback* arg)
		{
			return (return (::UnityEngine::AudioClip*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, PCMReaderCallback*, PCMSetPositionCallback*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_CREATE_OFFSET))(str, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void add_m_PCMReaderCallback(PCMReaderCallback* arg)
		{
			((::System::Void(*)(PCMReaderCallback*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_ADD_M_PCMREADERCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void remove_m_PCMReaderCallback(PCMReaderCallback* arg)
		{
			((::System::Void(*)(PCMReaderCallback*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_REMOVE_M_PCMREADERCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void add_m_PCMSetPositionCallback(PCMSetPositionCallback* arg)
		{
			((::System::Void(*)(PCMSetPositionCallback*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_ADD_M_PCMSETPOSITIONCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void remove_m_PCMSetPositionCallback(PCMSetPositionCallback* arg)
		{
			((::System::Void(*)(PCMSetPositionCallback*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_REMOVE_M_PCMSETPOSITIONCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void InvokePCMReaderCallback_Internal(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_INVOKEPCMREADERCALLBACK_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void InvokePCMSetPositionCallback_Internal(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_INVOKEPCMSETPOSITIONCALLBACK_INTERNAL_OFFSET))(arg, nullptr);
		}

	};
}

