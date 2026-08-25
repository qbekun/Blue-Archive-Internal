#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class CapsuleCollider; }
class FurnitureVisual;
class CafeCharacter;

#define FURNITURECHARACTERTOUCHROUTER_INITCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1AC3E20)
#define FURNITURECHARACTERTOUCHROUTER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1AC3ED0)
#define FURNITURECHARACTERTOUCHROUTER__ONTOUCH_B__14_0_OFFSET UNITYSDK_OFFSET(0x1AC4050)
#define FURNITURECHARACTERTOUCHROUTER__DETECTTARGETDEBUG_B__16_0_OFFSET UNITYSDK_OFFSET(0x1AC4070)
#define FURNITURECHARACTERTOUCHROUTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AC4090)
#define FURNITURECHARACTERTOUCHROUTER_SET_BODY_OFFSET UNITYSDK_OFFSET(0x1AC40A0)
#define FURNITURECHARACTERTOUCHROUTER_ONFURNITUREATTACH_OFFSET UNITYSDK_OFFSET(0x1AC40B0)
#define FURNITURECHARACTERTOUCHROUTER_GET_BODY_OFFSET UNITYSDK_OFFSET(0x1AC40F0)
#define FURNITURECHARACTERTOUCHROUTER_DETECTTARGETDEBUG_OFFSET UNITYSDK_OFFSET(0x1AC4100)
#define FURNITURECHARACTERTOUCHROUTER_ONTOUCH_OFFSET UNITYSDK_OFFSET(0x1AC4240)
#define FURNITURECHARACTERTOUCHROUTER_GET_ISBODYACTIVE_OFFSET UNITYSDK_OFFSET(0x1AC4440)
#define FURNITURECHARACTERTOUCHROUTER_ISFURNITURECOMBATSTYLEACTIVE_OFFSET UNITYSDK_OFFSET(0x1AC44C0)

	inline static constexpr unsigned int FurnitureCharacterTouchRouter_TypeDefinitionIndex = 1395;

	class FurnitureCharacterTouchRouter : public Il2CppObject
	{
	public:
		::System::Int32 FurnitureCombatStyleIndex; // 0x0
		::System::Int64 TargetCharacterUniqueId; // 0x18
		::UnityEngine::Transform* Floater; // 0x20
		::UnityEngine::GameObject* _body_k__BackingField; // 0x28
		::UnityEngine::CapsuleCollider* capsuleCollider; // 0x30
		FurnitureVisual* _parentFurnitureVisual; // 0x38

		::System::Void InitCollider()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITURECHARACTERTOUCHROUTER_INITCOLLIDER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITURECHARACTERTOUCHROUTER_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean _OnTouch_b__14_0(CafeCharacter* arg)
		{
			return ((::System::Boolean(*)(CafeCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITURECHARACTERTOUCHROUTER__ONTOUCH_B__14_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _DetectTargetDebug_b__16_0(CafeCharacter* arg)
		{
			return ((::System::Boolean(*)(CafeCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITURECHARACTERTOUCHROUTER__DETECTTARGETDEBUG_B__16_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITURECHARACTERTOUCHROUTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_body(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITURECHARACTERTOUCHROUTER_SET_BODY_OFFSET))(arg, nullptr);
		}

		::System::Void OnFurnitureAttach()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITURECHARACTERTOUCHROUTER_ONFURNITUREATTACH_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_body()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITURECHARACTERTOUCHROUTER_GET_BODY_OFFSET))(nullptr);
		}

		::System::Void DetectTargetDebug()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITURECHARACTERTOUCHROUTER_DETECTTARGETDEBUG_OFFSET))(nullptr);
		}

		::System::Void OnTouch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITURECHARACTERTOUCHROUTER_ONTOUCH_OFFSET))(nullptr);
		}

		::System::Boolean get_IsBodyActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITURECHARACTERTOUCHROUTER_GET_ISBODYACTIVE_OFFSET))(nullptr);
		}

		::System::Boolean IsFurnitureCombatStyleActive(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FURNITURECHARACTERTOUCHROUTER_ISFURNITURECOMBATSTYLEACTIVE_OFFSET))(arg, nullptr);
		}

	};

