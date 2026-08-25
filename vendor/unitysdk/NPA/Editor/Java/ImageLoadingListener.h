#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UI { class Image; }
namespace UnityEngine { class Texture2D; }

#define NPA_EDITOR_JAVA_IMAGELOADINGLISTENER_ONLOADINGSTARTED_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_JAVA_IMAGELOADINGLISTENER_ONLOADINGFAILED_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_JAVA_IMAGELOADINGLISTENER_ONLOADINGCOMPLETE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_JAVA_IMAGELOADINGLISTENER_ONLOADINGCANCELLED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Java
{
	inline static constexpr unsigned int ImageLoadingListener_TypeDefinitionIndex = 26791;

	class ImageLoadingListener : public Il2CppObject
	{
	public:
		::System::Void onLoadingStarted(::System::String* str, ::UnityEngine::UI::Image* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::UI::Image*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_JAVA_IMAGELOADINGLISTENER_ONLOADINGSTARTED_OFFSET))(str, arg, nullptr);
		}

		::System::Void onLoadingFailed(::System::String* str, ::UnityEngine::UI::Image* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::UI::Image*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_JAVA_IMAGELOADINGLISTENER_ONLOADINGFAILED_OFFSET))(str, arg, str, nullptr);
		}

		::System::Void onLoadingComplete(::System::String* str, ::UnityEngine::UI::Image* arg, ::UnityEngine::Texture2D* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::UI::Image*, ::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_JAVA_IMAGELOADINGLISTENER_ONLOADINGCOMPLETE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void onLoadingCancelled(::System::String* str, ::UnityEngine::UI::Image* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::UI::Image*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_JAVA_IMAGELOADINGLISTENER_ONLOADINGCANCELLED_OFFSET))(str, arg, nullptr);
		}

	};
}

