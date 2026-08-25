#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class RetreatAppliedLogicEffectGroupid; }

#define MX_LOGIC_DATA_LEVELCHARACTERENTITYDATA_SHOULDSERIALIZERETREATLOGICID_OFFSET UNITYSDK_OFFSET(0x11FB210)
#define MX_LOGIC_DATA_LEVELCHARACTERENTITYDATA_SHOULDSERIALIZEUSELINKEDFORMATION_OFFSET UNITYSDK_OFFSET(0x11FB270)
#define MX_LOGIC_DATA_LEVELCHARACTERENTITYDATA_SHOULDSERIALIZELINKEDFORMATIONOFFSET_OFFSET UNITYSDK_OFFSET(0x11FB280)
#define MX_LOGIC_DATA_LEVELCHARACTERENTITYDATA_SHOULDSERIALIZEINITIALABILITIES_OFFSET UNITYSDK_OFFSET(0x11FB2D0)
#define MX_LOGIC_DATA_LEVELCHARACTERENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FB310)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelCharacterEntityData_TypeDefinitionIndex = 13684;

	class LevelCharacterEntityData : public Il2CppObject
	{
	public:
		::System::Int64 CostumeId; // 0x180
		Il2CppObject* InitialAbilities; // 0x188
		::System::Boolean SuccessionFromCasterEquip; // 0x190
		::System::Boolean SuccessionFromCasterCharacterWeapon; // 0x191
		::System::Boolean SuccessionFromCasterCharacterGear; // 0x192
		::System::Boolean InvisibleToStrikerPathing; // 0x193
		::System::Boolean UseLinkedSummons; // 0x194
		::System::Boolean UseLinkedFormation; // 0x195
		::Il2CppArray<::System::Object*>* LinkedFormationOffset; // 0x198
		::System::Boolean IsUseRetreat; // 0x1A0
		::MX::Logic::Data::RetreatAppliedLogicEffectGroupid* RetreatLogicId; // 0x1A8

		::System::Boolean ShouldSerializeRetreatLogicId()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELCHARACTERENTITYDATA_SHOULDSERIALIZERETREATLOGICID_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeUseLinkedFormation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELCHARACTERENTITYDATA_SHOULDSERIALIZEUSELINKEDFORMATION_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeLinkedFormationOffset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELCHARACTERENTITYDATA_SHOULDSERIALIZELINKEDFORMATIONOFFSET_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeInitialAbilities()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELCHARACTERENTITYDATA_SHOULDSERIALIZEINITIALABILITIES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELCHARACTERENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

