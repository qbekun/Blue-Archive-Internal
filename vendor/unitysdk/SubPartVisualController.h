#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }

#define SUBPARTVISUALCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13CC9C0)
#define SUBPARTVISUALCONTROLLER_GETRENDERERS_OFFSET UNITYSDK_OFFSET(0x13CBC80)
#define SUBPARTVISUALCONTROLLER_SETSTATE_OFFSET UNITYSDK_OFFSET(0x13CB620)

	inline static constexpr unsigned int SubPartVisualController_TypeDefinitionIndex = 1062;

	class SubPartVisualController : public Il2CppObject
	{
	public:
		::System::String* PartName; // 0x18
		::UnityEngine::GameObject* Root; // 0x20
		::UnityEngine::Transform* Floater; // 0x28
		::UnityEngine::GameObject* BodyBone; // 0x30
		::UnityEngine::GameObject* HeadBone; // 0x38
		::UnityEngine::GameObject* ShotBone; // 0x40
		::UnityEngine::GameObject* Shot2Bone; // 0x48
		::UnityEngine::GameObject* Shot3Bone; // 0x50
		::UnityEngine::GameObject* ExtraBone; // 0x58
		::UnityEngine::GameObject* Extra2Bone; // 0x60
		::UnityEngine::GameObject* Extra3Bone; // 0x68
		::System::Boolean DestroyWhenImmortal; // 0x70
		Il2CppObject* AliveObjects; // 0x78
		Il2CppObject* DestroyedObjects; // 0x80
		Il2CppObject* AdditionalRenderers; // 0x88

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBPARTVISUALCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetRenderers()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBPARTVISUALCONTROLLER_GETRENDERERS_OFFSET))(nullptr);
		}

		::System::Void SetState(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + SUBPARTVISUALCONTROLLER_SETSTATE_OFFSET))(arg, nullptr);
		}

	};

