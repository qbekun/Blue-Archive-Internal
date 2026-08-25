#pragma once
#include "unitysdk.h"

namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Data { class BeamEntityValue; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::GameData::DAO::Battle { class BeamAbilityFrameDAO; }
namespace MX::GameData::DAO::Battle { class BeamSplashDAO; }
namespace MX::GameData::DAO::Battle { class ChainBeamDAO; }

#define <>C__DISPLAYCLASS62_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1243F40)
#define <>C__DISPLAYCLASS62_0__.CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x12442A0)
#define <>C__DISPLAYCLASS62_0__.CTOR_B__1_OFFSET UNITYSDK_OFFSET(0x12444C0)
#define <>C__DISPLAYCLASS62_0__.CTOR_B__2_OFFSET UNITYSDK_OFFSET(0x12446E0)
#define <>C__DISPLAYCLASS62_0__.CTOR_B__3_OFFSET UNITYSDK_OFFSET(0x1244BF0)

	inline static constexpr unsigned int <>c__DisplayClass62_0_TypeDefinitionIndex = 13949;

	class <>c__DisplayClass62_0 : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::SkillSpecification* skillSpecification; // 0x10
		::MX::Logic::Data::BeamEntityValue* __4__this; // 0x18
		::System::Int32 index; // 0x20
		::MX::Logic::Skills::TargetCandidateRule* primaryCandidate; // 0x28
		::MX::Logic::Skills::TargetSortRule* primarySort; // 0xE8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS62_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _.ctor_b__0(::MX::GameData::DAO::Battle::BeamAbilityFrameDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::BeamAbilityFrameDAO*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS62_0__.CTOR_B__0_OFFSET))(arg, nullptr);
		}

		::System::Void _.ctor_b__1(::MX::GameData::DAO::Battle::BeamAbilityFrameDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::BeamAbilityFrameDAO*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS62_0__.CTOR_B__1_OFFSET))(arg, nullptr);
		}

		::System::Void _.ctor_b__2(::MX::GameData::DAO::Battle::BeamSplashDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::BeamSplashDAO*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS62_0__.CTOR_B__2_OFFSET))(arg, nullptr);
		}

		::System::Void _.ctor_b__3(::MX::GameData::DAO::Battle::ChainBeamDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ChainBeamDAO*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS62_0__.CTOR_B__3_OFFSET))(arg, nullptr);
		}

	};

