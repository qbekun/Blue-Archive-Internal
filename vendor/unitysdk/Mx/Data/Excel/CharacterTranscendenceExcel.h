#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterTranscendenceExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A3F770)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GETROOTASCHARACTERTRANSCENDENCEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A3F780)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GETROOTASCHARACTERTRANSCENDENCEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A3F7E0)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A3F870)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A3F840)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A3F890)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_MAXFAVORLEVEL_OFFSET UNITYSDK_OFFSET(0x1A3F8E0)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GET_MAXFAVORLEVELLENGTH_OFFSET UNITYSDK_OFFSET(0x1A3F940)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GETMAXFAVORLEVELBYTES_OFFSET UNITYSDK_OFFSET(0x1A3F980)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_STATBONUSRATEATTACK_OFFSET UNITYSDK_OFFSET(0x1A3F9A0)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GET_STATBONUSRATEATTACKLENGTH_OFFSET UNITYSDK_OFFSET(0x1A3FA00)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GETSTATBONUSRATEATTACKBYTES_OFFSET UNITYSDK_OFFSET(0x1A3FA40)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_STATBONUSRATEHP_OFFSET UNITYSDK_OFFSET(0x1A3FA60)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GET_STATBONUSRATEHPLENGTH_OFFSET UNITYSDK_OFFSET(0x1A3FAC0)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GETSTATBONUSRATEHPBYTES_OFFSET UNITYSDK_OFFSET(0x1A3FB00)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_STATBONUSRATEHEAL_OFFSET UNITYSDK_OFFSET(0x1A3FB20)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GET_STATBONUSRATEHEALLENGTH_OFFSET UNITYSDK_OFFSET(0x1A3FB80)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GETSTATBONUSRATEHEALBYTES_OFFSET UNITYSDK_OFFSET(0x1A3FBC0)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_RECIPEID_OFFSET UNITYSDK_OFFSET(0x1A3FBE0)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GET_RECIPEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A3FC40)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GETRECIPEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A3FC80)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_SKILLSLOTA_OFFSET UNITYSDK_OFFSET(0x1A3FCA0)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GET_SKILLSLOTALENGTH_OFFSET UNITYSDK_OFFSET(0x1A3FCF0)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_SKILLSLOTB_OFFSET UNITYSDK_OFFSET(0x1A3FD30)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GET_SKILLSLOTBLENGTH_OFFSET UNITYSDK_OFFSET(0x1A3FD80)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_SKILLSLOTC_OFFSET UNITYSDK_OFFSET(0x1A3FDC0)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GET_SKILLSLOTCLENGTH_OFFSET UNITYSDK_OFFSET(0x1A3FE10)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_MAXLEVELSTAR_OFFSET UNITYSDK_OFFSET(0x1A3FE50)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GET_MAXLEVELSTARLENGTH_OFFSET UNITYSDK_OFFSET(0x1A3FEB0)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GETMAXLEVELSTARBYTES_OFFSET UNITYSDK_OFFSET(0x1A3FEF0)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_CREATECHARACTERTRANSCENDENCEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A3FF10)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_STARTCHARACTERTRANSCENDENCEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A40310)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_ADDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A400E0)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_ADDMAXFAVORLEVEL_OFFSET UNITYSDK_OFFSET(0x1A40290)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_CREATEMAXFAVORLEVELVECTOR_OFFSET UNITYSDK_OFFSET(0x1A40330)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_STARTMAXFAVORLEVELVECTOR_OFFSET UNITYSDK_OFFSET(0x1A403C0)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_ADDSTATBONUSRATEATTACK_OFFSET UNITYSDK_OFFSET(0x1A40260)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_CREATESTATBONUSRATEATTACKVECTOR_OFFSET UNITYSDK_OFFSET(0x1A40400)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_STARTSTATBONUSRATEATTACKVECTOR_OFFSET UNITYSDK_OFFSET(0x1A40490)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_ADDSTATBONUSRATEHP_OFFSET UNITYSDK_OFFSET(0x1A40230)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_CREATESTATBONUSRATEHPVECTOR_OFFSET UNITYSDK_OFFSET(0x1A404D0)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_STARTSTATBONUSRATEHPVECTOR_OFFSET UNITYSDK_OFFSET(0x1A40560)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_ADDSTATBONUSRATEHEAL_OFFSET UNITYSDK_OFFSET(0x1A40200)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_CREATESTATBONUSRATEHEALVECTOR_OFFSET UNITYSDK_OFFSET(0x1A405A0)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_STARTSTATBONUSRATEHEALVECTOR_OFFSET UNITYSDK_OFFSET(0x1A40630)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_ADDRECIPEID_OFFSET UNITYSDK_OFFSET(0x1A401D0)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_CREATERECIPEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A40670)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_STARTRECIPEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A40700)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_ADDSKILLSLOTA_OFFSET UNITYSDK_OFFSET(0x1A401A0)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_CREATESKILLSLOTAVECTOR_OFFSET UNITYSDK_OFFSET(0x1A40740)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_STARTSKILLSLOTAVECTOR_OFFSET UNITYSDK_OFFSET(0x1A407D0)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_ADDSKILLSLOTB_OFFSET UNITYSDK_OFFSET(0x1A40170)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_CREATESKILLSLOTBVECTOR_OFFSET UNITYSDK_OFFSET(0x1A40810)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_STARTSKILLSLOTBVECTOR_OFFSET UNITYSDK_OFFSET(0x1A408A0)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_ADDSKILLSLOTC_OFFSET UNITYSDK_OFFSET(0x1A40140)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_CREATESKILLSLOTCVECTOR_OFFSET UNITYSDK_OFFSET(0x1A408E0)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_STARTSKILLSLOTCVECTOR_OFFSET UNITYSDK_OFFSET(0x1A40970)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_ADDMAXLEVELSTAR_OFFSET UNITYSDK_OFFSET(0x1A40110)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_CREATEMAXLEVELSTARVECTOR_OFFSET UNITYSDK_OFFSET(0x1A409B0)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_STARTMAXLEVELSTARVECTOR_OFFSET UNITYSDK_OFFSET(0x1A40A40)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_ENDCHARACTERTRANSCENDENCEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A402C0)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_FINISHCHARACTERTRANSCENDENCEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A40A80)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_FINISHSIZEPREFIXEDCHARACTERTRANSCENDENCEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A40AA0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterTranscendenceExcel_TypeDefinitionIndex = 17110;

	class CharacterTranscendenceExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterTranscendenceExcel* GetRootAsCharacterTranscendenceExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterTranscendenceExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GETROOTASCHARACTERTRANSCENDENCEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterTranscendenceExcel* GetRootAsCharacterTranscendenceExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterTranscendenceExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterTranscendenceExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterTranscendenceExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GETROOTASCHARACTERTRANSCENDENCEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterTranscendenceExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterTranscendenceExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Int32 MaxFavorLevel(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_MAXFAVORLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MaxFavorLevelLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GET_MAXFAVORLEVELLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMaxFavorLevelBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GETMAXFAVORLEVELBYTES_OFFSET))(nullptr);
		}

		::System::Int64 StatBonusRateAttack(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_STATBONUSRATEATTACK_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StatBonusRateAttackLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GET_STATBONUSRATEATTACKLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStatBonusRateAttackBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GETSTATBONUSRATEATTACKBYTES_OFFSET))(nullptr);
		}

		::System::Int64 StatBonusRateHP(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_STATBONUSRATEHP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StatBonusRateHPLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GET_STATBONUSRATEHPLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStatBonusRateHPBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GETSTATBONUSRATEHPBYTES_OFFSET))(nullptr);
		}

		::System::Int64 StatBonusRateHeal(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_STATBONUSRATEHEAL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StatBonusRateHealLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GET_STATBONUSRATEHEALLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStatBonusRateHealBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GETSTATBONUSRATEHEALBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RecipeId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_RECIPEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RecipeIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GET_RECIPEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRecipeIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GETRECIPEIDBYTES_OFFSET))(nullptr);
		}

		::System::String* SkillSlotA(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_SKILLSLOTA_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SkillSlotALength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GET_SKILLSLOTALENGTH_OFFSET))(nullptr);
		}

		::System::String* SkillSlotB(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_SKILLSLOTB_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SkillSlotBLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GET_SKILLSLOTBLENGTH_OFFSET))(nullptr);
		}

		::System::String* SkillSlotC(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_SKILLSLOTC_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SkillSlotCLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GET_SKILLSLOTCLENGTH_OFFSET))(nullptr);
		}

		::System::Int32 MaxlevelStar(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_MAXLEVELSTAR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MaxlevelStarLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GET_MAXLEVELSTARLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMaxlevelStarBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_GETMAXLEVELSTARBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterTranscendenceExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_CREATECHARACTERTRANSCENDENCEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterTranscendenceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_STARTCHARACTERTRANSCENDENCEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_ADDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxFavorLevel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_ADDMAXFAVORLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMaxFavorLevelVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_CREATEMAXFAVORLEVELVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMaxFavorLevelVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_STARTMAXFAVORLEVELVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStatBonusRateAttack(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_ADDSTATBONUSRATEATTACK_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStatBonusRateAttackVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_CREATESTATBONUSRATEATTACKVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStatBonusRateAttackVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_STARTSTATBONUSRATEATTACKVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStatBonusRateHP(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_ADDSTATBONUSRATEHP_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStatBonusRateHPVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_CREATESTATBONUSRATEHPVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStatBonusRateHPVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_STARTSTATBONUSRATEHPVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStatBonusRateHeal(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_ADDSTATBONUSRATEHEAL_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStatBonusRateHealVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_CREATESTATBONUSRATEHEALVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStatBonusRateHealVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_STARTSTATBONUSRATEHEALVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecipeId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_ADDRECIPEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRecipeIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_CREATERECIPEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRecipeIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_STARTRECIPEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkillSlotA(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_ADDSKILLSLOTA_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateSkillSlotAVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_CREATESKILLSLOTAVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartSkillSlotAVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_STARTSKILLSLOTAVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkillSlotB(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_ADDSKILLSLOTB_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateSkillSlotBVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_CREATESKILLSLOTBVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartSkillSlotBVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_STARTSKILLSLOTBVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkillSlotC(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_ADDSKILLSLOTC_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateSkillSlotCVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_CREATESKILLSLOTCVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartSkillSlotCVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_STARTSKILLSLOTCVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxlevelStar(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_ADDMAXLEVELSTAR_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMaxlevelStarVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_CREATEMAXLEVELSTARVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMaxlevelStarVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_STARTMAXLEVELSTARVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterTranscendenceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_ENDCHARACTERTRANSCENDENCEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterTranscendenceExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_FINISHCHARACTERTRANSCENDENCEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterTranscendenceExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCEL_FINISHSIZEPREFIXEDCHARACTERTRANSCENDENCEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

