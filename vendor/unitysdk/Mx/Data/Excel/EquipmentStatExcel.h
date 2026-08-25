#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EquipmentStatExcel; }
namespace FlatData { class StatLevelUpType; }
namespace FlatData { class EquipmentOptionType; }
namespace FlatData { class CurrencyTypes; }
namespace FlatData { class EquipmentCategory; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A91DD0)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GETROOTASEQUIPMENTSTATEXCEL_OFFSET UNITYSDK_OFFSET(0x1A91DE0)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GETROOTASEQUIPMENTSTATEXCEL_OFFSET UNITYSDK_OFFSET(0x1A91E40)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A91ED0)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A91EA0)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_EQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x1A91EF0)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_STATLEVELUPTYPE_OFFSET UNITYSDK_OFFSET(0x1A91F40)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_STATTYPE_OFFSET UNITYSDK_OFFSET(0x1A91F90)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_STATTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1A91FF0)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GETSTATTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1A92030)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_MINSTAT_OFFSET UNITYSDK_OFFSET(0x1A92050)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_MINSTATLENGTH_OFFSET UNITYSDK_OFFSET(0x1A920B0)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GETMINSTATBYTES_OFFSET UNITYSDK_OFFSET(0x1A920F0)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_MAXSTAT_OFFSET UNITYSDK_OFFSET(0x1A92110)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_MAXSTATLENGTH_OFFSET UNITYSDK_OFFSET(0x1A92170)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GETMAXSTATBYTES_OFFSET UNITYSDK_OFFSET(0x1A921B0)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_LEVELUPINSERTLIMIT_OFFSET UNITYSDK_OFFSET(0x1A921D0)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_LEVELUPFEEDEXP_OFFSET UNITYSDK_OFFSET(0x1A92220)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_LEVELUPFEEDCOSTCURRENCY_OFFSET UNITYSDK_OFFSET(0x1A92270)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_LEVELUPFEEDCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A922C0)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_EQUIPMENTCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A92310)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_LEVELUPFEEDADDEXP_OFFSET UNITYSDK_OFFSET(0x1A92360)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_DEFAULTMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1A923B0)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_TRANSCENDENCEMAX_OFFSET UNITYSDK_OFFSET(0x1A92400)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_DAMAGEFACTORGROUPID_OFFSET UNITYSDK_OFFSET(0x1A92450)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GETDAMAGEFACTORGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A92490)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_CREATEEQUIPMENTSTATEXCEL_OFFSET UNITYSDK_OFFSET(0x1A924B0)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_STARTEQUIPMENTSTATEXCEL_OFFSET UNITYSDK_OFFSET(0x1A92A10)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDEQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x1A927B0)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDSTATLEVELUPTYPE_OFFSET UNITYSDK_OFFSET(0x1A92990)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDSTATTYPE_OFFSET UNITYSDK_OFFSET(0x1A92960)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_CREATESTATTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A92A30)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_STARTSTATTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A92AC0)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDMINSTAT_OFFSET UNITYSDK_OFFSET(0x1A92930)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_CREATEMINSTATVECTOR_OFFSET UNITYSDK_OFFSET(0x1A92B00)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_STARTMINSTATVECTOR_OFFSET UNITYSDK_OFFSET(0x1A92B90)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDMAXSTAT_OFFSET UNITYSDK_OFFSET(0x1A92900)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_CREATEMAXSTATVECTOR_OFFSET UNITYSDK_OFFSET(0x1A92BD0)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_STARTMAXSTATVECTOR_OFFSET UNITYSDK_OFFSET(0x1A92C60)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDLEVELUPINSERTLIMIT_OFFSET UNITYSDK_OFFSET(0x1A928D0)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDLEVELUPFEEDEXP_OFFSET UNITYSDK_OFFSET(0x1A92780)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDLEVELUPFEEDCOSTCURRENCY_OFFSET UNITYSDK_OFFSET(0x1A928A0)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDLEVELUPFEEDCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A92750)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDEQUIPMENTCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A92870)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDLEVELUPFEEDADDEXP_OFFSET UNITYSDK_OFFSET(0x1A92720)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDDEFAULTMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1A92840)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDTRANSCENDENCEMAX_OFFSET UNITYSDK_OFFSET(0x1A92810)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDDAMAGEFACTORGROUPID_OFFSET UNITYSDK_OFFSET(0x1A927E0)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ENDEQUIPMENTSTATEXCEL_OFFSET UNITYSDK_OFFSET(0x1A929C0)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_FINISHEQUIPMENTSTATEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A92CA0)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_FINISHSIZEPREFIXEDEQUIPMENTSTATEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A92CC0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EquipmentStatExcel_TypeDefinitionIndex = 17461;

	class EquipmentStatExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EquipmentStatExcel* GetRootAsEquipmentStatExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EquipmentStatExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GETROOTASEQUIPMENTSTATEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EquipmentStatExcel* GetRootAsEquipmentStatExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EquipmentStatExcel* arg)
		{
			return (return (::MX::Data::Excel::EquipmentStatExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EquipmentStatExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GETROOTASEQUIPMENTSTATEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EquipmentStatExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EquipmentStatExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EquipmentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_EQUIPMENTID_OFFSET))(nullptr);
		}

		::FlatData::StatLevelUpType* get_StatLevelUpType()
		{
			return (return (::FlatData::StatLevelUpType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_STATLEVELUPTYPE_OFFSET))(nullptr);
		}

		::FlatData::EquipmentOptionType* StatType(::System::Int32 arg)
		{
			return (return (::FlatData::EquipmentOptionType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_STATTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StatTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_STATTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStatTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GETSTATTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 MinStat(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_MINSTAT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MinStatLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_MINSTATLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMinStatBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GETMINSTATBYTES_OFFSET))(nullptr);
		}

		::System::Int64 MaxStat(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_MAXSTAT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MaxStatLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_MAXSTATLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMaxStatBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GETMAXSTATBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_LevelUpInsertLimit()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_LEVELUPINSERTLIMIT_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelUpFeedExp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_LEVELUPFEEDEXP_OFFSET))(nullptr);
		}

		::FlatData::CurrencyTypes* get_LevelUpFeedCostCurrency()
		{
			return (return (::FlatData::CurrencyTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_LEVELUPFEEDCOSTCURRENCY_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelUpFeedCostAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_LEVELUPFEEDCOSTAMOUNT_OFFSET))(nullptr);
		}

		::FlatData::EquipmentCategory* get_EquipmentCategory()
		{
			return (return (::FlatData::EquipmentCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_EQUIPMENTCATEGORY_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelUpFeedAddExp()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_LEVELUPFEEDADDEXP_OFFSET))(nullptr);
		}

		::System::Int32 get_DefaultMaxLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_DEFAULTMAXLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_TranscendenceMax()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_TRANSCENDENCEMAX_OFFSET))(nullptr);
		}

		::System::String* get_DamageFactorGroupId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GET_DAMAGEFACTORGROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* GetDamageFactorGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_GETDAMAGEFACTORGROUPIDBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEquipmentStatExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::StatLevelUpType* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::System::Int32 arg, ::System::Int64 arg, ::FlatData::CurrencyTypes* arg, ::System::Int64 arg, ::FlatData::EquipmentCategory* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::StatLevelUpType*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Int32, ::System::Int64, ::FlatData::CurrencyTypes*, ::System::Int64, ::FlatData::EquipmentCategory*, ::System::Int64, ::System::Int32, ::System::Int32, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_CREATEEQUIPMENTSTATEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEquipmentStatExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_STARTEQUIPMENTSTATEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEquipmentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDEQUIPMENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStatLevelUpType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StatLevelUpType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StatLevelUpType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDSTATLEVELUPTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStatType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDSTATTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStatTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_CREATESTATTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStatTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_STARTSTATTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMinStat(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDMINSTAT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMinStatVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_CREATEMINSTATVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMinStatVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_STARTMINSTATVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxStat(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDMAXSTAT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMaxStatVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_CREATEMAXSTATVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMaxStatVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_STARTMAXSTATVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLevelUpInsertLimit(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDLEVELUPINSERTLIMIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLevelUpFeedExp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDLEVELUPFEEDEXP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLevelUpFeedCostCurrency(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CurrencyTypes* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CurrencyTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDLEVELUPFEEDCOSTCURRENCY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLevelUpFeedCostAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDLEVELUPFEEDCOSTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEquipmentCategory(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EquipmentCategory* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EquipmentCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDEQUIPMENTCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLevelUpFeedAddExp(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDLEVELUPFEEDADDEXP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDefaultMaxLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDDEFAULTMAXLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTranscendenceMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDTRANSCENDENCEMAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDamageFactorGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ADDDAMAGEFACTORGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEquipmentStatExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_ENDEQUIPMENTSTATEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEquipmentStatExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_FINISHEQUIPMENTSTATEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEquipmentStatExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCEL_FINISHSIZEPREFIXEDEQUIPMENTSTATEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

