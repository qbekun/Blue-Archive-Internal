#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class PresetCharacterGroupSettingExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C2FB30)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_GETROOTASPRESETCHARACTERGROUPSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1C2FB40)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_GETROOTASPRESETCHARACTERGROUPSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1C2FBA0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C2FC30)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C2FC00)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C2FC50)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_GET_ARENASIMULATORFIXED_OFFSET UNITYSDK_OFFSET(0x1C2FCA0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_PRESETTYPE_OFFSET UNITYSDK_OFFSET(0x1C2FCF0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_GET_PRESETTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1C2FD40)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_CREATEPRESETCHARACTERGROUPSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1C2FD80)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_STARTPRESETCHARACTERGROUPSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1C2FF20)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_ADDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C2FE40)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_ADDARENASIMULATORFIXED_OFFSET UNITYSDK_OFFSET(0x1C2FEA0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_ADDPRESETTYPE_OFFSET UNITYSDK_OFFSET(0x1C2FE70)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_CREATEPRESETTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C2FF40)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_STARTPRESETTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C2FFD0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_ENDPRESETCHARACTERGROUPSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1C2FED0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_FINISHPRESETCHARACTERGROUPSETTINGEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C30010)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_FINISHSIZEPREFIXEDPRESETCHARACTERGROUPSETTINGEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C30030)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int PresetCharacterGroupSettingExcel_TypeDefinitionIndex = 19071;

	class PresetCharacterGroupSettingExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::PresetCharacterGroupSettingExcel* GetRootAsPresetCharacterGroupSettingExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::PresetCharacterGroupSettingExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_GETROOTASPRESETCHARACTERGROUPSETTINGEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::PresetCharacterGroupSettingExcel* GetRootAsPresetCharacterGroupSettingExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::PresetCharacterGroupSettingExcel* arg)
		{
			return (return (::MX::Data::Excel::PresetCharacterGroupSettingExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::PresetCharacterGroupSettingExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_GETROOTASPRESETCHARACTERGROUPSETTINGEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::PresetCharacterGroupSettingExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::PresetCharacterGroupSettingExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Boolean get_ArenaSimulatorFixed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_GET_ARENASIMULATORFIXED_OFFSET))(nullptr);
		}

		::System::String* PresetType(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_PRESETTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PresetTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_GET_PRESETTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreatePresetCharacterGroupSettingExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Boolean, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_CREATEPRESETCHARACTERGROUPSETTINGEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartPresetCharacterGroupSettingExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_STARTPRESETCHARACTERGROUPSETTINGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_ADDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddArenaSimulatorFixed(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_ADDARENASIMULATORFIXED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPresetType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_ADDPRESETTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePresetTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_CREATEPRESETTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPresetTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_STARTPRESETTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndPresetCharacterGroupSettingExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_ENDPRESETCHARACTERGROUPSETTINGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishPresetCharacterGroupSettingExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_FINISHPRESETCHARACTERGROUPSETTINGEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedPresetCharacterGroupSettingExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCEL_FINISHSIZEPREFIXEDPRESETCHARACTERGROUPSETTINGEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

