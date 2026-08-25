#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EchelonType; }
namespace MX::Logic::Data { class BattleTypes; }
namespace MX::GameLogic::DBModel { class RaidDB; }
namespace MX::GameLogic::DBModel { class RaidBattleDB; }
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }

#define MX_APPBATTLE_BATTLESETTINGBUILDER_O927F6124705555A9AADBC07C1513C061DAC5CAAF488CD3C5A471B66F2D9035F8_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x1D30A60)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_O927F6124705555A9AADBC07C1513C061DAC5CAAF488CD3C5A471B66F2D9035F8_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0x1D30A70)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_O927F6124705555A9AADBC07C1513C061DAC5CAAF488CD3C5A471B66F2D9035F8_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D30A80)

namespace MX::AppBattle::BattleSettingBuilder
{
	inline static constexpr unsigned int O927f6124705555a9aadbc07c1513c061dac5caaf488cd3c5a471b66f2d9035f8_TypeDefinitionIndex = 20073;

	class O927f6124705555a9aadbc07c1513c061dac5caaf488cd3c5a471b66f2d9035f8 : public Il2CppObject
	{
	public:
		::FlatData::EchelonType* get_EchelonType()
		{
			return (return (::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_O927F6124705555A9AADBC07C1513C061DAC5CAAF488CD3C5A471B66F2D9035F8_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return (return (::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_O927F6124705555A9AADBC07C1513C061DAC5CAAF488CD3C5A471B66F2D9035F8_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::RaidDB* arg, ::MX::GameLogic::DBModel::RaidBattleDB* arg, ::System::Int32 arg, ::MX::GameLogic::DBModel::AssistCharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidDB*, ::MX::GameLogic::DBModel::RaidBattleDB*, ::System::Int32, ::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_O927F6124705555A9AADBC07C1513C061DAC5CAAF488CD3C5A471B66F2D9035F8_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

