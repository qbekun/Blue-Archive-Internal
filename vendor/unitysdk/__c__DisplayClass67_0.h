#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }

#define <>C__DISPLAYCLASS67_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1379040)
#define <>C__DISPLAYCLASS67_0__REMOVESKILLCARD_B__0_OFFSET UNITYSDK_OFFSET(0x137E840)
#define <>C__DISPLAYCLASS67_0__REMOVESKILLCARD_B__1_OFFSET UNITYSDK_OFFSET(0x137E8C0)

	inline static constexpr unsigned int <>c__DisplayClass67_0_TypeDefinitionIndex = 14382;

	class <>c__DisplayClass67_0 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* character; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS67_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _RemoveSkillCard_b__0(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS67_0__REMOVESKILLCARD_B__0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _RemoveSkillCard_b__1(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS67_0__REMOVESKILLCARD_B__1_OFFSET))(arg, nullptr);
		}

	};

