#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Color&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_IDEBUGDISPLAYSETTINGSQUERY_TRYGETSCREENCLEARCOLOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_IDEBUGDISPLAYSETTINGSQUERY_GET_ISLIGHTINGACTIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_IDEBUGDISPLAYSETTINGSQUERY_GET_AREANYSETTINGSACTIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_IDEBUGDISPLAYSETTINGSQUERY_GET_ISPOSTPROCESSINGALLOWED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int IDebugDisplaySettingsQuery_TypeDefinitionIndex = 32591;

	class IDebugDisplaySettingsQuery : public Il2CppObject
	{
	public:
		::System::Boolean TryGetScreenClearColor(::UnityEngine::Color&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_IDEBUGDISPLAYSETTINGSQUERY_TRYGETSCREENCLEARCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLightingActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_IDEBUGDISPLAYSETTINGSQUERY_GET_ISLIGHTINGACTIVE_OFFSET))(nullptr);
		}

		::System::Boolean get_AreAnySettingsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_IDEBUGDISPLAYSETTINGSQUERY_GET_AREANYSETTINGSACTIVE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPostProcessingAllowed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_IDEBUGDISPLAYSETTINGSQUERY_GET_ISPOSTPROCESSINGALLOWED_OFFSET))(nullptr);
		}

	};
}

