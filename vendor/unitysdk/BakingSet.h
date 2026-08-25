#pragma once
#include "unitysdk.h"

namespace UnityEngine::Experimental::Rendering { class ProbeVolumeBakingProcessSettings; }
namespace UnityEngine::Experimental::Rendering { class ProbeReferenceVolumeProfile; }

#define BAKINGSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F8E580)

	inline static constexpr unsigned int BakingSet_TypeDefinitionIndex = 33824;

	class BakingSet : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		Il2CppObject* sceneGUIDs; // 0x18
		::UnityEngine::Experimental::Rendering::ProbeVolumeBakingProcessSettings* settings; // 0x20
		::UnityEngine::Experimental::Rendering::ProbeReferenceVolumeProfile* profile; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKINGSET_.CTOR_OFFSET))(nullptr);
		}

	};

