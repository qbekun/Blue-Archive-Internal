#pragma once
#include "../../../unitysdk.h"

class BlockedArea;
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Data { class BattleItemEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Battles { class GroupTag; }

#define MX_LOGIC_BATTLEENTITIES_BLOCKEDAREABATTLEITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x1133E60)
#define MX_LOGIC_BATTLEENTITIES_BLOCKEDAREABATTLEITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x1133E70)
#define MX_LOGIC_BATTLEENTITIES_BLOCKEDAREABATTLEITEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1133EC0)
#define MX_LOGIC_BATTLEENTITIES_BLOCKEDAREABATTLEITEM_EXPIRE_OFFSET UNITYSDK_OFFSET(0x1134520)
#define MX_LOGIC_BATTLEENTITIES_BLOCKEDAREABATTLEITEM_PROCESSRECOGNIZED_OFFSET UNITYSDK_OFFSET(0x1134540)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int BlockedAreaBattleItem_TypeDefinitionIndex = 13067;

	class BlockedAreaBattleItem : public ::Unity::ThrowStub
	{
	public:
		BlockedArea* blockedArea; // 0x198

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BLOCKEDAREABATTLEITEM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::EntityId* arg3, ::MX::Logic::Data::BattleItemEntityValue* arg4, ::MX::Logic::Skills::SkillSpecification* arg5, ::UnityEngine::Vector2* arg6, ::UnityEngine::Vector2* arg7, ::MX::Logic::Battles::GroupTag* arg8, ::System::Int32 arg9, ::System::Int32 arg10)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Data::BattleItemEntityValue*, ::MX::Logic::Skills::SkillSpecification*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::Battles::GroupTag*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BLOCKEDAREABATTLEITEM_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BLOCKEDAREABATTLEITEM_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Expire()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BLOCKEDAREABATTLEITEM_EXPIRE_OFFSET))(nullptr);
		}

		::System::Void ProcessRecognized(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_BLOCKEDAREABATTLEITEM_PROCESSRECOGNIZED_OFFSET))(arg, nullptr);
		}

	};
}

