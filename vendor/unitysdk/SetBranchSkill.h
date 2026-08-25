#pragma once
#include "unitysdk.h"

class CharacterVisual;
namespace UnityEngine::Timeline { class TimelineAsset; }

#define SETBRANCHSKILL_.CTOR_OFFSET UNITYSDK_OFFSET(0x13C21D0)
#define SETBRANCHSKILL_FILLEMPTYBINDINGS_OFFSET UNITYSDK_OFFSET(0x13C22A0)
#define SETBRANCHSKILL_APPLYDEFAULTMUTES_OFFSET UNITYSDK_OFFSET(0x13C27E0)
#define SETBRANCHSKILL_INITMUTESETTINGS_OFFSET UNITYSDK_OFFSET(0x13C2C30)
#define SETBRANCHSKILL_AWAKE_OFFSET UNITYSDK_OFFSET(0x13C2FA0)

	inline static constexpr unsigned int SetBranchSkill_TypeDefinitionIndex = 1040;

	class SetBranchSkill : public Il2CppObject
	{
	public:
		Il2CppObject* MuteSettingList; // 0x18
		Il2CppObject* BranchTimelineList; // 0x20
		Il2CppObject* _muteSettings; // 0x28
		CharacterVisual* _characterVisual; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SETBRANCHSKILL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void FillEmptyBindings()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SETBRANCHSKILL_FILLEMPTYBINDINGS_OFFSET))(nullptr);
		}

		::System::Void ApplyDefaultMutes(::UnityEngine::Timeline::TimelineAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TimelineAsset*, ::PVOID))((::PBYTE)hIl2Cpp + SETBRANCHSKILL_APPLYDEFAULTMUTES_OFFSET))(arg, nullptr);
		}

		::System::Void InitMuteSettings()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SETBRANCHSKILL_INITMUTESETTINGS_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SETBRANCHSKILL_AWAKE_OFFSET))(nullptr);
		}

	};

