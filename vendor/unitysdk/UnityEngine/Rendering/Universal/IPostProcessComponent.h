#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_IPOSTPROCESSCOMPONENT_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_IPOSTPROCESSCOMPONENT_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int IPostProcessComponent_TypeDefinitionIndex = 32713;

	class IPostProcessComponent : public Il2CppObject
	{
	public:
		::System::Boolean IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_IPOSTPROCESSCOMPONENT_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Boolean IsTileCompatible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_IPOSTPROCESSCOMPONENT_ISTILECOMPATIBLE_OFFSET))(nullptr);
		}

	};
}

