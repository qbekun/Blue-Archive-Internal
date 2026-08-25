#pragma once
#include "unitysdk.h"

namespace Unity::Mathematics { class float3; }

	inline static constexpr unsigned int Plane_TypeDefinitionIndex = 32762;

	class Plane : public Il2CppObject
	{
	public:
		::Unity::Mathematics::float3* normal; // 0x10
		::System::Single distanceToOrigin; // 0x1C

	};

