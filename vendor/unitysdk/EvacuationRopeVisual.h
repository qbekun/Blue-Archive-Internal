#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
class CharacterVisual;
namespace UnityEngine { class Vector3; }

#define EVACUATIONROPEVISUAL_GET_ROPEANIMATOR_OFFSET UNITYSDK_OFFSET(0x13BB530)
#define EVACUATIONROPEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x13BB540)
#define EVACUATIONROPEVISUAL_ATTATCH_OFFSET UNITYSDK_OFFSET(0x13BB550)
#define EVACUATIONROPEVISUAL_FINISHSWING_OFFSET UNITYSDK_OFFSET(0x13BB6F0)
#define EVACUATIONROPEVISUAL_SET_ISATTATCHED_OFFSET UNITYSDK_OFFSET(0x13BB910)
#define EVACUATIONROPEVISUAL_GET_ISATTATCHED_OFFSET UNITYSDK_OFFSET(0x13BB920)
#define EVACUATIONROPEVISUAL_GET_ATTATCHPOINT_OFFSET UNITYSDK_OFFSET(0x13BB930)
#define EVACUATIONROPEVISUAL_SETCHARACTER_OFFSET UNITYSDK_OFFSET(0x13BB010)
#define EVACUATIONROPEVISUAL_GET_SHOULDCHARACTERATTATCH_OFFSET UNITYSDK_OFFSET(0x13BB940)
#define EVACUATIONROPEVISUAL_COATTACH_OFFSET UNITYSDK_OFFSET(0x13BB670)
#define EVACUATIONROPEVISUAL_SET_SHOULDCHARACTERATTATCH_OFFSET UNITYSDK_OFFSET(0x13BB970)

	inline static constexpr unsigned int EvacuationRopeVisual_TypeDefinitionIndex = 1014;

	class EvacuationRopeVisual : public Il2CppObject
	{
	public:
		::UnityEngine::Animator* animator; // 0x50
		::UnityEngine::Transform* attatchPoint; // 0x58
		::System::Boolean _ShouldCharacterAttatch_k__BackingField; // 0x60
		::System::Boolean _IsAttatched_k__BackingField; // 0x61
		CharacterVisual* characterVisual; // 0x68

		::UnityEngine::Animator* get_RopeAnimator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVACUATIONROPEVISUAL_GET_ROPEANIMATOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVACUATIONROPEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Attatch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVACUATIONROPEVISUAL_ATTATCH_OFFSET))(nullptr);
		}

		::System::Void FinishSwing(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVACUATIONROPEVISUAL_FINISHSWING_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsAttatched(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVACUATIONROPEVISUAL_SET_ISATTATCHED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsAttatched()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVACUATIONROPEVISUAL_GET_ISATTATCHED_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_AttatchPoint()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVACUATIONROPEVISUAL_GET_ATTATCHPOINT_OFFSET))(nullptr);
		}

		::System::Void SetCharacter(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + EVACUATIONROPEVISUAL_SETCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ShouldCharacterAttatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVACUATIONROPEVISUAL_GET_SHOULDCHARACTERATTATCH_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoAttach(::UnityEngine::Vector3* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + EVACUATIONROPEVISUAL_COATTACH_OFFSET))(arg, nullptr);
		}

		::System::Void set_ShouldCharacterAttatch(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVACUATIONROPEVISUAL_SET_SHOULDCHARACTERATTATCH_OFFSET))(arg, nullptr);
		}

	};

