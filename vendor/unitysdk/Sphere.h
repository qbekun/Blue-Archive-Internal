#pragma once
#include "unitysdk.h"

namespace Unity::Mathematics { class float3; }

	inline static constexpr unsigned int Sphere_TypeDefinitionIndex = 32761;

	class Sphere : public Il2CppObject
	{
	public:
		::Unity::Mathematics::float3* center; // 0x10
		::System::Single radius; // 0x1C

	};

