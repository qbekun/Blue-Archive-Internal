#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class SyncUseSkillGroup; }

#define <>C__DISPLAYCLASS5_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x138AF90)
#define <>C__DISPLAYCLASS5_1__REMOVESUPPORTERFROMSYNCUSESKILL_B__2_OFFSET UNITYSDK_OFFSET(0x138B360)

	inline static constexpr unsigned int <>c__DisplayClass5_1_TypeDefinitionIndex = 14416;

	class <>c__DisplayClass5_1 : public Il2CppObject
	{
	public:
		Il2CppObject* item; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS5_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _RemoveSupporterFromSyncUseSkill_b__2(::MX::Logic::Battles::SyncUseSkillGroup* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::SyncUseSkillGroup*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS5_1__REMOVESUPPORTERFROMSYNCUSESKILL_B__2_OFFSET))(arg, nullptr);
		}

	};

