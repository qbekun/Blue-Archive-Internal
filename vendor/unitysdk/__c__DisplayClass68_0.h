#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class SupportActor; }
namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }

#define <>C__DISPLAYCLASS68_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1379790)
#define <>C__DISPLAYCLASS68_0__REMOVESKILLCARD_B__0_OFFSET UNITYSDK_OFFSET(0x137E940)
#define <>C__DISPLAYCLASS68_0__REMOVESKILLCARD_B__1_OFFSET UNITYSDK_OFFSET(0x137E9C0)

	inline static constexpr unsigned int <>c__DisplayClass68_0_TypeDefinitionIndex = 14383;

	class <>c__DisplayClass68_0 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::SupportActor* supporter; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS68_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _RemoveSkillCard_b__0(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS68_0__REMOVESKILLCARD_B__0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _RemoveSkillCard_b__1(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS68_0__REMOVESKILLCARD_B__1_OFFSET))(arg, nullptr);
		}

	};

