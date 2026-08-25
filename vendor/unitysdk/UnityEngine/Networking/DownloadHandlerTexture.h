#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Networking { class DownloadHandlerTexture; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_CREATE_OFFSET UNITYSDK_OFFSET(0xA4A7550)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_INTERNALCREATETEXTURE_OFFSET UNITYSDK_OFFSET(0xA4A7590)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4A75D0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4A7500)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_GETNATIVEDATA_OFFSET UNITYSDK_OFFSET(0xA4A7610)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4A7630)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0xA4A7660)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_INTERNALGETTEXTURE_OFFSET UNITYSDK_OFFSET(0xA4A7670)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_INTERNALGETTEXTURENATIVE_OFFSET UNITYSDK_OFFSET(0xA4A78A0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_CLEARNATIVETEXTURE_OFFSET UNITYSDK_OFFSET(0xA4A78E0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_GETCONTENT_OFFSET UNITYSDK_OFFSET(0xA4A7920)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int DownloadHandlerTexture_TypeDefinitionIndex = 38034;

	class DownloadHandlerTexture : public Il2CppObject
	{
	public:
		Il2CppObject* m_NativeData; // 0x18
		::UnityEngine::Texture2D* mTexture; // 0x28
		::System::Boolean mHasTexture; // 0x30
		::System::Boolean mNonReadable; // 0x31

		::System::Int32 Create(::UnityEngine::Networking::DownloadHandlerTexture* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Networking::DownloadHandlerTexture*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InternalCreateTexture(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_INTERNALCREATETEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetNativeData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_GETNATIVEDATA_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_DISPOSE_OFFSET))(nullptr);
		}

		::UnityEngine::Texture2D* get_texture()
		{
			return (return (::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_GET_TEXTURE_OFFSET))(nullptr);
		}

		::UnityEngine::Texture2D* InternalGetTexture()
		{
			return (return (::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_INTERNALGETTEXTURE_OFFSET))(nullptr);
		}

		::UnityEngine::Texture2D* InternalGetTextureNative()
		{
			return (return (::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_INTERNALGETTEXTURENATIVE_OFFSET))(nullptr);
		}

		::System::Void ClearNativeTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_CLEARNATIVETEXTURE_OFFSET))(nullptr);
		}

		::UnityEngine::Texture2D* GetContent(::UnityEngine::Networking::UnityWebRequest* arg)
		{
			return (return (::UnityEngine::Texture2D*(*)(::UnityEngine::Networking::UnityWebRequest*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERTEXTURE_GETCONTENT_OFFSET))(arg, nullptr);
		}

	};
}

