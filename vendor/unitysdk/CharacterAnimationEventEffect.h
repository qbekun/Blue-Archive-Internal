#pragma once
#include "unitysdk.h"

class LifeType;

#define CHARACTERANIMATIONEVENTEFFECT_CORUNPARENTTIMELINETIMER_OFFSET UNITYSDK_OFFSET(0x20B1840)
#define CHARACTERANIMATIONEVENTEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x20B18D0)
#define CHARACTERANIMATIONEVENTEFFECT_CORUNDESTROYTIMER_OFFSET UNITYSDK_OFFSET(0x20B18E0)
#define CHARACTERANIMATIONEVENTEFFECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20B1980)
#define CHARACTERANIMATIONEVENTEFFECT_CORUNSYNCWITHPARENTTIMELINE_OFFSET UNITYSDK_OFFSET(0x20B19F0)
#define CHARACTERANIMATIONEVENTEFFECT_INITTIMER_OFFSET UNITYSDK_OFFSET(0x20B0520)

	inline static constexpr unsigned int CharacterAnimationEventEffect_TypeDefinitionIndex = 3584;

	class CharacterAnimationEventEffect : public Il2CppObject
	{
	public:
		LifeType* LifeMode; // 0x18
		::System::Single TimerTypeDuration; // 0x1C
		::System::Int32 ParentIndex; // 0x20
		::System::Boolean isDestroyQueuedButNotExecuted; // 0x24

		::System::Collections::IEnumerator* CoRunParentTimelineTimer()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONEVENTEFFECT_CORUNPARENTTIMELINETIMER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONEVENTEFFECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoRunDestroyTimer(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONEVENTEFFECT_CORUNDESTROYTIMER_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONEVENTEFFECT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoRunSyncWithParentTimeline()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONEVENTEFFECT_CORUNSYNCWITHPARENTTIMELINE_OFFSET))(nullptr);
		}

		::System::Void InitTimer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONEVENTEFFECT_INITTIMER_OFFSET))(nullptr);
		}

	};

