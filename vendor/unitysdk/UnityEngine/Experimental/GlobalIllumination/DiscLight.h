#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Experimental::GlobalIllumination { class LightMode; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine::Experimental::GlobalIllumination { class LinearColor; }
namespace UnityEngine::Experimental::GlobalIllumination { class FalloffType; }

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int DiscLight_TypeDefinitionIndex = 31636;

	class DiscLight : public Il2CppObject
	{
	public:
		::System::Int32 instanceID; // 0x10
		::System::Boolean shadow; // 0x14
		::UnityEngine::Experimental::GlobalIllumination::LightMode* mode; // 0x15
		::UnityEngine::Vector3* position; // 0x18
		::UnityEngine::Quaternion* orientation; // 0x24
		::UnityEngine::Experimental::GlobalIllumination::LinearColor* color; // 0x34
		::UnityEngine::Experimental::GlobalIllumination::LinearColor* indirectColor; // 0x44
		::System::Single range; // 0x54
		::System::Single radius; // 0x58
		::UnityEngine::Experimental::GlobalIllumination::FalloffType* falloff; // 0x5C

	};
}

