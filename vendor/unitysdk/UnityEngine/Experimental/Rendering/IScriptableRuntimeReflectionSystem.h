#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_EXPERIMENTAL_RENDERING_ISCRIPTABLERUNTIMEREFLECTIONSYSTEM_TICKREALTIMEPROBES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int IScriptableRuntimeReflectionSystem_TypeDefinitionIndex = 31648;

	class IScriptableRuntimeReflectionSystem : public Il2CppObject
	{
	public:
		::System::Boolean TickRealtimeProbes()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_ISCRIPTABLERUNTIMEREFLECTIONSYSTEM_TICKREALTIMEPROBES_OFFSET))(nullptr);
		}

	};
}

