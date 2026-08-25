#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class VoiceRoomExceptionExcel; }
namespace FlatData { class CVPrintType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CB5050)
#define MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_GETROOTASVOICEROOMEXCEPTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB5060)
#define MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_GETROOTASVOICEROOMEXCEPTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB50C0)
#define MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CB5150)
#define MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CB5120)
#define MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_GET_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1CB5170)
#define MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_GET_LINKEDCHARACTERVOICEPRINTTYPE_OFFSET UNITYSDK_OFFSET(0x1CB51C0)
#define MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_GET_LINKEDCOSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1CB5210)
#define MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_CREATEVOICEROOMEXCEPTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB5260)
#define MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_STARTVOICEROOMEXCEPTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB5400)
#define MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_ADDCOSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1CB5350)
#define MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_ADDLINKEDCHARACTERVOICEPRINTTYPE_OFFSET UNITYSDK_OFFSET(0x1CB5380)
#define MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_ADDLINKEDCOSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1CB5320)
#define MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_ENDVOICEROOMEXCEPTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CB53B0)
#define MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_FINISHVOICEROOMEXCEPTIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CB5420)
#define MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_FINISHSIZEPREFIXEDVOICEROOMEXCEPTIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CB5440)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int VoiceRoomExceptionExcel_TypeDefinitionIndex = 19701;

	class VoiceRoomExceptionExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::VoiceRoomExceptionExcel* GetRootAsVoiceRoomExceptionExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::VoiceRoomExceptionExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_GETROOTASVOICEROOMEXCEPTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::VoiceRoomExceptionExcel* GetRootAsVoiceRoomExceptionExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::VoiceRoomExceptionExcel* arg)
		{
			return (return (::MX::Data::Excel::VoiceRoomExceptionExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::VoiceRoomExceptionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_GETROOTASVOICEROOMEXCEPTIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::VoiceRoomExceptionExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::VoiceRoomExceptionExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_CostumeUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_GET_COSTUMEUNIQUEID_OFFSET))(nullptr);
		}

		::FlatData::CVPrintType* get_LinkedCharacterVoicePrintType()
		{
			return (return (::FlatData::CVPrintType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_GET_LINKEDCHARACTERVOICEPRINTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_LinkedCostumeUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_GET_LINKEDCOSTUMEUNIQUEID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateVoiceRoomExceptionExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::CVPrintType* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::CVPrintType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_CREATEVOICEROOMEXCEPTIONEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartVoiceRoomExceptionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_STARTVOICEROOMEXCEPTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddCostumeUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_ADDCOSTUMEUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLinkedCharacterVoicePrintType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CVPrintType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CVPrintType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_ADDLINKEDCHARACTERVOICEPRINTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLinkedCostumeUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_ADDLINKEDCOSTUMEUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndVoiceRoomExceptionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_ENDVOICEROOMEXCEPTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishVoiceRoomExceptionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_FINISHVOICEROOMEXCEPTIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedVoiceRoomExceptionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEROOMEXCEPTIONEXCEL_FINISHSIZEPREFIXEDVOICEROOMEXCEPTIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

