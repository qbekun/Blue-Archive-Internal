#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }
namespace UnityEngine::Rendering { class RenderBufferStoreAction; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine::Rendering::Universal { class ScriptableRenderPassInput; }
namespace UnityEngine::Rendering { class ClearFlag; }
namespace UnityEngine { class Color; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class DebugHandler; }
namespace UnityEngine::Rendering::Universal { class RenderingData; }
namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class DrawingSettings; }
namespace UnityEngine::Rendering { class ShaderTagId; }
namespace UnityEngine::Rendering { class SortingCriteria; }
namespace UnityEngine::Rendering::Universal { class ScriptableRenderPass; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0xA047100)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_RENDERPASSEVENT_OFFSET UNITYSDK_OFFSET(0xA047120)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_SET_RENDERPASSEVENT_OFFSET UNITYSDK_OFFSET(0xA047130)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_COLORATTACHMENTS_OFFSET UNITYSDK_OFFSET(0xA047140)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_COLORATTACHMENT_OFFSET UNITYSDK_OFFSET(0xA047150)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_DEPTHATTACHMENT_OFFSET UNITYSDK_OFFSET(0xA047190)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_COLORSTOREACTIONS_OFFSET UNITYSDK_OFFSET(0xA0471C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_DEPTHSTOREACTION_OFFSET UNITYSDK_OFFSET(0xA0471D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_OVERRIDDENCOLORSTOREACTIONS_OFFSET UNITYSDK_OFFSET(0xA0471E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_OVERRIDDENDEPTHSTOREACTION_OFFSET UNITYSDK_OFFSET(0xA0471F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_INPUT_OFFSET UNITYSDK_OFFSET(0xA047200)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_CLEARFLAG_OFFSET UNITYSDK_OFFSET(0xA047210)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_CLEARCOLOR_OFFSET UNITYSDK_OFFSET(0xA047220)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_PROFILINGSAMPLER_OFFSET UNITYSDK_OFFSET(0xA047230)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_SET_PROFILINGSAMPLER_OFFSET UNITYSDK_OFFSET(0xA047240)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_OVERRIDECAMERATARGET_OFFSET UNITYSDK_OFFSET(0xA047250)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_SET_OVERRIDECAMERATARGET_OFFSET UNITYSDK_OFFSET(0xA047260)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_ISBLITRENDERPASS_OFFSET UNITYSDK_OFFSET(0xA047270)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_SET_ISBLITRENDERPASS_OFFSET UNITYSDK_OFFSET(0xA047280)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_USENATIVERENDERPASS_OFFSET UNITYSDK_OFFSET(0xA047290)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_SET_USENATIVERENDERPASS_OFFSET UNITYSDK_OFFSET(0xA0472A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_RENDERTARGETWIDTH_OFFSET UNITYSDK_OFFSET(0xA0472B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_SET_RENDERTARGETWIDTH_OFFSET UNITYSDK_OFFSET(0xA0472C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_RENDERTARGETHEIGHT_OFFSET UNITYSDK_OFFSET(0xA0472D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_SET_RENDERTARGETHEIGHT_OFFSET UNITYSDK_OFFSET(0xA0472E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_RENDERTARGETSAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0xA0472F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_SET_RENDERTARGETSAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0xA047300)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_DEPTHONLY_OFFSET UNITYSDK_OFFSET(0xA047310)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_SET_DEPTHONLY_OFFSET UNITYSDK_OFFSET(0xA047320)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_ISLASTPASS_OFFSET UNITYSDK_OFFSET(0xA047330)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_SET_ISLASTPASS_OFFSET UNITYSDK_OFFSET(0xA047340)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_RENDERPASSQUEUEINDEX_OFFSET UNITYSDK_OFFSET(0xA047350)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_SET_RENDERPASSQUEUEINDEX_OFFSET UNITYSDK_OFFSET(0xA047360)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_RENDERTARGETFORMAT_OFFSET UNITYSDK_OFFSET(0xA047370)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_SET_RENDERTARGETFORMAT_OFFSET UNITYSDK_OFFSET(0xA047380)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GETACTIVEDEBUGHANDLER_OFFSET UNITYSDK_OFFSET(0xA047390)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA045650)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGUREINPUT_OFFSET UNITYSDK_OFFSET(0xA0473E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGURECOLORSTOREACTION_OFFSET UNITYSDK_OFFSET(0xA0473F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGURECOLORSTOREACTIONS_OFFSET UNITYSDK_OFFSET(0xA047430)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGUREDEPTHSTOREACTION_OFFSET UNITYSDK_OFFSET(0xA047500)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGUREINPUTATTACHMENTS_OFFSET UNITYSDK_OFFSET(0xA047510)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGUREINPUTATTACHMENTS_OFFSET UNITYSDK_OFFSET(0xA047570)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGUREINPUTATTACHMENTS_OFFSET UNITYSDK_OFFSET(0xA047590)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_SETINPUTATTACHMENTTRANSIENT_OFFSET UNITYSDK_OFFSET(0xA0475D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_ISINPUTATTACHMENTTRANSIENT_OFFSET UNITYSDK_OFFSET(0xA047600)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGURETARGET_OFFSET UNITYSDK_OFFSET(0xA047630)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGURETARGET_OFFSET UNITYSDK_OFFSET(0xA047750)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGURETARGET_OFFSET UNITYSDK_OFFSET(0xA045220)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGURETARGET_OFFSET UNITYSDK_OFFSET(0xA047940)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGURETARGET_OFFSET UNITYSDK_OFFSET(0xA047680)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGURETARGET_OFFSET UNITYSDK_OFFSET(0xA0477C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGURETARGET_OFFSET UNITYSDK_OFFSET(0xA0479C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGURECLEAR_OFFSET UNITYSDK_OFFSET(0xA047A20)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_ONCAMERASETUP_OFFSET UNITYSDK_OFFSET(0xA047A40)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGURE_OFFSET UNITYSDK_OFFSET(0xA047A50)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0xA047A60)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_ONFINISHCAMERASTACKRENDERING_OFFSET UNITYSDK_OFFSET(0xA047A70)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_BLIT_OFFSET UNITYSDK_OFFSET(0xA047A80)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_BLIT_OFFSET UNITYSDK_OFFSET(0xA047FD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CREATEDRAWINGSETTINGS_OFFSET UNITYSDK_OFFSET(0xA0481C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CREATEDRAWINGSETTINGS_OFFSET UNITYSDK_OFFSET(0xA044E40)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0xA0483A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0xA0483D0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScriptableRenderPass_TypeDefinitionIndex = 32628;

	class ScriptableRenderPass : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::RenderPassEvent* _renderPassEvent_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* m_ColorStoreActions; // 0x18
		::UnityEngine::Rendering::RenderBufferStoreAction* m_DepthStoreAction; // 0x20
		::Il2CppArray<::System::Object*>* m_OverriddenColorStoreActions; // 0x28
		::System::Boolean m_OverriddenDepthStoreAction; // 0x30
		::UnityEngine::Rendering::ProfilingSampler* _profilingSampler_k__BackingField; // 0x38
		::System::Boolean _overrideCameraTarget_k__BackingField; // 0x40
		::System::Boolean _isBlitRenderPass_k__BackingField; // 0x41
		::System::Boolean _useNativeRenderPass_k__BackingField; // 0x42
		::System::Int32 _renderTargetWidth_k__BackingField; // 0x44
		::System::Int32 _renderTargetHeight_k__BackingField; // 0x48
		::System::Int32 _renderTargetSampleCount_k__BackingField; // 0x4C
		::System::Boolean _depthOnly_k__BackingField; // 0x50
		::System::Boolean _isLastPass_k__BackingField; // 0x51
		::System::Int32 _renderPassQueueIndex_k__BackingField; // 0x54
		Il2CppObject* m_ColorAttachmentIndices; // 0x58
		Il2CppObject* m_InputAttachmentIndices; // 0x68
		::Il2CppArray<::System::Object*>* _renderTargetFormat_k__BackingField; // 0x78
		::Il2CppArray<::System::Object*>* m_ColorAttachments; // 0x80
		::Il2CppArray<::System::Object*>* m_InputAttachments; // 0x88
		::Il2CppArray<::System::Object*>* m_InputAttachmentIsTransient; // 0x90
		::UnityEngine::Rendering::RenderTargetIdentifier* m_DepthAttachment; // 0x98
		::UnityEngine::Rendering::Universal::ScriptableRenderPassInput* m_Input; // 0xC0
		::UnityEngine::Rendering::ClearFlag* m_ClearFlag; // 0xC4
		::UnityEngine::Color* m_ClearColor; // 0xC8

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_FRAMECLEANUP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::RenderPassEvent* get_renderPassEvent()
		{
			return (return (::UnityEngine::Rendering::Universal::RenderPassEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_RENDERPASSEVENT_OFFSET))(nullptr);
		}

		::System::Void set_renderPassEvent(::UnityEngine::Rendering::Universal::RenderPassEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderPassEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_SET_RENDERPASSEVENT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_colorAttachments()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_COLORATTACHMENTS_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* get_colorAttachment()
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_COLORATTACHMENT_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* get_depthAttachment()
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_DEPTHATTACHMENT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_colorStoreActions()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_COLORSTOREACTIONS_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::RenderBufferStoreAction* get_depthStoreAction()
		{
			return (return (::UnityEngine::Rendering::RenderBufferStoreAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_DEPTHSTOREACTION_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_overriddenColorStoreActions()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_OVERRIDDENCOLORSTOREACTIONS_OFFSET))(nullptr);
		}

		::System::Boolean get_overriddenDepthStoreAction()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_OVERRIDDENDEPTHSTOREACTION_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::ScriptableRenderPassInput* get_input()
		{
			return (return (::UnityEngine::Rendering::Universal::ScriptableRenderPassInput*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_INPUT_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::ClearFlag* get_clearFlag()
		{
			return (return (::UnityEngine::Rendering::ClearFlag*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_CLEARFLAG_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_clearColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_CLEARCOLOR_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::ProfilingSampler* get_profilingSampler()
		{
			return (return (::UnityEngine::Rendering::ProfilingSampler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_PROFILINGSAMPLER_OFFSET))(nullptr);
		}

		::System::Void set_profilingSampler(::UnityEngine::Rendering::ProfilingSampler* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ProfilingSampler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_SET_PROFILINGSAMPLER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_overrideCameraTarget()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_OVERRIDECAMERATARGET_OFFSET))(nullptr);
		}

		::System::Void set_overrideCameraTarget(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_SET_OVERRIDECAMERATARGET_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isBlitRenderPass()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_ISBLITRENDERPASS_OFFSET))(nullptr);
		}

		::System::Void set_isBlitRenderPass(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_SET_ISBLITRENDERPASS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_useNativeRenderPass()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_USENATIVERENDERPASS_OFFSET))(nullptr);
		}

		::System::Void set_useNativeRenderPass(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_SET_USENATIVERENDERPASS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_renderTargetWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_RENDERTARGETWIDTH_OFFSET))(nullptr);
		}

		::System::Void set_renderTargetWidth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_SET_RENDERTARGETWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_renderTargetHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_RENDERTARGETHEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_renderTargetHeight(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_SET_RENDERTARGETHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_renderTargetSampleCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_RENDERTARGETSAMPLECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_renderTargetSampleCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_SET_RENDERTARGETSAMPLECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_depthOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_DEPTHONLY_OFFSET))(nullptr);
		}

		::System::Void set_depthOnly(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_SET_DEPTHONLY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isLastPass()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_ISLASTPASS_OFFSET))(nullptr);
		}

		::System::Void set_isLastPass(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_SET_ISLASTPASS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_renderPassQueueIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_RENDERPASSQUEUEINDEX_OFFSET))(nullptr);
		}

		::System::Void set_renderPassQueueIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_SET_RENDERPASSQUEUEINDEX_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_renderTargetFormat()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GET_RENDERTARGETFORMAT_OFFSET))(nullptr);
		}

		::System::Void set_renderTargetFormat(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_SET_RENDERTARGETFORMAT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::DebugHandler* GetActiveDebugHandler(::UnityEngine::Rendering::Universal::RenderingData* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::DebugHandler*(*)(::UnityEngine::Rendering::Universal::RenderingData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_GETACTIVEDEBUGHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ConfigureInput(::UnityEngine::Rendering::Universal::ScriptableRenderPassInput* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ScriptableRenderPassInput*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGUREINPUT_OFFSET))(arg, nullptr);
		}

		::System::Void ConfigureColorStoreAction(::UnityEngine::Rendering::RenderBufferStoreAction* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderBufferStoreAction*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGURECOLORSTOREACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ConfigureColorStoreActions(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGURECOLORSTOREACTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void ConfigureDepthStoreAction(::UnityEngine::Rendering::RenderBufferStoreAction* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderBufferStoreAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGUREDEPTHSTOREACTION_OFFSET))(arg, nullptr);
		}

		::System::Void ConfigureInputAttachments(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGUREINPUTATTACHMENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ConfigureInputAttachments(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGUREINPUTATTACHMENTS_OFFSET))(arg, nullptr);
		}

		::System::Void ConfigureInputAttachments(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGUREINPUTATTACHMENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetInputAttachmentTransient(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_SETINPUTATTACHMENTTRANSIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsInputAttachmentTransient(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_ISINPUTATTACHMENTTRANSIENT_OFFSET))(arg, nullptr);
		}

		::System::Void ConfigureTarget(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGURETARGET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ConfigureTarget(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGURETARGET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ConfigureTarget(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGURETARGET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ConfigureTarget(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGURETARGET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ConfigureTarget(::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGURETARGET_OFFSET))(arg, nullptr);
		}

		::System::Void ConfigureTarget(::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGURETARGET_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ConfigureTarget(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGURETARGET_OFFSET))(arg, nullptr);
		}

		::System::Void ConfigureClear(::UnityEngine::Rendering::ClearFlag* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ClearFlag*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGURECLEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_ONCAMERASETUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Configure(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::RenderTextureDescriptor* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CONFIGURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_ONCAMERACLEANUP_OFFSET))(arg, nullptr);
		}

		::System::Void OnFinishCameraStackRendering(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_ONFINISHCAMERASTACKRENDERING_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Blit(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_BLIT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Blit(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg, ::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_BLIT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Rendering::DrawingSettings* CreateDrawingSettings(::UnityEngine::Rendering::ShaderTagId* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg, ::UnityEngine::Rendering::SortingCriteria* arg)
		{
			return (return (::UnityEngine::Rendering::DrawingSettings*(*)(::UnityEngine::Rendering::ShaderTagId*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::UnityEngine::Rendering::SortingCriteria*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CREATEDRAWINGSETTINGS_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Rendering::DrawingSettings* CreateDrawingSettings(Il2CppObject* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg, ::UnityEngine::Rendering::SortingCriteria* arg)
		{
			return (return (::UnityEngine::Rendering::DrawingSettings*(*)(Il2CppObject*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::UnityEngine::Rendering::SortingCriteria*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_CREATEDRAWINGSETTINGS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean op_LessThan(::UnityEngine::Rendering::Universal::ScriptableRenderPass* arg, ::UnityEngine::Rendering::Universal::ScriptableRenderPass* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_OP_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_GreaterThan(::UnityEngine::Rendering::Universal::ScriptableRenderPass* arg, ::UnityEngine::Rendering::Universal::ScriptableRenderPass* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERPASS_OP_GREATERTHAN_OFFSET))(arg, arg, nullptr);
		}

	};
}

