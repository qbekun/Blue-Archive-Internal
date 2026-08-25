#pragma once
#include "../../../unitysdk.h"

namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class RectInt; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Vector2Int; }
namespace UnityEngine { class Color; }

#define UNITYENGINE_UIELEMENTS_UIR_TEXTUREBLITTER_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xA33E760)
#define UNITYENGINE_UIELEMENTS_UIR_TEXTUREBLITTER_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xA33E770)
#define UNITYENGINE_UIELEMENTS_UIR_TEXTUREBLITTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA33E780)
#define UNITYENGINE_UIELEMENTS_UIR_TEXTUREBLITTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA33E7E0)
#define UNITYENGINE_UIELEMENTS_UIR_TEXTUREBLITTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA33E860)
#define UNITYENGINE_UIELEMENTS_UIR_TEXTUREBLITTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA33E990)
#define UNITYENGINE_UIELEMENTS_UIR_TEXTUREBLITTER_QUEUEBLIT_OFFSET UNITYSDK_OFFSET(0xA33EA40)
#define UNITYENGINE_UIELEMENTS_UIR_TEXTUREBLITTER_BLITONENOW_OFFSET UNITYSDK_OFFSET(0xA33EC30)
#define UNITYENGINE_UIELEMENTS_UIR_TEXTUREBLITTER_COMMIT_OFFSET UNITYSDK_OFFSET(0xA33F740)
#define UNITYENGINE_UIELEMENTS_UIR_TEXTUREBLITTER_BEGINBLIT_OFFSET UNITYSDK_OFFSET(0xA33EDE0)
#define UNITYENGINE_UIELEMENTS_UIR_TEXTUREBLITTER_DOBLIT_OFFSET UNITYSDK_OFFSET(0xA33F040)
#define UNITYENGINE_UIELEMENTS_UIR_TEXTUREBLITTER_ENDBLIT_OFFSET UNITYSDK_OFFSET(0xA33F670)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int TextureBlitter_TypeDefinitionIndex = 30749;

	class TextureBlitter : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* k_TextureIds; // 0x0
		::Unity::Profiling::ProfilerMarker* s_CommitSampler; // 0x8
		::Il2CppArray<::System::Object*>* m_SingleBlit; // 0x10
		::UnityEngine::Material* m_BlitMaterial; // 0x18
		::UnityEngine::MaterialPropertyBlock* m_Properties; // 0x20
		::UnityEngine::RectInt* m_Viewport; // 0x28
		::UnityEngine::RenderTexture* m_PrevRT; // 0x38
		Il2CppObject* m_PendingBlits; // 0x40
		::System::Boolean _disposed_k__BackingField; // 0x48

		::System::Boolean get_disposed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TEXTUREBLITTER_GET_DISPOSED_OFFSET))(nullptr);
		}

		::System::Void set_disposed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TEXTUREBLITTER_SET_DISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TEXTUREBLITTER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TEXTUREBLITTER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TEXTUREBLITTER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TEXTUREBLITTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void QueueBlit(::UnityEngine::Texture* arg, ::UnityEngine::RectInt* arg, ::UnityEngine::Vector2Int* arg, ::System::Boolean arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::RectInt*, ::UnityEngine::Vector2Int*, ::System::Boolean, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TEXTUREBLITTER_QUEUEBLIT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BlitOneNow(::UnityEngine::RenderTexture* arg, ::UnityEngine::Texture* arg, ::UnityEngine::RectInt* arg, ::UnityEngine::Vector2Int* arg, ::System::Boolean arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTexture*, ::UnityEngine::Texture*, ::UnityEngine::RectInt*, ::UnityEngine::Vector2Int*, ::System::Boolean, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TEXTUREBLITTER_BLITONENOW_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Commit(::UnityEngine::RenderTexture* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTexture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TEXTUREBLITTER_COMMIT_OFFSET))(arg, nullptr);
		}

		::System::Void BeginBlit(::UnityEngine::RenderTexture* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTexture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TEXTUREBLITTER_BEGINBLIT_OFFSET))(arg, nullptr);
		}

		::System::Void DoBlit(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TEXTUREBLITTER_DOBLIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndBlit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TEXTUREBLITTER_ENDBLIT_OFFSET))(nullptr);
		}

	};
}

