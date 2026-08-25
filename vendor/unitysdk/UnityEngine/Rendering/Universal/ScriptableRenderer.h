#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class AttachmentDescriptor; }
namespace UnityEngine::Rendering { class RenderBufferStoreAction; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering::Universal { class DebugHandler; }
namespace UnityEngine::Rendering::Universal { class ScriptableRenderer; }
namespace UnityEngine::Rendering::Universal { class StoreActionsOptimization; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine::Rendering::Universal { class CameraData; }
namespace UnityEngine::Rendering::Universal { class ScriptableRenderPass; }
namespace UnityEngine::Rendering::Universal { class CameraData&; }
namespace UnityEngine::Rendering { class ClearFlag; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Color; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine { class Hash128; }
namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine::Rendering::Universal { class CameraRenderType; }
namespace UnityEngine { class Matrix4x4&; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine::Rendering::Universal { class ScriptableRendererData; }
namespace UnityEngine::Rendering { class ScriptableCullingParameters&; }
namespace UnityEngine::Rendering { class RenderBufferLoadAction; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class GizmoSubset; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_CAMERADEPTH_OFFSET UNITYSDK_OFFSET(0xA049850)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_RESETNATIVERENDERPASSFRAMEDATA_OFFSET UNITYSDK_OFFSET(0xA049880)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETUPNATIVERENDERPASSFRAMEDATA_OFFSET UNITYSDK_OFFSET(0xA0499C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_UPDATEFINALSTOREACTIONS_OFFSET UNITYSDK_OFFSET(0xA04A610)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETNATIVERENDERPASSMRTATTACHMENTLIST_OFFSET UNITYSDK_OFFSET(0xA04A8F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_ISDEPTHONLYRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0xA04C310)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETNATIVERENDERPASSATTACHMENTLIST_OFFSET UNITYSDK_OFFSET(0xA04C360)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CONFIGURENATIVERENDERPASS_OFFSET UNITYSDK_OFFSET(0xA04D980)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_EXECUTENATIVERENDERPASS_OFFSET UNITYSDK_OFFSET(0xA04DD20)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETUPINPUTATTACHMENTINDICES_OFFSET UNITYSDK_OFFSET(0xA04BE80)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETUPTRANSIENTINPUTATTACHMENTS_OFFSET UNITYSDK_OFFSET(0xA04C1E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETSUBPASSATTACHMENTINDICESCOUNT_OFFSET UNITYSDK_OFFSET(0xA04F0E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_AREATTACHMENTINDICESCOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA04F2F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETVALIDCOLORATTACHMENTCOUNT_OFFSET UNITYSDK_OFFSET(0xA04FB10)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETVALIDINPUTATTACHMENTCOUNT_OFFSET UNITYSDK_OFFSET(0xA04F470)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_FINDATTACHMENTDESCRIPTORINDEXINLIST_OFFSET UNITYSDK_OFFSET(0xA04D760)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_FINDATTACHMENTDESCRIPTORINDEXINLIST_OFFSET UNITYSDK_OFFSET(0xA04BC60)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETVALIDPASSINDEXCOUNT_OFFSET UNITYSDK_OFFSET(0xA04A5C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_PASSHASINPUTATTACHMENTS_OFFSET UNITYSDK_OFFSET(0xA04BDB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CREATERENDERPASSHASH_OFFSET UNITYSDK_OFFSET(0xA04FD90)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CREATERENDERPASSHASH_OFFSET UNITYSDK_OFFSET(0xA04A520)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_INITIALIZERENDERPASSDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xA04A3A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETDEFAULTGRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0xA04BB60)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SUPPORTEDCAMERASTACKINGTYPES_OFFSET UNITYSDK_OFFSET(0xA04FE00)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SUPPORTSCAMERASTACKINGTYPE_OFFSET UNITYSDK_OFFSET(0xA04FE10)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_USEUNSCALEDSHADERTIME_OFFSET UNITYSDK_OFFSET(0xA04FE40)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SET_USEUNSCALEDSHADERTIME_OFFSET UNITYSDK_OFFSET(0xA04FE90)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_PROFILINGEXECUTE_OFFSET UNITYSDK_OFFSET(0xA04FEE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SET_PROFILINGEXECUTE_OFFSET UNITYSDK_OFFSET(0xA04FEF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_DEBUGHANDLER_OFFSET UNITYSDK_OFFSET(0xA04FF10)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETCAMERAMATRICES_OFFSET UNITYSDK_OFFSET(0xA04FF20)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETPERCAMERASHADERVARIABLES_OFFSET UNITYSDK_OFFSET(0xA0506E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETPERCAMERABILLBOARDPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA050F80)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CALCULATEBILLBOARDPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA051200)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETPERCAMERACLIPPINGPLANEPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA0516D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETSHADERTIMEVALUES_OFFSET UNITYSDK_OFFSET(0xA051AB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_CAMERACOLORTARGET_OFFSET UNITYSDK_OFFSET(0xA048120)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETCAMERACOLORFRONTBUFFER_OFFSET UNITYSDK_OFFSET(0xA051DF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_CAMERADEPTHTARGET_OFFSET UNITYSDK_OFFSET(0xA051E10)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_RENDERERFEATURES_OFFSET UNITYSDK_OFFSET(0xA051EA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_ACTIVERENDERPASSQUEUE_OFFSET UNITYSDK_OFFSET(0xA051EB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_SUPPORTEDRENDERINGFEATURES_OFFSET UNITYSDK_OFFSET(0xA051EC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SET_SUPPORTEDRENDERINGFEATURES_OFFSET UNITYSDK_OFFSET(0xA051ED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_UNSUPPORTEDGRAPHICSDEVICETYPES_OFFSET UNITYSDK_OFFSET(0xA051EF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SET_UNSUPPORTEDGRAPHICSDEVICETYPES_OFFSET UNITYSDK_OFFSET(0xA051F00)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CONFIGUREACTIVETARGET_OFFSET UNITYSDK_OFFSET(0xA051F20)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_USEDEPTHPRIMING_OFFSET UNITYSDK_OFFSET(0xA052150)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SET_USEDEPTHPRIMING_OFFSET UNITYSDK_OFFSET(0xA052160)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_STRIPSHADOWSOFFVARIANTS_OFFSET UNITYSDK_OFFSET(0xA052170)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SET_STRIPSHADOWSOFFVARIANTS_OFFSET UNITYSDK_OFFSET(0xA052180)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_STRIPADDITIONALLIGHTOFFVARIANTS_OFFSET UNITYSDK_OFFSET(0xA052190)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SET_STRIPADDITIONALLIGHTOFFVARIANTS_OFFSET UNITYSDK_OFFSET(0xA0521A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0485A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA052420)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA052540)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CONFIGURECAMERATARGET_OFFSET UNITYSDK_OFFSET(0xA052550)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CONFIGURECAMERATARGET_OFFSET UNITYSDK_OFFSET(0xA0525A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CONFIGURECAMERACOLORTARGET_OFFSET UNITYSDK_OFFSET(0xA052610)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETUP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETUPLIGHTS_OFFSET UNITYSDK_OFFSET(0xA052640)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETUPCULLINGPARAMETERS_OFFSET UNITYSDK_OFFSET(0xA052650)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_FINISHRENDERING_OFFSET UNITYSDK_OFFSET(0xA052660)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA052670)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_ENQUEUEPASS_OFFSET UNITYSDK_OFFSET(0xA054730)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETCAMERACLEARFLAG_OFFSET UNITYSDK_OFFSET(0xA0547F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_ONPRECULLRENDERPASSES_OFFSET UNITYSDK_OFFSET(0xA054970)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_ADDRENDERPASSES_OFFSET UNITYSDK_OFFSET(0xA054A40)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CLEARRENDERINGSTATE_OFFSET UNITYSDK_OFFSET(0xA053A80)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CLEAR_OFFSET UNITYSDK_OFFSET(0xA0521C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_EXECUTEBLOCK_OFFSET UNITYSDK_OFFSET(0xA054090)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_ISRENDERPASSENABLED_OFFSET UNITYSDK_OFFSET(0xA0553A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_EXECUTERENDERPASS_OFFSET UNITYSDK_OFFSET(0xA054EC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETRENDERPASSATTACHMENTS_OFFSET UNITYSDK_OFFSET(0xA0553D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_BEGINXRRENDERING_OFFSET UNITYSDK_OFFSET(0xA054230)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_ENDXRRENDERING_OFFSET UNITYSDK_OFFSET(0xA054340)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA047BF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA056C30)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA057340)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA057050)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA056AE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SWAPCOLORBUFFER_OFFSET UNITYSDK_OFFSET(0xA057440)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_ENABLESWAPBUFFERMSAA_OFFSET UNITYSDK_OFFSET(0xA057450)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_DRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xA057460)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_DRAWWIREOVERLAY_OFFSET UNITYSDK_OFFSET(0xA057470)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_INTERNALSTARTRENDERING_OFFSET UNITYSDK_OFFSET(0xA053850)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_INTERNALFINISHRENDERING_OFFSET UNITYSDK_OFFSET(0xA054430)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SORTSTABLE_OFFSET UNITYSDK_OFFSET(0xA053D70)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA0574D0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScriptableRenderer_TypeDefinitionIndex = 32639;

	class ScriptableRenderer : public Il2CppObject
	{
	public:
		::System::Int32 kRenderPassMapSize; // 0x0
		::System::Int32 kRenderPassMaxCount; // 0x0
		::System::Int32 m_LastBeginSubpassPassIndex; // 0x10
		Il2CppObject* m_MergeableRenderPassesMap; // 0x18
		::Il2CppArray<::System::Object*>* m_MergeableRenderPassesMapArrays; // 0x20
		::Il2CppArray<::System::Object*>* m_PassIndexToPassHash; // 0x28
		Il2CppObject* m_RenderPassesAttachmentCount; // 0x30
		::Il2CppArray<::System::Object*>* m_ActiveColorAttachmentDescriptors; // 0x38
		::UnityEngine::Rendering::AttachmentDescriptor* m_ActiveDepthAttachmentDescriptor; // 0x40
		::Il2CppArray<::System::Object*>* m_IsActiveColorAttachmentTransient; // 0xB8
		::Il2CppArray<::System::Object*>* m_FinalColorStoreAction; // 0xC0
		::UnityEngine::Rendering::RenderBufferStoreAction* m_FinalDepthStoreAction; // 0xC8
		::System::Boolean m_useUnscaledShaderTime; // 0x0
		::UnityEngine::Rendering::ProfilingSampler* _profilingExecute_k__BackingField; // 0xD0
		::UnityEngine::Rendering::Universal::DebugHandler* _DebugHandler_k__BackingField; // 0xD8
		::UnityEngine::Rendering::Universal::ScriptableRenderer* current; // 0x8
		RenderingFeatures* _supportedRenderingFeatures_k__BackingField; // 0xE0
		::Il2CppArray<::System::Object*>* _unsupportedGraphicsDeviceTypes_k__BackingField; // 0xE8
		::UnityEngine::Rendering::Universal::StoreActionsOptimization* m_StoreActionsOptimizationSetting; // 0xF0
		::System::Boolean m_UseOptimizedStoreActions; // 0x10
		::System::Int32 k_RenderPassBlockCount; // 0x0
		Il2CppObject* m_ActiveRenderPassQueue; // 0xF8
		Il2CppObject* m_RendererFeatures; // 0x100
		::UnityEngine::Rendering::RenderTargetIdentifier* m_CameraColorTarget; // 0x108
		::UnityEngine::Rendering::RenderTargetIdentifier* m_CameraDepthTarget; // 0x130
		::UnityEngine::Rendering::RenderTargetIdentifier* m_CameraResolveTarget; // 0x158
		::System::Boolean m_FirstTimeCameraColorTargetIsBound; // 0x180
		::System::Boolean m_FirstTimeCameraDepthTargetIsBound; // 0x181
		::System::Boolean m_IsPipelineExecuting; // 0x182
		::System::Boolean isCameraColorTargetValid; // 0x183
		::System::Boolean disableNativeRenderPassInFeatures; // 0x184
		::System::Boolean useRenderPassEnabled; // 0x185
		::Il2CppArray<::System::Object*>* m_ActiveColorAttachments; // 0x18
		::UnityEngine::Rendering::RenderTargetIdentifier* m_ActiveDepthAttachment; // 0x20
		::Il2CppArray<::System::Object*>* m_ActiveColorStoreActions; // 0x48
		::UnityEngine::Rendering::RenderBufferStoreAction* m_ActiveDepthStoreAction; // 0x50
		::Il2CppArray<::System::Object*>* m_TrimmedColorAttachmentCopies; // 0x58
		::Il2CppArray<::System::Object*>* s_Planes; // 0x60
		::Il2CppArray<::System::Object*>* s_VectorPlanes; // 0x68
		::System::Boolean _useDepthPriming_k__BackingField; // 0x186
		::System::Boolean _stripShadowsOffVariants_k__BackingField; // 0x187
		::System::Boolean _stripAdditionalLightOffVariants_k__BackingField; // 0x188
		::System::Boolean HasUIRenderPass; // 0x189

		::UnityEngine::Rendering::RenderTargetIdentifier* get_cameraDepth()
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_CAMERADEPTH_OFFSET))(nullptr);
		}

		::System::Void ResetNativeRenderPassFrameData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_RESETNATIVERENDERPASSFRAMEDATA_OFFSET))(nullptr);
		}

		::System::Void SetupNativeRenderPassFrameData(::UnityEngine::Rendering::Universal::CameraData* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::CameraData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETUPNATIVERENDERPASSFRAMEDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateFinalStoreActions(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Rendering::Universal::CameraData* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::Rendering::Universal::CameraData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_UPDATEFINALSTOREACTIONS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetNativeRenderPassMRTAttachmentList(::UnityEngine::Rendering::Universal::ScriptableRenderPass* arg, ::UnityEngine::Rendering::Universal::CameraData&* arg, ::System::Boolean arg, ::UnityEngine::Rendering::ClearFlag* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::UnityEngine::Rendering::Universal::CameraData&*, ::System::Boolean, ::UnityEngine::Rendering::ClearFlag*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETNATIVERENDERPASSMRTATTACHMENTLIST_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsDepthOnlyRenderTexture(::UnityEngine::RenderTexture* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::RenderTexture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_ISDEPTHONLYRENDERTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void SetNativeRenderPassAttachmentList(::UnityEngine::Rendering::Universal::ScriptableRenderPass* arg, ::UnityEngine::Rendering::Universal::CameraData&* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::ClearFlag* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::UnityEngine::Rendering::Universal::CameraData&*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::ClearFlag*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETNATIVERENDERPASSATTACHMENTLIST_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ConfigureNativeRenderPass(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::ScriptableRenderPass* arg, ::UnityEngine::Rendering::Universal::CameraData* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::UnityEngine::Rendering::Universal::CameraData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CONFIGURENATIVERENDERPASS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ExecuteNativeRenderPass(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::ScriptableRenderPass* arg, ::UnityEngine::Rendering::Universal::CameraData* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::UnityEngine::Rendering::Universal::CameraData*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_EXECUTENATIVERENDERPASS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetupInputAttachmentIndices(::UnityEngine::Rendering::Universal::ScriptableRenderPass* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETUPINPUTATTACHMENTINDICES_OFFSET))(arg, nullptr);
		}

		::System::Void SetupTransientInputAttachments(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETUPTRANSIENTINPUTATTACHMENTS_OFFSET))(arg, nullptr);
		}

		::System::UInt32 GetSubPassAttachmentIndicesCount(::UnityEngine::Rendering::Universal::ScriptableRenderPass* arg)
		{
			return (return (::System::UInt32(*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETSUBPASSATTACHMENTINDICESCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean AreAttachmentIndicesCompatible(::UnityEngine::Rendering::Universal::ScriptableRenderPass* arg, ::UnityEngine::Rendering::Universal::ScriptableRenderPass* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_AREATTACHMENTINDICESCOMPATIBLE_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 GetValidColorAttachmentCount(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::UInt32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETVALIDCOLORATTACHMENTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetValidInputAttachmentCount(::UnityEngine::Rendering::Universal::ScriptableRenderPass* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETVALIDINPUTATTACHMENTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 FindAttachmentDescriptorIndexInList(::System::Int32 arg, ::UnityEngine::Rendering::AttachmentDescriptor* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::UnityEngine::Rendering::AttachmentDescriptor*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_FINDATTACHMENTDESCRIPTORINDEXINLIST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 FindAttachmentDescriptorIndexInList(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_FINDATTACHMENTDESCRIPTORINDEXINLIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetValidPassIndexCount(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETVALIDPASSINDEXCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean PassHasInputAttachments(::UnityEngine::Rendering::Universal::ScriptableRenderPass* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_PASSHASINPUTATTACHMENTS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Hash128* CreateRenderPassHash(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::UInt32 arg)
		{
			return (return (::UnityEngine::Hash128*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CREATERENDERPASSHASH_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Hash128* CreateRenderPassHash(RenderPassDescriptor* arg, ::System::UInt32 arg)
		{
			return (return (::UnityEngine::Hash128*(*)(RenderPassDescriptor*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CREATERENDERPASSHASH_OFFSET))(arg, arg, nullptr);
		}

		RenderPassDescriptor* InitializeRenderPassDescriptor(::UnityEngine::Rendering::Universal::CameraData* arg, ::UnityEngine::Rendering::Universal::ScriptableRenderPass* arg)
		{
			return (return (RenderPassDescriptor*(*)(::UnityEngine::Rendering::Universal::CameraData*, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_INITIALIZERENDERPASSDESCRIPTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* GetDefaultGraphicsFormat(::UnityEngine::Rendering::Universal::CameraData* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::UnityEngine::Rendering::Universal::CameraData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETDEFAULTGRAPHICSFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Int32 SupportedCameraStackingTypes()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SUPPORTEDCAMERASTACKINGTYPES_OFFSET))(nullptr);
		}

		::System::Boolean SupportsCameraStackingType(::UnityEngine::Rendering::Universal::CameraRenderType* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::CameraRenderType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SUPPORTSCAMERASTACKINGTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseUnscaledShaderTime()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_USEUNSCALEDSHADERTIME_OFFSET))(nullptr);
		}

		::System::Void set_UseUnscaledShaderTime(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SET_USEUNSCALEDSHADERTIME_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::ProfilingSampler* get_profilingExecute()
		{
			return (return (::UnityEngine::Rendering::ProfilingSampler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_PROFILINGEXECUTE_OFFSET))(nullptr);
		}

		::System::Void set_profilingExecute(::UnityEngine::Rendering::ProfilingSampler* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ProfilingSampler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SET_PROFILINGEXECUTE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::DebugHandler* get_DebugHandler()
		{
			return (return (::UnityEngine::Rendering::Universal::DebugHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_DEBUGHANDLER_OFFSET))(nullptr);
		}

		::System::Void SetCameraMatrices(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::CameraData&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::CameraData&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETCAMERAMATRICES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetPerCameraShaderVariables(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETPERCAMERASHADERVARIABLES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetPerCameraBillboardProperties(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETPERCAMERABILLBOARDPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CalculateBillboardProperties(::UnityEngine::Matrix4x4&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg, float&* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4&*, ::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CALCULATEBILLBOARDPROPERTIES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetPerCameraClippingPlaneProperties(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETPERCAMERACLIPPINGPLANEPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetShaderTimeValues(::UnityEngine::Rendering::CommandBuffer* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETSHADERTIMEVALUES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* get_cameraColorTarget()
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_CAMERACOLORTARGET_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* GetCameraColorFrontBuffer(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETCAMERACOLORFRONTBUFFER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* get_cameraDepthTarget()
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_CAMERADEPTHTARGET_OFFSET))(nullptr);
		}

		Il2CppObject* get_rendererFeatures()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_RENDERERFEATURES_OFFSET))(nullptr);
		}

		Il2CppObject* get_activeRenderPassQueue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_ACTIVERENDERPASSQUEUE_OFFSET))(nullptr);
		}

		RenderingFeatures* get_supportedRenderingFeatures()
		{
			return (return (RenderingFeatures*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_SUPPORTEDRENDERINGFEATURES_OFFSET))(nullptr);
		}

		::System::Void set_supportedRenderingFeatures(RenderingFeatures* arg)
		{
			((::System::Void(*)(RenderingFeatures*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SET_SUPPORTEDRENDERINGFEATURES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_unsupportedGraphicsDeviceTypes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_UNSUPPORTEDGRAPHICSDEVICETYPES_OFFSET))(nullptr);
		}

		::System::Void set_unsupportedGraphicsDeviceTypes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SET_UNSUPPORTEDGRAPHICSDEVICETYPES_OFFSET))(arg, nullptr);
		}

		::System::Void ConfigureActiveTarget(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CONFIGUREACTIVETARGET_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_useDepthPriming()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_USEDEPTHPRIMING_OFFSET))(nullptr);
		}

		::System::Void set_useDepthPriming(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SET_USEDEPTHPRIMING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_stripShadowsOffVariants()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_STRIPSHADOWSOFFVARIANTS_OFFSET))(nullptr);
		}

		::System::Void set_stripShadowsOffVariants(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SET_STRIPSHADOWSOFFVARIANTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_stripAdditionalLightOffVariants()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_STRIPADDITIONALLIGHTOFFVARIANTS_OFFSET))(nullptr);
		}

		::System::Void set_stripAdditionalLightOffVariants(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SET_STRIPADDITIONALLIGHTOFFVARIANTS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::ScriptableRendererData* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ScriptableRendererData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void ConfigureCameraTarget(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CONFIGURECAMERATARGET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ConfigureCameraTarget(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CONFIGURECAMERATARGET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ConfigureCameraColorTarget(::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CONFIGURECAMERACOLORTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void Setup(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetupLights(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETUPLIGHTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetupCullingParameters(::UnityEngine::Rendering::ScriptableCullingParameters&* arg, ::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableCullingParameters&*, ::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETUPCULLINGPARAMETERS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishRendering(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_FINISHRENDERING_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EnqueuePass(::UnityEngine::Rendering::Universal::ScriptableRenderPass* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_ENQUEUEPASS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::ClearFlag* GetCameraClearFlag(::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			return (return (::UnityEngine::Rendering::ClearFlag*(*)(::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETCAMERACLEARFLAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnPreCullRenderPasses(::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_ONPRECULLRENDERPASSES_OFFSET))(arg, nullptr);
		}

		::System::Void AddRenderPasses(::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_ADDRENDERPASSES_OFFSET))(arg, nullptr);
		}

		::System::Void ClearRenderingState(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CLEARRENDERINGSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void Clear(::UnityEngine::Rendering::Universal::CameraRenderType* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::CameraRenderType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteBlock(::System::Int32 arg, RenderBlocks&* arg, ::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, RenderBlocks&*, ::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_EXECUTEBLOCK_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsRenderPassEnabled(::UnityEngine::Rendering::Universal::ScriptableRenderPass* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_ISRENDERPASSENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteRenderPass(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::ScriptableRenderPass* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_EXECUTERENDERPASS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetRenderPassAttachments(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::ScriptableRenderPass* arg, ::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETRENDERPASSATTACHMENTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void BeginXRRendering(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_BEGINXRRENDERING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndXRRendering(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_ENDXRRENDERING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::ClearFlag* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::ClearFlag*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::ClearFlag* arg, ::UnityEngine::Color* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::ClearFlag*, ::UnityEngine::Color*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg, ::UnityEngine::Rendering::ClearFlag* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::UnityEngine::Rendering::ClearFlag*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderBufferLoadAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg, ::UnityEngine::Rendering::ClearFlag* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderBufferLoadAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::UnityEngine::Rendering::ClearFlag*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* arg, ::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::ClearFlag* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::System::Object*>*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::ClearFlag*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETRENDERTARGET_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SwapColorBuffer(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SWAPCOLORBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Void EnableSwapBufferMSAA(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_ENABLESWAPBUFFERMSAA_OFFSET))(arg, nullptr);
		}

		::System::Void DrawGizmos(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Camera* arg, ::UnityEngine::Rendering::GizmoSubset* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Camera*, ::UnityEngine::Rendering::GizmoSubset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_DRAWGIZMOS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DrawWireOverlay(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_DRAWWIREOVERLAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InternalStartRendering(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_INTERNALSTARTRENDERING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InternalFinishRendering(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_INTERNALFINISHRENDERING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SortStable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SORTSTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

