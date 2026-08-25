#pragma once
#include "unitysdk.h"

namespace MX::Core::Services { class Hash64; }
namespace MX::Logic::BattleEntities { class StatusResult; }

#define <>C__DISPLAYCLASS46_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1177650)
#define <>C__DISPLAYCLASS46_0__HASLOGICEFFECTTEMPLATEID_B__0_OFFSET UNITYSDK_OFFSET(0x117DA90)

	inline static constexpr unsigned int <>c__DisplayClass46_0_TypeDefinitionIndex = 13234;

	class <>c__DisplayClass46_0 : public Il2CppObject
	{
	public:
		::MX::Core::Services::Hash64* templateIdHash; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS46_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _HasLogicEffectTemplateId_b__0(::MX::Logic::BattleEntities::StatusResult* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::StatusResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS46_0__HASLOGICEFFECTTEMPLATEID_B__0_OFFSET))(arg, nullptr);
		}

	};

