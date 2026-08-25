#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_VISUAL_ENTITYPHASESTATE_GET_PENDINGENTITY_OFFSET UNITYSDK_OFFSET(0x1E8FE70)
#define MX_MINIGAMECCG_VISUAL_ENTITYPHASESTATE_GET_PICKENTITY_OFFSET UNITYSDK_OFFSET(0x1E8FE80)
#define MX_MINIGAMECCG_VISUAL_ENTITYPHASESTATE_SET_PICKENTITY_OFFSET UNITYSDK_OFFSET(0x1E8FE90)
#define MX_MINIGAMECCG_VISUAL_ENTITYPHASESTATE_SET_EXECUTEENTITY_OFFSET UNITYSDK_OFFSET(0x1E8FEA0)
#define MX_MINIGAMECCG_VISUAL_ENTITYPHASESTATE_SET_PENDINGENTITY_OFFSET UNITYSDK_OFFSET(0x1E8FEB0)
#define MX_MINIGAMECCG_VISUAL_ENTITYPHASESTATE_GET_EXECUTEENTITY_OFFSET UNITYSDK_OFFSET(0x1E8FEC0)
#define MX_MINIGAMECCG_VISUAL_ENTITYPHASESTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E8FED0)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int EntityPhaseState_TypeDefinitionIndex = 21187;

	class EntityPhaseState : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEntity* _PickEntity_k__BackingField; // 0x10
		::MX::MinigameCCG::CCGEntity* _PendingEntity_k__BackingField; // 0x18
		::MX::MinigameCCG::CCGEntity* _ExecuteEntity_k__BackingField; // 0x20

		::MX::MinigameCCG::CCGEntity* get_PendingEntity()
		{
			return (return (::MX::MinigameCCG::CCGEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_ENTITYPHASESTATE_GET_PENDINGENTITY_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGEntity* get_PickEntity()
		{
			return (return (::MX::MinigameCCG::CCGEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_ENTITYPHASESTATE_GET_PICKENTITY_OFFSET))(nullptr);
		}

		::System::Void set_PickEntity(::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_ENTITYPHASESTATE_SET_PICKENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_ExecuteEntity(::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_ENTITYPHASESTATE_SET_EXECUTEENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_PendingEntity(::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_ENTITYPHASESTATE_SET_PENDINGENTITY_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGEntity* get_ExecuteEntity()
		{
			return (return (::MX::MinigameCCG::CCGEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_ENTITYPHASESTATE_GET_EXECUTEENTITY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_ENTITYPHASESTATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

