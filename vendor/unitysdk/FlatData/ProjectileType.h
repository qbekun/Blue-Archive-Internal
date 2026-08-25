#pragma once
#include "../unitysdk.h"

namespace FlatData { class ProjectileType; }

namespace FlatData
{
	inline static constexpr unsigned int ProjectileType_TypeDefinitionIndex = 9362;

	class ProjectileType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ProjectileType* Guided; // 0x0
		::FlatData::ProjectileType* Ground; // 0x0
		::FlatData::ProjectileType* GuidedExplosion; // 0x0
		::FlatData::ProjectileType* GroundConstDistance; // 0x0
		::FlatData::ProjectileType* AirConstDistance; // 0x0

	};
}

