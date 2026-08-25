#pragma once
#include "unitysdk.h"

namespace Unity::Mathematics { class float3; }

	inline static constexpr unsigned int Cone_TypeDefinitionIndex = 32760;

	class Cone : public Il2CppObject
	{
	public:
		::Unity::Mathematics::float3* tip; // 0x10
		::Unity::Mathematics::float3* direction; // 0x1C
		::System::Single height; // 0x28
		::System::Single radius; // 0x2C

	};

