#pragma once
#include "../../../../unitysdk.h"

namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine { class Matrix4x4&; }
namespace UnityEngine::UIElements::UIR { class RenderChain; }
namespace UnityEngine::UIElements::UIR { class ChainBuilderStats&; }
namespace UnityEngine::UIElements::UIR { class MeshHandle&; }
namespace UnityEngine::UIElements::UIR { class UIRenderDevice; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Color32; }
namespace UnityEngine::UIElements::UIR { class MeshHandle; }
namespace UnityEngine::UIElements::UIR { class RenderChainCommand; }
namespace UnityEngine::UIElements::UIR { class RenderChainCommand&; }
namespace UnityEngine::UIElements { class TextureId; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_GETVERTICESTRANSFORMINFO_OFFSET UNITYSDK_OFFSET(0xA34F920)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_COMPUTETRANSFORMMATRIX_OFFSET UNITYSDK_OFFSET(0xA34FA90)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_ISPARENTORANCESTOROF_OFFSET UNITYSDK_OFFSET(0xA34FC20)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_PAINTELEMENT_OFFSET UNITYSDK_OFFSET(0xA34FCC0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_CREATEBLITSHADER_OFFSET UNITYSDK_OFFSET(0xA353BD0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_GETBLITMATERIAL_OFFSET UNITYSDK_OFFSET(0xA353750)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_CLOSEPAINTELEMENT_OFFSET UNITYSDK_OFFSET(0xA353DD0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_UPDATEORALLOCATE_OFFSET UNITYSDK_OFFSET(0xA3523F0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_COPYTRANSFORMVERTSPOS_OFFSET UNITYSDK_OFFSET(0xA352BE0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_COPYTRANSFORMVERTSPOSANDVEC_OFFSET UNITYSDK_OFFSET(0xA352910)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_COPYTRIANGLEINDICESFLIPWINDINGORDER_OFFSET UNITYSDK_OFFSET(0xA352F30)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_COPYTRIANGLEINDICES_OFFSET UNITYSDK_OFFSET(0xA352E90)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_NUDGEVERTICESTONEWSPACE_OFFSET UNITYSDK_OFFSET(0xA353F90)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_DONUDGEVERTICES_OFFSET UNITYSDK_OFFSET(0xA354460)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_INJECTMESHDRAWCOMMAND_OFFSET UNITYSDK_OFFSET(0xA3530A0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_INJECTCLOSINGMESHDRAWCOMMAND_OFFSET UNITYSDK_OFFSET(0xA353A50)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_FINDCOMMANDINSERTIONPOINT_OFFSET UNITYSDK_OFFSET(0xA3525E0)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_FINDCLOSINGCOMMANDINSERTIONPOINT_OFFSET UNITYSDK_OFFSET(0xA353340)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_INJECTCOMMANDINBETWEEN_OFFSET UNITYSDK_OFFSET(0xA353220)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_INJECTCLOSINGCOMMANDINBETWEEN_OFFSET UNITYSDK_OFFSET(0xA353600)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_RESETCOMMANDS_OFFSET UNITYSDK_OFFSET(0xA351F80)
#define UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA354970)

namespace UnityEngine::UIElements::UIR::Implementation
{
	inline static constexpr unsigned int CommandGenerator_TypeDefinitionIndex = 30784;

	class CommandGenerator : public Il2CppObject
	{
	public:
		::Unity::Profiling::ProfilerMarker* k_ConvertEntriesToCommandsMarker; // 0x0
		::Unity::Profiling::ProfilerMarker* k_NudgeVerticesMarker; // 0x8
		::Unity::Profiling::ProfilerMarker* k_ComputeTransformMatrixMarker; // 0x10
		::UnityEngine::Material* s_blitMaterial_LinearToGamma; // 0x18
		::UnityEngine::Material* s_blitMaterial_GammaToLinear; // 0x20
		::UnityEngine::Material* s_blitMaterial_NoChange; // 0x28
		::UnityEngine::Shader* s_blitShader; // 0x30

		::System::Void GetVerticesTransformInfo(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_GETVERTICESTRANSFORMINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ComputeTransformMatrix(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_COMPUTETRANSFORMMATRIX_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsParentOrAncestorOf(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_ISPARENTORANCESTOROF_OFFSET))(arg, arg, nullptr);
		}

		ClosingInfo* PaintElement(::UnityEngine::UIElements::UIR::RenderChain* arg, ::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::UIR::ChainBuilderStats&* arg)
		{
			return (return (ClosingInfo*(*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::ChainBuilderStats&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_PAINTELEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Material* CreateBlitShader(::System::Single arg)
		{
			return (return (::UnityEngine::Material*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_CREATEBLITSHADER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* GetBlitMaterial(RenderTargetMode* arg)
		{
			return (return (::UnityEngine::Material*(*)(RenderTargetMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_GETBLITMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void ClosePaintElement(::UnityEngine::UIElements::VisualElement* arg, ClosingInfo* arg, ::UnityEngine::UIElements::UIR::RenderChain* arg, ::UnityEngine::UIElements::UIR::ChainBuilderStats&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ClosingInfo*, ::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::UIR::ChainBuilderStats&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_CLOSEPAINTELEMENT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void UpdateOrAllocate(::UnityEngine::UIElements::UIR::MeshHandle&* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::UIElements::UIR::UIRenderDevice* arg, Il2CppObject&* arg, Il2CppObject&* arg, uint16_t&* arg, ::UnityEngine::UIElements::UIR::ChainBuilderStats&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::MeshHandle&*, ::System::Int32, ::System::Int32, ::UnityEngine::UIElements::UIR::UIRenderDevice*, Il2CppObject&*, Il2CppObject&*, uint16_t&*, ::UnityEngine::UIElements::UIR::ChainBuilderStats&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_UPDATEORALLOCATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CopyTransformVertsPos(Il2CppObject* arg, Il2CppObject* arg, ::UnityEngine::Matrix4x4* arg, ::UnityEngine::Color32* arg, ::UnityEngine::Color32* arg, ::UnityEngine::Color32* arg, ::UnityEngine::Color32* arg, ::UnityEngine::Color32* arg, ::System::Boolean arg, ::System::Single arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::UnityEngine::Matrix4x4*, ::UnityEngine::Color32*, ::UnityEngine::Color32*, ::UnityEngine::Color32*, ::UnityEngine::Color32*, ::UnityEngine::Color32*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_COPYTRANSFORMVERTSPOS_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CopyTransformVertsPosAndVec(Il2CppObject* arg, Il2CppObject* arg, ::UnityEngine::Matrix4x4* arg, ::UnityEngine::Color32* arg, ::UnityEngine::Color32* arg, ::UnityEngine::Color32* arg, ::UnityEngine::Color32* arg, ::UnityEngine::Color32* arg, ::System::Boolean arg, ::System::Single arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::UnityEngine::Matrix4x4*, ::UnityEngine::Color32*, ::UnityEngine::Color32*, ::UnityEngine::Color32*, ::UnityEngine::Color32*, ::UnityEngine::Color32*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_COPYTRANSFORMVERTSPOSANDVEC_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CopyTriangleIndicesFlipWindingOrder(Il2CppObject* arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_COPYTRIANGLEINDICESFLIPWINDINGORDER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CopyTriangleIndices(Il2CppObject* arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_COPYTRIANGLEINDICES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean NudgeVerticesToNewSpace(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::UIR::UIRenderDevice* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::UIRenderDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_NUDGEVERTICESTONEWSPACE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DoNudgeVertices(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::UIR::UIRenderDevice* arg, ::UnityEngine::UIElements::UIR::MeshHandle* arg, ::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::UIRenderDevice*, ::UnityEngine::UIElements::UIR::MeshHandle*, ::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_DONUDGEVERTICES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::UIR::RenderChainCommand* InjectMeshDrawCommand(::UnityEngine::UIElements::UIR::RenderChain* arg, ::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::UIR::RenderChainCommand&* arg, ::UnityEngine::UIElements::UIR::RenderChainCommand&* arg, ::UnityEngine::UIElements::UIR::MeshHandle* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Material* arg, ::UnityEngine::UIElements::TextureId* arg, ::UnityEngine::Texture* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::UIR::RenderChainCommand*(*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::RenderChainCommand&*, ::UnityEngine::UIElements::UIR::RenderChainCommand&*, ::UnityEngine::UIElements::UIR::MeshHandle*, ::System::Int32, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::UIElements::TextureId*, ::UnityEngine::Texture*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_INJECTMESHDRAWCOMMAND_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::UIR::RenderChainCommand* InjectClosingMeshDrawCommand(::UnityEngine::UIElements::UIR::RenderChain* arg, ::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::UIR::RenderChainCommand&* arg, ::UnityEngine::UIElements::UIR::RenderChainCommand&* arg, ::UnityEngine::UIElements::UIR::MeshHandle* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Material* arg, ::UnityEngine::UIElements::TextureId* arg, ::UnityEngine::Texture* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::UIR::RenderChainCommand*(*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::RenderChainCommand&*, ::UnityEngine::UIElements::UIR::RenderChainCommand&*, ::UnityEngine::UIElements::UIR::MeshHandle*, ::System::Int32, ::System::Int32, ::UnityEngine::Material*, ::UnityEngine::UIElements::TextureId*, ::UnityEngine::Texture*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_INJECTCLOSINGMESHDRAWCOMMAND_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void FindCommandInsertionPoint(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::UIR::RenderChainCommand&* arg, ::UnityEngine::UIElements::UIR::RenderChainCommand&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::RenderChainCommand&*, ::UnityEngine::UIElements::UIR::RenderChainCommand&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_FINDCOMMANDINSERTIONPOINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void FindClosingCommandInsertionPoint(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::UIR::RenderChainCommand&* arg, ::UnityEngine::UIElements::UIR::RenderChainCommand&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::RenderChainCommand&*, ::UnityEngine::UIElements::UIR::RenderChainCommand&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_FINDCLOSINGCOMMANDINSERTIONPOINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InjectCommandInBetween(::UnityEngine::UIElements::UIR::RenderChain* arg, ::UnityEngine::UIElements::UIR::RenderChainCommand* arg, ::UnityEngine::UIElements::UIR::RenderChainCommand&* arg, ::UnityEngine::UIElements::UIR::RenderChainCommand&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::UIR::RenderChainCommand*, ::UnityEngine::UIElements::UIR::RenderChainCommand&*, ::UnityEngine::UIElements::UIR::RenderChainCommand&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_INJECTCOMMANDINBETWEEN_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void InjectClosingCommandInBetween(::UnityEngine::UIElements::UIR::RenderChain* arg, ::UnityEngine::UIElements::UIR::RenderChainCommand* arg, ::UnityEngine::UIElements::UIR::RenderChainCommand&* arg, ::UnityEngine::UIElements::UIR::RenderChainCommand&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::UIR::RenderChainCommand*, ::UnityEngine::UIElements::UIR::RenderChainCommand&*, ::UnityEngine::UIElements::UIR::RenderChainCommand&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_INJECTCLOSINGCOMMANDINBETWEEN_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ResetCommands(::UnityEngine::UIElements::UIR::RenderChain* arg, ::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_RESETCOMMANDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_IMPLEMENTATION_COMMANDGENERATOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

