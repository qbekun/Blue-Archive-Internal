#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class BeamAbilityFrameValue; }
class <>c__DisplayClass62_0;
namespace MX::GameData::DAO::Battle { class SkillAbilityDAO; }

#define <>C__DISPLAYCLASS62_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x12444B0)
#define <>C__DISPLAYCLASS62_1__.CTOR_B__4_OFFSET UNITYSDK_OFFSET(0x1244E70)

	inline static constexpr unsigned int <>c__DisplayClass62_1_TypeDefinitionIndex = 13950;

	class <>c__DisplayClass62_1 : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BeamAbilityFrameValue* toAdd; // 0x10
		<>c__DisplayClass62_0* CS$__8__locals1; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS62_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _.ctor_b__4(::MX::GameData::DAO::Battle::SkillAbilityDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::SkillAbilityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS62_1__.CTOR_B__4_OFFSET))(arg, nullptr);
		}

	};

