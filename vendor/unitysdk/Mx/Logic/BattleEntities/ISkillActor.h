#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class DamageAttribute; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_BATTLEENTITIES_ISKILLACTOR_GETOVERRIDEBULLETARMORDAMAGEFACTORLIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_ISKILLACTOR_OVERRIDEBULLETARMORDAMAGEFACTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_ISKILLACTOR_GET_BULLETARMORDAMAGEFACTOROVERRIDETABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_ISKILLACTOR_TRYGETOVERRIDEBULLETARMORDAMAGEFACTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_ISKILLACTOR_GETBULLETARMORDAMAGEFACTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_ISKILLACTOR_GET_BULLETTYPEOVERRIDETABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_ISKILLACTOR_REMOVEOVERRIDEBULLETARMORDAMAGEFACTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int ISkillActor_TypeDefinitionIndex = 13095;

	class ISkillActor : public Il2CppObject
	{
	public:
		Il2CppObject* GetOverrideBulletArmorDamageFactorList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ISKILLACTOR_GETOVERRIDEBULLETARMORDAMAGEFACTORLIST_OFFSET))(nullptr);
		}

		::System::Void OverrideBulletArmorDamageFactor(Il2CppObject* arg, ::System::Int64 arg2, ::FlatData::DamageAttribute* arg3, ::System::Boolean arg4, ::System::Int64 arg5, ::System::Int64 arg6)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int64, ::FlatData::DamageAttribute*, ::System::Boolean, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ISKILLACTOR_OVERRIDEBULLETARMORDAMAGEFACTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		Il2CppObject* get_BulletArmorDamageFactorOverrideTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ISKILLACTOR_GET_BULLETARMORDAMAGEFACTOROVERRIDETABLE_OFFSET))(nullptr);
		}

		::System::Boolean TryGetOverrideBulletArmorDamageFactor(Il2CppObject* arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ISKILLACTOR_TRYGETOVERRIDEBULLETARMORDAMAGEFACTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetBulletArmorDamageFactor(Il2CppObject* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ISKILLACTOR_GETBULLETARMORDAMAGEFACTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_BulletTypeOverrideTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ISKILLACTOR_GET_BULLETTYPEOVERRIDETABLE_OFFSET))(nullptr);
		}

		::System::Void RemoveOverrideBulletArmorDamageFactor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ISKILLACTOR_REMOVEOVERRIDEBULLETARMORDAMAGEFACTOR_OFFSET))(arg, nullptr);
		}

	};
}

