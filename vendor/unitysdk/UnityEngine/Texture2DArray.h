#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Texture2DArray; }
namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine { class TextureColorSpace; }
namespace UnityEngine::Experimental::Rendering { class TextureCreationFlags; }
namespace UnityEngine { class TextureFormat; }
namespace UnityEngine::Experimental::Rendering { class DefaultFormat; }

#define UNITYENGINE_TEXTURE2DARRAY_GET_ALLSLICES_OFFSET UNITYSDK_OFFSET(0xA217020)
#define UNITYENGINE_TEXTURE2DARRAY_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0xA217060)
#define UNITYENGINE_TEXTURE2DARRAY_INTERNAL_CREATEIMPL_OFFSET UNITYSDK_OFFSET(0xA2170A0)
#define UNITYENGINE_TEXTURE2DARRAY_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0xA2170F0)
#define UNITYENGINE_TEXTURE2DARRAY_VALIDATEFORMAT_OFFSET UNITYSDK_OFFSET(0xA2171D0)
#define UNITYENGINE_TEXTURE2DARRAY_VALIDATEFORMAT_OFFSET UNITYSDK_OFFSET(0xA2172B0)
#define UNITYENGINE_TEXTURE2DARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2173D0)
#define UNITYENGINE_TEXTURE2DARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA217470)
#define UNITYENGINE_TEXTURE2DARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA217510)
#define UNITYENGINE_TEXTURE2DARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2177A0)
#define UNITYENGINE_TEXTURE2DARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2179D0)
#define UNITYENGINE_TEXTURE2DARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA217A60)
#define UNITYENGINE_TEXTURE2DARRAY_VALIDATEISNOTCRUNCHED_OFFSET UNITYSDK_OFFSET(0xA217730)

namespace UnityEngine
{
	inline static constexpr unsigned int Texture2DArray_TypeDefinitionIndex = 31072;

	class Texture2DArray : public Il2CppObject
	{
	public:
		::System::Int32 get_allSlices()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY_GET_ALLSLICES_OFFSET))(nullptr);
		}

		::System::Boolean get_isReadable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY_GET_ISREADABLE_OFFSET))(nullptr);
		}

		::System::Boolean Internal_CreateImpl(::UnityEngine::Texture2DArray* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::TextureColorSpace* arg, ::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Texture2DArray*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::TextureColorSpace*, ::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY_INTERNAL_CREATEIMPL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_Create(::UnityEngine::Texture2DArray* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::TextureColorSpace* arg, ::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture2DArray*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::TextureColorSpace*, ::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY_INTERNAL_CREATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ValidateFormat(::UnityEngine::TextureFormat* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::TextureFormat*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY_VALIDATEFORMAT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY_VALIDATEFORMAT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::DefaultFormat* arg, ::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::DefaultFormat*, ::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2DARRAY_VALIDATEISNOTCRUNCHED_OFFSET))(arg, nullptr);
		}

	};
}

