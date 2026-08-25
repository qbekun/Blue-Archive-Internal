#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class CubemapArray; }
namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine { class TextureColorSpace; }
namespace UnityEngine::Experimental::Rendering { class TextureCreationFlags; }
namespace UnityEngine { class CubemapFace; }
namespace UnityEngine::Experimental::Rendering { class DefaultFormat; }
namespace UnityEngine { class TextureFormat; }

#define UNITYENGINE_CUBEMAPARRAY_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0xA217AF0)
#define UNITYENGINE_CUBEMAPARRAY_INTERNAL_CREATEIMPL_OFFSET UNITYSDK_OFFSET(0xA217B30)
#define UNITYENGINE_CUBEMAPARRAY_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0xA217B80)
#define UNITYENGINE_CUBEMAPARRAY_APPLYIMPL_OFFSET UNITYSDK_OFFSET(0xA217C50)
#define UNITYENGINE_CUBEMAPARRAY_SETPIXELS_OFFSET UNITYSDK_OFFSET(0xA217CA0)
#define UNITYENGINE_CUBEMAPARRAY_SETPIXELS_OFFSET UNITYSDK_OFFSET(0xA217CF0)
#define UNITYENGINE_CUBEMAPARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA217D50)
#define UNITYENGINE_CUBEMAPARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA217DE0)
#define UNITYENGINE_CUBEMAPARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA217E70)
#define UNITYENGINE_CUBEMAPARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2180F0)
#define UNITYENGINE_CUBEMAPARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA218300)
#define UNITYENGINE_CUBEMAPARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA218370)
#define UNITYENGINE_CUBEMAPARRAY_APPLY_OFFSET UNITYSDK_OFFSET(0xA2183E0)
#define UNITYENGINE_CUBEMAPARRAY_APPLY_OFFSET UNITYSDK_OFFSET(0xA218460)
#define UNITYENGINE_CUBEMAPARRAY_VALIDATEISNOTCRUNCHED_OFFSET UNITYSDK_OFFSET(0xA218080)

namespace UnityEngine
{
	inline static constexpr unsigned int CubemapArray_TypeDefinitionIndex = 31073;

	class CubemapArray : public Il2CppObject
	{
	public:
		::System::Boolean get_isReadable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_GET_ISREADABLE_OFFSET))(nullptr);
		}

		::System::Boolean Internal_CreateImpl(::UnityEngine::CubemapArray* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::TextureColorSpace* arg, ::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::CubemapArray*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::TextureColorSpace*, ::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_INTERNAL_CREATEIMPL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_Create(::UnityEngine::CubemapArray* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::TextureColorSpace* arg, ::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg)
		{
			((::System::Void(*)(::UnityEngine::CubemapArray*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::TextureColorSpace*, ::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_INTERNAL_CREATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ApplyImpl(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_APPLYIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetPixels(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::CubemapFace*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_SETPIXELS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetPixels(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_SETPIXELS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::DefaultFormat* arg, ::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::DefaultFormat*, ::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Apply(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_APPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_APPLY_OFFSET))(nullptr);
		}

		::System::Void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAPARRAY_VALIDATEISNOTCRUNCHED_OFFSET))(arg, nullptr);
		}

	};
}

