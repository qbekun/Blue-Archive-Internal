#pragma once
#include "../../../unitysdk.h"

namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine::UIElements::UIR { class BestFitAllocator; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UIElements::UIR { class Alloc; }
namespace UnityEngine::UIElements::UIR { class GradientRemap; }

#define UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0xA42C4A0)
#define UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xA42C4B0)
#define UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xA42C4C0)
#define UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA42C4D0)
#define UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA42C530)
#define UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA42C5A0)
#define UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_RESET_OFFSET UNITYSDK_OFFSET(0xA42C5D0)
#define UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_GET_ATLAS_OFFSET UNITYSDK_OFFSET(0xA42C690)
#define UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_ADD_OFFSET UNITYSDK_OFFSET(0xA42C6A0)
#define UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_WRITE_OFFSET UNITYSDK_OFFSET(0xA42C770)
#define UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_GET_MUSTCOMMIT_OFFSET UNITYSDK_OFFSET(0xA42D0B0)
#define UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_SET_MUSTCOMMIT_OFFSET UNITYSDK_OFFSET(0xA42D0C0)
#define UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_COMMIT_OFFSET UNITYSDK_OFFSET(0xA42D0D0)
#define UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_PREPAREATLAS_OFFSET UNITYSDK_OFFSET(0xA42D140)
#define UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA42D2B0)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int GradientSettingsAtlas_TypeDefinitionIndex = 30717;

	class GradientSettingsAtlas : public Il2CppObject
	{
	public:
		::Unity::Profiling::ProfilerMarker* s_MarkerWrite; // 0x0
		::Unity::Profiling::ProfilerMarker* s_MarkerCommit; // 0x8
		::System::Int32 m_Length; // 0x10
		::System::Int32 m_ElemWidth; // 0x14
		::UnityEngine::UIElements::UIR::BestFitAllocator* m_Allocator; // 0x18
		::UnityEngine::Texture2D* m_Atlas; // 0x20
		RawTexture* m_RawAtlas; // 0x28
		::System::Int32 s_TextureCounter; // 0x10
		::System::Boolean _disposed_k__BackingField; // 0x38
		::System::Boolean _MustCommit_k__BackingField; // 0x39

		::System::Int32 get_length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Boolean get_disposed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_GET_DISPOSED_OFFSET))(nullptr);
		}

		::System::Void set_disposed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_SET_DISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_RESET_OFFSET))(nullptr);
		}

		::UnityEngine::Texture2D* get_atlas()
		{
			return (return (::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_GET_ATLAS_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::UIR::Alloc* Add(::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::UIR::Alloc*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::UnityEngine::UIElements::UIR::Alloc* arg, ::Il2CppArray<::System::Object*>* arg, ::UnityEngine::UIElements::UIR::GradientRemap* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::Alloc*, ::Il2CppArray<::System::Object*>*, ::UnityEngine::UIElements::UIR::GradientRemap*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_MustCommit()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_GET_MUSTCOMMIT_OFFSET))(nullptr);
		}

		::System::Void set_MustCommit(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_SET_MUSTCOMMIT_OFFSET))(arg, nullptr);
		}

		::System::Void Commit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_COMMIT_OFFSET))(nullptr);
		}

		::System::Void PrepareAtlas()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_PREPAREATLAS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_GRADIENTSETTINGSATLAS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

