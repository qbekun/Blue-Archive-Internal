#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class PresetCharacterGroupExcel; }
namespace FlatData { class PotentialStatBonusRateType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C2D630)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GETROOTASPRESETCHARACTERGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C2D640)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GETROOTASPRESETCHARACTERGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C2D6A0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C2D730)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C2D700)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_PRESETCHARACTERGROUPID_OFFSET UNITYSDK_OFFSET(0x1C2D750)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_GETPRESETTYPE_OFFSET UNITYSDK_OFFSET(0x1C2D7A0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GETGETPRESETTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1C2D7E0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1C2D800)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EXP_OFFSET UNITYSDK_OFFSET(0x1C2D850)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_FAVOREXP_OFFSET UNITYSDK_OFFSET(0x1C2D8A0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_FAVORRANK_OFFSET UNITYSDK_OFFSET(0x1C2D8F0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_STARGRADE_OFFSET UNITYSDK_OFFSET(0x1C2D940)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EXSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1C2D990)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_PASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1C2D9E0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EXTRAPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1C2DA30)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_COMMONSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1C2DA80)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_LEADERSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1C2DAD0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPSLOT01_OFFSET UNITYSDK_OFFSET(0x1C2DB20)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPSLOTTIER01_OFFSET UNITYSDK_OFFSET(0x1C2DB70)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPSLOTLEVEL01_OFFSET UNITYSDK_OFFSET(0x1C2DBC0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPSLOT02_OFFSET UNITYSDK_OFFSET(0x1C2DC10)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPSLOTTIER02_OFFSET UNITYSDK_OFFSET(0x1C2DC60)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPSLOTLEVEL02_OFFSET UNITYSDK_OFFSET(0x1C2DCB0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPSLOT03_OFFSET UNITYSDK_OFFSET(0x1C2DD00)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPSLOTTIER03_OFFSET UNITYSDK_OFFSET(0x1C2DD50)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPSLOTLEVEL03_OFFSET UNITYSDK_OFFSET(0x1C2DDA0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPCHARACTERWEAPON_OFFSET UNITYSDK_OFFSET(0x1C2DDF0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPCHARACTERWEAPONTIER_OFFSET UNITYSDK_OFFSET(0x1C2DE40)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPCHARACTERWEAPONLEVEL_OFFSET UNITYSDK_OFFSET(0x1C2DE90)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPCHARACTERGEAR_OFFSET UNITYSDK_OFFSET(0x1C2DEE0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPCHARACTERGEARTIER_OFFSET UNITYSDK_OFFSET(0x1C2DF30)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPCHARACTERGEARLEVEL_OFFSET UNITYSDK_OFFSET(0x1C2DF80)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_POTENTIALTYPE01_OFFSET UNITYSDK_OFFSET(0x1C2DFD0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_POTENTIALLEVEL01_OFFSET UNITYSDK_OFFSET(0x1C2E020)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_POTENTIALTYPE02_OFFSET UNITYSDK_OFFSET(0x1C2E070)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_POTENTIALLEVEL02_OFFSET UNITYSDK_OFFSET(0x1C2E0C0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_POTENTIALTYPE03_OFFSET UNITYSDK_OFFSET(0x1C2E110)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_POTENTIALLEVEL03_OFFSET UNITYSDK_OFFSET(0x1C2E160)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_CREATEPRESETCHARACTERGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C2E1B0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_STARTPRESETCHARACTERGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C2EDC0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDPRESETCHARACTERGROUPID_OFFSET UNITYSDK_OFFSET(0x1C2E740)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDGETPRESETTYPE_OFFSET UNITYSDK_OFFSET(0x1C2EC50)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDLEVEL_OFFSET UNITYSDK_OFFSET(0x1C2EC20)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEXP_OFFSET UNITYSDK_OFFSET(0x1C2EBF0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDFAVOREXP_OFFSET UNITYSDK_OFFSET(0x1C2EBC0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDFAVORRANK_OFFSET UNITYSDK_OFFSET(0x1C2EB90)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDSTARGRADE_OFFSET UNITYSDK_OFFSET(0x1C2EB60)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEXSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1C2EB30)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1C2EB00)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEXTRAPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1C2EAD0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDCOMMONSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1C2EAA0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDLEADERSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1C2EA70)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPSLOT01_OFFSET UNITYSDK_OFFSET(0x1C2ED40)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPSLOTTIER01_OFFSET UNITYSDK_OFFSET(0x1C2EA40)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPSLOTLEVEL01_OFFSET UNITYSDK_OFFSET(0x1C2EA10)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPSLOT02_OFFSET UNITYSDK_OFFSET(0x1C2ED10)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPSLOTTIER02_OFFSET UNITYSDK_OFFSET(0x1C2E9E0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPSLOTLEVEL02_OFFSET UNITYSDK_OFFSET(0x1C2E9B0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPSLOT03_OFFSET UNITYSDK_OFFSET(0x1C2ECE0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPSLOTTIER03_OFFSET UNITYSDK_OFFSET(0x1C2E980)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPSLOTLEVEL03_OFFSET UNITYSDK_OFFSET(0x1C2E950)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPCHARACTERWEAPON_OFFSET UNITYSDK_OFFSET(0x1C2ECB0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPCHARACTERWEAPONTIER_OFFSET UNITYSDK_OFFSET(0x1C2E920)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPCHARACTERWEAPONLEVEL_OFFSET UNITYSDK_OFFSET(0x1C2E8F0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPCHARACTERGEAR_OFFSET UNITYSDK_OFFSET(0x1C2EC80)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPCHARACTERGEARTIER_OFFSET UNITYSDK_OFFSET(0x1C2E8C0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPCHARACTERGEARLEVEL_OFFSET UNITYSDK_OFFSET(0x1C2E890)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDPOTENTIALTYPE01_OFFSET UNITYSDK_OFFSET(0x1C2E860)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDPOTENTIALLEVEL01_OFFSET UNITYSDK_OFFSET(0x1C2E830)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDPOTENTIALTYPE02_OFFSET UNITYSDK_OFFSET(0x1C2E800)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDPOTENTIALLEVEL02_OFFSET UNITYSDK_OFFSET(0x1C2E7D0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDPOTENTIALTYPE03_OFFSET UNITYSDK_OFFSET(0x1C2E7A0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDPOTENTIALLEVEL03_OFFSET UNITYSDK_OFFSET(0x1C2E770)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ENDPRESETCHARACTERGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1C2ED70)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_FINISHPRESETCHARACTERGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C2EDE0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_FINISHSIZEPREFIXEDPRESETCHARACTERGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C2EE00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int PresetCharacterGroupExcel_TypeDefinitionIndex = 19064;

	class PresetCharacterGroupExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::PresetCharacterGroupExcel* GetRootAsPresetCharacterGroupExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::PresetCharacterGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GETROOTASPRESETCHARACTERGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::PresetCharacterGroupExcel* GetRootAsPresetCharacterGroupExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::PresetCharacterGroupExcel* arg)
		{
			return (return (::MX::Data::Excel::PresetCharacterGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::PresetCharacterGroupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GETROOTASPRESETCHARACTERGROUPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::PresetCharacterGroupExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::PresetCharacterGroupExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_PresetCharacterGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_PRESETCHARACTERGROUPID_OFFSET))(nullptr);
		}

		::System::String* get_GetPresetType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_GETPRESETTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* GetGetPresetTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GETGETPRESETTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_Exp()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EXP_OFFSET))(nullptr);
		}

		::System::Int32 get_FavorExp()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_FAVOREXP_OFFSET))(nullptr);
		}

		::System::Int32 get_FavorRank()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_FAVORRANK_OFFSET))(nullptr);
		}

		::System::Int32 get_StarGrade()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_STARGRADE_OFFSET))(nullptr);
		}

		::System::Int32 get_ExSkillLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EXSKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_PassiveSkillLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_PASSIVESKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_ExtraPassiveSkillLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EXTRAPASSIVESKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_CommonSkillLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_COMMONSKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_LeaderSkillLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_LEADERSKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Boolean get_EquipSlot01()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPSLOT01_OFFSET))(nullptr);
		}

		::System::Int32 get_EquipSlotTier01()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPSLOTTIER01_OFFSET))(nullptr);
		}

		::System::Int32 get_EquipSlotLevel01()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPSLOTLEVEL01_OFFSET))(nullptr);
		}

		::System::Boolean get_EquipSlot02()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPSLOT02_OFFSET))(nullptr);
		}

		::System::Int32 get_EquipSlotTier02()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPSLOTTIER02_OFFSET))(nullptr);
		}

		::System::Int32 get_EquipSlotLevel02()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPSLOTLEVEL02_OFFSET))(nullptr);
		}

		::System::Boolean get_EquipSlot03()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPSLOT03_OFFSET))(nullptr);
		}

		::System::Int32 get_EquipSlotTier03()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPSLOTTIER03_OFFSET))(nullptr);
		}

		::System::Int32 get_EquipSlotLevel03()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPSLOTLEVEL03_OFFSET))(nullptr);
		}

		::System::Boolean get_EquipCharacterWeapon()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPCHARACTERWEAPON_OFFSET))(nullptr);
		}

		::System::Int32 get_EquipCharacterWeaponTier()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPCHARACTERWEAPONTIER_OFFSET))(nullptr);
		}

		::System::Int32 get_EquipCharacterWeaponLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPCHARACTERWEAPONLEVEL_OFFSET))(nullptr);
		}

		::System::Boolean get_EquipCharacterGear()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPCHARACTERGEAR_OFFSET))(nullptr);
		}

		::System::Int32 get_EquipCharacterGearTier()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPCHARACTERGEARTIER_OFFSET))(nullptr);
		}

		::System::Int32 get_EquipCharacterGearLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_EQUIPCHARACTERGEARLEVEL_OFFSET))(nullptr);
		}

		::FlatData::PotentialStatBonusRateType* get_PotentialType01()
		{
			return (return (::FlatData::PotentialStatBonusRateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_POTENTIALTYPE01_OFFSET))(nullptr);
		}

		::System::Int32 get_PotentialLevel01()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_POTENTIALLEVEL01_OFFSET))(nullptr);
		}

		::FlatData::PotentialStatBonusRateType* get_PotentialType02()
		{
			return (return (::FlatData::PotentialStatBonusRateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_POTENTIALTYPE02_OFFSET))(nullptr);
		}

		::System::Int32 get_PotentialLevel02()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_POTENTIALLEVEL02_OFFSET))(nullptr);
		}

		::FlatData::PotentialStatBonusRateType* get_PotentialType03()
		{
			return (return (::FlatData::PotentialStatBonusRateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_POTENTIALTYPE03_OFFSET))(nullptr);
		}

		::System::Int32 get_PotentialLevel03()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_GET_POTENTIALLEVEL03_OFFSET))(nullptr);
		}

		Il2CppObject* CreatePresetCharacterGroupExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatData::PotentialStatBonusRateType* arg, ::System::Int32 arg, ::FlatData::PotentialStatBonusRateType* arg, ::System::Int32 arg, ::FlatData::PotentialStatBonusRateType* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32, ::FlatData::PotentialStatBonusRateType*, ::System::Int32, ::FlatData::PotentialStatBonusRateType*, ::System::Int32, ::FlatData::PotentialStatBonusRateType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_CREATEPRESETCHARACTERGROUPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartPresetCharacterGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_STARTPRESETCHARACTERGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddPresetCharacterGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDPRESETCHARACTERGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGetPresetType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDGETPRESETTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEXP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFavorExp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDFAVOREXP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFavorRank(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDFAVORRANK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStarGrade(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDSTARGRADE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExSkillLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEXSKILLLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPassiveSkillLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDPASSIVESKILLLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExtraPassiveSkillLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEXTRAPASSIVESKILLLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCommonSkillLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDCOMMONSKILLLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLeaderSkillLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDLEADERSKILLLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEquipSlot01(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPSLOT01_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEquipSlotTier01(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPSLOTTIER01_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEquipSlotLevel01(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPSLOTLEVEL01_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEquipSlot02(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPSLOT02_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEquipSlotTier02(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPSLOTTIER02_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEquipSlotLevel02(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPSLOTLEVEL02_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEquipSlot03(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPSLOT03_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEquipSlotTier03(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPSLOTTIER03_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEquipSlotLevel03(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPSLOTLEVEL03_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEquipCharacterWeapon(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPCHARACTERWEAPON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEquipCharacterWeaponTier(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPCHARACTERWEAPONTIER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEquipCharacterWeaponLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPCHARACTERWEAPONLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEquipCharacterGear(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPCHARACTERGEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEquipCharacterGearTier(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPCHARACTERGEARTIER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEquipCharacterGearLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDEQUIPCHARACTERGEARLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPotentialType01(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::PotentialStatBonusRateType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::PotentialStatBonusRateType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDPOTENTIALTYPE01_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPotentialLevel01(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDPOTENTIALLEVEL01_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPotentialType02(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::PotentialStatBonusRateType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::PotentialStatBonusRateType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDPOTENTIALTYPE02_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPotentialLevel02(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDPOTENTIALLEVEL02_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPotentialType03(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::PotentialStatBonusRateType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::PotentialStatBonusRateType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDPOTENTIALTYPE03_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPotentialLevel03(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ADDPOTENTIALLEVEL03_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndPresetCharacterGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_ENDPRESETCHARACTERGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishPresetCharacterGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_FINISHPRESETCHARACTERGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedPresetCharacterGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPEXCEL_FINISHSIZEPREFIXEDPRESETCHARACTERGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

