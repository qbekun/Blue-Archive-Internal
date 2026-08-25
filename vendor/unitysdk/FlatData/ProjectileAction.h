#pragma once
#include "../unitysdk.h"

namespace FlatData { class ProjectileAction; }

namespace FlatData
{
	inline static constexpr unsigned int ProjectileAction_TypeDefinitionIndex = 9366;

	class ProjectileAction : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ProjectileAction* None; // 0x0
		::FlatData::ProjectileAction* Damage; // 0x0
		::FlatData::ProjectileAction* Heal; // 0x0

	};
}

