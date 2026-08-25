#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal::Internal { class PreviousFrameData; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class DrawingSettings; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0xA0C5B80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERPASS_CONFIGURE_OFFSET UNITYSDK_OFFSET(0xA0C5D00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0C5EB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERPASS_DRAWOBJECTMOTIONVECTORS_OFFSET UNITYSDK_OFFSET(0xA0C5F50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERPASS_GETDRAWINGSETTINGS_OFFSET UNITYSDK_OFFSET(0xA0C6130)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERPASS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA0C6410)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA0C64F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERPASS_EXECUTECOMMAND_OFFSET UNITYSDK_OFFSET(0xA0C6A80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERPASS_DRAWCAMERAMOTIONVECTORS_OFFSET UNITYSDK_OFFSET(0xA0C6AF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERPASS_SETUP_OFFSET UNITYSDK_OFFSET(0xA0C6C00)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int MotionVectorRenderPass_TypeDefinitionIndex = 32879;

	class MotionVectorRenderPass : public Il2CppObject
	{
	public:
		::System::String* kPreviousViewProjectionMatrix; // 0x0
		::System::String* kPreviousViewProjectionMatrixStero; // 0x0
		::System::String* kMotionVectorTexture; // 0x0
		::UnityEngine::Experimental::Rendering::GraphicsFormat* m_TargetFormat; // 0x0
		::Il2CppArray<::System::Object*>* s_ShaderTags; // 0x0
		::UnityEngine::Rendering::Universal::RenderTargetHandle* m_MotionVectorHandle; // 0xD8
		::UnityEngine::Material* m_CameraMaterial; // 0x108
		::UnityEngine::Material* m_ObjectMaterial; // 0x110
		::UnityEngine::Rendering::Universal::Internal::PreviousFrameData* m_MotionData; // 0x118
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler; // 0x120

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERPASS_FRAMECLEANUP_OFFSET))(arg, nullptr);
		}

		::System::Void Configure(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::RenderTextureDescriptor* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERPASS_CONFIGURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Material* arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERPASS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DrawObjectMotionVectors(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg, ::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERPASS_DRAWOBJECTMOTIONVECTORS_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Rendering::DrawingSettings* GetDrawingSettings(::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			return (return (::UnityEngine::Rendering::DrawingSettings*(*)(::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERPASS_GETDRAWINGSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERPASS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ExecuteCommand(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERPASS_EXECUTECOMMAND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DrawCameraMotionVectors(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERPASS_DRAWCAMERAMOTIONVECTORS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Setup(::UnityEngine::Rendering::Universal::Internal::PreviousFrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::PreviousFrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MOTIONVECTORRENDERPASS_SETUP_OFFSET))(arg, nullptr);
		}

	};
}

