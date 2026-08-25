#pragma once
#include "../../unitysdk.h"

class UITexture;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }

#define MX_MINIGAMESHOOTING_JOYSTICK_GET_AXISX_OFFSET UNITYSDK_OFFSET(0x1480070)
#define MX_MINIGAMESHOOTING_JOYSTICK_.CTOR_OFFSET UNITYSDK_OFFSET(0x14800C0)
#define MX_MINIGAMESHOOTING_JOYSTICK_GET_POWER_OFFSET UNITYSDK_OFFSET(0x14800D0)
#define MX_MINIGAMESHOOTING_JOYSTICK_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1480250)
#define MX_MINIGAMESHOOTING_JOYSTICK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x14803B0)
#define MX_MINIGAMESHOOTING_JOYSTICK_AWAKE_OFFSET UNITYSDK_OFFSET(0x1480430)
#define MX_MINIGAMESHOOTING_JOYSTICK_INPUTPOSITIONTOWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1480500)
#define MX_MINIGAMESHOOTING_JOYSTICK_UPDATE_OFFSET UNITYSDK_OFFSET(0x1480600)
#define MX_MINIGAMESHOOTING_JOYSTICK_GET_AXISY_OFFSET UNITYSDK_OFFSET(0x1480200)
#define MX_MINIGAMESHOOTING_JOYSTICK_GET_ISCENTER_OFFSET UNITYSDK_OFFSET(0x1480C30)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int JoyStick_TypeDefinitionIndex = 15179;

	class JoyStick : public Il2CppObject
	{
	public:
		UITexture* CenterStick; // 0x18
		UITexture* BackGroundStick; // 0x20
		::UnityEngine::GameObject* Deco; // 0x28
		::System::Single radius; // 0x30
		::System::Single limitRadius; // 0x34

		::System::Single get_AxisX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_JOYSTICK_GET_AXISX_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_JOYSTICK_.CTOR_OFFSET))(nullptr);
		}

		::System::Single get_Power()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_JOYSTICK_GET_POWER_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Direction()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_JOYSTICK_GET_DIRECTION_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_JOYSTICK_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_JOYSTICK_AWAKE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* InputPositionToWorldPosition(::UnityEngine::Vector3* arg)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_JOYSTICK_INPUTPOSITIONTOWORLDPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_JOYSTICK_UPDATE_OFFSET))(nullptr);
		}

		::System::Single get_AxisY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_JOYSTICK_GET_AXISY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCenter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_JOYSTICK_GET_ISCENTER_OFFSET))(nullptr);
		}

	};
}

