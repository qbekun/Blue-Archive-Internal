#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::BattleEntities { class SkillCommandInfo; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::BattleEntities { class SkillCommandInput; }

#define MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINFO_AUTOTARGETED_OFFSET UNITYSDK_OFFSET(0x114A000)
#define MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x114A170)
#define MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINFO_GET_TARGETDIRECTION2D_OFFSET UNITYSDK_OFFSET(0x114A190)
#define MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINFO_SET_TARGETDIRECTION2D_OFFSET UNITYSDK_OFFSET(0x114A280)
#define MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINFO_SET_TARGETBATTLEENTITY_OFFSET UNITYSDK_OFFSET(0x114A340)
#define MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINFO_GET_MAININPUT_OFFSET UNITYSDK_OFFSET(0x114A220)
#define MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINFO_GET_AUTOTARGETING_OFFSET UNITYSDK_OFFSET(0x114A410)
#define MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINFO_SET_AUTOTARGETING_OFFSET UNITYSDK_OFFSET(0x114A480)
#define MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINFO_SET_TARGETPOSITION2D_OFFSET UNITYSDK_OFFSET(0x114A530)
#define MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINFO_FROMINPUTS_OFFSET UNITYSDK_OFFSET(0x114A5F0)
#define MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINFO_GET_TARGETPOSITION2D_OFFSET UNITYSDK_OFFSET(0x114AC60)
#define MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINFO_GET_TARGETBATTLEENTITY_OFFSET UNITYSDK_OFFSET(0x114ACF0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int SkillCommandInfo_TypeDefinitionIndex = 13121;

	class SkillCommandInfo : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::SkillSlot* SkillToUse; // 0x10
		Il2CppObject* Inputs; // 0x18

		::MX::Logic::BattleEntities::SkillCommandInfo* AutoTargeted(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::SkillSlot* arg2)
		{
			return ((::MX::Logic::BattleEntities::SkillCommandInfo*(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINFO_AUTOTARGETED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINFO_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_TargetDirection2D()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINFO_GET_TARGETDIRECTION2D_OFFSET))(nullptr);
		}

		::System::Void set_TargetDirection2D(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINFO_SET_TARGETDIRECTION2D_OFFSET))(arg, nullptr);
		}

		::System::Void set_TargetBattleEntity(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINFO_SET_TARGETBATTLEENTITY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::SkillCommandInput* get_MainInput()
		{
			return ((::MX::Logic::BattleEntities::SkillCommandInput*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINFO_GET_MAININPUT_OFFSET))(nullptr);
		}

		::System::Boolean get_AutoTargeting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINFO_GET_AUTOTARGETING_OFFSET))(nullptr);
		}

		::System::Void set_AutoTargeting(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINFO_SET_AUTOTARGETING_OFFSET))(arg, nullptr);
		}

		::System::Void set_TargetPosition2D(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINFO_SET_TARGETPOSITION2D_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::SkillCommandInfo* FromInputs(::MX::Logic::BattleEntities::BattleEntity* arg, Il2CppObject* arg2, ::MX::Logic::BattleEntities::SkillSlot* arg3)
		{
			return ((::MX::Logic::BattleEntities::SkillCommandInfo*(*)(::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINFO_FROMINPUTS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector2* get_TargetPosition2D()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINFO_GET_TARGETPOSITION2D_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_TargetBattleEntity()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SKILLCOMMANDINFO_GET_TARGETBATTLEENTITY_OFFSET))(nullptr);
		}

	};
}

