#pragma once
#include "unitysdk.h"

class <>c__DisplayClass65_0;
namespace MX::MinigameShooting { class SkillData; }

#define <>C__DISPLAYCLASS65_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x1458650)
#define <>C__DISPLAYCLASS65_1__INITSKILLDATA_B__1_OFFSET UNITYSDK_OFFSET(0x14586F0)
#define <>C__DISPLAYCLASS65_1__INITSKILLDATA_B__2_OFFSET UNITYSDK_OFFSET(0x1458780)

	inline static constexpr unsigned int <>c__DisplayClass65_1_TypeDefinitionIndex = 15022;

	class <>c__DisplayClass65_1 : public Il2CppObject
	{
	public:
		::System::Boolean normalLoaded; // 0x10
		::System::Boolean deathLoaded; // 0x11
		<>c__DisplayClass65_0* CS$__8__locals1; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS65_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _InitSkillData_b__1(::MX::MinigameShooting::SkillData* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::SkillData*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS65_1__INITSKILLDATA_B__1_OFFSET))(arg, nullptr);
		}

		::System::Void _InitSkillData_b__2(::MX::MinigameShooting::SkillData* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::SkillData*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS65_1__INITSKILLDATA_B__2_OFFSET))(arg, nullptr);
		}

	};

