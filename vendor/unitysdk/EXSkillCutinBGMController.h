#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AudioClip; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define EXSKILLCUTINBGMCONTROLLER_SET_BGMFAST_OFFSET UNITYSDK_OFFSET(0x204C570)
#define EXSKILLCUTINBGMCONTROLLER_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x204C580)
#define EXSKILLCUTINBGMCONTROLLER_SET_BGMSLOW_OFFSET UNITYSDK_OFFSET(0x204C640)
#define EXSKILLCUTINBGMCONTROLLER_SET_BGMNORMAL_OFFSET UNITYSDK_OFFSET(0x204C650)
#define EXSKILLCUTINBGMCONTROLLER_GET_BGMFAST_OFFSET UNITYSDK_OFFSET(0x204C660)
#define EXSKILLCUTINBGMCONTROLLER_SET_ISCHANGEDSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x204C670)
#define EXSKILLCUTINBGMCONTROLLER_GET_BGMNORMAL_OFFSET UNITYSDK_OFFSET(0x204C680)
#define EXSKILLCUTINBGMCONTROLLER_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x204C690)
#define EXSKILLCUTINBGMCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x204C990)
#define EXSKILLCUTINBGMCONTROLLER_GET_BGMSLOW_OFFSET UNITYSDK_OFFSET(0x204C9A0)
#define EXSKILLCUTINBGMCONTROLLER_GET_ISCHANGEDSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x204C9B0)

	inline static constexpr unsigned int EXSkillCutinBGMController_TypeDefinitionIndex = 3296;

	class EXSkillCutinBGMController : public Il2CppObject
	{
	public:
		::UnityEngine::AudioClip* _BGMSlow_k__BackingField; // 0x10
		::UnityEngine::AudioClip* _BGMNormal_k__BackingField; // 0x18
		::UnityEngine::AudioClip* _BGMFast_k__BackingField; // 0x20
		::System::Boolean _IsChangedSnapshot_k__BackingField; // 0x28

		::System::Void set_BGMFast(::UnityEngine::AudioClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCUTINBGMCONTROLLER_SET_BGMFAST_OFFSET))(arg, nullptr);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCUTINBGMCONTROLLER_ONGRAPHSTOP_OFFSET))(arg, nullptr);
		}

		::System::Void set_BGMSlow(::UnityEngine::AudioClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCUTINBGMCONTROLLER_SET_BGMSLOW_OFFSET))(arg, nullptr);
		}

		::System::Void set_BGMNormal(::UnityEngine::AudioClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCUTINBGMCONTROLLER_SET_BGMNORMAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AudioClip* get_BGMFast()
		{
			return ((::UnityEngine::AudioClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCUTINBGMCONTROLLER_GET_BGMFAST_OFFSET))(nullptr);
		}

		::System::Void set_IsChangedSnapshot(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCUTINBGMCONTROLLER_SET_ISCHANGEDSNAPSHOT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AudioClip* get_BGMNormal()
		{
			return ((::UnityEngine::AudioClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCUTINBGMCONTROLLER_GET_BGMNORMAL_OFFSET))(nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCUTINBGMCONTROLLER_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCUTINBGMCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::AudioClip* get_BGMSlow()
		{
			return ((::UnityEngine::AudioClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCUTINBGMCONTROLLER_GET_BGMSLOW_OFFSET))(nullptr);
		}

		::System::Boolean get_IsChangedSnapshot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EXSKILLCUTINBGMCONTROLLER_GET_ISCHANGEDSNAPSHOT_OFFSET))(nullptr);
		}

	};

