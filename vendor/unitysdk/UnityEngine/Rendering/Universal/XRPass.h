#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine::Rendering { class ScriptableCullingParameters; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Rect; }
namespace UnityEngine::Rendering::Universal { class XRPass; }
namespace UnityEngine::Rendering::Universal { class XRPassCreateInfo; }
namespace UnityEngine::Rendering::Universal { class XRView; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class CameraData; }
namespace UnityEngine::Rendering::Universal { class CameraData&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA07C300)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_XRSDKENABLED_OFFSET UNITYSDK_OFFSET(0xA0911A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_SET_XRSDKENABLED_OFFSET UNITYSDK_OFFSET(0xA0911B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_COPYDEPTH_OFFSET UNITYSDK_OFFSET(0xA0911C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_SET_COPYDEPTH_OFFSET UNITYSDK_OFFSET(0xA0911D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_MULTIPASSID_OFFSET UNITYSDK_OFFSET(0xA0911E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_SET_MULTIPASSID_OFFSET UNITYSDK_OFFSET(0xA0911F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_CULLINGPASSID_OFFSET UNITYSDK_OFFSET(0xA091200)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_SET_CULLINGPASSID_OFFSET UNITYSDK_OFFSET(0xA091210)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_RENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA091220)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_SET_RENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA091240)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_RENDERTARGETDESC_OFFSET UNITYSDK_OFFSET(0xA091260)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_SET_RENDERTARGETDESC_OFFSET UNITYSDK_OFFSET(0xA091290)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_RENDERTARGETVALID_OFFSET UNITYSDK_OFFSET(0xA0912C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_RENDERTARGETISRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0xA091390)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_SET_RENDERTARGETISRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0xA0913A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_ISLATELATCHENABLED_OFFSET UNITYSDK_OFFSET(0xA0913B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_SET_ISLATELATCHENABLED_OFFSET UNITYSDK_OFFSET(0xA0913C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_CANMARKLATELATCH_OFFSET UNITYSDK_OFFSET(0xA0913D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_SET_CANMARKLATELATCH_OFFSET UNITYSDK_OFFSET(0xA0913E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_HASMARKEDLATELATCH_OFFSET UNITYSDK_OFFSET(0xA0913F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_SET_HASMARKEDLATELATCH_OFFSET UNITYSDK_OFFSET(0xA091400)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GETPROJMATRIX_OFFSET UNITYSDK_OFFSET(0xA08BAC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GETVIEWMATRIX_OFFSET UNITYSDK_OFFSET(0xA08BB50)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GETTEXTUREARRAYSLICE_OFFSET UNITYSDK_OFFSET(0xA091410)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GETVIEWPORT_OFFSET UNITYSDK_OFFSET(0xA091470)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_CULLINGPARAMS_OFFSET UNITYSDK_OFFSET(0xA0914E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_SET_CULLINGPARAMS_OFFSET UNITYSDK_OFFSET(0xA091510)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_VIEWCOUNT_OFFSET UNITYSDK_OFFSET(0xA08BBE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_SINGLEPASSENABLED_OFFSET UNITYSDK_OFFSET(0xA08BA80)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_ISOCCLUSIONMESHSUPPORTED_OFFSET UNITYSDK_OFFSET(0xA091530)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_HASVALIDOCCLUSIONMESH_OFFSET UNITYSDK_OFFSET(0xA07FE30)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_SETCUSTOMMIRRORVIEW_OFFSET UNITYSDK_OFFSET(0xA0915E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_CREATE_OFFSET UNITYSDK_OFFSET(0xA090CA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_UPDATEVIEW_OFFSET UNITYSDK_OFFSET(0xA091600)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_UPDATEVIEW_OFFSET UNITYSDK_OFFSET(0xA091780)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_UPDATECULLINGPARAMS_OFFSET UNITYSDK_OFFSET(0xA091900)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_ADDVIEW_OFFSET UNITYSDK_OFFSET(0xA090B40)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_CREATE_OFFSET UNITYSDK_OFFSET(0xA091BB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_ADDVIEW_OFFSET UNITYSDK_OFFSET(0xA091EA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_RELEASE_OFFSET UNITYSDK_OFFSET(0xA091F70)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_ADDVIEWINTERNAL_OFFSET UNITYSDK_OFFSET(0xA091920)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_UPDATEOCCLUSIONMESH_OFFSET UNITYSDK_OFFSET(0xA091FD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_TRYGETOCCLUSIONMESHCOMBINEDHASHCODE_OFFSET UNITYSDK_OFFSET(0xA092160)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_CREATEOCCLUSIONMESHCOMBINED_OFFSET UNITYSDK_OFFSET(0xA0922B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_STARTSINGLEPASS_OFFSET UNITYSDK_OFFSET(0xA092640)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_STOPSINGLEPASS_OFFSET UNITYSDK_OFFSET(0xA092900)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_ENDCAMERA_OFFSET UNITYSDK_OFFSET(0xA086780)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_RENDEROCCLUSIONMESH_OFFSET UNITYSDK_OFFSET(0xA092A10)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_UPDATEGPUVIEWANDPROJECTIONMATRICES_OFFSET UNITYSDK_OFFSET(0xA092EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_MARKLATELATCHSHADERPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA093760)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_UNMARKLATELATCHSHADERPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA093880)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0938F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA093A00)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int XRPass_TypeDefinitionIndex = 32815;

	class XRPass : public Il2CppObject
	{
	public:
		Il2CppObject* views; // 0x10
		::System::Boolean _xrSdkEnabled_k__BackingField; // 0x18
		::System::Boolean _copyDepth_k__BackingField; // 0x19
		::System::Int32 _multipassId_k__BackingField; // 0x1C
		::System::Int32 _cullingPassId_k__BackingField; // 0x20
		::UnityEngine::Rendering::RenderTargetIdentifier* _renderTarget_k__BackingField; // 0x28
		::UnityEngine::RenderTextureDescriptor* _renderTargetDesc_k__BackingField; // 0x50
		::UnityEngine::Rendering::RenderTargetIdentifier* invalidRT; // 0x0
		::System::Boolean _renderTargetIsRenderTexture_k__BackingField; // 0x84
		::System::Boolean _isLateLatchEnabled_k__BackingField; // 0x85
		::System::Boolean _canMarkLateLatch_k__BackingField; // 0x86
		::System::Boolean _hasMarkedLateLatch_k__BackingField; // 0x87
		::UnityEngine::Rendering::ScriptableCullingParameters* _cullingParams_k__BackingField; // 0x88
		::UnityEngine::Material* occlusionMeshMaterial; // 0x6B0
		::UnityEngine::Mesh* occlusionMeshCombined; // 0x6B8
		::System::Int32 occlusionMeshCombinedHashCode; // 0x6C0
		CustomMirrorView* customMirrorView; // 0x6C8
		::System::String* k_XRCustomMirrorTag; // 0x0
		::UnityEngine::Rendering::ProfilingSampler* _XRCustomMirrorProfilingSampler; // 0x28
		::System::String* k_XROcclusionTag; // 0x0
		::UnityEngine::Rendering::ProfilingSampler* _XROcclusionProfilingSampler; // 0x30
		::Il2CppArray<::System::Object*>* stereoProjectionMatrix; // 0x6D0
		::Il2CppArray<::System::Object*>* stereoViewMatrix; // 0x6D8
		::Il2CppArray<::System::Object*>* stereoCameraProjectionMatrix; // 0x6E0
		::System::Int32 UNITY_STEREO_MATRIX_V; // 0x38
		::System::Int32 UNITY_STEREO_MATRIX_IV; // 0x3C
		::System::Int32 UNITY_STEREO_MATRIX_VP; // 0x40
		::System::Int32 UNITY_STEREO_MATRIX_IVP; // 0x44

		::System::Boolean get_enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::Boolean get_xrSdkEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_XRSDKENABLED_OFFSET))(nullptr);
		}

		::System::Void set_xrSdkEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_SET_XRSDKENABLED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_copyDepth()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_COPYDEPTH_OFFSET))(nullptr);
		}

		::System::Void set_copyDepth(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_SET_COPYDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_multipassId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_MULTIPASSID_OFFSET))(nullptr);
		}

		::System::Void set_multipassId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_SET_MULTIPASSID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_cullingPassId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_CULLINGPASSID_OFFSET))(nullptr);
		}

		::System::Void set_cullingPassId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_SET_CULLINGPASSID_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* get_renderTarget()
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_RENDERTARGET_OFFSET))(nullptr);
		}

		::System::Void set_renderTarget(::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_SET_RENDERTARGET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RenderTextureDescriptor* get_renderTargetDesc()
		{
			return (return (::UnityEngine::RenderTextureDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_RENDERTARGETDESC_OFFSET))(nullptr);
		}

		::System::Void set_renderTargetDesc(::UnityEngine::RenderTextureDescriptor* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTextureDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_SET_RENDERTARGETDESC_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_renderTargetValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_RENDERTARGETVALID_OFFSET))(nullptr);
		}

		::System::Boolean get_renderTargetIsRenderTexture()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_RENDERTARGETISRENDERTEXTURE_OFFSET))(nullptr);
		}

		::System::Void set_renderTargetIsRenderTexture(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_SET_RENDERTARGETISRENDERTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isLateLatchEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_ISLATELATCHENABLED_OFFSET))(nullptr);
		}

		::System::Void set_isLateLatchEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_SET_ISLATELATCHENABLED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_canMarkLateLatch()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_CANMARKLATELATCH_OFFSET))(nullptr);
		}

		::System::Void set_canMarkLateLatch(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_SET_CANMARKLATELATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_hasMarkedLateLatch()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_HASMARKEDLATELATCH_OFFSET))(nullptr);
		}

		::System::Void set_hasMarkedLateLatch(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_SET_HASMARKEDLATELATCH_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Matrix4x4* GetProjMatrix(::System::Int32 arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GETPROJMATRIX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Matrix4x4* GetViewMatrix(::System::Int32 arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GETVIEWMATRIX_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetTextureArraySlice(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GETTEXTUREARRAYSLICE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rect* GetViewport(::System::Int32 arg)
		{
			return (return (::UnityEngine::Rect*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GETVIEWPORT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::ScriptableCullingParameters* get_cullingParams()
		{
			return (return (::UnityEngine::Rendering::ScriptableCullingParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_CULLINGPARAMS_OFFSET))(nullptr);
		}

		::System::Void set_cullingParams(::UnityEngine::Rendering::ScriptableCullingParameters* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableCullingParameters*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_SET_CULLINGPARAMS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_viewCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_VIEWCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_singlePassEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_SINGLEPASSENABLED_OFFSET))(nullptr);
		}

		::System::Boolean get_isOcclusionMeshSupported()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_ISOCCLUSIONMESHSUPPORTED_OFFSET))(nullptr);
		}

		::System::Boolean get_hasValidOcclusionMesh()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_GET_HASVALIDOCCLUSIONMESH_OFFSET))(nullptr);
		}

		::System::Void SetCustomMirrorView(CustomMirrorView* arg)
		{
			((::System::Void(*)(CustomMirrorView*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_SETCUSTOMMIRRORVIEW_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::XRPass* Create(::UnityEngine::Rendering::Universal::XRPassCreateInfo* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::XRPass*(*)(::UnityEngine::Rendering::Universal::XRPassCreateInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateView(::System::Int32 arg, XRRenderPass* arg, XRRenderParameter* arg)
		{
			((::System::Void(*)(::System::Int32, XRRenderPass*, XRRenderParameter*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_UPDATEVIEW_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UpdateView(::System::Int32 arg, ::UnityEngine::Matrix4x4* arg, ::UnityEngine::Matrix4x4* arg, ::UnityEngine::Rect* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4*, ::UnityEngine::Matrix4x4*, ::UnityEngine::Rect*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_UPDATEVIEW_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void UpdateCullingParams(::System::Int32 arg, ::UnityEngine::Rendering::ScriptableCullingParameters* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::ScriptableCullingParameters*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_UPDATECULLINGPARAMS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddView(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Matrix4x4* arg, ::UnityEngine::Rect* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Matrix4x4*, ::UnityEngine::Rect*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_ADDVIEW_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::XRPass* Create(XRRenderPass* arg, ::System::Int32 arg, ::UnityEngine::Rendering::ScriptableCullingParameters* arg, ::UnityEngine::Material* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::XRPass*(*)(XRRenderPass*, ::System::Int32, ::UnityEngine::Rendering::ScriptableCullingParameters*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_CREATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AddView(XRRenderPass* arg, XRRenderParameter* arg)
		{
			((::System::Void(*)(XRRenderPass*, XRRenderParameter*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_ADDVIEW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Release(::UnityEngine::Rendering::Universal::XRPass* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::XRPass*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void AddViewInternal(::UnityEngine::Rendering::Universal::XRView* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::XRView*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_ADDVIEWINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateOcclusionMesh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_UPDATEOCCLUSIONMESH_OFFSET))(nullptr);
		}

		::System::Boolean TryGetOcclusionMeshCombinedHashCode(int32_t&* arg)
		{
			return (return (::System::Boolean(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_TRYGETOCCLUSIONMESHCOMBINEDHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Void CreateOcclusionMeshCombined()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_CREATEOCCLUSIONMESHCOMBINED_OFFSET))(nullptr);
		}

		::System::Void StartSinglePass(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_STARTSINGLEPASS_OFFSET))(arg, nullptr);
		}

		::System::Void StopSinglePass(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_STOPSINGLEPASS_OFFSET))(arg, nullptr);
		}

		::System::Void EndCamera(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::CameraData* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::CameraData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_ENDCAMERA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RenderOcclusionMesh(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_RENDEROCCLUSIONMESH_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateGPUViewAndProjectionMatrices(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::CameraData&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::CameraData&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_UPDATEGPUVIEWANDPROJECTIONMATRICES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void MarkLateLatchShaderProperties(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_MARKLATELATCHSHADERPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UnmarkLateLatchShaderProperties(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_UNMARKLATELATCHSHADERPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRPASS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

