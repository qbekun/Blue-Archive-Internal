#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class SyncUseSkillGroup; }

#define <>C__DISPLAYCLASS3_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x138A9F0)
#define <>C__DISPLAYCLASS3_1__REMOVECHARACTERFROMSYNCUSESKILL_B__2_OFFSET UNITYSDK_OFFSET(0x138B290)

	inline static constexpr unsigned int <>c__DisplayClass3_1_TypeDefinitionIndex = 14413;

	class <>c__DisplayClass3_1 : public Il2CppObject
	{
	public:
		Il2CppObject* item; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS3_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _RemoveCharacterFromSyncUseSkill_b__2(::MX::Logic::Battles::SyncUseSkillGroup* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::SyncUseSkillGroup*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS3_1__REMOVECHARACTERFROMSYNCUSESKILL_B__2_OFFSET))(arg, nullptr);
		}

	};

