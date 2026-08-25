#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::Actions { class ActionState; }

#define FORMCONVERSIONRELEASECHARACTERVISUAL_PROCESSRELEASEFORMACTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x13BC310)
#define FORMCONVERSIONRELEASECHARACTERVISUAL_CHECKCOMMANDINSTANTMOVEPOSITIONRESET_OFFSET UNITYSDK_OFFSET(0x13BC600)
#define FORMCONVERSIONRELEASECHARACTERVISUAL_SETFORMCONVERSIONIDLEMOTIONINBATTLEFINISHED_OFFSET UNITYSDK_OFFSET(0x13BC610)
#define FORMCONVERSIONRELEASECHARACTERVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x13BC9B0)
#define FORMCONVERSIONRELEASECHARACTERVISUAL_PROCESSANIMATORSKIP_OFFSET UNITYSDK_OFFSET(0x13BC9C0)

	inline static constexpr unsigned int FormConversionReleaseCharacterVisual_TypeDefinitionIndex = 1016;

	class FormConversionReleaseCharacterVisual : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* FormConversionReleasePlayableAssetList; // 0x2A8
		::MX::Logic::BattleEntities::SkillSlot* FormConversionSkill; // 0x2B0

		::System::Void ProcessReleaseFormActionChanged(bool&* arg)
		{
			((::System::Void(*)(bool&*, ::PVOID))((::PBYTE)hIl2Cpp + FORMCONVERSIONRELEASECHARACTERVISUAL_PROCESSRELEASEFORMACTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void CheckCommandInstantMovePositionReset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMCONVERSIONRELEASECHARACTERVISUAL_CHECKCOMMANDINSTANTMOVEPOSITIONRESET_OFFSET))(nullptr);
		}

		::System::Void SetFormConversionIdleMotionInBattleFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMCONVERSIONRELEASECHARACTERVISUAL_SETFORMCONVERSIONIDLEMOTIONINBATTLEFINISHED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMCONVERSIONRELEASECHARACTERVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ProcessAnimatorSkip(::MX::Logic::BattleEntities::BehaviorType* arg, ::MX::Logic::Actions::ActionState* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BehaviorType*, ::MX::Logic::Actions::ActionState*, ::PVOID))((::PBYTE)hIl2Cpp + FORMCONVERSIONRELEASECHARACTERVISUAL_PROCESSANIMATORSKIP_OFFSET))(arg, arg2, nullptr);
		}

	};

