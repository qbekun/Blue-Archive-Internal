#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MemoryLobbyExcel; }
namespace FlatData { class ProductionStep; }
namespace FlatData { class MemoryLobbyCategory; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B879A0)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GETROOTASMEMORYLOBBYEXCEL_OFFSET UNITYSDK_OFFSET(0x1B879B0)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GETROOTASMEMORYLOBBYEXCEL_OFFSET UNITYSDK_OFFSET(0x1B87A10)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B87AA0)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B87A70)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B87AC0)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_PRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0x1B87B10)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1B87B60)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B87BB0)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_PREFABNAME_OFFSET UNITYSDK_OFFSET(0x1B87C00)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GETPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B87C40)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_MEMORYLOBBYCATEGORY_OFFSET UNITYSDK_OFFSET(0x1B87C60)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_SLOTTEXTURENAME_OFFSET UNITYSDK_OFFSET(0x1B87CB0)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GETSLOTTEXTURENAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B87CF0)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_REWARDTEXTURENAME_OFFSET UNITYSDK_OFFSET(0x1B87D10)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GETREWARDTEXTURENAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B87D50)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_BGMID_OFFSET UNITYSDK_OFFSET(0x1B87D70)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_AUDIOCLIPJP_OFFSET UNITYSDK_OFFSET(0x1B87DC0)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GETAUDIOCLIPJPBYTES_OFFSET UNITYSDK_OFFSET(0x1B87E00)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_AUDIOCLIPKR_OFFSET UNITYSDK_OFFSET(0x1B87E20)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GETAUDIOCLIPKRBYTES_OFFSET UNITYSDK_OFFSET(0x1B87E60)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_AUDIOCLIPTH_OFFSET UNITYSDK_OFFSET(0x1B87E80)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GETAUDIOCLIPTHBYTES_OFFSET UNITYSDK_OFFSET(0x1B87EC0)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_AUDIOCLIPTW_OFFSET UNITYSDK_OFFSET(0x1B87EE0)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GETAUDIOCLIPTWBYTES_OFFSET UNITYSDK_OFFSET(0x1B87F20)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_AUDIOCLIPEN_OFFSET UNITYSDK_OFFSET(0x1B87F40)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GETAUDIOCLIPENBYTES_OFFSET UNITYSDK_OFFSET(0x1B87F80)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_CREATEMEMORYLOBBYEXCEL_OFFSET UNITYSDK_OFFSET(0x1B87FA0)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_STARTMEMORYLOBBYEXCEL_OFFSET UNITYSDK_OFFSET(0x1B88500)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B88270)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDPRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0x1B88480)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1B88450)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B88240)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1B88420)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDMEMORYLOBBYCATEGORY_OFFSET UNITYSDK_OFFSET(0x1B883F0)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDSLOTTEXTURENAME_OFFSET UNITYSDK_OFFSET(0x1B883C0)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDREWARDTEXTURENAME_OFFSET UNITYSDK_OFFSET(0x1B88390)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDBGMID_OFFSET UNITYSDK_OFFSET(0x1B88210)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDAUDIOCLIPJP_OFFSET UNITYSDK_OFFSET(0x1B88360)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDAUDIOCLIPKR_OFFSET UNITYSDK_OFFSET(0x1B88330)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDAUDIOCLIPTH_OFFSET UNITYSDK_OFFSET(0x1B88300)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDAUDIOCLIPTW_OFFSET UNITYSDK_OFFSET(0x1B882D0)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDAUDIOCLIPEN_OFFSET UNITYSDK_OFFSET(0x1B882A0)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ENDMEMORYLOBBYEXCEL_OFFSET UNITYSDK_OFFSET(0x1B884B0)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_FINISHMEMORYLOBBYEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B88520)
#define MX_DATA_EXCEL_MEMORYLOBBYEXCEL_FINISHSIZEPREFIXEDMEMORYLOBBYEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B88540)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MemoryLobbyExcel_TypeDefinitionIndex = 18416;

	class MemoryLobbyExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MemoryLobbyExcel* GetRootAsMemoryLobbyExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MemoryLobbyExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GETROOTASMEMORYLOBBYEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MemoryLobbyExcel* GetRootAsMemoryLobbyExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MemoryLobbyExcel* arg)
		{
			return (return (::MX::Data::Excel::MemoryLobbyExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MemoryLobbyExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GETROOTASMEMORYLOBBYEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MemoryLobbyExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MemoryLobbyExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::ProductionStep* get_ProductionStep()
		{
			return (return (::FlatData::ProductionStep*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_PRODUCTIONSTEP_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::String* get_PrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_PREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetPrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GETPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::FlatData::MemoryLobbyCategory* get_MemoryLobbyCategory()
		{
			return (return (::FlatData::MemoryLobbyCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_MEMORYLOBBYCATEGORY_OFFSET))(nullptr);
		}

		::System::String* get_SlotTextureName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_SLOTTEXTURENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetSlotTextureNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GETSLOTTEXTURENAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_RewardTextureName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_REWARDTEXTURENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardTextureNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GETREWARDTEXTURENAMEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_BGMId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_BGMID_OFFSET))(nullptr);
		}

		::System::String* get_AudioClipJp()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_AUDIOCLIPJP_OFFSET))(nullptr);
		}

		Il2CppObject* GetAudioClipJpBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GETAUDIOCLIPJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_AudioClipKr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_AUDIOCLIPKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetAudioClipKrBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GETAUDIOCLIPKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_AudioClipTh()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_AUDIOCLIPTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetAudioClipThBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GETAUDIOCLIPTHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_AudioClipTw()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_AUDIOCLIPTW_OFFSET))(nullptr);
		}

		Il2CppObject* GetAudioClipTwBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GETAUDIOCLIPTWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_AudioClipEn()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GET_AUDIOCLIPEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetAudioClipEnBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_GETAUDIOCLIPENBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMemoryLobbyExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::ProductionStep* arg, ::System::UInt32 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatData::MemoryLobbyCategory* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::ProductionStep*, ::System::UInt32, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatData::MemoryLobbyCategory*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_CREATEMEMORYLOBBYEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMemoryLobbyExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_STARTMEMORYLOBBYEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductionStep(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ProductionStep* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ProductionStep*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDPRODUCTIONSTEP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMemoryLobbyCategory(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MemoryLobbyCategory* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MemoryLobbyCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDMEMORYLOBBYCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSlotTextureName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDSLOTTEXTURENAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardTextureName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDREWARDTEXTURENAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBGMId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDBGMID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAudioClipJp(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDAUDIOCLIPJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAudioClipKr(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDAUDIOCLIPKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAudioClipTh(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDAUDIOCLIPTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAudioClipTw(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDAUDIOCLIPTW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAudioClipEn(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ADDAUDIOCLIPEN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMemoryLobbyExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_ENDMEMORYLOBBYEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMemoryLobbyExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_FINISHMEMORYLOBBYEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMemoryLobbyExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MEMORYLOBBYEXCEL_FINISHSIZEPREFIXEDMEMORYLOBBYEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

