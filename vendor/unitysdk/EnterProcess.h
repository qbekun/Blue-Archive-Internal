#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionAreaAlwaysCheck; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }

#define ENTERPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1346AF0)
#define ENTERPROCESS_CHECKTARGETS_OFFSET UNITYSDK_OFFSET(0x1347FD0)
#define ENTERPROCESS__CHECKTARGETS_B__1_0_OFFSET UNITYSDK_OFFSET(0x1348080)

	inline static constexpr unsigned int EnterProcess_TypeDefinitionIndex = 14305;

	class EnterProcess : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::Logic::Battles::GroundConditionAreaAlwaysCheck* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundConditionAreaAlwaysCheck*, ::PVOID))((::PBYTE)hIl2Cpp + ENTERPROCESS_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CheckTargets()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTERPROCESS_CHECKTARGETS_OFFSET))(nullptr);
		}

		::System::Boolean _CheckTargets_b__1_0(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + ENTERPROCESS__CHECKTARGETS_B__1_0_OFFSET))(arg, nullptr);
		}

	};

