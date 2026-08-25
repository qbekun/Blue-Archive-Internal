#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Data { class AreaEntityValue; }
namespace MX::Core::Physics2D::Bodies { class Body2D; }
namespace MX::Logic::BattleEntities { class HitCheckCoupling; }
namespace MX::Logic::Skills { class MovingAreaOptions; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class ActionChangedEventArgs; }
namespace MX::Logic::BattleEntities { class EffectArea; }

#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_ADD_EXPIRED_OFFSET UNITYSDK_OFFSET(0x11A5310)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_REMOVE_EXPIRED_OFFSET UNITYSDK_OFFSET(0x11A53B0)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_ONAREAEXPIRED_OFFSET UNITYSDK_OFFSET(0x11A5450)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_BATTLE_OFFSET UNITYSDK_OFFSET(0x11A5470)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_SET_BATTLE_OFFSET UNITYSDK_OFFSET(0x11A5480)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_INVOKER_OFFSET UNITYSDK_OFFSET(0x11A5490)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_SET_INVOKER_OFFSET UNITYSDK_OFFSET(0x11A54A0)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_INVOKERID_OFFSET UNITYSDK_OFFSET(0x11A1D00)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_SKILLENTITYNAME_OFFSET UNITYSDK_OFFSET(0x11A54B0)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_POSITION2D_OFFSET UNITYSDK_OFFSET(0x119F160)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_SET_POSITION2D_OFFSET UNITYSDK_OFFSET(0x11A54D0)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x11A5500)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_SET_FORWARD_OFFSET UNITYSDK_OFFSET(0x119FA40)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x11A5510)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_ELAPSED_OFFSET UNITYSDK_OFFSET(0x11A5540)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_SET_ELAPSED_OFFSET UNITYSDK_OFFSET(0x11A5550)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x11A1DB0)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x11A5560)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_ENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x11A5570)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_COLLISIONPROPERTY_OFFSET UNITYSDK_OFFSET(0x11A1FC0)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_ROTATEENTITYDIRECTIONEVERYFRAME_OFFSET UNITYSDK_OFFSET(0x11A5580)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_APPLYOFFSETROTATEENTITYDIRECTION_OFFSET UNITYSDK_OFFSET(0x11A55A0)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_HITFRAMES_OFFSET UNITYSDK_OFFSET(0x11A55C0)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_COLLISIONBODY_OFFSET UNITYSDK_OFFSET(0x11A55E0)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_SET_COLLISIONBODY_OFFSET UNITYSDK_OFFSET(0x11A55F0)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_INITIALPOSITION_OFFSET UNITYSDK_OFFSET(0x11A5600)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_SET_INITIALPOSITION_OFFSET UNITYSDK_OFFSET(0x11A5610)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_POSITIONSOURCE_OFFSET UNITYSDK_OFFSET(0x11A5620)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_SET_POSITIONSOURCE_OFFSET UNITYSDK_OFFSET(0x11A5630)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_TARGETSOURCE_OFFSET UNITYSDK_OFFSET(0x11A5640)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_SET_TARGETSOURCE_OFFSET UNITYSDK_OFFSET(0x11A5650)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x11A5660)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_SET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x11A5670)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_EXTRACOSTUSED_OFFSET UNITYSDK_OFFSET(0x11A5680)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_HITCHECKCOUPLING_OFFSET UNITYSDK_OFFSET(0x11A5690)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_SET_HITCHECKCOUPLING_OFFSET UNITYSDK_OFFSET(0x11A56A0)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_ISDISABLE_OFFSET UNITYSDK_OFFSET(0x11A56C0)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_SET_ISDISABLE_OFFSET UNITYSDK_OFFSET(0x11A56D0)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_MOVINGAREAOPTION_OFFSET UNITYSDK_OFFSET(0x11A56E0)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x119F450)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_ADDTOCOUPLING_OFFSET UNITYSDK_OFFSET(0x11A56F0)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_CHARACTER_ACTIONINTERRUPTED_OFFSET UNITYSDK_OFFSET(0x11A5710)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_EFFECTAREA_EXPIRED_OFFSET UNITYSDK_OFFSET(0x11A57B0)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GETBODY2D_OFFSET UNITYSDK_OFFSET(0x11A5970)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_UPDATE_OFFSET UNITYSDK_OFFSET(0x11A0860)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_CREATECURRENTCOLLISIONSHAPE_OFFSET UNITYSDK_OFFSET(0x11A5980)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_INTERRUPTAREA_OFFSET UNITYSDK_OFFSET(0x11A5760)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_FIXEDPOSITIONFUNC_OFFSET UNITYSDK_OFFSET(0x11A68C0)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_MOVINGPOSITIONFUNC_OFFSET UNITYSDK_OFFSET(0x11A68D0)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_PROCESSHIT_OFFSET UNITYSDK_OFFSET(0x11A5A90)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_FINDCOLLIDETARGETS_OFFSET UNITYSDK_OFFSET(0x11A6950)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_FORCEEXPIRE_OFFSET UNITYSDK_OFFSET(0x11A6C80)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_EQUALS_OFFSET UNITYSDK_OFFSET(0x11A6CB0)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11A6DE0)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11A6E30)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11A6F10)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11A6FA0)
#define MX_LOGIC_BATTLEENTITIES_EFFECTAREA_EQUALS_OFFSET UNITYSDK_OFFSET(0x11A6D70)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int EffectArea_TypeDefinitionIndex = 13311;

	class EffectArea : public Il2CppObject
	{
	public:
		Il2CppObject* Expired; // 0x28
		::MX::Logic::Battles::Battle* _Battle_k__BackingField; // 0x30
		::MX::Logic::BattleEntities::BattleEntity* _Invoker_k__BackingField; // 0x38
		::UnityEngine::Vector2* forward; // 0x40
		::System::Boolean isBodyDirty; // 0x48
		::System::Int32 _Elapsed_k__BackingField; // 0x4C
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x50
		::MX::Logic::Data::AreaEntityValue* _EntityValue_k__BackingField; // 0x58
		::MX::Core::Physics2D::Bodies::Body2D* _CollisionBody_k__BackingField; // 0x60
		::UnityEngine::Vector2* _InitialPosition_k__BackingField; // 0x68
		::MX::Logic::BattleEntities::BattleEntity* _PositionSource_k__BackingField; // 0x70
		::MX::Logic::BattleEntities::BattleEntity* _TargetSource_k__BackingField; // 0x78
		::UnityEngine::Vector2* _TargetPosition_k__BackingField; // 0x80
		Il2CppObject* positionFunc; // 0x88
		Il2CppObject* collisionShapeFunc; // 0x90
		Il2CppObject* hitBattleEntities; // 0x98
		::System::Int32 _ExtraCostUsed_k__BackingField; // 0xA0
		::MX::Logic::BattleEntities::HitCheckCoupling* _HitCheckCoupling_k__BackingField; // 0xA8
		::System::Boolean _IsDisable_k__BackingField; // 0xB0
		::MX::Logic::Skills::MovingAreaOptions* _MovingAreaOption_k__BackingField; // 0xB4

		::System::Void add_Expired(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_ADD_EXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Expired(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_REMOVE_EXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void OnAreaExpired(::System::EventArgs* arg)
		{
			((::System::Void(*)(::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_ONAREAEXPIRED_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Battle* get_Battle()
		{
			return ((::MX::Logic::Battles::Battle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_BATTLE_OFFSET))(nullptr);
		}

		::System::Void set_Battle(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_SET_BATTLE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Invoker()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_INVOKER_OFFSET))(nullptr);
		}

		::System::Void set_Invoker(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_SET_INVOKER_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_InvokerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_INVOKERID_OFFSET))(nullptr);
		}

		::System::String* get_SkillEntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_SKILLENTITYNAME_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Position2D()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_POSITION2D_OFFSET))(nullptr);
		}

		::System::Void set_Position2D(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_SET_POSITION2D_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Forward()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_FORWARD_OFFSET))(nullptr);
		}

		::System::Void set_Forward(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_SET_FORWARD_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_ISEXPIRED_OFFSET))(nullptr);
		}

		::System::Int32 get_Elapsed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_ELAPSED_OFFSET))(nullptr);
		}

		::System::Void set_Elapsed(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_SET_ELAPSED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_DURATION_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AreaEntityValue* get_EntityValue()
		{
			return ((::MX::Logic::Data::AreaEntityValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_ENTITYVALUE_OFFSET))(nullptr);
		}

		Il2CppObject* get_CollisionProperty()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_COLLISIONPROPERTY_OFFSET))(nullptr);
		}

		::System::Boolean get_RotateEntityDirectionEveryFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_ROTATEENTITYDIRECTIONEVERYFRAME_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyOffsetRotateEntityDirection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_APPLYOFFSETROTATEENTITYDIRECTION_OFFSET))(nullptr);
		}

		Il2CppObject* get_HitFrames()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_HITFRAMES_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Bodies::Body2D* get_CollisionBody()
		{
			return ((::MX::Core::Physics2D::Bodies::Body2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_COLLISIONBODY_OFFSET))(nullptr);
		}

		::System::Void set_CollisionBody(::MX::Core::Physics2D::Bodies::Body2D* arg)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Bodies::Body2D*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_SET_COLLISIONBODY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_InitialPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_INITIALPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_InitialPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_SET_INITIALPOSITION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_PositionSource()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_POSITIONSOURCE_OFFSET))(nullptr);
		}

		::System::Void set_PositionSource(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_SET_POSITIONSOURCE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_TargetSource()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_TARGETSOURCE_OFFSET))(nullptr);
		}

		::System::Void set_TargetSource(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_SET_TARGETSOURCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_TargetPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_TARGETPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_TargetPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_SET_TARGETPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExtraCostUsed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_EXTRACOSTUSED_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::HitCheckCoupling* get_HitCheckCoupling()
		{
			return ((::MX::Logic::BattleEntities::HitCheckCoupling*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_HITCHECKCOUPLING_OFFSET))(nullptr);
		}

		::System::Void set_HitCheckCoupling(::MX::Logic::BattleEntities::HitCheckCoupling* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::HitCheckCoupling*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_SET_HITCHECKCOUPLING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDisable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_ISDISABLE_OFFSET))(nullptr);
		}

		::System::Void set_IsDisable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_SET_ISDISABLE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::MovingAreaOptions* get_MovingAreaOption()
		{
			return ((::MX::Logic::Skills::MovingAreaOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GET_MOVINGAREAOPTION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::Skills::SkillSpecification* arg4, ::System::Int32 arg5, ::MX::Logic::Data::AreaEntityValue* arg6)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Data::AreaEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void AddToCoupling(::MX::Logic::BattleEntities::HitCheckCoupling* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::HitCheckCoupling*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_ADDTOCOUPLING_OFFSET))(arg, nullptr);
		}

		::System::Void Character_ActionInterrupted(::System::Object* arg, ::MX::Logic::BattleEntities::ActionChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::ActionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_CHARACTER_ACTIONINTERRUPTED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EffectArea_Expired(::System::Object* arg, ::System::EventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_EFFECTAREA_EXPIRED_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::Physics2D::Bodies::Body2D* GetBody2D()
		{
			return ((::MX::Core::Physics2D::Bodies::Body2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GETBODY2D_OFFSET))(nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_UPDATE_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Bodies::Body2D* CreateCurrentCollisionShape(::MX::Logic::Battles::Battle* arg, ::System::Int32 arg2)
		{
			return ((::MX::Core::Physics2D::Bodies::Body2D*(*)(::MX::Logic::Battles::Battle*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_CREATECURRENTCOLLISIONSHAPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InterruptArea()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_INTERRUPTAREA_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* FixedPositionFunc()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_FIXEDPOSITIONFUNC_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* MovingPositionFunc()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_MOVINGPOSITIONFUNC_OFFSET))(nullptr);
		}

		::System::Void ProcessHit(::MX::Logic::Battles::Battle* arg, ::MX::Core::Physics2D::Bodies::Body2D* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Core::Physics2D::Bodies::Body2D*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_PROCESSHIT_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* FindCollideTargets(::MX::Logic::Battles::Battle* arg, ::MX::Core::Physics2D::Bodies::Body2D* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::MX::Core::Physics2D::Bodies::Body2D*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_FINDCOLLIDETARGETS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ForceExpire()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_FORCEEXPIRE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::BattleEntities::EffectArea* arg, ::MX::Logic::BattleEntities::EffectArea* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::EffectArea*, ::MX::Logic::BattleEntities::EffectArea*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::BattleEntities::EffectArea* arg, ::MX::Logic::BattleEntities::EffectArea* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::EffectArea*, ::MX::Logic::BattleEntities::EffectArea*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::BattleEntities::EffectArea* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::EffectArea*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EFFECTAREA_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

