#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterGearExcel; }
namespace FlatData { class StatLevelUpType; }
namespace FlatData { class EquipmentOptionType; }
namespace FlatData { class Tag; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A278E0)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_GETROOTASCHARACTERGEAREXCEL_OFFSET UNITYSDK_OFFSET(0x1A278F0)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_GETROOTASCHARACTERGEAREXCEL_OFFSET UNITYSDK_OFFSET(0x1A27950)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A279E0)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A279B0)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A27A00)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A27A50)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_STATLEVELUPTYPE_OFFSET UNITYSDK_OFFSET(0x1A27AA0)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_TIER_OFFSET UNITYSDK_OFFSET(0x1A27AF0)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_NEXTTIEREQUIPMENT_OFFSET UNITYSDK_OFFSET(0x1A27B40)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_RECIPEID_OFFSET UNITYSDK_OFFSET(0x1A27B90)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_OPENFAVORLEVEL_OFFSET UNITYSDK_OFFSET(0x1A27BE0)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1A27C30)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_LEARNSKILLSLOT_OFFSET UNITYSDK_OFFSET(0x1A27C80)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_GETLEARNSKILLSLOTBYTES_OFFSET UNITYSDK_OFFSET(0x1A27CC0)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_STATTYPE_OFFSET UNITYSDK_OFFSET(0x1A27CE0)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_STATTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1A27D40)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_GETSTATTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1A27D80)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_MINSTATVALUE_OFFSET UNITYSDK_OFFSET(0x1A27DA0)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_MINSTATVALUELENGTH_OFFSET UNITYSDK_OFFSET(0x1A27E00)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_GETMINSTATVALUEBYTES_OFFSET UNITYSDK_OFFSET(0x1A27E40)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_MAXSTATVALUE_OFFSET UNITYSDK_OFFSET(0x1A27E60)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_MAXSTATVALUELENGTH_OFFSET UNITYSDK_OFFSET(0x1A27EC0)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_GETMAXSTATVALUEBYTES_OFFSET UNITYSDK_OFFSET(0x1A27F00)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_ICON_OFFSET UNITYSDK_OFFSET(0x1A27F20)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_GETICONBYTES_OFFSET UNITYSDK_OFFSET(0x1A27F60)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1A27F80)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_TAGS_OFFSET UNITYSDK_OFFSET(0x1A27FD0)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_TAGSLENGTH_OFFSET UNITYSDK_OFFSET(0x1A28030)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_GETTAGSBYTES_OFFSET UNITYSDK_OFFSET(0x1A28070)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_CREATECHARACTERGEAREXCEL_OFFSET UNITYSDK_OFFSET(0x1A28090)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_STARTCHARACTERGEAREXCEL_OFFSET UNITYSDK_OFFSET(0x1A28650)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A28450)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A28420)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDSTATLEVELUPTYPE_OFFSET UNITYSDK_OFFSET(0x1A285D0)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDTIER_OFFSET UNITYSDK_OFFSET(0x1A283F0)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDNEXTTIEREQUIPMENT_OFFSET UNITYSDK_OFFSET(0x1A283C0)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDRECIPEID_OFFSET UNITYSDK_OFFSET(0x1A28390)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDOPENFAVORLEVEL_OFFSET UNITYSDK_OFFSET(0x1A28360)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1A28330)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDLEARNSKILLSLOT_OFFSET UNITYSDK_OFFSET(0x1A285A0)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDSTATTYPE_OFFSET UNITYSDK_OFFSET(0x1A28570)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_CREATESTATTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A28670)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_STARTSTATTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A28700)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDMINSTATVALUE_OFFSET UNITYSDK_OFFSET(0x1A28540)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_CREATEMINSTATVALUEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A28740)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_STARTMINSTATVALUEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A287D0)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDMAXSTATVALUE_OFFSET UNITYSDK_OFFSET(0x1A28510)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_CREATEMAXSTATVALUEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A28810)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_STARTMAXSTATVALUEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A288A0)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDICON_OFFSET UNITYSDK_OFFSET(0x1A284E0)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1A284B0)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDTAGS_OFFSET UNITYSDK_OFFSET(0x1A28480)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_CREATETAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1A288E0)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_STARTTAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1A28970)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_ENDCHARACTERGEAREXCEL_OFFSET UNITYSDK_OFFSET(0x1A28600)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_FINISHCHARACTERGEAREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A289B0)
#define MX_DATA_EXCEL_CHARACTERGEAREXCEL_FINISHSIZEPREFIXEDCHARACTERGEAREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A289D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterGearExcel_TypeDefinitionIndex = 17013;

	class CharacterGearExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterGearExcel* GetRootAsCharacterGearExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterGearExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_GETROOTASCHARACTERGEAREXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterGearExcel* GetRootAsCharacterGearExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterGearExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterGearExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterGearExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_GETROOTASCHARACTERGEAREXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterGearExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterGearExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::FlatData::StatLevelUpType* get_StatLevelUpType()
		{
			return (return (::FlatData::StatLevelUpType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_STATLEVELUPTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_Tier()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_TIER_OFFSET))(nullptr);
		}

		::System::Int64 get_NextTierEquipment()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_NEXTTIEREQUIPMENT_OFFSET))(nullptr);
		}

		::System::Int64 get_RecipeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_RECIPEID_OFFSET))(nullptr);
		}

		::System::Int64 get_OpenFavorLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_OPENFAVORLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_MAXLEVEL_OFFSET))(nullptr);
		}

		::System::String* get_LearnSkillSlot()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_LEARNSKILLSLOT_OFFSET))(nullptr);
		}

		Il2CppObject* GetLearnSkillSlotBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_GETLEARNSKILLSLOTBYTES_OFFSET))(nullptr);
		}

		::FlatData::EquipmentOptionType* StatType(::System::Int32 arg)
		{
			return (return (::FlatData::EquipmentOptionType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_STATTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StatTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_STATTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStatTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_GETSTATTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 MinStatValue(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_MINSTATVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MinStatValueLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_MINSTATVALUELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMinStatValueBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_GETMINSTATVALUEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 MaxStatValue(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_MAXSTATVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MaxStatValueLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_MAXSTATVALUELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMaxStatValueBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_GETMAXSTATVALUEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_Icon()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_ICON_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_GETICONBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::FlatData::Tag* Tags(::System::Int32 arg)
		{
			return (return (::FlatData::Tag*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_TAGS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TagsLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_GET_TAGSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetTagsBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_GETTAGSBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterGearExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::StatLevelUpType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::UInt32 arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::StatLevelUpType*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::System::UInt32, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_CREATECHARACTERGEAREXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterGearExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_STARTCHARACTERGEAREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStatLevelUpType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StatLevelUpType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StatLevelUpType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDSTATLEVELUPTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTier(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDTIER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNextTierEquipment(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDNEXTTIEREQUIPMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecipeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDRECIPEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenFavorLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDOPENFAVORLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDMAXLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLearnSkillSlot(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDLEARNSKILLSLOT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStatType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDSTATTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStatTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_CREATESTATTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStatTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_STARTSTATTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMinStatValue(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDMINSTATVALUE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMinStatValueVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_CREATEMINSTATVALUEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMinStatValueVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_STARTMINSTATVALUEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxStatValue(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDMAXSTATVALUE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMaxStatValueVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_CREATEMAXSTATVALUEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMaxStatValueVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_STARTMAXSTATVALUEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIcon(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDICON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTags(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_ADDTAGS_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_CREATETAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_STARTTAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterGearExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_ENDCHARACTERGEAREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterGearExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_FINISHCHARACTERGEAREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterGearExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCEL_FINISHSIZEPREFIXEDCHARACTERGEAREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

