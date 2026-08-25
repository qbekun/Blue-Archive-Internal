#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLEENTITIES_GROUNDPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x11C3E20)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int GroundPoint_TypeDefinitionIndex = 13346;

	class GroundPoint : public Il2CppObject
	{
	public:
		::System::Int32 TileX; // 0x28
		::System::Int32 TileY; // 0x2C
		::System::Single PositionHeight; // 0x30
		::UnityEngine::Vector2* Position; // 0x34
		::UnityEngine::Vector2* Direction; // 0x3C

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_GROUNDPOINT_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

