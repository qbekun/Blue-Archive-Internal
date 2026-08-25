#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Light; }

#define UNITYENGINE_RENDERING_UNIVERSAL_COMPONENTUTILITY_ISUNIVERSALCAMERA_OFFSET UNITYSDK_OFFSET(0xA02AA90)
#define UNITYENGINE_RENDERING_UNIVERSAL_COMPONENTUTILITY_ISUNIVERSALLIGHT_OFFSET UNITYSDK_OFFSET(0xA02AB10)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ComponentUtility_TypeDefinitionIndex = 32503;

	class ComponentUtility : public Il2CppObject
	{
	public:
		::System::Boolean IsUniversalCamera(::UnityEngine::Camera* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COMPONENTUTILITY_ISUNIVERSALCAMERA_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsUniversalLight(::UnityEngine::Light* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Light*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COMPONENTUTILITY_ISUNIVERSALLIGHT_OFFSET))(arg, nullptr);
		}

	};
}

