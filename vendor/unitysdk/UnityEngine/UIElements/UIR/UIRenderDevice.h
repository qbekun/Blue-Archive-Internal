#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements::UIR { class Page; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine::UIElements::UIR { class DrawParams; }
namespace UnityEngine::UIElements::UIR { class TextureSlotManager; }
namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UIElements::UIR { class MeshHandle; }
namespace UnityEngine::UIElements::UIR { class Alloc&; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine::UIElements::UIR { class RenderChainCommand; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_GET_MAXVERTICESPERPAGE_OFFSET UNITYSDK_OFFSET(0xA3458B0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_GET_BREAKBATCHES_OFFSET UNITYSDK_OFFSET(0xA3458C0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_SET_BREAKBATCHES_OFFSET UNITYSDK_OFFSET(0xA3458D0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3458E0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA345CA0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA345CC0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_GET_DEFAULTSHADERINFOTEXFLOAT_OFFSET UNITYSDK_OFFSET(0xA342AD0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_GET_DEFAULTSHADERINFOTEXARGB8_OFFSET UNITYSDK_OFFSET(0xA342730)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_GET_VERTEXTEXTURINGISAVAILABLE_OFFSET UNITYSDK_OFFSET(0xA343320)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_GET_SHADERMODELIS35_OFFSET UNITYSDK_OFFSET(0xA33F9A0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_INITVERTEXDECLARATION_OFFSET UNITYSDK_OFFSET(0xA346540)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_COMPLETECREATION_OFFSET UNITYSDK_OFFSET(0xA346870)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_GET_FULLYCREATED_OFFSET UNITYSDK_OFFSET(0xA346A30)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xA346A40)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xA346A50)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA346A60)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA346AC0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_ALLOCATE_OFFSET UNITYSDK_OFFSET(0xA347340)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_UPDATE_OFFSET UNITYSDK_OFFSET(0xA347C80)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_UPDATE_OFFSET UNITYSDK_OFFSET(0xA348920)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_UPDATECOPYBACKINDICES_OFFSET UNITYSDK_OFFSET(0xA348B00)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_ACTIVEUPDATESFORMESHHANDLE_OFFSET UNITYSDK_OFFSET(0xA348C70)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_TRYALLOCFROMPAGE_OFFSET UNITYSDK_OFFSET(0xA348CE0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_ALLOCATE_OFFSET UNITYSDK_OFFSET(0xA347400)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_UPDATEAFTERGPUUSEDDATA_OFFSET UNITYSDK_OFFSET(0xA347EB0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_FREE_OFFSET UNITYSDK_OFFSET(0xA3491E0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_GETCLIPSPACEPARAMS_OFFSET UNITYSDK_OFFSET(0xA349C10)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_ONFRAMERENDERINGBEGIN_OFFSET UNITYSDK_OFFSET(0xA349CE0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_PTRTOSLICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_APPLYDRAWCOMMANDSTATE_OFFSET UNITYSDK_OFFSET(0xA34AC10)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_APPLYBATCHSTATE_OFFSET UNITYSDK_OFFSET(0xA34AE90)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_EVALUATECHAIN_OFFSET UNITYSDK_OFFSET(0xA34B040)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_UPDATEFENCEVALUE_OFFSET UNITYSDK_OFFSET(0xA34DB90)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_KICKRANGES_OFFSET UNITYSDK_OFFSET(0xA34C8C0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_DRAWRANGES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_WAITONCPUFENCE_OFFSET UNITYSDK_OFFSET(0xA34DC70)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_ADVANCEFRAME_OFFSET UNITYSDK_OFFSET(0xA349D80)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_PRUNEUNUSEDPAGES_OFFSET UNITYSDK_OFFSET(0xA34DCF0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_PREPAREFORGFXDEVICERECREATE_OFFSET UNITYSDK_OFFSET(0xA34DEE0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_WRAPUPGFXDEVICERECREATE_OFFSET UNITYSDK_OFFSET(0xA34E0B0)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_FLUSHALLPENDINGDEVICEDISPOSES_OFFSET UNITYSDK_OFFSET(0xA34E100)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_GATHERDRAWSTATISTICS_OFFSET UNITYSDK_OFFSET(0xA34E170)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_PROCESSDEVICEFREEQUEUE_OFFSET UNITYSDK_OFFSET(0xA346D80)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_ONENGINEUPDATEGLOBAL_OFFSET UNITYSDK_OFFSET(0xA34E190)
#define UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_ONFLUSHPENDINGRESOURCES_OFFSET UNITYSDK_OFFSET(0xA34E1F0)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int UIRenderDevice_TypeDefinitionIndex = 30771;

	class UIRenderDevice : public Il2CppObject
	{
	public:
		::System::Boolean m_MockDevice; // 0x10
		::System::Int32 m_DefaultStencilState; // 0x18
		::System::Int32 m_VertexDecl; // 0x20
		::UnityEngine::UIElements::UIR::Page* m_FirstPage; // 0x28
		::System::UInt32 m_NextPageVertexCount; // 0x30
		::System::UInt32 m_LargeMeshVertexCount; // 0x34
		::System::Single m_IndexToVertexCountRatio; // 0x38
		Il2CppObject* m_DeferredFrees; // 0x40
		Il2CppObject* m_Updates; // 0x48
		::Il2CppArray<::System::Object*>* m_Fences; // 0x50
		::UnityEngine::MaterialPropertyBlock* m_StandardMatProps; // 0x58
		::System::UInt32 m_FrameIndex; // 0x60
		::System::UInt32 m_NextUpdateID; // 0x64
		DrawStatistics* m_DrawStats; // 0x68
		Il2CppObject* m_MeshHandles; // 0x90
		::UnityEngine::UIElements::UIR::DrawParams* m_DrawParams; // 0x98
		::UnityEngine::UIElements::UIR::TextureSlotManager* m_TextureSlotManager; // 0xA0
		Il2CppObject* m_DeviceFreeQueue; // 0x0
		::System::Int32 m_ActiveDeviceCount; // 0x8
		::System::Boolean m_SubscribedToNotifications; // 0xC
		::System::Boolean m_SynchronousFree; // 0xD
		::System::Int32 s_FontTexPropID; // 0x10
		::System::Int32 s_FontTexSDFScaleID; // 0x14
		::System::Int32 s_GradientSettingsTexID; // 0x18
		::System::Int32 s_ShaderInfoTexID; // 0x1C
		::System::Int32 s_TransformsPropID; // 0x20
		::System::Int32 s_ClipRectsPropID; // 0x24
		::System::Int32 s_ClipSpaceParamsID; // 0x28
		::Unity::Profiling::ProfilerMarker* s_MarkerAllocate; // 0x30
		::Unity::Profiling::ProfilerMarker* s_MarkerFree; // 0x38
		::Unity::Profiling::ProfilerMarker* s_MarkerAdvanceFrame; // 0x40
		::Unity::Profiling::ProfilerMarker* s_MarkerFence; // 0x48
		::Unity::Profiling::ProfilerMarker* s_MarkerBeforeDraw; // 0x50
		Il2CppObject* s_VertexTexturingIsAvailable; // 0x58
		Il2CppObject* s_ShaderModelIs35; // 0x5A
		::System::UInt32 _maxVerticesPerPage_k__BackingField; // 0xA8
		::System::Boolean _breakBatches_k__BackingField; // 0xAC
		::UnityEngine::Texture2D* s_DefaultShaderInfoTexFloat; // 0x60
		::UnityEngine::Texture2D* s_DefaultShaderInfoTexARGB8; // 0x68
		::System::Boolean _disposed_k__BackingField; // 0xAD

		::System::UInt32 get_maxVerticesPerPage()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_GET_MAXVERTICESPERPAGE_OFFSET))(nullptr);
		}

		::System::Boolean get_breakBatches()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_GET_BREAKBATCHES_OFFSET))(nullptr);
		}

		::System::Void set_breakBatches(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_SET_BREAKBATCHES_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg, ::System::UInt32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Texture2D* get_defaultShaderInfoTexFloat()
		{
			return (return (::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_GET_DEFAULTSHADERINFOTEXFLOAT_OFFSET))(nullptr);
		}

		::UnityEngine::Texture2D* get_defaultShaderInfoTexARGB8()
		{
			return (return (::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_GET_DEFAULTSHADERINFOTEXARGB8_OFFSET))(nullptr);
		}

		::System::Boolean get_vertexTexturingIsAvailable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_GET_VERTEXTEXTURINGISAVAILABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_shaderModelIs35()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_GET_SHADERMODELIS35_OFFSET))(nullptr);
		}

		::System::Void InitVertexDeclaration()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_INITVERTEXDECLARATION_OFFSET))(nullptr);
		}

		::System::Void CompleteCreation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_COMPLETECREATION_OFFSET))(nullptr);
		}

		::System::Boolean get_fullyCreated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_GET_FULLYCREATED_OFFSET))(nullptr);
		}

		::System::Boolean get_disposed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_GET_DISPOSED_OFFSET))(nullptr);
		}

		::System::Void set_disposed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_SET_DISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::UIR::MeshHandle* Allocate(::System::UInt32 arg, ::System::UInt32 arg, Il2CppObject&* arg, Il2CppObject&* arg, uint16_t&* arg)
		{
			return (return (::UnityEngine::UIElements::UIR::MeshHandle*(*)(::System::UInt32, ::System::UInt32, Il2CppObject&*, Il2CppObject&*, uint16_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_ALLOCATE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Update(::UnityEngine::UIElements::UIR::MeshHandle* arg, ::System::UInt32 arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::MeshHandle*, ::System::UInt32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_UPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Update(::UnityEngine::UIElements::UIR::MeshHandle* arg, ::System::UInt32 arg, ::System::UInt32 arg, Il2CppObject&* arg, Il2CppObject&* arg, uint16_t&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::MeshHandle*, ::System::UInt32, ::System::UInt32, Il2CppObject&*, Il2CppObject&*, uint16_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_UPDATE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void UpdateCopyBackIndices(::UnityEngine::UIElements::UIR::MeshHandle* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::MeshHandle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_UPDATECOPYBACKINDICES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ActiveUpdatesForMeshHandle(::UnityEngine::UIElements::UIR::MeshHandle* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::UIElements::UIR::MeshHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_ACTIVEUPDATESFORMESHHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryAllocFromPage(::UnityEngine::UIElements::UIR::Page* arg, ::System::UInt32 arg, ::System::UInt32 arg, ::UnityEngine::UIElements::UIR::Alloc&* arg, ::UnityEngine::UIElements::UIR::Alloc&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::UIR::Page*, ::System::UInt32, ::System::UInt32, ::UnityEngine::UIElements::UIR::Alloc&*, ::UnityEngine::UIElements::UIR::Alloc&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_TRYALLOCFROMPAGE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Allocate(::UnityEngine::UIElements::UIR::MeshHandle* arg, ::System::UInt32 arg, ::System::UInt32 arg, Il2CppObject&* arg, Il2CppObject&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::MeshHandle*, ::System::UInt32, ::System::UInt32, Il2CppObject&*, Il2CppObject&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_ALLOCATE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void UpdateAfterGPUUsedData(::UnityEngine::UIElements::UIR::MeshHandle* arg, ::System::UInt32 arg, ::System::UInt32 arg, Il2CppObject&* arg, Il2CppObject&* arg, uint16_t&* arg, AllocToUpdate&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::MeshHandle*, ::System::UInt32, ::System::UInt32, Il2CppObject&*, Il2CppObject&*, uint16_t&*, AllocToUpdate&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_UPDATEAFTERGPUUSEDDATA_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Free(::UnityEngine::UIElements::UIR::MeshHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::MeshHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_FREE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector4* GetClipSpaceParams()
		{
			return (return (::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_GETCLIPSPACEPARAMS_OFFSET))(nullptr);
		}

		::System::Void OnFrameRenderingBegin()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_ONFRAMERENDERINGBEGIN_OFFSET))(nullptr);
		}

		Il2CppObject* PtrToSlice(::System::Object** arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_PTRTOSLICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ApplyDrawCommandState(::UnityEngine::UIElements::UIR::RenderChainCommand* arg, ::System::Int32 arg, ::UnityEngine::Material* arg, ::System::Boolean arg, ::System::Boolean arg, EvaluationState&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::RenderChainCommand*, ::System::Int32, ::UnityEngine::Material*, ::System::Boolean, ::System::Boolean, EvaluationState&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_APPLYDRAWCOMMANDSTATE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ApplyBatchState(EvaluationState&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(EvaluationState&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_APPLYBATCHSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EvaluateChain(::UnityEngine::UIElements::UIR::RenderChainCommand* arg, ::UnityEngine::Material* arg, ::UnityEngine::Material* arg, ::UnityEngine::Texture* arg, ::UnityEngine::Texture* arg, ::System::Single arg, Il2CppObject* arg, Il2CppObject* arg, ::UnityEngine::MaterialPropertyBlock* arg, ::System::Boolean arg, ::System::Exception&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::UIR::RenderChainCommand*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Single, Il2CppObject*, Il2CppObject*, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::System::Exception&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_EVALUATECHAIN_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void UpdateFenceValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_UPDATEFENCEVALUE_OFFSET))(nullptr);
		}

		::System::Void KickRanges(::System::Object** arg, int32_t&* arg, int32_t&* arg, ::System::Int32 arg, ::UnityEngine::UIElements::UIR::Page* arg)
		{
			((::System::Void(*)(::System::Object**, int32_t&*, int32_t&*, ::System::Int32, ::UnityEngine::UIElements::UIR::Page*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_KICKRANGES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawRanges(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_DRAWRANGES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WaitOnCpuFence(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_WAITONCPUFENCE_OFFSET))(arg, nullptr);
		}

		::System::Void AdvanceFrame()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_ADVANCEFRAME_OFFSET))(nullptr);
		}

		::System::Void PruneUnusedPages()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_PRUNEUNUSEDPAGES_OFFSET))(nullptr);
		}

		::System::Void PrepareForGfxDeviceRecreate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_PREPAREFORGFXDEVICERECREATE_OFFSET))(nullptr);
		}

		::System::Void WrapUpGfxDeviceRecreate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_WRAPUPGFXDEVICERECREATE_OFFSET))(nullptr);
		}

		::System::Void FlushAllPendingDeviceDisposes()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_FLUSHALLPENDINGDEVICEDISPOSES_OFFSET))(nullptr);
		}

		DrawStatistics* GatherDrawStatistics()
		{
			return (return (DrawStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_GATHERDRAWSTATISTICS_OFFSET))(nullptr);
		}

		::System::Void ProcessDeviceFreeQueue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_PROCESSDEVICEFREEQUEUE_OFFSET))(nullptr);
		}

		::System::Void OnEngineUpdateGlobal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_ONENGINEUPDATEGLOBAL_OFFSET))(nullptr);
		}

		::System::Void OnFlushPendingResources()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UIRENDERDEVICE_ONFLUSHPENDINGRESOURCES_OFFSET))(nullptr);
		}

	};
}

