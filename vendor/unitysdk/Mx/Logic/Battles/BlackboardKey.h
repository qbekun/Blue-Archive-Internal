#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Data { class BlackboardKeyType; }
namespace MX::Logic::Battles { class BlackboardKey; }

#define MX_LOGIC_BATTLES_BLACKBOARDKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x126C6F0)
#define MX_LOGIC_BATTLES_BLACKBOARDKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x126C860)
#define MX_LOGIC_BATTLES_BLACKBOARDKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x126C970)
#define MX_LOGIC_BATTLES_BLACKBOARDKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x126C9A0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int BlackboardKey_TypeDefinitionIndex = 13997;

	class BlackboardKey : public Il2CppObject
	{
	public:
		::System::String* KeyString; // 0x10
		::MX::Logic::BattleEntities::EntityId* OwnerEntityId; // 0x18
		::MX::Logic::BattleEntities::EntityId* TargetEntityId; // 0x1C
		::MX::Logic::Data::BlackboardKeyType* KeyType; // 0x20

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BLACKBOARDKEY_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BLACKBOARDKEY_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::Data::BlackboardKeyType* arg3)
		{
			((::System::Void(*)(::System::String*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::BlackboardKeyType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BLACKBOARDKEY_.CTOR_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Battles::BlackboardKey* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::BlackboardKey*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BLACKBOARDKEY_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

