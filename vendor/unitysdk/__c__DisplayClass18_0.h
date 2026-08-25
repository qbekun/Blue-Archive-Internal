#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }

#define <>C__DISPLAYCLASS18_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1374F30)
#define <>C__DISPLAYCLASS18_0__CHANGESKILLCARDBYFORMCONVERSION_B__0_OFFSET UNITYSDK_OFFSET(0x1375C00)

	inline static constexpr unsigned int <>c__DisplayClass18_0_TypeDefinitionIndex = 14375;

	class <>c__DisplayClass18_0 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* character; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS18_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ChangeSkillCardByFormConversion_b__0(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS18_0__CHANGESKILLCARDBYFORMCONVERSION_B__0_OFFSET))(arg, nullptr);
		}

	};

