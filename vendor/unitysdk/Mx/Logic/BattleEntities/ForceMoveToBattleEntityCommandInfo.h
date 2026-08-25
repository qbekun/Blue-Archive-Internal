#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
class GroundNode;
namespace MX::Logic::Battles { class Battle; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Battles { class CharacterGroundNodeChangedEventArgs; }

#define MX_LOGIC_BATTLEENTITIES_FORCEMOVETOBATTLEENTITYCOMMANDINFO_GET_TARGETNODE_OFFSET UNITYSDK_OFFSET(0x118F990)
#define MX_LOGIC_BATTLEENTITIES_FORCEMOVETOBATTLEENTITYCOMMANDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x118F9B0)
#define MX_LOGIC_BATTLEENTITIES_FORCEMOVETOBATTLEENTITYCOMMANDINFO_RELEASELISTENER_OFFSET UNITYSDK_OFFSET(0x118FAF0)
#define MX_LOGIC_BATTLEENTITIES_FORCEMOVETOBATTLEENTITYCOMMANDINFO_TARGETCHARACTER_GROUNDNODECHANGED_OFFSET UNITYSDK_OFFSET(0x118FBC0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int ForceMoveToBattleEntityCommandInfo_TypeDefinitionIndex = 13290;

	class ForceMoveToBattleEntityCommandInfo : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::BattleEntity* targetEntity; // 0x48

		GroundNode* get_TargetNode()
		{
			return ((GroundNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVETOBATTLEENTITYCOMMANDINFO_GET_TARGETNODE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::System::Int32 arg3, ::System::Boolean arg4, ::System::Boolean arg5, ::System::Boolean arg6, ::UnityEngine::Vector2* arg7)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVETOBATTLEENTITYCOMMANDINFO_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void ReleaseListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVETOBATTLEENTITYCOMMANDINFO_RELEASELISTENER_OFFSET))(nullptr);
		}

		::System::Void TargetCharacter_GroundNodeChanged(::System::Object* arg, ::MX::Logic::Battles::CharacterGroundNodeChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::CharacterGroundNodeChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORCEMOVETOBATTLEENTITYCOMMANDINFO_TARGETCHARACTER_GROUNDNODECHANGED_OFFSET))(arg, arg2, nullptr);
		}

	};
}

