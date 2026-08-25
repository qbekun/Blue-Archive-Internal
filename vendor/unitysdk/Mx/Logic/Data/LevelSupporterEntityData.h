#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_LEVELSUPPORTERENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FC060)
#define MX_LOGIC_DATA_LEVELSUPPORTERENTITYDATA_SHOULDSERIALIZEINITIALABILITIES_OFFSET UNITYSDK_OFFSET(0x11FC070)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelSupporterEntityData_TypeDefinitionIndex = 13719;

	class LevelSupporterEntityData : public Il2CppObject
	{
	public:
		::System::Int64 CostumeId; // 0x180
		Il2CppObject* InitialAbilities; // 0x188
		::System::Boolean SuccessionFromCasterEquip; // 0x190
		::System::Boolean SuccessionFromCasterCharacterWeapon; // 0x191
		::System::Boolean SuccessionFromCasterCharacterGear; // 0x192

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELSUPPORTERENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeInitialAbilities()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELSUPPORTERENTITYDATA_SHOULDSERIALIZEINITIALABILITIES_OFFSET))(nullptr);
		}

	};
}

