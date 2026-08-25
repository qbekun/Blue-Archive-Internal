#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UI { class Image; }

#define NPA_EDITOR_IMAGEDOWNLOADER_STARTDOWNLOADINGTEXTURE_OFFSET UNITYSDK_OFFSET(0x9D4F160)
#define NPA_EDITOR_IMAGEDOWNLOADER_DOWNLOADTEXTURE_OFFSET UNITYSDK_OFFSET(0x9D4F260)
#define NPA_EDITOR_IMAGEDOWNLOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D4F380)

namespace NPA::Editor
{
	inline static constexpr unsigned int ImageDownloader_TypeDefinitionIndex = 26175;

	class ImageDownloader : public Il2CppObject
	{
	public:
		::System::Void StartDownloadingTexture(::System::String* str, ::UnityEngine::UI::Image* arg, ::System::Boolean arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::UI::Image*, ::System::Boolean, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IMAGEDOWNLOADER_STARTDOWNLOADINGTEXTURE_OFFSET))(str, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* DownloadTexture(::System::String* str, ::UnityEngine::UI::Image* arg, ::System::Boolean arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::System::String*, ::UnityEngine::UI::Image*, ::System::Boolean, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IMAGEDOWNLOADER_DOWNLOADTEXTURE_OFFSET))(str, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IMAGEDOWNLOADER_.CTOR_OFFSET))(nullptr);
		}

	};
}

