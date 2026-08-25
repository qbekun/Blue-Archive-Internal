#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class LightStats; }

#define UNITYENGINE_RENDERING_UNIVERSAL_ILIGHT2DCULLRESULT_GET_VISIBLELIGHTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_ILIGHT2DCULLRESULT_GETLIGHTSTATSBYLAYER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_ILIGHT2DCULLRESULT_ISSCENELIT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ILight2DCullResult_TypeDefinitionIndex = 32469;

	class ILight2DCullResult : public Il2CppObject
	{
	public:
		Il2CppObject* get_visibleLights()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ILIGHT2DCULLRESULT_GET_VISIBLELIGHTS_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::LightStats* GetLightStatsByLayer(::System::Int32 arg)
		{
			return (return (::UnityEngine::Rendering::Universal::LightStats*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ILIGHT2DCULLRESULT_GETLIGHTSTATSBYLAYER_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSceneLit()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_ILIGHT2DCULLRESULT_ISSCENELIT_OFFSET))(nullptr);
		}

	};
}

