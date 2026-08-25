#pragma once
#include "unitysdk.h"

namespace MX::Campaign { class HexaTileMap; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaCondition; }

#define <>C__DISPLAYCLASS41_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x14382A0)
#define <>C__DISPLAYCLASS41_0__PROCESSVISUALCONDITIONANDCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0x14382B0)

	inline static constexpr unsigned int <>c__DisplayClass41_0_TypeDefinitionIndex = 14890;

	class <>c__DisplayClass41_0 : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaTileMap* __4__this; // 0x10
		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* saveData; // 0x18
		Il2CppObject* __9__0; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS41_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessVisualConditionAndCommand_b__0(::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition* arg)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS41_0__PROCESSVISUALCONDITIONANDCOMMAND_B__0_OFFSET))(arg, nullptr);
		}

	};

