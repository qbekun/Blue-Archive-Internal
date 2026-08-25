#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class JoyStick; }
namespace UnityEngine { class Vector2; }
namespace MX::MinigameShooting { class Character; }

#define MX_MINIGAMESHOOTING_PLAYERSTATEMACHINE_KEYBOARDDIRECTION_OFFSET UNITYSDK_OFFSET(0x1461620)
#define MX_MINIGAMESHOOTING_PLAYERSTATEMACHINE_GET_JOYSTICK_OFFSET UNITYSDK_OFFSET(0x1463140)
#define MX_MINIGAMESHOOTING_PLAYERSTATEMACHINE_SET_JOYSTICK_OFFSET UNITYSDK_OFFSET(0x1463150)
#define MX_MINIGAMESHOOTING_PLAYERSTATEMACHINE_ISKEYBOARDPRESSED_OFFSET UNITYSDK_OFFSET(0x1463160)
#define MX_MINIGAMESHOOTING_PLAYERSTATEMACHINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1463170)
#define MX_MINIGAMESHOOTING_PLAYERSTATEMACHINE_GETTARGET_OFFSET UNITYSDK_OFFSET(0x1463500)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int PlayerStateMachine_TypeDefinitionIndex = 15069;

	class PlayerStateMachine : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::JoyStick* _JoyStick_k__BackingField; // 0x40

		::UnityEngine::Vector2* KeyBoardDirection()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PLAYERSTATEMACHINE_KEYBOARDDIRECTION_OFFSET))(nullptr);
		}

		::MX::MinigameShooting::JoyStick* get_JoyStick()
		{
			return ((::MX::MinigameShooting::JoyStick*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PLAYERSTATEMACHINE_GET_JOYSTICK_OFFSET))(nullptr);
		}

		::System::Void set_JoyStick(::MX::MinigameShooting::JoyStick* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::JoyStick*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PLAYERSTATEMACHINE_SET_JOYSTICK_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsKeyBoardPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PLAYERSTATEMACHINE_ISKEYBOARDPRESSED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PLAYERSTATEMACHINE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::MinigameShooting::Character* GetTarget()
		{
			return ((::MX::MinigameShooting::Character*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PLAYERSTATEMACHINE_GETTARGET_OFFSET))(nullptr);
		}

	};
}

