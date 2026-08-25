#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleItem; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Playables { class PlayableAsset; }
class PlayableAssetSelectionType;
namespace UnityEngine::Playables { class DirectorWrapMode; }
namespace MX::Visual::Battles { class BattleActorComponent; }
namespace MX::Logic::Battles { class BattleItemActivatedEventArgs; }
namespace MX::Logic::Battles { class BattleItemEffectEventArgs; }
namespace MX::Logic::Battles { class BattleItemRecognitionEventArgs; }
namespace MX::Logic::Battles { class BattleEntityRemovedEventArgs; }
class RandomRatePlayableAsset;

#define BATTLEITEMVISUAL_APPLYBATTLEITEMACTIVATED_OFFSET UNITYSDK_OFFSET(0x10A8930)
#define BATTLEITEMVISUAL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10A8940)
#define BATTLEITEMVISUAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x10A8B30)
#define BATTLEITEMVISUAL_UPDATE_OFFSET UNITYSDK_OFFSET(0x10A8D40)
#define BATTLEITEMVISUAL__APPLYBATTLEITEMEFFECTED_B__19_1_OFFSET UNITYSDK_OFFSET(0x10A8E20)
#define BATTLEITEMVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x10A8E40)
#define BATTLEITEMVISUAL_APPLYBATTLEITEMEFFECTED_OFFSET UNITYSDK_OFFSET(0x10A8E60)
#define BATTLEITEMVISUAL__APPLYBATTLEITEMDESTROYED_G__COAPPLYBATTLEITEMDESTROYED|20_0_OFFSET UNITYSDK_OFFSET(0x10A9140)
#define BATTLEITEMVISUAL_APPLYBATTLEITEMRECOGNIZED_OFFSET UNITYSDK_OFFSET(0x10A91D0)
#define BATTLEITEMVISUAL_PLAYTIMELINE_OFFSET UNITYSDK_OFFSET(0x10A89D0)
#define BATTLEITEMVISUAL__ONENABLE_B__16_0_OFFSET UNITYSDK_OFFSET(0x10A91E0)
#define BATTLEITEMVISUAL__APPLYBATTLEITEMDESTROYED_B__20_2_OFFSET UNITYSDK_OFFSET(0x10A9200)
#define BATTLEITEMVISUAL_RELEASE_OFFSET UNITYSDK_OFFSET(0x10A9210)
#define BATTLEITEMVISUAL_APPLYBATTLEITEMDESTROYED_OFFSET UNITYSDK_OFFSET(0x10A9540)
#define BATTLEITEMVISUAL__APPLYBATTLEITEMDESTROYED_B__20_1_OFFSET UNITYSDK_OFFSET(0x10A9640)
#define BATTLEITEMVISUAL__APPLYBATTLEITEMEFFECTED_B__19_0_OFFSET UNITYSDK_OFFSET(0x10A96B0)

	inline static constexpr unsigned int BattleItemVisual_TypeDefinitionIndex = 877;

	class BattleItemVisual : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::BattleItem* BattleItem; // 0x50
		::UnityEngine::Playables::PlayableDirector* playableDirector; // 0x58
		::UnityEngine::Playables::PlayableAsset* spawnTimeline; // 0x60
		::UnityEngine::Playables::PlayableAsset* idleTimeline; // 0x68
		Il2CppObject* interactionTimelines; // 0x70
		PlayableAssetSelectionType* PlayInteractionTimelineSelectionType; // 0x78
		::System::Boolean UninterruptedInteractionTimeline; // 0x7C
		::UnityEngine::Playables::PlayableAsset* destroyTimeline; // 0x80
		::System::Boolean DestroyTimelineDelayedPlayback; // 0x88
		::UnityEngine::Playables::DirectorWrapMode* idleTimelineWrapMode; // 0x8C
		Il2CppObject* lastStoppedAction; // 0x90
		::System::Boolean IsAttachedToTarget; // 0x98
		::System::Int32 interactionTimelineTotalRandomRate; // 0x9C
		::MX::Visual::Battles::BattleActorComponent* battleActorComponent; // 0xA0

		::System::Void ApplyBattleItemActivated(::MX::Logic::Battles::BattleItemActivatedEventArgs* arg, ::MX::Visual::Battles::BattleActorComponent* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::BattleItemActivatedEventArgs*, ::MX::Visual::Battles::BattleActorComponent*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEITEMVISUAL_APPLYBATTLEITEMACTIVATED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEITEMVISUAL_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Visual::Battles::BattleActorComponent* arg, ::MX::Logic::BattleEntities::BattleItem* arg2)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleActorComponent*, ::MX::Logic::BattleEntities::BattleItem*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEITEMVISUAL_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEITEMVISUAL_UPDATE_OFFSET))(nullptr);
		}

		::System::Void _ApplyBattleItemEffected_b__19_1(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEITEMVISUAL__APPLYBATTLEITEMEFFECTED_B__19_1_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEITEMVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ApplyBattleItemEffected(::MX::Logic::Battles::BattleItemEffectEventArgs* arg, ::MX::Visual::Battles::BattleActorComponent* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::BattleItemEffectEventArgs*, ::MX::Visual::Battles::BattleActorComponent*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEITEMVISUAL_APPLYBATTLEITEMEFFECTED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* _ApplyBattleItemDestroyed_g__CoApplyBattleItemDestroyed|20_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEITEMVISUAL__APPLYBATTLEITEMDESTROYED_G__COAPPLYBATTLEITEMDESTROYED|20_0_OFFSET))(nullptr);
		}

		::System::Void ApplyBattleItemRecognized(::MX::Logic::Battles::BattleItemRecognitionEventArgs* arg, ::MX::Visual::Battles::BattleActorComponent* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::BattleItemRecognitionEventArgs*, ::MX::Visual::Battles::BattleActorComponent*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEITEMVISUAL_APPLYBATTLEITEMRECOGNIZED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PlayTimeline(::UnityEngine::Playables::PlayableAsset* arg, ::UnityEngine::Playables::DirectorWrapMode* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::UnityEngine::Playables::DirectorWrapMode*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEITEMVISUAL_PLAYTIMELINE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void _OnEnable_b__16_0(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEITEMVISUAL__ONENABLE_B__16_0_OFFSET))(arg, nullptr);
		}

		::System::Void _ApplyBattleItemDestroyed_b__20_2(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEITEMVISUAL__APPLYBATTLEITEMDESTROYED_B__20_2_OFFSET))(arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEITEMVISUAL_RELEASE_OFFSET))(nullptr);
		}

		::System::Void ApplyBattleItemDestroyed(::MX::Logic::Battles::BattleEntityRemovedEventArgs* arg, ::MX::Visual::Battles::BattleActorComponent* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::BattleEntityRemovedEventArgs*, ::MX::Visual::Battles::BattleActorComponent*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEITEMVISUAL_APPLYBATTLEITEMDESTROYED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _ApplyBattleItemDestroyed_b__20_1(RandomRatePlayableAsset* arg)
		{
			return ((::System::Boolean(*)(RandomRatePlayableAsset*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEITEMVISUAL__APPLYBATTLEITEMDESTROYED_B__20_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ApplyBattleItemEffected_b__19_0(RandomRatePlayableAsset* arg)
		{
			return ((::System::Boolean(*)(RandomRatePlayableAsset*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEITEMVISUAL__APPLYBATTLEITEMEFFECTED_B__19_0_OFFSET))(arg, nullptr);
		}

	};

