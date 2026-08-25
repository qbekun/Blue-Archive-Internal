#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace UnityEngine { class Vector3; }

#define MX_LOGIC_BATTLES_PARTICLEEFFECTEVENTARGS_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x12738E0)
#define MX_LOGIC_BATTLES_PARTICLEEFFECTEVENTARGS_SET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x12738F0)
#define MX_LOGIC_BATTLES_PARTICLEEFFECTEVENTARGS_GET_INVOKERID_OFFSET UNITYSDK_OFFSET(0x1273900)
#define MX_LOGIC_BATTLES_PARTICLEEFFECTEVENTARGS_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1273910)
#define MX_LOGIC_BATTLES_PARTICLEEFFECTEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1273930)
#define MX_LOGIC_BATTLES_PARTICLEEFFECTEVENTARGS_SET_PARTICLEEFFECTNAME_OFFSET UNITYSDK_OFFSET(0x1273A50)
#define MX_LOGIC_BATTLES_PARTICLEEFFECTEVENTARGS_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1273A60)
#define MX_LOGIC_BATTLES_PARTICLEEFFECTEVENTARGS_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x1273A80)
#define MX_LOGIC_BATTLES_PARTICLEEFFECTEVENTARGS_GET_PARTICLEEFFECTNAME_OFFSET UNITYSDK_OFFSET(0x1273A90)
#define MX_LOGIC_BATTLES_PARTICLEEFFECTEVENTARGS_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1273AA0)
#define MX_LOGIC_BATTLES_PARTICLEEFFECTEVENTARGS_SET_CUSTOMPARTICLEEVENTS_OFFSET UNITYSDK_OFFSET(0x1273AB0)
#define MX_LOGIC_BATTLES_PARTICLEEFFECTEVENTARGS_GET_CUSTOMPARTICLEEVENTS_OFFSET UNITYSDK_OFFSET(0x1273AC0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int ParticleEffectEventArgs_TypeDefinitionIndex = 14052;

	class ParticleEffectEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _InvokerId_k__BackingField; // 0x10
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x18
		::UnityEngine::Vector3* _Position_k__BackingField; // 0x20
		::UnityEngine::Vector3* _Direction_k__BackingField; // 0x2C
		::System::String* _ParticleEffectName_k__BackingField; // 0x38
		Il2CppObject* _CustomParticleEvents_k__BackingField; // 0x40

		::System::Void set_Direction(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PARTICLEEFFECTEVENTARGS_SET_DIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_SkillSpecification(::MX::Logic::Skills::SkillSpecification* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PARTICLEEFFECTEVENTARGS_SET_SKILLSPECIFICATION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_InvokerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PARTICLEEFFECTEVENTARGS_GET_INVOKERID_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_Direction()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PARTICLEEFFECTEVENTARGS_GET_DIRECTION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector3* arg4, ::System::String* str, ::Il2CppArray<::System::Object*>* arg5)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::Skills::SkillSpecification*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PARTICLEEFFECTEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, arg4, str, arg5, nullptr);
		}

		::System::Void set_ParticleEffectName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PARTICLEEFFECTEVENTARGS_SET_PARTICLEEFFECTNAME_OFFSET))(str, nullptr);
		}

		::UnityEngine::Vector3* get_Position()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PARTICLEEFFECTEVENTARGS_GET_POSITION_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PARTICLEEFFECTEVENTARGS_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::System::String* get_ParticleEffectName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PARTICLEEFFECTEVENTARGS_GET_PARTICLEEFFECTNAME_OFFSET))(nullptr);
		}

		::System::Void set_Position(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PARTICLEEFFECTEVENTARGS_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_CustomParticleEvents(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PARTICLEEFFECTEVENTARGS_SET_CUSTOMPARTICLEEVENTS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CustomParticleEvents()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PARTICLEEFFECTEVENTARGS_GET_CUSTOMPARTICLEEVENTS_OFFSET))(nullptr);
		}

	};
}

