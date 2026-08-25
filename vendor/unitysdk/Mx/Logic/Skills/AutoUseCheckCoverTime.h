#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
class AutoUseRuleDAO;
namespace MX::Logic::BattleEntities { class ActionChangedEventArgs; }
namespace MX::Logic::Battles { class CoverStateChangedEventArgs; }
namespace MX::Logic::Battles { class BattleEntitySpawnedEventArgs; }

#define MX_LOGIC_SKILLS_AUTOUSECHECKCOVERTIME_.CTOR_OFFSET UNITYSDK_OFFSET(0x13E4470)
#define MX_LOGIC_SKILLS_AUTOUSECHECKCOVERTIME_CHECKCONDITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x13E4930)
#define MX_LOGIC_SKILLS_AUTOUSECHECKCOVERTIME__CHECKCONDITIONINTERNAL_B__6_0_OFFSET UNITYSDK_OFFSET(0x13E4BD0)
#define MX_LOGIC_SKILLS_AUTOUSECHECKCOVERTIME_COCHECKCOVERFRAMEREMAINED_OFFSET UNITYSDK_OFFSET(0x13E48C0)
#define MX_LOGIC_SKILLS_AUTOUSECHECKCOVERTIME_CHARACTER_ACTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x13E4CA0)
#define MX_LOGIC_SKILLS_AUTOUSECHECKCOVERTIME_CHARACTER_COVERSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x13E4E40)
#define MX_LOGIC_SKILLS_AUTOUSECHECKCOVERTIME_RESETCONDITION_OFFSET UNITYSDK_OFFSET(0x13E4F60)
#define MX_LOGIC_SKILLS_AUTOUSECHECKCOVERTIME_BATTLE_BATTLEENTITYSPAWNED_OFFSET UNITYSDK_OFFSET(0x13E5120)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int AutoUseCheckCoverTime_TypeDefinitionIndex = 14572;

	class AutoUseCheckCoverTime : public ::MX::AppSystem::ServiceLocator::AppServiceRegistry
	{
	public:
		::System::Int64 coverElapsedFrame; // 0x78
		Il2CppObject* coverFrameRemainedDictionary; // 0x80

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::System::String* str, AutoUseRuleDAO* arg3, ::System::Int32 arg4, ::System::Boolean arg5, ::System::Boolean arg6)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::System::String*, AutoUseRuleDAO*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKCOVERTIME_.CTOR_OFFSET))(arg, arg2, str, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean CheckConditionInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKCOVERTIME_CHECKCONDITIONINTERNAL_OFFSET))(nullptr);
		}

		::System::Boolean _CheckConditionInternal_b__6_0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKCOVERTIME__CHECKCONDITIONINTERNAL_B__6_0_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoCheckCoverFrameRemained()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKCOVERTIME_COCHECKCOVERFRAMEREMAINED_OFFSET))(nullptr);
		}

		::System::Void Character_ActionChanged(::System::Object* arg, ::MX::Logic::BattleEntities::ActionChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::ActionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKCOVERTIME_CHARACTER_ACTIONCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Character_CoverStateChanged(::System::Object* arg, ::MX::Logic::Battles::CoverStateChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::CoverStateChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKCOVERTIME_CHARACTER_COVERSTATECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ResetCondition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKCOVERTIME_RESETCONDITION_OFFSET))(nullptr);
		}

		::System::Void Battle_BattleEntitySpawned(::System::Object* arg, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_AUTOUSECHECKCOVERTIME_BATTLE_BATTLEENTITYSPAWNED_OFFSET))(arg, arg2, nullptr);
		}

	};
}

