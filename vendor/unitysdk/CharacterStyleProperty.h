#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class CharacterExcel; }
namespace MX::Data::Excel { class CostumeExcel; }
namespace FlatData { class WeaponType; }
namespace FlatData { class SquadType; }
namespace FlatData { class BulletType; }
namespace MX::Data::Excel { class CharacterSkillListExcel; }
namespace FlatData { class ArmorType; }

#define CHARACTERSTYLEPROPERTY_GET_DEFAULTCOSTUMEEXCEL_OFFSET UNITYSDK_OFFSET(0x10BD7E0)
#define CHARACTERSTYLEPROPERTY_GET_WEAPONTYPE_OFFSET UNITYSDK_OFFSET(0x10BD880)
#define CHARACTERSTYLEPROPERTY_GET_INTRODUCTIONTEXT_OFFSET UNITYSDK_OFFSET(0x10BD8A0)
#define CHARACTERSTYLEPROPERTY_COSTUMEEXCEL_OFFSET UNITYSDK_OFFSET(0x10BD930)
#define CHARACTERSTYLEPROPERTY_GET_SQUADTYPE_OFFSET UNITYSDK_OFFSET(0x10BDA40)
#define CHARACTERSTYLEPROPERTY_GET_CHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x10BDA60)
#define CHARACTERSTYLEPROPERTY_GET_STATUSTEXT_OFFSET UNITYSDK_OFFSET(0x10BDA70)
#define CHARACTERSTYLEPROPERTY_GET_BULLETTYPE_OFFSET UNITYSDK_OFFSET(0x10BDB00)
#define CHARACTERSTYLEPROPERTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x10BDB20)
#define CHARACTERSTYLEPROPERTY_GETSKILLLISTEXCEL_OFFSET UNITYSDK_OFFSET(0x10B7E70)
#define CHARACTERSTYLEPROPERTY_GET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0x10B9680)
#define CHARACTERSTYLEPROPERTY_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x10BDB60)
#define CHARACTERSTYLEPROPERTY_GET_ARMORTYPE_OFFSET UNITYSDK_OFFSET(0x10BDB70)

	inline static constexpr unsigned int CharacterStyleProperty_TypeDefinitionIndex = 930;

	class CharacterStyleProperty : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::MX::Data::Excel::CharacterExcel* _CharacterExcel_k__BackingField; // 0x18

		::MX::Data::Excel::CostumeExcel* get_DefaultCostumeExcel()
		{
			return ((::MX::Data::Excel::CostumeExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLEPROPERTY_GET_DEFAULTCOSTUMEEXCEL_OFFSET))(nullptr);
		}

		::FlatData::WeaponType* get_WeaponType()
		{
			return ((::FlatData::WeaponType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLEPROPERTY_GET_WEAPONTYPE_OFFSET))(nullptr);
		}

		::System::String* get_IntroductionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLEPROPERTY_GET_INTRODUCTIONTEXT_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CostumeExcel* CostumeExcel(::System::Int64 arg)
		{
			return ((::MX::Data::Excel::CostumeExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLEPROPERTY_COSTUMEEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::SquadType* get_SquadType()
		{
			return ((::FlatData::SquadType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLEPROPERTY_GET_SQUADTYPE_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterExcel* get_CharacterExcel()
		{
			return ((::MX::Data::Excel::CharacterExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLEPROPERTY_GET_CHARACTEREXCEL_OFFSET))(nullptr);
		}

		::System::String* get_StatusText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLEPROPERTY_GET_STATUSTEXT_OFFSET))(nullptr);
		}

		::FlatData::BulletType* get_BulletType()
		{
			return ((::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLEPROPERTY_GET_BULLETTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::CharacterExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLEPROPERTY_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterSkillListExcel* GetSkillListExcel(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::MX::Data::Excel::CharacterSkillListExcel*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLEPROPERTY_GETSKILLLISTEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_CostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLEPROPERTY_GET_COSTUMEID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLEPROPERTY_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::FlatData::ArmorType* get_ArmorType()
		{
			return ((::FlatData::ArmorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLEPROPERTY_GET_ARMORTYPE_OFFSET))(nullptr);
		}

	};

