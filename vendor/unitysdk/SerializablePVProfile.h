#pragma once
#include "unitysdk.h"

namespace UnityEngine::Experimental::Rendering { class ProbeReferenceVolumeProfile; }

	inline static constexpr unsigned int SerializablePVProfile_TypeDefinitionIndex = 33822;

	class SerializablePVProfile : public Il2CppObject
	{
	public:
		::System::String* sceneGUID; // 0x10
		::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile* profile; // 0x18

	};

