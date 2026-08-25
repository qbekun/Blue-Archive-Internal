#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class PresetParcelsExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_PRESETPARCELSEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C30D60)
#define MX_DATA_EXCEL_PRESETPARCELSEXCEL_GETROOTASPRESETPARCELSEXCEL_OFFSET UNITYSDK_OFFSET(0x1C30D70)
#define MX_DATA_EXCEL_PRESETPARCELSEXCEL_GETROOTASPRESETPARCELSEXCEL_OFFSET UNITYSDK_OFFSET(0x1C30DD0)
#define MX_DATA_EXCEL_PRESETPARCELSEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C30E60)
#define MX_DATA_EXCEL_PRESETPARCELSEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C30E30)
#define MX_DATA_EXCEL_PRESETPARCELSEXCEL_GET_PARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C30E80)
#define MX_DATA_EXCEL_PRESETPARCELSEXCEL_GET_PARCELID_OFFSET UNITYSDK_OFFSET(0x1C30ED0)
#define MX_DATA_EXCEL_PRESETPARCELSEXCEL_GET_PRESETGROUPID_OFFSET UNITYSDK_OFFSET(0x1C30F20)
#define MX_DATA_EXCEL_PRESETPARCELSEXCEL_GET_PARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C30F70)
#define MX_DATA_EXCEL_PRESETPARCELSEXCEL_CREATEPRESETPARCELSEXCEL_OFFSET UNITYSDK_OFFSET(0x1C30FC0)
#define MX_DATA_EXCEL_PRESETPARCELSEXCEL_STARTPRESETPARCELSEXCEL_OFFSET UNITYSDK_OFFSET(0x1C311B0)
#define MX_DATA_EXCEL_PRESETPARCELSEXCEL_ADDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C31130)
#define MX_DATA_EXCEL_PRESETPARCELSEXCEL_ADDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C31100)
#define MX_DATA_EXCEL_PRESETPARCELSEXCEL_ADDPRESETGROUPID_OFFSET UNITYSDK_OFFSET(0x1C310D0)
#define MX_DATA_EXCEL_PRESETPARCELSEXCEL_ADDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C310A0)
#define MX_DATA_EXCEL_PRESETPARCELSEXCEL_ENDPRESETPARCELSEXCEL_OFFSET UNITYSDK_OFFSET(0x1C31160)
#define MX_DATA_EXCEL_PRESETPARCELSEXCEL_FINISHPRESETPARCELSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C311D0)
#define MX_DATA_EXCEL_PRESETPARCELSEXCEL_FINISHSIZEPREFIXEDPRESETPARCELSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C311F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int PresetParcelsExcel_TypeDefinitionIndex = 19078;

	class PresetParcelsExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETPARCELSEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::PresetParcelsExcel* GetRootAsPresetParcelsExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::PresetParcelsExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETPARCELSEXCEL_GETROOTASPRESETPARCELSEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::PresetParcelsExcel* GetRootAsPresetParcelsExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::PresetParcelsExcel* arg)
		{
			return (return (::MX::Data::Excel::PresetParcelsExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::PresetParcelsExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETPARCELSEXCEL_GETROOTASPRESETPARCELSEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETPARCELSEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::PresetParcelsExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::PresetParcelsExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETPARCELSEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::ParcelType* get_ParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETPARCELSEXCEL_GET_PARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETPARCELSEXCEL_GET_PARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_PresetGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETPARCELSEXCEL_GET_PRESETGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_ParcelAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETPARCELSEXCEL_GET_PARCELAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreatePresetParcelsExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETPARCELSEXCEL_CREATEPRESETPARCELSEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartPresetParcelsExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETPARCELSEXCEL_STARTPRESETPARCELSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETPARCELSEXCEL_ADDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETPARCELSEXCEL_ADDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPresetGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETPARCELSEXCEL_ADDPRESETGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETPARCELSEXCEL_ADDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndPresetParcelsExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETPARCELSEXCEL_ENDPRESETPARCELSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishPresetParcelsExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETPARCELSEXCEL_FINISHPRESETPARCELSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedPresetParcelsExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETPARCELSEXCEL_FINISHSIZEPREFIXEDPRESETPARCELSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

