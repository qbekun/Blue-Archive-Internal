#pragma once
#include "unitysdk.h"

namespace Unity::Mathematics { class float3; }
namespace Unity::Mathematics { class float2; }

	inline static constexpr unsigned int PrePunctualLight_TypeDefinitionIndex = 32855;

	class PrePunctualLight : public Il2CppObject
	{
	public:
		::Unity::Mathematics::float3* posVS; // 0x10
		::System::Single radius; // 0x1C
		::System::Single minDist; // 0x20
		::Unity::Mathematics::float2* screenPos; // 0x24
		::System::UInt16 visLightIndex; // 0x2C

	};

