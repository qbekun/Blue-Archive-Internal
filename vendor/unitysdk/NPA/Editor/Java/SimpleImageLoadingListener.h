#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UI { class Image; }
namespace UnityEngine { class Texture2D; }

#define NPA_EDITOR_JAVA_SIMPLEIMAGELOADINGLISTENER_ONLOADINGSTARTED_OFFSET UNITYSDK_OFFSET(0x9C3AA80)
#define NPA_EDITOR_JAVA_SIMPLEIMAGELOADINGLISTENER_ONLOADINGFAILED_OFFSET UNITYSDK_OFFSET(0x9C3AA90)
#define NPA_EDITOR_JAVA_SIMPLEIMAGELOADINGLISTENER_ONLOADINGCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9C3AAA0)
#define NPA_EDITOR_JAVA_SIMPLEIMAGELOADINGLISTENER_ONLOADINGCANCELLED_OFFSET UNITYSDK_OFFSET(0x9C3AAB0)
#define NPA_EDITOR_JAVA_SIMPLEIMAGELOADINGLISTENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C3AAC0)

namespace NPA::Editor::Java
{
	inline static constexpr unsigned int SimpleImageLoadingListener_TypeDefinitionIndex = 26793;

	class SimpleImageLoadingListener : public Il2CppObject
	{
	public:
		::System::Void onLoadingStarted(::System::String* str, ::UnityEngine::UI::Image* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::UI::Image*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_JAVA_SIMPLEIMAGELOADINGLISTENER_ONLOADINGSTARTED_OFFSET))(str, arg, nullptr);
		}

		::System::Void onLoadingFailed(::System::String* str, ::UnityEngine::UI::Image* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::UI::Image*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_JAVA_SIMPLEIMAGELOADINGLISTENER_ONLOADINGFAILED_OFFSET))(str, arg, str, nullptr);
		}

		::System::Void onLoadingComplete(::System::String* str, ::UnityEngine::UI::Image* arg, ::UnityEngine::Texture2D* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::UI::Image*, ::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_JAVA_SIMPLEIMAGELOADINGLISTENER_ONLOADINGCOMPLETE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void onLoadingCancelled(::System::String* str, ::UnityEngine::UI::Image* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::UI::Image*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_JAVA_SIMPLEIMAGELOADINGLISTENER_ONLOADINGCANCELLED_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_JAVA_SIMPLEIMAGELOADINGLISTENER_.CTOR_OFFSET))(nullptr);
		}

	};
}

