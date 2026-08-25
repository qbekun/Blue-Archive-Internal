#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterWeaponExcel; }
namespace FlatData { class StatLevelUpType; }
namespace FlatData { class Tag; }
namespace FlatData { class EquipmentOptionType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A48300)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GETROOTASCHARACTERWEAPONEXCEL_OFFSET UNITYSDK_OFFSET(0x1A48310)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GETROOTASCHARACTERWEAPONEXCEL_OFFSET UNITYSDK_OFFSET(0x1A48370)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A48400)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A483D0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A48420)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1A48470)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GETIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1A484B0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_SETRECIPE_OFFSET UNITYSDK_OFFSET(0x1A484D0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_STATLEVELUPTYPE_OFFSET UNITYSDK_OFFSET(0x1A48520)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_ATTACKPOWER_OFFSET UNITYSDK_OFFSET(0x1A48570)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_ATTACKPOWER100_OFFSET UNITYSDK_OFFSET(0x1A485C0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x1A48610)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_MAXHP100_OFFSET UNITYSDK_OFFSET(0x1A48660)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_HEALPOWER_OFFSET UNITYSDK_OFFSET(0x1A486B0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_HEALPOWER100_OFFSET UNITYSDK_OFFSET(0x1A48700)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_TAGS_OFFSET UNITYSDK_OFFSET(0x1A48750)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_TAGSLENGTH_OFFSET UNITYSDK_OFFSET(0x1A487B0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GETTAGSBYTES_OFFSET UNITYSDK_OFFSET(0x1A487F0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_UNLOCK_OFFSET UNITYSDK_OFFSET(0x1A48810)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_UNLOCKLENGTH_OFFSET UNITYSDK_OFFSET(0x1A48870)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GETUNLOCKBYTES_OFFSET UNITYSDK_OFFSET(0x1A488B0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_RECIPEID_OFFSET UNITYSDK_OFFSET(0x1A488D0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_RECIPEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A48930)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GETRECIPEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A48970)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1A48990)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_MAXLEVELLENGTH_OFFSET UNITYSDK_OFFSET(0x1A489F0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GETMAXLEVELBYTES_OFFSET UNITYSDK_OFFSET(0x1A48A30)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_LEARNSKILLSLOT_OFFSET UNITYSDK_OFFSET(0x1A48A50)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_LEARNSKILLSLOTLENGTH_OFFSET UNITYSDK_OFFSET(0x1A48AA0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_STATTYPE_OFFSET UNITYSDK_OFFSET(0x1A48AE0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_STATTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1A48B40)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GETSTATTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1A48B80)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_STATVALUE_OFFSET UNITYSDK_OFFSET(0x1A48BA0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_STATVALUELENGTH_OFFSET UNITYSDK_OFFSET(0x1A48C00)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GETSTATVALUEBYTES_OFFSET UNITYSDK_OFFSET(0x1A48C40)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_CREATECHARACTERWEAPONEXCEL_OFFSET UNITYSDK_OFFSET(0x1A48C60)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_STARTCHARACTERWEAPONEXCEL_OFFSET UNITYSDK_OFFSET(0x1A492D0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A490A0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1A49250)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDSETRECIPE_OFFSET UNITYSDK_OFFSET(0x1A49070)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDSTATLEVELUPTYPE_OFFSET UNITYSDK_OFFSET(0x1A49220)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDATTACKPOWER_OFFSET UNITYSDK_OFFSET(0x1A49040)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDATTACKPOWER100_OFFSET UNITYSDK_OFFSET(0x1A49010)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDMAXHP_OFFSET UNITYSDK_OFFSET(0x1A48FE0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDMAXHP100_OFFSET UNITYSDK_OFFSET(0x1A48FB0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDHEALPOWER_OFFSET UNITYSDK_OFFSET(0x1A48F80)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDHEALPOWER100_OFFSET UNITYSDK_OFFSET(0x1A48F50)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDTAGS_OFFSET UNITYSDK_OFFSET(0x1A491F0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_CREATETAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1A492F0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_STARTTAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1A49380)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A491C0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_CREATEUNLOCKVECTOR_OFFSET UNITYSDK_OFFSET(0x1A493C0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_STARTUNLOCKVECTOR_OFFSET UNITYSDK_OFFSET(0x1A49450)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDRECIPEID_OFFSET UNITYSDK_OFFSET(0x1A49190)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_CREATERECIPEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A49490)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_STARTRECIPEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A49520)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1A49160)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_CREATEMAXLEVELVECTOR_OFFSET UNITYSDK_OFFSET(0x1A49560)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_STARTMAXLEVELVECTOR_OFFSET UNITYSDK_OFFSET(0x1A495F0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDLEARNSKILLSLOT_OFFSET UNITYSDK_OFFSET(0x1A49130)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_CREATELEARNSKILLSLOTVECTOR_OFFSET UNITYSDK_OFFSET(0x1A49630)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_STARTLEARNSKILLSLOTVECTOR_OFFSET UNITYSDK_OFFSET(0x1A496C0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDSTATTYPE_OFFSET UNITYSDK_OFFSET(0x1A49100)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_CREATESTATTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A49700)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_STARTSTATTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A49790)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDSTATVALUE_OFFSET UNITYSDK_OFFSET(0x1A490D0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_CREATESTATVALUEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A497D0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_STARTSTATVALUEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A49860)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ENDCHARACTERWEAPONEXCEL_OFFSET UNITYSDK_OFFSET(0x1A49280)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_FINISHCHARACTERWEAPONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A498A0)
#define MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_FINISHSIZEPREFIXEDCHARACTERWEAPONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A498C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterWeaponExcel_TypeDefinitionIndex = 17141;

	class CharacterWeaponExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterWeaponExcel* GetRootAsCharacterWeaponExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterWeaponExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GETROOTASCHARACTERWEAPONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterWeaponExcel* GetRootAsCharacterWeaponExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterWeaponExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterWeaponExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterWeaponExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GETROOTASCHARACTERWEAPONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterWeaponExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterWeaponExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_ImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_IMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GETIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_SetRecipe()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_SETRECIPE_OFFSET))(nullptr);
		}

		::FlatData::StatLevelUpType* get_StatLevelUpType()
		{
			return (return (::FlatData::StatLevelUpType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_STATLEVELUPTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_AttackPower()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_ATTACKPOWER_OFFSET))(nullptr);
		}

		::System::Int64 get_AttackPower100()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_ATTACKPOWER100_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxHP()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_MAXHP_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxHP100()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_MAXHP100_OFFSET))(nullptr);
		}

		::System::Int64 get_HealPower()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_HEALPOWER_OFFSET))(nullptr);
		}

		::System::Int64 get_HealPower100()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_HEALPOWER100_OFFSET))(nullptr);
		}

		::FlatData::Tag* Tags(::System::Int32 arg)
		{
			return (return (::FlatData::Tag*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_TAGS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TagsLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_TAGSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetTagsBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GETTAGSBYTES_OFFSET))(nullptr);
		}

		::System::Boolean Unlock(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_UNLOCK_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_UnlockLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_UNLOCKLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetUnlockBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GETUNLOCKBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RecipeId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_RECIPEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RecipeIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_RECIPEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRecipeIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GETRECIPEIDBYTES_OFFSET))(nullptr);
		}

		::System::Int32 MaxLevel(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_MAXLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MaxLevelLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_MAXLEVELLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMaxLevelBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GETMAXLEVELBYTES_OFFSET))(nullptr);
		}

		::System::String* LearnSkillSlot(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_LEARNSKILLSLOT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LearnSkillSlotLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_LEARNSKILLSLOTLENGTH_OFFSET))(nullptr);
		}

		::FlatData::EquipmentOptionType* StatType(::System::Int32 arg)
		{
			return (return (::FlatData::EquipmentOptionType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_STATTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StatTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_STATTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStatTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GETSTATTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 StatValue(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_STATVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StatValueLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GET_STATVALUELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStatValueBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_GETSTATVALUEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterWeaponExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatData::StatLevelUpType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatData::StatLevelUpType*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_CREATECHARACTERWEAPONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterWeaponExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_STARTCHARACTERWEAPONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSetRecipe(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDSETRECIPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStatLevelUpType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StatLevelUpType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StatLevelUpType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDSTATLEVELUPTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAttackPower(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDATTACKPOWER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAttackPower100(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDATTACKPOWER100_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxHP(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDMAXHP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxHP100(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDMAXHP100_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHealPower(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDHEALPOWER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHealPower100(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDHEALPOWER100_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTags(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDTAGS_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_CREATETAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_STARTTAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUnlock(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDUNLOCK_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateUnlockVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_CREATEUNLOCKVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartUnlockVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_STARTUNLOCKVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecipeId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDRECIPEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRecipeIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_CREATERECIPEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRecipeIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_STARTRECIPEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxLevel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDMAXLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMaxLevelVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_CREATEMAXLEVELVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMaxLevelVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_STARTMAXLEVELVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLearnSkillSlot(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDLEARNSKILLSLOT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateLearnSkillSlotVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_CREATELEARNSKILLSLOTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartLearnSkillSlotVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_STARTLEARNSKILLSLOTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStatType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDSTATTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStatTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_CREATESTATTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStatTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_STARTSTATTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStatValue(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ADDSTATVALUE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStatValueVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_CREATESTATVALUEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStatValueVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_STARTSTATVALUEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterWeaponExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_ENDCHARACTERWEAPONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterWeaponExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_FINISHCHARACTERWEAPONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterWeaponExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERWEAPONEXCEL_FINISHSIZEPREFIXEDCHARACTERWEAPONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

