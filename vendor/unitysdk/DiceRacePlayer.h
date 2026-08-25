#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animator; }
namespace FlatData { class AnimatorData; }
namespace UnityEngine { class Vector3; }
class DiceAnimatorState;
namespace MX::Data { class AnimatorData; }
namespace UnityEngine { class Quaternion; }

#define DICERACEPLAYER_MOVE_OFFSET UNITYSDK_OFFSET(0x23D5AF0)
#define DICERACEPLAYER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x23D6700)
#define DICERACEPLAYER_INITDICERACEANIMATORSTATEDATA_OFFSET UNITYSDK_OFFSET(0x23D67C0)
#define DICERACEPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x23D68E0)
#define DICERACEPLAYER_PLAYANI_OFFSET UNITYSDK_OFFSET(0x23D3EB0)
#define DICERACEPLAYER_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x23D6780)
#define DICERACEPLAYER_SETPOSITIONROTATION_OFFSET UNITYSDK_OFFSET(0x23D56B0)
#define DICERACEPLAYER_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x23D6970)
#define DICERACEPLAYER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x23D50E0)
#define DICERACEPLAYER_SETDATA_OFFSET UNITYSDK_OFFSET(0x23D56A0)
#define DICERACEPLAYER_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x23D6740)
#define DICERACEPLAYER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x23D69B0)
#define DICERACEPLAYER_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x23D69C0)

	inline static constexpr unsigned int DiceRacePlayer_TypeDefinitionIndex = 5326;

	class DiceRacePlayer : public Il2CppObject
	{
	public:
		::UnityEngine::Animator* playerAni; // 0x18
		::System::Single playerSpeedMove; // 0x20
		::System::Single playerSpeedRotate; // 0x24
		::System::Single rayCastDistance; // 0x28
		::System::Action* OnEndOfRoad; // 0x30
		Il2CppObject* diceAniState; // 0x38
		::FlatData::AnimatorData* diceRaceAnimatorData; // 0x40

		::System::Void Move(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACEPLAYER_MOVE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_Position()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACEPLAYER_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void InitDiceRaceAnimatorStateData(DiceAnimatorState* arg, ::MX::Data::AnimatorData* arg2)
		{
			((::System::Void(*)(DiceAnimatorState*, ::MX::Data::AnimatorData*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACEPLAYER_INITDICERACEANIMATORSTATEDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACEPLAYER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayAni(DiceAnimatorState* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(DiceAnimatorState*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACEPLAYER_PLAYANI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Position(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACEPLAYER_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Void SetPositionRotation(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACEPLAYER_SETPOSITIONROTATION_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Quaternion* get_Rotation()
		{
			return ((::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACEPLAYER_GET_ROTATION_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACEPLAYER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Single arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DICERACEPLAYER_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Rotation(::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACEPLAYER_SET_ROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACEPLAYER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDrawGizmos()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACEPLAYER_ONDRAWGIZMOS_OFFSET))(nullptr);
		}

	};

