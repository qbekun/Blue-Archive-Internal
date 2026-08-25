#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::LogicEffects { class StackDamageEffect; }
namespace MX::Logic::BattleEntities { class StackDamageInfo; }

#define MX_LOGIC_BATTLEENTITIES_STACKDAMAGEPROCESSOR_ADD_OFFSET UNITYSDK_OFFSET(0x1173090)
#define MX_LOGIC_BATTLEENTITIES_STACKDAMAGEPROCESSOR_REMOVE_OFFSET UNITYSDK_OFFSET(0x1172C40)
#define MX_LOGIC_BATTLEENTITIES_STACKDAMAGEPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1173270)
#define MX_LOGIC_BATTLEENTITIES_STACKDAMAGEPROCESSOR_GETSTACKDAMAGEINFO_OFFSET UNITYSDK_OFFSET(0x11732F0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int StackDamageProcessor_TypeDefinitionIndex = 13212;

	class StackDamageProcessor : public Il2CppObject
	{
	public:
		Il2CppObject* stackDamageInfoList; // 0x10

		::System::Void Add(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4, ::MX::Logic::Skills::LogicEffects::StackDamageEffect* arg5)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::MX::Logic::Skills::LogicEffects::StackDamageEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STACKDAMAGEPROCESSOR_ADD_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void Remove(::MX::Logic::BattleEntities::StackDamageInfo* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::StackDamageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STACKDAMAGEPROCESSOR_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STACKDAMAGEPROCESSOR_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::StackDamageInfo* GetStackDamageInfo(::System::String* str)
		{
			return ((::MX::Logic::BattleEntities::StackDamageInfo*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STACKDAMAGEPROCESSOR_GETSTACKDAMAGEINFO_OFFSET))(str, nullptr);
		}

	};
}

