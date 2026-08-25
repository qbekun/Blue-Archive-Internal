#pragma once
#include "../../../unitysdk.h"

namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class RectInt&; }
namespace UnityEngine { class Color; }

#define UNITYENGINE_UIELEMENTS_UIR_BASESHADERINFOSTORAGE_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UIR_BASESHADERINFOSTORAGE_ALLOCATERECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UIR_BASESHADERINFOSTORAGE_SETTEXEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UIR_BASESHADERINFOSTORAGE_UPDATETEXTURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UIR_BASESHADERINFOSTORAGE_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xA43F2D0)
#define UNITYENGINE_UIELEMENTS_UIR_BASESHADERINFOSTORAGE_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xA43F2E0)
#define UNITYENGINE_UIELEMENTS_UIR_BASESHADERINFOSTORAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA43F2F0)
#define UNITYENGINE_UIELEMENTS_UIR_BASESHADERINFOSTORAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA43F350)
#define UNITYENGINE_UIELEMENTS_UIR_BASESHADERINFOSTORAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA43F370)
#define UNITYENGINE_UIELEMENTS_UIR_BASESHADERINFOSTORAGE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA43F380)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int BaseShaderInfoStorage_TypeDefinitionIndex = 30738;

	class BaseShaderInfoStorage : public Il2CppObject
	{
	public:
		::System::Int32 s_TextureCounter; // 0x0
		::Unity::Profiling::ProfilerMarker* s_MarkerCopyTexture; // 0x8
		::Unity::Profiling::ProfilerMarker* s_MarkerGetTextureData; // 0x10
		::Unity::Profiling::ProfilerMarker* s_MarkerUpdateTexture; // 0x18
		::System::Boolean _disposed_k__BackingField; // 0x10

		::UnityEngine::Texture2D* get_texture()
		{
			return (return (::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BASESHADERINFOSTORAGE_GET_TEXTURE_OFFSET))(nullptr);
		}

		::System::Boolean AllocateRect(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::RectInt&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::UnityEngine::RectInt&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BASESHADERINFOSTORAGE_ALLOCATERECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetTexel(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BASESHADERINFOSTORAGE_SETTEXEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UpdateTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BASESHADERINFOSTORAGE_UPDATETEXTURE_OFFSET))(nullptr);
		}

		::System::Boolean get_disposed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BASESHADERINFOSTORAGE_GET_DISPOSED_OFFSET))(nullptr);
		}

		::System::Void set_disposed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BASESHADERINFOSTORAGE_SET_DISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BASESHADERINFOSTORAGE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BASESHADERINFOSTORAGE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BASESHADERINFOSTORAGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_BASESHADERINFOSTORAGE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

