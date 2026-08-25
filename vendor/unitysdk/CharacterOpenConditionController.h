#pragma once
#include "unitysdk.h"

class CharacterOpenConditionType;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
class CharacterObject;

#define CHARACTEROPENCONDITIONCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x22BB710)
#define CHARACTEROPENCONDITIONCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x22BB770)
#define CHARACTEROPENCONDITIONCONTROLLER_CHECKFORCHARACTER_OFFSET UNITYSDK_OFFSET(0x22BB780)
#define CHARACTEROPENCONDITIONCONTROLLER_CO_DIRECTING_OFFSET UNITYSDK_OFFSET(0x22BBA70)

	inline static constexpr unsigned int CharacterOpenConditionController_TypeDefinitionIndex = 4788;

	class CharacterOpenConditionController : public Il2CppObject
	{
	public:
		CharacterOpenConditionType* type; // 0x18
		::UnityEngine::GameObject* lockCover; // 0x20
		::UnityEngine::Animation* anim; // 0x28

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROPENCONDITIONCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROPENCONDITIONCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CheckForCharacter(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROPENCONDITIONCONTROLLER_CHECKFORCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_Directing()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTEROPENCONDITIONCONTROLLER_CO_DIRECTING_OFFSET))(nullptr);
		}

	};

