#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Animator; }
namespace MX::Logic::BattleEntities { class Beam; }
namespace UnityEngine { class GameObject; }
class BeamMovementComponent;
namespace MX::Visual::Battles { class BattleActorComponent; }
namespace MX::Logic::Data { class BeamPhase; }
namespace MX::Logic::Battles { class BeamEventArgs; }
namespace UnityEngine { class Vector3; }
namespace MX::Logic::Battles { class Battle; }
class EntityVisual;
namespace MX::AppData::DAO::Battle { class VisualSkillEntityDAO; }

#define BEAMVISUAL_BEAM_EXPIRED_OFFSET UNITYSDK_OFFSET(0x15A48D0)
#define BEAMVISUAL_GET_DESTINATION_OFFSET UNITYSDK_OFFSET(0x15A4A90)
#define BEAMVISUAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15A4B30)
#define BEAMVISUAL_CREATEMOVEMENTENTITY_OFFSET UNITYSDK_OFFSET(0x15A5E40)
#define BEAMVISUAL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x15A5FF0)
#define BEAMVISUAL_UPDATE_OFFSET UNITYSDK_OFFSET(0x15A6040)
#define BEAMVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15A6120)

	inline static constexpr unsigned int BeamVisual_TypeDefinitionIndex = 1090;

	class BeamVisual : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* Transform; // 0x18
		::UnityEngine::Transform* TransformToScale; // 0x20
		::UnityEngine::Transform* TransformHead; // 0x28
		::UnityEngine::Transform* TransformTail; // 0x30
		::UnityEngine::Animator* Animator; // 0x38
		::System::String* AnimationNameOnExpansion; // 0x40
		::System::String* AnimationNameOnKeeping; // 0x48
		::System::String* AnimationNameOnExtinction; // 0x50
		::MX::Logic::BattleEntities::Beam* beam; // 0x58
		::UnityEngine::GameObject* tempStart; // 0x60
		::UnityEngine::GameObject* tempTarget; // 0x68
		BeamMovementComponent* movementData; // 0x70
		::System::Boolean isExpired; // 0x78
		::System::String* resourcePath; // 0x80
		::MX::Visual::Battles::BattleActorComponent* battleActorComponent; // 0x88
		::MX::Logic::Data::BeamPhase* lastBeamPhase; // 0x90
		::System::Int32 FadeFactorId; // 0x0

		::System::Void Beam_Expired(::System::Object* arg, ::MX::Logic::Battles::BeamEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BeamEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + BEAMVISUAL_BEAM_EXPIRED_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector3* get_Destination()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAMVISUAL_GET_DESTINATION_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Logic::Battles::Battle* arg, ::MX::Visual::Battles::BattleActorComponent* arg2, ::MX::Logic::BattleEntities::Beam* arg3, EntityVisual* arg4, EntityVisual* arg5, Il2CppObject* arg6, ::MX::AppData::DAO::Battle::VisualSkillEntityDAO* arg7, ::System::Int32 arg8, ::System::Single arg9, ::System::Int32 arg10, ::System::Action* arg11)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Visual::Battles::BattleActorComponent*, ::MX::Logic::BattleEntities::Beam*, EntityVisual*, EntityVisual*, Il2CppObject*, ::MX::AppData::DAO::Battle::VisualSkillEntityDAO*, ::System::Int32, ::System::Single, ::System::Int32, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + BEAMVISUAL_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, nullptr);
		}

		::System::Void CreateMovementEntity(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + BEAMVISUAL_CREATEMOVEMENTENTITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAMVISUAL_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAMVISUAL_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAMVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

