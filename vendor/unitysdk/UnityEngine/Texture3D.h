#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine { class Texture3D; }
namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine { class TextureColorSpace; }
namespace UnityEngine::Experimental::Rendering { class TextureCreationFlags; }
namespace UnityEngine::Experimental::Rendering { class DefaultFormat; }
namespace UnityEngine { class TextureFormat; }
namespace UnityEngine { class Color&; }

#define UNITYENGINE_TEXTURE3D_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0xA216190)
#define UNITYENGINE_TEXTURE3D_SETPIXELIMPL_OFFSET UNITYSDK_OFFSET(0xA2161D0)
#define UNITYENGINE_TEXTURE3D_INTERNAL_CREATEIMPL_OFFSET UNITYSDK_OFFSET(0xA216270)
#define UNITYENGINE_TEXTURE3D_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0xA2162C0)
#define UNITYENGINE_TEXTURE3D_APPLYIMPL_OFFSET UNITYSDK_OFFSET(0xA2163C0)
#define UNITYENGINE_TEXTURE3D_SETPIXELS_OFFSET UNITYSDK_OFFSET(0xA216410)
#define UNITYENGINE_TEXTURE3D_SETPIXELS_OFFSET UNITYSDK_OFFSET(0xA216460)
#define UNITYENGINE_TEXTURE3D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2164A0)
#define UNITYENGINE_TEXTURE3D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA216540)
#define UNITYENGINE_TEXTURE3D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2165E0)
#define UNITYENGINE_TEXTURE3D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2168A0)
#define UNITYENGINE_TEXTURE3D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA216AD0)
#define UNITYENGINE_TEXTURE3D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA216CF0)
#define UNITYENGINE_TEXTURE3D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA216D70)
#define UNITYENGINE_TEXTURE3D_APPLY_OFFSET UNITYSDK_OFFSET(0xA216E00)
#define UNITYENGINE_TEXTURE3D_APPLY_OFFSET UNITYSDK_OFFSET(0xA216E80)
#define UNITYENGINE_TEXTURE3D_APPLY_OFFSET UNITYSDK_OFFSET(0xA216F00)
#define UNITYENGINE_TEXTURE3D_SETPIXEL_OFFSET UNITYSDK_OFFSET(0xA216F70)
#define UNITYENGINE_TEXTURE3D_VALIDATEISNOTCRUNCHED_OFFSET UNITYSDK_OFFSET(0xA216830)
#define UNITYENGINE_TEXTURE3D_SETPIXELIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA216220)

namespace UnityEngine
{
	inline static constexpr unsigned int Texture3D_TypeDefinitionIndex = 31071;

	class Texture3D : public Il2CppObject
	{
	public:
		::System::Boolean get_isReadable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_GET_ISREADABLE_OFFSET))(nullptr);
		}

		::System::Void SetPixelImpl(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_SETPIXELIMPL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Internal_CreateImpl(::UnityEngine::Texture3D* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::TextureColorSpace* arg, ::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Texture3D*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::TextureColorSpace*, ::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_INTERNAL_CREATEIMPL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_Create(::UnityEngine::Texture3D* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::TextureColorSpace* arg, ::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Texture3D*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::TextureColorSpace*, ::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_INTERNAL_CREATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ApplyImpl(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_APPLYIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetPixels(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_SETPIXELS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetPixels(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_SETPIXELS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::DefaultFormat* arg, ::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::DefaultFormat*, ::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Apply(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_APPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Apply(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_APPLY_OFFSET))(nullptr);
		}

		::System::Void SetPixel(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Color* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_SETPIXEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_VALIDATEISNOTCRUNCHED_OFFSET))(arg, nullptr);
		}

		::System::Void SetPixelImpl_Injected(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE3D_SETPIXELIMPL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

