#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Data { class CharacterSkillListKey; }
namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }

#define <>C__DISPLAYCLASS69_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x137B1C0)
#define <>C__DISPLAYCLASS69_0__CHANGESKILLCARDBYFORMCONVERSION_B__0_OFFSET UNITYSDK_OFFSET(0x137EA40)
#define <>C__DISPLAYCLASS69_0__CHANGESKILLCARDBYFORMCONVERSION_B__2_OFFSET UNITYSDK_OFFSET(0x137EA90)

	inline static constexpr unsigned int <>c__DisplayClass69_0_TypeDefinitionIndex = 14384;

	class <>c__DisplayClass69_0 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* character; // 0x10
		::MX::Data::CharacterSkillListKey* skillListKey; // 0x18
		Il2CppObject* __9__2; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS69_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ChangeSkillCardByFormConversion_b__0(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS69_0__CHANGESKILLCARDBYFORMCONVERSION_B__0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ChangeSkillCardByFormConversion_b__2(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS69_0__CHANGESKILLCARDBYFORMCONVERSION_B__2_OFFSET))(arg, nullptr);
		}

	};

