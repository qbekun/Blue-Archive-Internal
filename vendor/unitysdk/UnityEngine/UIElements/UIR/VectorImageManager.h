#pragma once
#include "../../../unitysdk.h"

namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine::UIElements { class AtlasBase; }
namespace UnityEngine::UIElements::UIR { class VectorImageRenderInfoPool; }
namespace UnityEngine::UIElements::UIR { class GradientRemapPool; }
namespace UnityEngine::UIElements::UIR { class GradientSettingsAtlas; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UIElements::UIR { class GradientRemap; }
namespace UnityEngine::UIElements { class VectorImage; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements::UIR { class VectorImageRenderInfo; }

#define UNITYENGINE_UIELEMENTS_UIR_VECTORIMAGEMANAGER_GET_ATLAS_OFFSET UNITYSDK_OFFSET(0xA340C70)
#define UNITYENGINE_UIELEMENTS_UIR_VECTORIMAGEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA340C90)
#define UNITYENGINE_UIELEMENTS_UIR_VECTORIMAGEMANAGER_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xA340E90)
#define UNITYENGINE_UIELEMENTS_UIR_VECTORIMAGEMANAGER_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xA340EA0)
#define UNITYENGINE_UIELEMENTS_UIR_VECTORIMAGEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA340EB0)
#define UNITYENGINE_UIELEMENTS_UIR_VECTORIMAGEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA340F10)
#define UNITYENGINE_UIELEMENTS_UIR_VECTORIMAGEMANAGER_COMMIT_OFFSET UNITYSDK_OFFSET(0xA341020)
#define UNITYENGINE_UIELEMENTS_UIR_VECTORIMAGEMANAGER_ADDUSER_OFFSET UNITYSDK_OFFSET(0xA341050)
#define UNITYENGINE_UIELEMENTS_UIR_VECTORIMAGEMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0xA341140)
#define UNITYENGINE_UIELEMENTS_UIR_VECTORIMAGEMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3417C0)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int VectorImageManager_TypeDefinitionIndex = 30757;

	class VectorImageManager : public Il2CppObject
	{
	public:
		Il2CppObject* instances; // 0x0
		::Unity::Profiling::ProfilerMarker* s_MarkerRegister; // 0x8
		::Unity::Profiling::ProfilerMarker* s_MarkerUnregister; // 0x10
		::UnityEngine::UIElements::AtlasBase* m_Atlas; // 0x10
		Il2CppObject* m_Registered; // 0x18
		::UnityEngine::UIElements::UIR::VectorImageRenderInfoPool* m_RenderInfoPool; // 0x20
		::UnityEngine::UIElements::UIR::GradientRemapPool* m_GradientRemapPool; // 0x28
		::UnityEngine::UIElements::UIR::GradientSettingsAtlas* m_GradientSettingsAtlas; // 0x30
		::System::Boolean m_LoggedExhaustedSettingsAtlas; // 0x38
		::System::Boolean _disposed_k__BackingField; // 0x39

		::UnityEngine::Texture2D* get_atlas()
		{
			return (return (::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_VECTORIMAGEMANAGER_GET_ATLAS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::AtlasBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::AtlasBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_VECTORIMAGEMANAGER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_disposed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_VECTORIMAGEMANAGER_GET_DISPOSED_OFFSET))(nullptr);
		}

		::System::Void set_disposed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_VECTORIMAGEMANAGER_SET_DISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_VECTORIMAGEMANAGER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_VECTORIMAGEMANAGER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Commit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_VECTORIMAGEMANAGER_COMMIT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::UIR::GradientRemap* AddUser(::UnityEngine::UIElements::VectorImage* arg, ::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::UnityEngine::UIElements::UIR::GradientRemap*(*)(::UnityEngine::UIElements::VectorImage*, ::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_VECTORIMAGEMANAGER_ADDUSER_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::UIR::VectorImageRenderInfo* Register(::UnityEngine::UIElements::VectorImage* arg, ::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::UnityEngine::UIElements::UIR::VectorImageRenderInfo*(*)(::UnityEngine::UIElements::VectorImage*, ::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_VECTORIMAGEMANAGER_REGISTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_VECTORIMAGEMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

