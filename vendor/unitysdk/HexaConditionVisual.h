#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaCondition; }
namespace MX::Campaign { class HexaTileMap; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }

#define HEXACONDITIONVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define HEXACONDITIONVISUAL_GET_RESUABLE_OFFSET UNITYSDK_OFFSET(0xF6DB20)
#define HEXACONDITIONVISUAL_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0x000000)
#define HEXACONDITIONVISUAL_GET_ALREADYTRIGGERED_OFFSET UNITYSDK_OFFSET(0xF6DB60)
#define HEXACONDITIONVISUAL_SAVE_OFFSET UNITYSDK_OFFSET(0xF6FB60)
#define HEXACONDITIONVISUAL_SET_ALREADYTRIGGERED_OFFSET UNITYSDK_OFFSET(0xF6DB90)
#define HEXACONDITIONVISUAL_LOAD_OFFSET UNITYSDK_OFFSET(0xF6FB70)
#define HEXACONDITIONVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define HEXACONDITIONVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xF6D9C0)

	inline static constexpr unsigned int HexaConditionVisual_TypeDefinitionIndex = 797;

	class HexaConditionVisual : public Il2CppObject
	{
	public:
		::System::Void SetCondition(::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Resuable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONVISUAL_GET_RESUABLE_OFFSET))(nullptr);
		}

		::System::Boolean IsSatisfied(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONVISUAL_ISSATISFIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_AlreadyTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONVISUAL_GET_ALREADYTRIGGERED_OFFSET))(nullptr);
		}

		::System::Void Save()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONVISUAL_SAVE_OFFSET))(nullptr);
		}

		::System::Void set_AlreadyTriggered(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONVISUAL_SET_ALREADYTRIGGERED_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONVISUAL_LOAD_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition* GetCondition()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

