#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine { class Camera; }

#define XRRENDERPASS_GETRENDERPARAMETER_OFFSET UNITYSDK_OFFSET(0xA4AC4D0)
#define XRRENDERPASS_GETRENDERPARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0xA4AC570)
#define XRRENDERPASS_GETRENDERPARAMETER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA4AC520)
#define XRRENDERPASS_GETRENDERPARAMETERCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA4AC5B0)

	inline static constexpr unsigned int XRRenderPass_TypeDefinitionIndex = 37602;

	class XRRenderPass : public Il2CppObject
	{
	public:
		::System::Int32 displaySubsystemInstance; // 0x10
		::System::Int32 renderPassIndex; // 0x18
		::UnityEngine::Rendering::RenderTargetIdentifier* renderTarget; // 0x20
		::UnityEngine::RenderTextureDescriptor* renderTargetDesc; // 0x48
		::System::Boolean hasMotionVectorPass; // 0x7C
		::UnityEngine::Rendering::RenderTargetIdentifier* motionVectorRenderTarget; // 0x80
		::UnityEngine::RenderTextureDescriptor* motionVectorRenderTargetDesc; // 0xA8
		::System::Boolean shouldFillOutDepth; // 0xDC
		::System::Int32 cullingPassIndex; // 0xE0

		::System::Void GetRenderParameter(::UnityEngine::Camera* arg, ::System::Int32 arg, XRRenderParameter&* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::System::Int32, XRRenderParameter&*, ::PVOID))((::PBYTE)hIl2Cpp + XRRENDERPASS_GETRENDERPARAMETER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetRenderParameterCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + XRRENDERPASS_GETRENDERPARAMETERCOUNT_OFFSET))(nullptr);
		}

		::System::Void GetRenderParameter_Injected(XRRenderPass&* arg, ::UnityEngine::Camera* arg, ::System::Int32 arg, XRRenderParameter&* arg)
		{
			((::System::Void(*)(XRRenderPass&*, ::UnityEngine::Camera*, ::System::Int32, XRRenderParameter&*, ::PVOID))((::PBYTE)hIl2Cpp + XRRENDERPASS_GETRENDERPARAMETER_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetRenderParameterCount_Injected(XRRenderPass&* arg)
		{
			return (return (::System::Int32(*)(XRRenderPass&*, ::PVOID))((::PBYTE)hIl2Cpp + XRRENDERPASS_GETRENDERPARAMETERCOUNT_INJECTED_OFFSET))(arg, nullptr);
		}

	};

