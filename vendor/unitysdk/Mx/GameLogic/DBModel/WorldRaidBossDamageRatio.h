#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Math { class BasisPoint; }
namespace FlatData { class ContentsChangeType; }

#define MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSDAMAGERATIO_GET_DAMAGERATIO_OFFSET UNITYSDK_OFFSET(0x1013AB0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSDAMAGERATIO_SET_DAMAGERATIO_OFFSET UNITYSDK_OFFSET(0x1013AC0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSDAMAGERATIO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1013AD0)
#define MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSDAMAGERATIO_GET_CONTENTSCHANGETYPE_OFFSET UNITYSDK_OFFSET(0x1013AE0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int WorldRaidBossDamageRatio_TypeDefinitionIndex = 12759;

	class WorldRaidBossDamageRatio : public Il2CppObject
	{
	public:
		::MX::Core::Math::BasisPoint* _DamageRatio_k__BackingField; // 0x10

		::MX::Core::Math::BasisPoint* get_DamageRatio()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSDAMAGERATIO_GET_DAMAGERATIO_OFFSET))(nullptr);
		}

		::System::Void set_DamageRatio(::MX::Core::Math::BasisPoint* arg)
		{
			((::System::Void(*)(::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSDAMAGERATIO_SET_DAMAGERATIO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSDAMAGERATIO_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::ContentsChangeType* get_ContentsChangeType()
		{
			return ((::FlatData::ContentsChangeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_WORLDRAIDBOSSDAMAGERATIO_GET_CONTENTSCHANGETYPE_OFFSET))(nullptr);
		}

	};
}

