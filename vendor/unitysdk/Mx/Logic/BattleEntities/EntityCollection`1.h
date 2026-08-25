#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityIdComparer; }
namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLEENTITIES_ENTITYCOLLECTION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_ENTITYCOLLECTION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_ENTITYCOLLECTION`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_ENTITYCOLLECTION`1_CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_ENTITYCOLLECTION`1_FIND_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int EntityCollection`1_TypeDefinitionIndex = 13267;

	class EntityCollection`1 : public ::System::Xml::Schema::Datatype_boolean
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYCOLLECTION`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityIdComparer* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityIdComparer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYCOLLECTION`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYCOLLECTION`1_ADD_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYCOLLECTION`1_CONTAINS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Find(::MX::Logic::BattleEntities::EntityId* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYCOLLECTION`1_FIND_OFFSET))(arg, nullptr);
		}

	};
}

