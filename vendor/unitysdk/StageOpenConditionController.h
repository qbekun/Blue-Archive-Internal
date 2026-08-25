#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace FlatData { class ScenarioModeTypes; }
namespace MX::Data { class MiniGameDefenseStageInfo; }
namespace FlatData { class ScenarioModeSubTypes; }
namespace MX::Data { class CampaignStageInfo; }

#define STAGEOPENCONDITIONCONTROLLER_GET_OPENEDCLIP_OFFSET UNITYSDK_OFFSET(0xB0C780)
#define STAGEOPENCONDITIONCONTROLLER_GET_NEEDDIRECTING_OFFSET UNITYSDK_OFFSET(0xB0C790)
#define STAGEOPENCONDITIONCONTROLLER_CHECKFORWEEKDUNGEON_OFFSET UNITYSDK_OFFSET(0xB0C7A0)
#define STAGEOPENCONDITIONCONTROLLER_CHECKFORSCHOOLDUNGEON_OFFSET UNITYSDK_OFFSET(0xB0CB70)
#define STAGEOPENCONDITIONCONTROLLER_PREPAREANIMATION_OFFSET UNITYSDK_OFFSET(0xB0C9F0)
#define STAGEOPENCONDITIONCONTROLLER_CHECKFORSTORY_OFFSET UNITYSDK_OFFSET(0xB0CDC0)
#define STAGEOPENCONDITIONCONTROLLER_CHECKFORMINIGAMEDEFENSESTAGE_OFFSET UNITYSDK_OFFSET(0xB0D0C0)
#define STAGEOPENCONDITIONCONTROLLER_SET_NEEDDIRECTING_OFFSET UNITYSDK_OFFSET(0xB0D4D0)
#define STAGEOPENCONDITIONCONTROLLER_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0xB0D4E0)
#define STAGEOPENCONDITIONCONTROLLER_GET_UNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0xB0D5D0)
#define STAGEOPENCONDITIONCONTROLLER_PLAYOPENEDANIMATION_OFFSET UNITYSDK_OFFSET(0xB0D5E0)
#define STAGEOPENCONDITIONCONTROLLER_GET_UNLOCKCLIP_OFFSET UNITYSDK_OFFSET(0xB0D6A0)
#define STAGEOPENCONDITIONCONTROLLER_CHECKFORSTORYCHAPTER_OFFSET UNITYSDK_OFFSET(0xB0D6B0)
#define STAGEOPENCONDITIONCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xB0DBC0)
#define STAGEOPENCONDITIONCONTROLLER_CHANGEUNLOCKANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0xB0DBD0)
#define STAGEOPENCONDITIONCONTROLLER_CHECKFORMAINSTORY_OFFSET UNITYSDK_OFFSET(0xB0DA90)
#define STAGEOPENCONDITIONCONTROLLER_CHECKFORCAMPAIGN_OFFSET UNITYSDK_OFFSET(0xB0DCA0)
#define STAGEOPENCONDITIONCONTROLLER_CHECKFORSTORYVOLUME_OFFSET UNITYSDK_OFFSET(0xB0E240)

	inline static constexpr unsigned int StageOpenConditionController_TypeDefinitionIndex = 8206;

	class StageOpenConditionController : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* unlockAnimation; // 0x18
		::UnityEngine::AnimationClip* unlockClip; // 0x20
		::UnityEngine::AnimationClip* openedClip; // 0x28
		::System::Boolean _NeedDirecting_k__BackingField; // 0x30
		::System::Action* onUnlockAnimationPlayed; // 0x38

		::UnityEngine::AnimationClip* get_OpenedClip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEOPENCONDITIONCONTROLLER_GET_OPENEDCLIP_OFFSET))(nullptr);
		}

		::System::Boolean get_NeedDirecting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEOPENCONDITIONCONTROLLER_GET_NEEDDIRECTING_OFFSET))(nullptr);
		}

		::System::Void CheckForWeekDungeon(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + STAGEOPENCONDITIONCONTROLLER_CHECKFORWEEKDUNGEON_OFFSET))(arg, nullptr);
		}

		::System::Void CheckForSchoolDungeon(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + STAGEOPENCONDITIONCONTROLLER_CHECKFORSCHOOLDUNGEON_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareAnimation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + STAGEOPENCONDITIONCONTROLLER_PREPAREANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void CheckForStory(::System::Int64 arg, ::FlatData::ScenarioModeTypes* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, ::FlatData::ScenarioModeTypes*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + STAGEOPENCONDITIONCONTROLLER_CHECKFORSTORY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void CheckForMinigameDefenseStage(::MX::Data::MiniGameDefenseStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::MiniGameDefenseStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + STAGEOPENCONDITIONCONTROLLER_CHECKFORMINIGAMEDEFENSESTAGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_NeedDirecting(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + STAGEOPENCONDITIONCONTROLLER_SET_NEEDDIRECTING_OFFSET))(arg, nullptr);
		}

		::System::Single PlayAnimation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEOPENCONDITIONCONTROLLER_PLAYANIMATION_OFFSET))(nullptr);
		}

		::UnityEngine::Animation* get_UnlockAnimation()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEOPENCONDITIONCONTROLLER_GET_UNLOCKANIMATION_OFFSET))(nullptr);
		}

		::System::Void PlayOpenedAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEOPENCONDITIONCONTROLLER_PLAYOPENEDANIMATION_OFFSET))(nullptr);
		}

		::UnityEngine::AnimationClip* get_UnlockClip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEOPENCONDITIONCONTROLLER_GET_UNLOCKCLIP_OFFSET))(nullptr);
		}

		::System::Void CheckForStoryChapter(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg2, ::System::Int64 arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + STAGEOPENCONDITIONCONTROLLER_CHECKFORSTORYCHAPTER_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEOPENCONDITIONCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ChangeUnlockAnimationClip(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + STAGEOPENCONDITIONCONTROLLER_CHANGEUNLOCKANIMATIONCLIP_OFFSET))(str, nullptr);
		}

		::System::Void CheckForMainStory(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + STAGEOPENCONDITIONCONTROLLER_CHECKFORMAINSTORY_OFFSET))(str, arg, nullptr);
		}

		::System::Void CheckForCampaign(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + STAGEOPENCONDITIONCONTROLLER_CHECKFORCAMPAIGN_OFFSET))(arg, nullptr);
		}

		::System::Void CheckForStoryVolume(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg2, ::System::Int64 arg3, ::System::DateTime* arg4)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + STAGEOPENCONDITIONCONTROLLER_CHECKFORSTORYVOLUME_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

