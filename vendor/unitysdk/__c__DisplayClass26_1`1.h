#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class CarrierSkillCard; }

#define <>C__DISPLAYCLASS26_1`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS26_1`1__SETCARRIERSKILLSUPPORTER_B__2_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>c__DisplayClass26_1`1_TypeDefinitionIndex = 14370;

	class <>c__DisplayClass26_1`1 : public Il2CppObject
	{
	public:
		Il2CppObject* request; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS26_1`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _SetCarrierSkillSupporter_b__2(::MX::Logic::Battles::CarrierSkillCard* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::CarrierSkillCard*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS26_1`1__SETCARRIERSKILLSUPPORTER_B__2_OFFSET))(arg, nullptr);
		}

	};

