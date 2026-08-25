#pragma once
#include "unitysdk.h"

namespace UnityEngine::UI { class Image; }
namespace NPA::Editor { class ImageDownloader; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define <DOWNLOADTEXTURE>D__1_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D4F360)
#define <DOWNLOADTEXTURE>D__1_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D4F390)
#define <DOWNLOADTEXTURE>D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9D4F450)
#define <DOWNLOADTEXTURE>D__1___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x9D4F930)
#define <DOWNLOADTEXTURE>D__1_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9D4F9E0)
#define <DOWNLOADTEXTURE>D__1_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9D4F9F0)
#define <DOWNLOADTEXTURE>D__1_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9D4FA40)

	inline static constexpr unsigned int <DownloadTexture>d__1_TypeDefinitionIndex = 26174;

	class <DownloadTexture>d__1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		Il2CppObject* onLoadingStarted; // 0x20
		::System::String* url; // 0x28
		::UnityEngine::UI::Image* targetImage; // 0x30
		Il2CppObject* onLoadingFailed; // 0x38
		::System::Boolean setNativeSize; // 0x40
		Il2CppObject* onLoadingComplete; // 0x48
		::NPA::Editor::ImageDownloader* __4__this; // 0x50
		::UnityEngine::Networking::UnityWebRequest* _uwr_5__2; // 0x58

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADTEXTURE>D__1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADTEXTURE>D__1_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADTEXTURE>D__1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADTEXTURE>D__1___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADTEXTURE>D__1_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADTEXTURE>D__1_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADTEXTURE>D__1_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

