#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class SupporterEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_SUPPORTERENTITYVALUE_GET_INITIALABILITIES_OFFSET UNITYSDK_OFFSET(0x124C380)
#define MX_LOGIC_DATA_SUPPORTERENTITYVALUE_GET_SETCHARACTERGEAR_OFFSET UNITYSDK_OFFSET(0x124C390)
#define MX_LOGIC_DATA_SUPPORTERENTITYVALUE_GET_SETEQUIPMENTS_OFFSET UNITYSDK_OFFSET(0x124C3A0)
#define MX_LOGIC_DATA_SUPPORTERENTITYVALUE_GET_SKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x124C3B0)
#define MX_LOGIC_DATA_SUPPORTERENTITYVALUE_GET_SETCHARACTERWEAPON_OFFSET UNITYSDK_OFFSET(0x124C3C0)
#define MX_LOGIC_DATA_SUPPORTERENTITYVALUE_GET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0x124C3D0)
#define MX_LOGIC_DATA_SUPPORTERENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x124C3E0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SupporterEntityValue_TypeDefinitionIndex = 13983;

	class SupporterEntityValue : public Il2CppObject
	{
	public:
		::System::Int32 _SkillLevel_k__BackingField; // 0x190
		Il2CppObject* _InitialAbilities_k__BackingField; // 0x198
		::System::Boolean _SetEquipments_k__BackingField; // 0x1A0
		::System::Boolean _SetCharacterWeapon_k__BackingField; // 0x1A1
		::System::Boolean _SetCharacterGear_k__BackingField; // 0x1A2
		::System::Int64 _CostumeId_k__BackingField; // 0x1A8

		Il2CppObject* get_InitialAbilities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUPPORTERENTITYVALUE_GET_INITIALABILITIES_OFFSET))(nullptr);
		}

		::System::Boolean get_SetCharacterGear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUPPORTERENTITYVALUE_GET_SETCHARACTERGEAR_OFFSET))(nullptr);
		}

		::System::Boolean get_SetEquipments()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUPPORTERENTITYVALUE_GET_SETEQUIPMENTS_OFFSET))(nullptr);
		}

		::System::Int32 get_SkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUPPORTERENTITYVALUE_GET_SKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Boolean get_SetCharacterWeapon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUPPORTERENTITYVALUE_GET_SETCHARACTERWEAPON_OFFSET))(nullptr);
		}

		::System::Int64 get_CostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUPPORTERENTITYVALUE_GET_COSTUMEID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::SupporterEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::SupporterEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUPPORTERENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

	};
}

