#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AudioClip; }

#define TTSSERVICE_GET_DEFAULTAUDIOCLIP_OFFSET UNITYSDK_OFFSET(0x2103730)
#define TTSSERVICE_GET_URI_OFFSET UNITYSDK_OFFSET(0x2103770)
#define TTSSERVICE_CHECKDOWNLOADED_OFFSET UNITYSDK_OFFSET(0x21037B0)
#define TTSSERVICE_CHECKINTERGRITY_OFFSET UNITYSDK_OFFSET(0x2103900)
#define TTSSERVICE_DOWNLOADZIPFILE_OFFSET UNITYSDK_OFFSET(0x2103A50)
#define TTSSERVICE_CO_DOWNLOADHASH_OFFSET UNITYSDK_OFFSET(0x2103BB0)
#define TTSSERVICE_GETDOWNLOADHASHURI_OFFSET UNITYSDK_OFFSET(0x2103C40)
#define TTSSERVICE_SET_CRC_OFFSET UNITYSDK_OFFSET(0x21040F0)
#define TTSSERVICE_CO_DOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0x2104130)
#define TTSSERVICE_DOWNLOADHASH_OFFSET UNITYSDK_OFFSET(0x21041C0)
#define TTSSERVICE_GET_DIRECTORY_OFFSET UNITYSDK_OFFSET(0x2104290)
#define TTSSERVICE_LOADCALLNAMELIPSYNC_OFFSET UNITYSDK_OFFSET(0x2104300)
#define TTSSERVICE_EXISTTTSFILE_OFFSET UNITYSDK_OFFSET(0x2104470)
#define TTSSERVICE_GETDOWNLOADURI_OFFSET UNITYSDK_OFFSET(0x21044B0)
#define TTSSERVICE_CO_LOADTTSFILE_OFFSET UNITYSDK_OFFSET(0x21046E0)
#define TTSSERVICE_DOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0x2104780)
#define TTSSERVICE_READLOCALHASH_OFFSET UNITYSDK_OFFSET(0x2104850)
#define TTSSERVICE_NEEDDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x21049C0)
#define TTSSERVICE_GET_DEFAULTAUDIOCLIP2_OFFSET UNITYSDK_OFFSET(0x2104A80)
#define TTSSERVICE_LOADTTSCLIP_OFFSET UNITYSDK_OFFSET(0x2104AC0)
#define TTSSERVICE_GET_CRC_OFFSET UNITYSDK_OFFSET(0x2104BA0)
#define TTSSERVICE_TTSFILENAME_OFFSET UNITYSDK_OFFSET(0x2103E70)
#define TTSSERVICE_GET_AUDIOCLIP_OFFSET UNITYSDK_OFFSET(0x2104C40)
#define TTSSERVICE_SET_DEFAULTAUDIOCLIP_OFFSET UNITYSDK_OFFSET(0x2104C80)
#define TTSSERVICE_CO_DOWNLOADZIPFILE_OFFSET UNITYSDK_OFFSET(0x2103B30)
#define TTSSERVICE_TTSFILEPATH_OFFSET UNITYSDK_OFFSET(0x21037D0)
#define TTSSERVICE_LIPSYNCFILEPATH_OFFSET UNITYSDK_OFFSET(0x2104360)
#define TTSSERVICE_ZIPFILEPATH_OFFSET UNITYSDK_OFFSET(0x2103940)
#define TTSSERVICE_SET_AUDIOCLIP_OFFSET UNITYSDK_OFFSET(0x2104CF0)
#define TTSSERVICE_SET_URI_OFFSET UNITYSDK_OFFSET(0x2104D40)
#define TTSSERVICE_SET_DEFAULTAUDIOCLIP2_OFFSET UNITYSDK_OFFSET(0x2104D90)
#define TTSSERVICE_HASHFILEPATH_OFFSET UNITYSDK_OFFSET(0x21048B0)

	inline static constexpr unsigned int TTSService_TypeDefinitionIndex = 3854;

	class TTSService : public Il2CppObject
	{
	public:
		::UnityEngine::AudioClip* _defaultAudioClip_k__BackingField; // 0x0
		::UnityEngine::AudioClip* _defaultAudioClip2_k__BackingField; // 0x8
		::UnityEngine::AudioClip* _audioClip_k__BackingField; // 0x10
		::System::String* _URI_k__BackingField; // 0x18
		::System::Int64 _CRC_k__BackingField; // 0x20

		::UnityEngine::AudioClip* get_defaultAudioClip()
		{
			return ((::UnityEngine::AudioClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_GET_DEFAULTAUDIOCLIP_OFFSET))(nullptr);
		}

		::System::String* get_URI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_GET_URI_OFFSET))(nullptr);
		}

		::System::Boolean CheckDownloaded(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_CHECKDOWNLOADED_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckIntergrity(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_CHECKINTERGRITY_OFFSET))(arg, nullptr);
		}

		::System::Void DownLoadZipFile(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_DOWNLOADZIPFILE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* co_DownloadHash(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_CO_DOWNLOADHASH_OFFSET))(arg, nullptr);
		}

		::System::String* GetDownloadHashURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_GETDOWNLOADHASHURI_OFFSET))(nullptr);
		}

		::System::Void set_CRC(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_SET_CRC_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_DownloadSize(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_CO_DOWNLOADSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void DownloadHash(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_DOWNLOADHASH_OFFSET))(arg, nullptr);
		}

		::System::String* get_directory()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_GET_DIRECTORY_OFFSET))(nullptr);
		}

		::System::String* LoadCallNameLipsync()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_LOADCALLNAMELIPSYNC_OFFSET))(nullptr);
		}

		::System::Boolean ExistTTSFile(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_EXISTTTSFILE_OFFSET))(arg, nullptr);
		}

		::System::String* GetDownloadURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_GETDOWNLOADURI_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_LoadTTSFile(::System::Int32 arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_CO_LOADTTSFILE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void DownloadSize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_DOWNLOADSIZE_OFFSET))(arg, nullptr);
		}

		::System::String* ReadLocalHash()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_READLOCALHASH_OFFSET))(nullptr);
		}

		::System::Boolean NeedDownload(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_NEEDDOWNLOAD_OFFSET))(str, nullptr);
		}

		::UnityEngine::AudioClip* get_defaultAudioClip2()
		{
			return ((::UnityEngine::AudioClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_GET_DEFAULTAUDIOCLIP2_OFFSET))(nullptr);
		}

		::System::Void LoadTTSClip(::System::Int32 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_LOADTTSCLIP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_CRC()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_GET_CRC_OFFSET))(nullptr);
		}

		::System::String* TTSFileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_TTSFILENAME_OFFSET))(nullptr);
		}

		::UnityEngine::AudioClip* get_audioClip()
		{
			return ((::UnityEngine::AudioClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_GET_AUDIOCLIP_OFFSET))(nullptr);
		}

		::System::Void set_defaultAudioClip(::UnityEngine::AudioClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_SET_DEFAULTAUDIOCLIP_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_DownloadZipFile(::System::Int64 arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_CO_DOWNLOADZIPFILE_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* TTSFilePath(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_TTSFILEPATH_OFFSET))(arg, nullptr);
		}

		::System::String* LipsyncFilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_LIPSYNCFILEPATH_OFFSET))(nullptr);
		}

		::System::String* ZipFilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_ZIPFILEPATH_OFFSET))(nullptr);
		}

		::System::Void set_audioClip(::UnityEngine::AudioClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_SET_AUDIOCLIP_OFFSET))(arg, nullptr);
		}

		::System::Void set_URI(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_SET_URI_OFFSET))(str, nullptr);
		}

		::System::Void set_defaultAudioClip2(::UnityEngine::AudioClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_SET_DEFAULTAUDIOCLIP2_OFFSET))(arg, nullptr);
		}

		::System::String* HashFilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TTSSERVICE_HASHFILEPATH_OFFSET))(nullptr);
		}

	};

