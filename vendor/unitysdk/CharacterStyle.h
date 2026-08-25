#pragma once
#include "unitysdk.h"

namespace FlatData { class SquadType; }
namespace FlatData { class BulletType; }
namespace MX::Data::Excel { class CostumeExcel; }
class CharacterStyleProperty;
namespace FlatData { class ArmorType; }
namespace MX::Data::Excel { class CharacterSkillListExcel; }
namespace FlatData { class WeaponType; }
namespace FlatData { class School; }
namespace MX::Data::Excel { class CharacterExcel; }

#define CHARACTERSTYLE_GET_STATUSTEXT_OFFSET UNITYSDK_OFFSET(0x10B8630)
#define CHARACTERSTYLE_GET_REPSQUADTYPE_OFFSET UNITYSDK_OFFSET(0x10B7FE0)
#define CHARACTERSTYLE_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x10BDB90)
#define CHARACTERSTYLE_GET_REPBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x10B8100)
#define CHARACTERSTYLE_GET_BULLETTYPE_OFFSET UNITYSDK_OFFSET(0x10B83A0)
#define CHARACTERSTYLE_GET_COSTUMEEXCEL_OFFSET UNITYSDK_OFFSET(0x10B9510)
#define CHARACTERSTYLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x10BA240)
#define CHARACTERSTYLE_GET_REPSTYLE_OFFSET UNITYSDK_OFFSET(0x10B77B0)
#define CHARACTERSTYLE_GET_SQUADTYPE_OFFSET UNITYSDK_OFFSET(0x10B8260)
#define CHARACTERSTYLE_GET_REPARMORTYPE_OFFSET UNITYSDK_OFFSET(0x10B8070)
#define CHARACTERSTYLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x10B7E30)
#define CHARACTERSTYLE_CHANGESTYLE_OFFSET UNITYSDK_OFFSET(0x10BD710)
#define CHARACTERSTYLE_GETSKILLLISTEXCEL_OFFSET UNITYSDK_OFFSET(0x10B7D40)
#define CHARACTERSTYLE_GET_REPWEAPONTYPE_OFFSET UNITYSDK_OFFSET(0x10B8140)
#define CHARACTERSTYLE_GET_CURRENTSTYLE_OFFSET UNITYSDK_OFFSET(0x10B7840)
#define CHARACTERSTYLE_GET_REPSCHOOL_OFFSET UNITYSDK_OFFSET(0x10B81D0)
#define CHARACTERSTYLE_GET_REPCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x10B7C20)
#define CHARACTERSTYLE_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x10B78F0)
#define CHARACTERSTYLE_GET_REPCOSTUMEEXCEL_OFFSET UNITYSDK_OFFSET(0x10B94D0)
#define CHARACTERSTYLE_GET_SCHOOL_OFFSET UNITYSDK_OFFSET(0x10B84E0)
#define CHARACTERSTYLE_GET_CURRENTSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0x10BDC70)
#define CHARACTERSTYLE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x10BD120)
#define CHARACTERSTYLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x10BDC00)
#define CHARACTERSTYLE_GET_CHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x10B7BE0)
#define CHARACTERSTYLE_GET_INTRODUCTIONTEXT_OFFSET UNITYSDK_OFFSET(0x10B8550)
#define CHARACTERSTYLE_GET_ARMORTYPE_OFFSET UNITYSDK_OFFSET(0x10B8300)
#define CHARACTERSTYLE_GET_WEAPONTYPE_OFFSET UNITYSDK_OFFSET(0x10B8440)
#define CHARACTERSTYLE_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x10BDCA0)
#define CHARACTERSTYLE_SET_CURRENTSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0x10BDCB0)

	inline static constexpr unsigned int CharacterStyle_TypeDefinitionIndex = 932;

	class CharacterStyle : public Il2CppObject
	{
	public:
		::System::Int64 _ServerId_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* styleList; // 0x18
		::System::Int32 _CurrentStyleIndex_k__BackingField; // 0x20

		::System::String* get_StatusText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_GET_STATUSTEXT_OFFSET))(nullptr);
		}

		::FlatData::SquadType* get_RepSquadType()
		{
			return ((::FlatData::SquadType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_GET_REPSQUADTYPE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::FlatData::BulletType* get_RepBulletType()
		{
			return ((::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_GET_REPBULLETTYPE_OFFSET))(nullptr);
		}

		::FlatData::BulletType* get_BulletType()
		{
			return ((::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_GET_BULLETTYPE_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CostumeExcel* get_CostumeExcel()
		{
			return ((::MX::Data::Excel::CostumeExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_GET_COSTUMEEXCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		CharacterStyleProperty* get_RepStyle()
		{
			return ((CharacterStyleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_GET_REPSTYLE_OFFSET))(nullptr);
		}

		::FlatData::SquadType* get_SquadType()
		{
			return ((::FlatData::SquadType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_GET_SQUADTYPE_OFFSET))(nullptr);
		}

		::FlatData::ArmorType* get_RepArmorType()
		{
			return ((::FlatData::ArmorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_GET_REPARMORTYPE_OFFSET))(nullptr);
		}

		CharacterStyleProperty* get_Item(::System::Int32 arg)
		{
			return ((CharacterStyleProperty*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeStyle(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_CHANGESTYLE_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterSkillListExcel* GetSkillListExcel(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::MX::Data::Excel::CharacterSkillListExcel*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_GETSKILLLISTEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::WeaponType* get_RepWeaponType()
		{
			return ((::FlatData::WeaponType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_GET_REPWEAPONTYPE_OFFSET))(nullptr);
		}

		CharacterStyleProperty* get_CurrentStyle()
		{
			return ((CharacterStyleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_GET_CURRENTSTYLE_OFFSET))(nullptr);
		}

		::FlatData::School* get_RepSchool()
		{
			return ((::FlatData::School*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_GET_REPSCHOOL_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterExcel* get_RepCharacterExcel()
		{
			return ((::MX::Data::Excel::CharacterExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_GET_REPCHARACTEREXCEL_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CostumeExcel* get_RepCostumeExcel()
		{
			return ((::MX::Data::Excel::CostumeExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_GET_REPCOSTUMEEXCEL_OFFSET))(nullptr);
		}

		::FlatData::School* get_School()
		{
			return ((::FlatData::School*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_GET_SCHOOL_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentStyleIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_GET_CURRENTSTYLEINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_GET_COUNT_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_GETENUMERATOR_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterExcel* get_CharacterExcel()
		{
			return ((::MX::Data::Excel::CharacterExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_GET_CHARACTEREXCEL_OFFSET))(nullptr);
		}

		::System::String* get_IntroductionText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_GET_INTRODUCTIONTEXT_OFFSET))(nullptr);
		}

		::FlatData::ArmorType* get_ArmorType()
		{
			return ((::FlatData::ArmorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_GET_ARMORTYPE_OFFSET))(nullptr);
		}

		::FlatData::WeaponType* get_WeaponType()
		{
			return ((::FlatData::WeaponType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_GET_WEAPONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void set_CurrentStyleIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSTYLE_SET_CURRENTSTYLEINDEX_OFFSET))(arg, nullptr);
		}

	};

