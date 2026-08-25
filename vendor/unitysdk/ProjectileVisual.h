#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class Projectile; }
namespace UnityEngine { class Vector3; }

#define PROJECTILEVISUAL_GET_ISARRIVE_OFFSET UNITYSDK_OFFSET(0x15A9770)
#define PROJECTILEVISUAL_SET_ENDPOSITION_OFFSET UNITYSDK_OFFSET(0x15A9780)
#define PROJECTILEVISUAL_UPDATE_OFFSET UNITYSDK_OFFSET(0x15A9790)
#define PROJECTILEVISUAL_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x15A9900)
#define PROJECTILEVISUAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15A9910)
#define PROJECTILEVISUAL_GET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0x15A9930)
#define PROJECTILEVISUAL_SET_PROJECTILE_OFFSET UNITYSDK_OFFSET(0x15A9950)
#define PROJECTILEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15A9960)
#define PROJECTILEVISUAL_SET_ISARRIVE_OFFSET UNITYSDK_OFFSET(0x15A9970)
#define PROJECTILEVISUAL_ARRIVE_OFFSET UNITYSDK_OFFSET(0x15A9870)
#define PROJECTILEVISUAL_GET_PROJECTILE_OFFSET UNITYSDK_OFFSET(0x15A9A60)
#define PROJECTILEVISUAL_SET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0x15A9A70)
#define PROJECTILEVISUAL_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x15A9A80)
#define PROJECTILEVISUAL_GET_ENDPOSITION_OFFSET UNITYSDK_OFFSET(0x15A9A90)

	inline static constexpr unsigned int ProjectileVisual_TypeDefinitionIndex = 1101;

	class ProjectileVisual : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::Projectile* _Projectile_k__BackingField; // 0x18
		::System::Boolean _isArrive_k__BackingField; // 0x20
		::UnityEngine::Vector3* _StartPosition_k__BackingField; // 0x24
		::UnityEngine::Vector3* _EndPosition_k__BackingField; // 0x30
		::System::Single _Duration_k__BackingField; // 0x3C
		::System::Single Timer; // 0x40

		::System::Boolean get_isArrive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROJECTILEVISUAL_GET_ISARRIVE_OFFSET))(nullptr);
		}

		::System::Void set_EndPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + PROJECTILEVISUAL_SET_ENDPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROJECTILEVISUAL_UPDATE_OFFSET))(nullptr);
		}

		::System::Void set_Duration(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + PROJECTILEVISUAL_SET_DURATION_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::Logic::BattleEntities::Projectile* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::Projectile*, ::PVOID))((::PBYTE)hIl2Cpp + PROJECTILEVISUAL_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_StartPosition()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROJECTILEVISUAL_GET_STARTPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_Projectile(::MX::Logic::BattleEntities::Projectile* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::Projectile*, ::PVOID))((::PBYTE)hIl2Cpp + PROJECTILEVISUAL_SET_PROJECTILE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROJECTILEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_isArrive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PROJECTILEVISUAL_SET_ISARRIVE_OFFSET))(arg, nullptr);
		}

		::System::Void Arrive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROJECTILEVISUAL_ARRIVE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::Projectile* get_Projectile()
		{
			return ((::MX::Logic::BattleEntities::Projectile*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROJECTILEVISUAL_GET_PROJECTILE_OFFSET))(nullptr);
		}

		::System::Void set_StartPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + PROJECTILEVISUAL_SET_STARTPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PROJECTILEVISUAL_GET_DURATION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_EndPosition()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROJECTILEVISUAL_GET_ENDPOSITION_OFFSET))(nullptr);
		}

	};

