#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterStatLimitExcel; }
namespace FlatData { class TacticEntityType; }
namespace FlatData { class StatType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A3B9B0)
#define MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_GETROOTASCHARACTERSTATLIMITEXCEL_OFFSET UNITYSDK_OFFSET(0x1A3B9C0)
#define MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_GETROOTASCHARACTERSTATLIMITEXCEL_OFFSET UNITYSDK_OFFSET(0x1A3BA20)
#define MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A3BAB0)
#define MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A3BA80)
#define MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A3BAD0)
#define MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_GET_TACTICENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x1A3BB20)
#define MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_GET_STATTYPE_OFFSET UNITYSDK_OFFSET(0x1A3BB70)
#define MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_GET_STATMINVALUE_OFFSET UNITYSDK_OFFSET(0x1A3BBC0)
#define MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_GET_STATMAXVALUE_OFFSET UNITYSDK_OFFSET(0x1A3BC10)
#define MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_GET_STATRATIOMINVALUE_OFFSET UNITYSDK_OFFSET(0x1A3BC60)
#define MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_GET_STATRATIOMAXVALUE_OFFSET UNITYSDK_OFFSET(0x1A3BCB0)
#define MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_CREATECHARACTERSTATLIMITEXCEL_OFFSET UNITYSDK_OFFSET(0x1A3BD00)
#define MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_STARTCHARACTERSTATLIMITEXCEL_OFFSET UNITYSDK_OFFSET(0x1A3BFF0)
#define MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A3BF10)
#define MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_ADDTACTICENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x1A3BF70)
#define MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_ADDSTATTYPE_OFFSET UNITYSDK_OFFSET(0x1A3BF40)
#define MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_ADDSTATMINVALUE_OFFSET UNITYSDK_OFFSET(0x1A3BEE0)
#define MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_ADDSTATMAXVALUE_OFFSET UNITYSDK_OFFSET(0x1A3BEB0)
#define MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_ADDSTATRATIOMINVALUE_OFFSET UNITYSDK_OFFSET(0x1A3BE80)
#define MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_ADDSTATRATIOMAXVALUE_OFFSET UNITYSDK_OFFSET(0x1A3BE50)
#define MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_ENDCHARACTERSTATLIMITEXCEL_OFFSET UNITYSDK_OFFSET(0x1A3BFA0)
#define MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_FINISHCHARACTERSTATLIMITEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A3C010)
#define MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_FINISHSIZEPREFIXEDCHARACTERSTATLIMITEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A3C030)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterStatLimitExcel_TypeDefinitionIndex = 17089;

	class CharacterStatLimitExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterStatLimitExcel* GetRootAsCharacterStatLimitExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterStatLimitExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_GETROOTASCHARACTERSTATLIMITEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterStatLimitExcel* GetRootAsCharacterStatLimitExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterStatLimitExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterStatLimitExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterStatLimitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_GETROOTASCHARACTERSTATLIMITEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterStatLimitExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterStatLimitExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::TacticEntityType* get_TacticEntityType()
		{
			return (return (::FlatData::TacticEntityType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_GET_TACTICENTITYTYPE_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_StatType()
		{
			return (return (::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_GET_STATTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_StatMinValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_GET_STATMINVALUE_OFFSET))(nullptr);
		}

		::System::Int64 get_StatMaxValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_GET_STATMAXVALUE_OFFSET))(nullptr);
		}

		::System::Int64 get_StatRatioMinValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_GET_STATRATIOMINVALUE_OFFSET))(nullptr);
		}

		::System::Int64 get_StatRatioMaxValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_GET_STATRATIOMAXVALUE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterStatLimitExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::TacticEntityType* arg, ::FlatData::StatType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::TacticEntityType*, ::FlatData::StatType*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_CREATECHARACTERSTATLIMITEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterStatLimitExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_STARTCHARACTERSTATLIMITEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTacticEntityType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TacticEntityType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TacticEntityType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_ADDTACTICENTITYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStatType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StatType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StatType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_ADDSTATTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStatMinValue(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_ADDSTATMINVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStatMaxValue(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_ADDSTATMAXVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStatRatioMinValue(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_ADDSTATRATIOMINVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStatRatioMaxValue(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_ADDSTATRATIOMAXVALUE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterStatLimitExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_ENDCHARACTERSTATLIMITEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterStatLimitExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_FINISHCHARACTERSTATLIMITEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterStatLimitExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATLIMITEXCEL_FINISHSIZEPREFIXEDCHARACTERSTATLIMITEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

