#pragma once
#include "unitysdk.h"

namespace UnityEngine::Experimental::Rendering { class ProbeVolumeBakingProcessSettings; }

	inline static constexpr unsigned int SerializablePVBakeSettings_TypeDefinitionIndex = 33823;

	class SerializablePVBakeSettings : public Il2CppObject
	{
	public:
		::System::String* sceneGUID; // 0x10
		::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings* settings; // 0x18

	};

