#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Java { class ImageLoader; }
namespace UnityEngine::UI { class Image; }
namespace NPA::Editor::Java { class ImageLoadingListener; }

#define NPA_EDITOR_JAVA_IMAGELOADER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x9C39D80)
#define NPA_EDITOR_JAVA_IMAGELOADER_DISPLAYIMAGE_OFFSET UNITYSDK_OFFSET(0x9C39FB0)
#define NPA_EDITOR_JAVA_IMAGELOADER_LOADIMAGE_OFFSET UNITYSDK_OFFSET(0x9C39FF0)
#define NPA_EDITOR_JAVA_IMAGELOADER_LOADIMAGE_OFFSET UNITYSDK_OFFSET(0x9C3A030)
#define NPA_EDITOR_JAVA_IMAGELOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C39FA0)
#define NPA_EDITOR_JAVA_IMAGELOADER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C3A220)

namespace NPA::Editor::Java
{
	inline static constexpr unsigned int ImageLoader_TypeDefinitionIndex = 26790;

	class ImageLoader : public Il2CppObject
	{
	public:
		::NPA::Editor::Java::ImageLoader* instance; // 0x0
		::System::Object* syncRoot; // 0x8

		::NPA::Editor::Java::ImageLoader* getInstance()
		{
			return (return (::NPA::Editor::Java::ImageLoader*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_JAVA_IMAGELOADER_GETINSTANCE_OFFSET))(nullptr);
		}

		::System::Void displayImage(::System::String* str, ::UnityEngine::UI::Image* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::UI::Image*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_JAVA_IMAGELOADER_DISPLAYIMAGE_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void loadImage(::System::String* str, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, ::UnityEngine::UI::Image* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::UnityEngine::UI::Image*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_JAVA_IMAGELOADER_LOADIMAGE_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void loadImage(::System::String* str, ::NPA::Editor::Java::ImageLoadingListener* arg, ::UnityEngine::UI::Image* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::Editor::Java::ImageLoadingListener*, ::UnityEngine::UI::Image*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_JAVA_IMAGELOADER_LOADIMAGE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_JAVA_IMAGELOADER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_JAVA_IMAGELOADER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

