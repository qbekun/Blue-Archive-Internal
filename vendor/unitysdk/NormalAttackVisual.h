#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class GameObject; }
class NormalAttackMovementComponent;
namespace MX::Visual::Battles { class BattleActorComponent; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Battles { class Battle; }
class EntityVisual;
namespace MX::AppData::DAO::Battle { class VisualSkillEntityDAO; }
namespace UnityEngine { class Transform; }
namespace MX::Visual::Data { class FacingTargetType; }

#define NORMALATTACKVISUAL_EXPIRE_OFFSET UNITYSDK_OFFSET(0x15A8040)
#define NORMALATTACKVISUAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15A8590)
#define NORMALATTACKVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15A9300)
#define NORMALATTACKVISUAL_CREATEMOVEMENTENTITY_OFFSET UNITYSDK_OFFSET(0x15A8E40)
#define NORMALATTACKVISUAL_GET_DESTINATION_OFFSET UNITYSDK_OFFSET(0x15A83C0)
#define NORMALATTACKVISUAL_RELEASE_OFFSET UNITYSDK_OFFSET(0x15A8480)

	inline static constexpr unsigned int NormalAttackVisual_TypeDefinitionIndex = 1100;

	class NormalAttackVisual : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* UpCurveList; // 0x18
		::Il2CppArray<::System::Object*>* RightCurveList; // 0x20
		::Il2CppArray<::System::Object*>* ForwardCurveList; // 0x28
		::Il2CppArray<::System::Object*>* ObjectToHideWhenDestroyed; // 0x30
		::UnityEngine::Vector3* curveOffset; // 0x38
		::UnityEngine::GameObject* tempTarget; // 0x48
		NormalAttackMovementComponent* movementData; // 0x50
		::System::Boolean isExpired; // 0x58
		::System::String* resourcePath; // 0x60
		::MX::Visual::Battles::BattleActorComponent* battleActorComponent; // 0x68
		::MX::Logic::BattleEntities::EntityId* entityId; // 0x70

		::System::Void Expire()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKVISUAL_EXPIRE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Visual::Battles::BattleActorComponent* arg, ::MX::Logic::Battles::Battle* arg2, ::MX::Logic::BattleEntities::EntityId* arg3, EntityVisual* arg4, EntityVisual* arg5, Il2CppObject* arg6, Il2CppObject* arg7, ::UnityEngine::Vector3* arg8, ::MX::AppData::DAO::Battle::VisualSkillEntityDAO* arg9, ::System::Int32 arg10, ::System::Single arg11, ::System::Int32 arg12, ::System::Action* arg13)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleActorComponent*, ::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, EntityVisual*, EntityVisual*, Il2CppObject*, Il2CppObject*, ::UnityEngine::Vector3*, ::MX::AppData::DAO::Battle::VisualSkillEntityDAO*, ::System::Int32, ::System::Single, ::System::Int32, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKVISUAL_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CreateMovementEntity(::System::Int32 arg, ::UnityEngine::Transform* arg2, ::System::Int32 arg3, ::System::Single arg4, ::System::Int32 arg5, ::MX::Visual::Data::FacingTargetType* arg6, ::System::Action* arg7)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Transform*, ::System::Int32, ::System::Single, ::System::Int32, ::MX::Visual::Data::FacingTargetType*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKVISUAL_CREATEMOVEMENTENTITY_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::UnityEngine::Vector3* get_Destination()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKVISUAL_GET_DESTINATION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Release(::System::String* str, ::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKVISUAL_RELEASE_OFFSET))(str, arg, nullptr);
		}

	};

