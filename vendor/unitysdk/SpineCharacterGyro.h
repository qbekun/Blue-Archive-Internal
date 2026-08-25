#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define SPINECHARACTERGYRO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20E7E40)
#define SPINECHARACTERGYRO_ISQUATERNIONZERO_OFFSET UNITYSDK_OFFSET(0x20E7EE0)
#define SPINECHARACTERGYRO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20E7F30)
#define SPINECHARACTERGYRO_UPDATE_OFFSET UNITYSDK_OFFSET(0x20E8040)
#define SPINECHARACTERGYRO_UPDATEGYROOFFSETBYATTITUDE_OFFSET UNITYSDK_OFFSET(0x20E82F0)
#define SPINECHARACTERGYRO_.CTOR_OFFSET UNITYSDK_OFFSET(0x20E8480)
#define SPINECHARACTERGYRO_START_OFFSET UNITYSDK_OFFSET(0x20E84F0)

	inline static constexpr unsigned int SpineCharacterGyro_TypeDefinitionIndex = 3783;

	class SpineCharacterGyro : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* Bone; // 0x18
		::UnityEngine::Vector3* OrigLocalPos; // 0x20
		::UnityEngine::Vector3* MinLocalPos; // 0x2C
		::UnityEngine::Vector3* MaxLocalPos; // 0x38
		::System::Single GyroFollowPower01; // 0x44
		::System::Single GyroSensitivity; // 0x48
		::UnityEngine::Vector3* origWorldPos; // 0x4C
		::UnityEngine::Vector3* gyroOffset; // 0x58
		::System::Boolean refreshStartRotation; // 0x64
		::UnityEngine::Quaternion* gyroStartRotation; // 0x68

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHARACTERGYRO_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean IsQuaternionZero(::UnityEngine::Quaternion* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + SPINECHARACTERGYRO_ISQUATERNIONZERO_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHARACTERGYRO_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHARACTERGYRO_UPDATE_OFFSET))(nullptr);
		}

		::System::Void UpdateGyroOffsetByAttitude()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHARACTERGYRO_UPDATEGYROOFFSETBYATTITUDE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHARACTERGYRO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINECHARACTERGYRO_START_OFFSET))(nullptr);
		}

	};

