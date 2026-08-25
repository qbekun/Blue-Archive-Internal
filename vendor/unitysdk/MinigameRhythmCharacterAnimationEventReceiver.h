#pragma once
#include "unitysdk.h"

#define MINIGAMERHYTHMCHARACTERANIMATIONEVENTRECEIVER_AWAKE_OFFSET UNITYSDK_OFFSET(0xD16950)
#define MINIGAMERHYTHMCHARACTERANIMATIONEVENTRECEIVER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD16A60)
#define MINIGAMERHYTHMCHARACTERANIMATIONEVENTRECEIVER_PLAYANIMATIONFX_OFFSET UNITYSDK_OFFSET(0xD16A70)

	inline static constexpr unsigned int MinigameRhythmCharacterAnimationEventReceiver_TypeDefinitionIndex = 666;

	class MinigameRhythmCharacterAnimationEventReceiver : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* AnimationFXs; // 0x18

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMCHARACTERANIMATIONEVENTRECEIVER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMCHARACTERANIMATIONEVENTRECEIVER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayAnimationFx(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMCHARACTERANIMATIONEVENTRECEIVER_PLAYANIMATIONFX_OFFSET))(arg, nullptr);
		}

	};

