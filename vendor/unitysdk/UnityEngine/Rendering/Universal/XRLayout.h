#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering::Universal { class XRSystem; }
namespace UnityEngine::Rendering::Universal { class XRViewCreateInfo; }
namespace UnityEngine::Rendering::Universal { class XRPass; }
namespace UnityEngine::Rendering::Universal { class XRPassCreateInfo; }

#define UNITYENGINE_RENDERING_UNIVERSAL_XRLAYOUT_ADDVIEWTOPASS_OFFSET UNITYSDK_OFFSET(0xA090A60)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRLAYOUT_CREATEPASS_OFFSET UNITYSDK_OFFSET(0xA090C10)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int XRLayout_TypeDefinitionIndex = 32810;

	class XRLayout : public Il2CppObject
	{
	public:
		::UnityEngine::Camera* camera; // 0x10
		::UnityEngine::Rendering::Universal::XRSystem* xrSystem; // 0x18

		::System::Void AddViewToPass(::UnityEngine::Rendering::Universal::XRViewCreateInfo* arg, ::UnityEngine::Rendering::Universal::XRPass* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::XRViewCreateInfo*, ::UnityEngine::Rendering::Universal::XRPass*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRLAYOUT_ADDVIEWTOPASS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::XRPass* CreatePass(::UnityEngine::Rendering::Universal::XRPassCreateInfo* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::XRPass*(*)(::UnityEngine::Rendering::Universal::XRPassCreateInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRLAYOUT_CREATEPASS_OFFSET))(arg, nullptr);
		}

	};
}

