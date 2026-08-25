#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class BeamAbilityFrameValue; }
class <>c__DisplayClass62_0;
namespace MX::GameData::DAO::Battle { class SkillAbilityDAO; }

#define <>C__DISPLAYCLASS62_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x12446D0)
#define <>C__DISPLAYCLASS62_2__.CTOR_B__5_OFFSET UNITYSDK_OFFSET(0x1244F50)

	inline static constexpr unsigned int <>c__DisplayClass62_2_TypeDefinitionIndex = 13951;

	class <>c__DisplayClass62_2 : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BeamAbilityFrameValue* toAdd; // 0x10
		<>c__DisplayClass62_0* CS$__8__locals2; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS62_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _.ctor_b__5(::MX::GameData::DAO::Battle::SkillAbilityDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::SkillAbilityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS62_2__.CTOR_B__5_OFFSET))(arg, nullptr);
		}

	};

