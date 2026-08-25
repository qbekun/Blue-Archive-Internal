#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace UnityEngine { class GameObject; }

#define ACTIVATEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x10B29F0)

	inline static constexpr unsigned int ActivateInfo_TypeDefinitionIndex = 913;

	class ActivateInfo : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::BehaviorType* BehaviorType; // 0x10
		::System::Boolean DefaultActivate; // 0x14
		::UnityEngine::GameObject* Target; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIVATEINFO_.CTOR_OFFSET))(nullptr);
		}

	};

