#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements::UIR { class RenderChainCommand; }
namespace UnityEngine::UIElements::UIR { class CommandType; }
namespace UnityEngine::UIElements::UIR { class State; }
namespace UnityEngine::UIElements::UIR { class MeshHandle; }
namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine::UIElements::UIR { class DrawParams; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class RectInt; }

#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAINCOMMAND_RESET_OFFSET UNITYSDK_OFFSET(0xA34EFE0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAINCOMMAND_EXECUTENONDRAWMESH_OFFSET UNITYSDK_OFFSET(0xA34CB60)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAINCOMMAND_BLIT_OFFSET UNITYSDK_OFFSET(0xA34F6F0)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAINCOMMAND_COMBINESCISSORRECTS_OFFSET UNITYSDK_OFFSET(0xA34F540)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAINCOMMAND_RECTPOINTSTOPIXELSANDFLIPYAXIS_OFFSET UNITYSDK_OFFSET(0xA34F060)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAINCOMMAND_.CTOR_OFFSET UNITYSDK_OFFSET(0xA34F850)
#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAINCOMMAND_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA34F890)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int RenderChainCommand_TypeDefinitionIndex = 30783;

	class RenderChainCommand : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::Pkcs12Entry
	{
	public:
		::UnityEngine::UIElements::VisualElement* owner; // 0x18
		::UnityEngine::UIElements::UIR::RenderChainCommand* prev; // 0x20
		::UnityEngine::UIElements::UIR::RenderChainCommand* next; // 0x28
		::System::Boolean closing; // 0x30
		::UnityEngine::UIElements::UIR::CommandType* type; // 0x34
		::UnityEngine::UIElements::UIR::State* state; // 0x38
		::UnityEngine::UIElements::UIR::MeshHandle* mesh; // 0x58
		::System::Int32 indexOffset; // 0x60
		::System::Int32 indexCount; // 0x64
		::System::Action* callback; // 0x68
		::System::Int32 k_ID_MainTex; // 0x0
		::Unity::Profiling::ProfilerMarker* s_ImmediateOverheadMarker; // 0x8

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAINCOMMAND_RESET_OFFSET))(nullptr);
		}

		::System::Void ExecuteNonDrawMesh(::UnityEngine::UIElements::UIR::DrawParams* arg, ::System::Single arg, ::System::Exception&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::DrawParams*, ::System::Single, ::System::Exception&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAINCOMMAND_EXECUTENONDRAWMESH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Blit(::UnityEngine::Texture* arg, ::UnityEngine::RenderTexture* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAINCOMMAND_BLIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Rect* CombineScissorRects(::UnityEngine::Rect* arg, ::UnityEngine::Rect* arg)
		{
			return (return (::UnityEngine::Rect*(*)(::UnityEngine::Rect*, ::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAINCOMMAND_COMBINESCISSORRECTS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::RectInt* RectPointsToPixelsAndFlipYAxis(::UnityEngine::Rect* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::RectInt*(*)(::UnityEngine::Rect*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAINCOMMAND_RECTPOINTSTOPIXELSANDFLIPYAXIS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAINCOMMAND_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAINCOMMAND_.CCTOR_OFFSET))(nullptr);
		}

	};
}

