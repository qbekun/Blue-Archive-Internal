#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class AudioType; }
class AudioLoadInfo;
namespace UnityEngine { class AudioClip; }

#define MEDIA_SERVICE_MEDIASERVICE_RECORDING_OFFSET UNITYSDK_OFFSET(0xDF3670)
#define MEDIA_SERVICE_MEDIASERVICE_LOADSYNCSCENARIOBG_OFFSET UNITYSDK_OFFSET(0xDF3680)
#define MEDIA_SERVICE_MEDIASERVICE_COLOADAUDIOCLIPASYNC_OFFSET UNITYSDK_OFFSET(0xDF3FB0)
#define MEDIA_SERVICE_MEDIASERVICE_LOADVOICEASYNC_OFFSET UNITYSDK_OFFSET(0xDF4030)
#define MEDIA_SERVICE_MEDIASERVICE_GETLOCALIZEPATH_OFFSET UNITYSDK_OFFSET(0xDF3AE0)
#define MEDIA_SERVICE_MEDIASERVICE_CLEARSCENARIOBG_OFFSET UNITYSDK_OFFSET(0xDF4300)
#define MEDIA_SERVICE_MEDIASERVICE_GET_EDITORMEDIAFOLDERPATH_OFFSET UNITYSDK_OFFSET(0xDF4490)
#define MEDIA_SERVICE_MEDIASERVICE_GET_CATALOGFOLDERPATH_OFFSET UNITYSDK_OFFSET(0xDF44D0)
#define MEDIA_SERVICE_MEDIASERVICE_RELEASESCENARIOBG_OFFSET UNITYSDK_OFFSET(0xDF4510)
#define MEDIA_SERVICE_MEDIASERVICE_LOADAUDIODATAINPACKFILE_OFFSET UNITYSDK_OFFSET(0xDF46A0)
#define MEDIA_SERVICE_MEDIASERVICE_VIDEOFILEPATH_OFFSET UNITYSDK_OFFSET(0xDF4AB0)
#define MEDIA_SERVICE_MEDIASERVICE_GETAUDIOFILEPATH_OFFSET UNITYSDK_OFFSET(0xDF4BB0)
#define MEDIA_SERVICE_MEDIASERVICE_ISEXISTZIPAUDIO_OFFSET UNITYSDK_OFFSET(0xDF4E40)
#define MEDIA_SERVICE_MEDIASERVICE_REPLACEENTRY_OFFSET UNITYSDK_OFFSET(0xDF3DB0)
#define MEDIA_SERVICE_MEDIASERVICE_LOADBGMASYNC_OFFSET UNITYSDK_OFFSET(0xDF5680)
#define MEDIA_SERVICE_MEDIASERVICE_GET_EDITORRELEASEMEDIAPATH_OFFSET UNITYSDK_OFFSET(0xDF5850)
#define MEDIA_SERVICE_MEDIASERVICE_FORCERELEASEALLSCENARIOBG_OFFSET UNITYSDK_OFFSET(0xDF5890)
#define MEDIA_SERVICE_MEDIASERVICE_LOADASYNCSCENARIOBG_OFFSET UNITYSDK_OFFSET(0xDF5B10)
#define MEDIA_SERVICE_MEDIASERVICE_LOGBGTABLE_OFFSET UNITYSDK_OFFSET(0xDF4480)
#define MEDIA_SERVICE_MEDIASERVICE_CLEARMEDIARESOURCES_OFFSET UNITYSDK_OFFSET(0xDF5D30)
#define MEDIA_SERVICE_MEDIASERVICE_FILEPATH_OFFSET UNITYSDK_OFFSET(0xDF3CC0)
#define MEDIA_SERVICE_MEDIASERVICE_GETSCENARIOBG_OFFSET UNITYSDK_OFFSET(0xDF5E30)
#define MEDIA_SERVICE_MEDIASERVICE_FILEURI_OFFSET UNITYSDK_OFFSET(0xDF4270)
#define MEDIA_SERVICE_MEDIASERVICE_CO_LOADASYNCSCENARIOBGFORSTEAM_OFFSET UNITYSDK_OFFSET(0xDF5CA0)
#define MEDIA_SERVICE_MEDIASERVICE_CO_LOADASYNCSCENARIOBG_OFFSET UNITYSDK_OFFSET(0xDF5F30)
#define MEDIA_SERVICE_MEDIASERVICE_LOADAUDIODATAINZIPFILE_OFFSET UNITYSDK_OFFSET(0xDF5FE0)
#define MEDIA_SERVICE_MEDIASERVICE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xDF69D0)
#define MEDIA_SERVICE_MEDIASERVICE_UNLOADAUDIO_OFFSET UNITYSDK_OFFSET(0xDF6B40)
#define MEDIA_SERVICE_MEDIASERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xDF6C30)
#define MEDIA_SERVICE_MEDIASERVICE_AUDIOFILEEXIST_OFFSET UNITYSDK_OFFSET(0xDF6DF0)
#define MEDIA_SERVICE_MEDIASERVICE_GETCACHEDSCENARIOBG_OFFSET UNITYSDK_OFFSET(0xDF3990)
#define MEDIA_SERVICE_MEDIASERVICE_GET_EDITORMEDIACATALOGFOLDERPATH_OFFSET UNITYSDK_OFFSET(0xDF6F60)
#define MEDIA_SERVICE_MEDIASERVICE_VIDEOFILEURL_OFFSET UNITYSDK_OFFSET(0xDF6FA0)
#define MEDIA_SERVICE_MEDIASERVICE_FILEEXIST_OFFSET UNITYSDK_OFFSET(0xDF3D50)

namespace Media::Service
{
	inline static constexpr unsigned int MediaService_TypeDefinitionIndex = 10186;

	class MediaService : public Il2CppObject
	{
	public:
		Il2CppObject* audioTable; // 0x0
		Il2CppObject* queue; // 0x8
		Il2CppObject* zipAudioHash; // 0x10
		::System::Boolean isInitialized; // 0x18
		::System::Boolean isRunning; // 0x19
		Il2CppObject* bgTable; // 0x20
		::System::Boolean BgTableLogging; // 0x0

		::System::Void Recording(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_RECORDING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Texture2D* LoadSyncScenarioBG(::System::String* str)
		{
			return ((::UnityEngine::Texture2D*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_LOADSYNCSCENARIOBG_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* coLoadAudioClipAsync()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_COLOADAUDIOCLIPASYNC_OFFSET))(nullptr);
		}

		::System::Void LoadVoiceAsync(::System::String* str, Il2CppObject* arg, ::UnityEngine::AudioType* arg2)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::UnityEngine::AudioType*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_LOADVOICEASYNC_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::String* GetLocalizePath(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_GETLOCALIZEPATH_OFFSET))(str, nullptr);
		}

		::System::Void ClearScenarioBg(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_CLEARSCENARIOBG_OFFSET))(str, nullptr);
		}

		::System::String* get_EditorMediaFolderPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_GET_EDITORMEDIAFOLDERPATH_OFFSET))(nullptr);
		}

		::System::String* get_CatalogFolderPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_GET_CATALOGFOLDERPATH_OFFSET))(nullptr);
		}

		::System::Void ReleaseScenarioBg(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_RELEASESCENARIOBG_OFFSET))(str, nullptr);
		}

		::System::Boolean LoadAudioDataInPackFile(::System::String* str, AudioLoadInfo* arg)
		{
			return ((::System::Boolean(*)(::System::String*, AudioLoadInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_LOADAUDIODATAINPACKFILE_OFFSET))(str, arg, nullptr);
		}

		::System::String* VideoFilePath(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_VIDEOFILEPATH_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetAudioFilePath(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_GETAUDIOFILEPATH_OFFSET))(str, nullptr);
		}

		::System::Boolean IsExistZipAudio(::System::String* str, ::System::String* str2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_ISEXISTZIPAUDIO_OFFSET))(str, str2, nullptr);
		}

		::System::Void ReplaceEntry(::System::String* str, ::UnityEngine::Texture2D* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_REPLACEENTRY_OFFSET))(str, arg, nullptr);
		}

		::System::Void LoadBGMAsync(::System::String* str, ::System::Boolean arg, Il2CppObject* arg2, ::UnityEngine::AudioType* arg3)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, Il2CppObject*, ::UnityEngine::AudioType*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_LOADBGMASYNC_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::String* get_EditorReleaseMediaPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_GET_EDITORRELEASEMEDIAPATH_OFFSET))(nullptr);
		}

		::System::Void ForceReleaseAllScenarioBG()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_FORCERELEASEALLSCENARIOBG_OFFSET))(nullptr);
		}

		::System::Void LoadAsyncScenarioBG(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_LOADASYNCSCENARIOBG_OFFSET))(str, arg, nullptr);
		}

		::System::Void LogBgTable(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_LOGBGTABLE_OFFSET))(str, str2, nullptr);
		}

		::System::Void ClearMediaResources()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_CLEARMEDIARESOURCES_OFFSET))(nullptr);
		}

		::System::String* FilePath(::System::String* str, ::System::String* str2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_FILEPATH_OFFSET))(str, str2, nullptr);
		}

		::System::Void GetScenarioBg(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_GETSCENARIOBG_OFFSET))(str, nullptr);
		}

		::System::String* FileURI(::System::String* str, ::System::String* str2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_FILEURI_OFFSET))(str, str2, nullptr);
		}

		::System::Collections::IEnumerator* co_LoadAsyncScenarioBGForSteam(::System::String* str, Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_CO_LOADASYNCSCENARIOBGFORSTEAM_OFFSET))(str, arg, nullptr);
		}

		::System::Collections::IEnumerator* co_LoadAsyncScenarioBG(::System::String* str, Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_CO_LOADASYNCSCENARIOBG_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean LoadAudioDataInZipFile(::System::String* str, AudioLoadInfo* arg)
		{
			return ((::System::Boolean(*)(::System::String*, AudioLoadInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_LOADAUDIODATAINZIPFILE_OFFSET))(str, arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void UnloadAudio(::UnityEngine::AudioClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_UNLOADAUDIO_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean AudioFileExist(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_AUDIOFILEEXIST_OFFSET))(str, nullptr);
		}

		::UnityEngine::Texture2D* GetCachedScenarioBG(::System::String* str)
		{
			return ((::UnityEngine::Texture2D*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_GETCACHEDSCENARIOBG_OFFSET))(str, nullptr);
		}

		::System::String* get_EditorMediaCatalogFolderPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_GET_EDITORMEDIACATALOGFOLDERPATH_OFFSET))(nullptr);
		}

		::System::String* VideoFileURL(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_VIDEOFILEURL_OFFSET))(str, nullptr);
		}

		::System::Boolean FileExist(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MEDIA_SERVICE_MEDIASERVICE_FILEEXIST_OFFSET))(str, nullptr);
		}

	};
}

