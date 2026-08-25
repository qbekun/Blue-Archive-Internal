#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterGearLevelExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A29700)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_GETROOTASCHARACTERGEARLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1A29710)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_GETROOTASCHARACTERGEARLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1A29770)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A29800)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A297D0)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A29820)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_TIERLEVELEXP_OFFSET UNITYSDK_OFFSET(0x1A29870)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_GET_TIERLEVELEXPLENGTH_OFFSET UNITYSDK_OFFSET(0x1A298D0)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_GETTIERLEVELEXPBYTES_OFFSET UNITYSDK_OFFSET(0x1A29910)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_TOTALEXP_OFFSET UNITYSDK_OFFSET(0x1A29930)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_GET_TOTALEXPLENGTH_OFFSET UNITYSDK_OFFSET(0x1A29990)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_GETTOTALEXPBYTES_OFFSET UNITYSDK_OFFSET(0x1A299D0)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_CREATECHARACTERGEARLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1A299F0)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_STARTCHARACTERGEARLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1A29B80)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_ADDLEVEL_OFFSET UNITYSDK_OFFSET(0x1A29B00)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_ADDTIERLEVELEXP_OFFSET UNITYSDK_OFFSET(0x1A29AD0)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_CREATETIERLEVELEXPVECTOR_OFFSET UNITYSDK_OFFSET(0x1A29BA0)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_STARTTIERLEVELEXPVECTOR_OFFSET UNITYSDK_OFFSET(0x1A29C30)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_ADDTOTALEXP_OFFSET UNITYSDK_OFFSET(0x1A29AA0)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_CREATETOTALEXPVECTOR_OFFSET UNITYSDK_OFFSET(0x1A29C70)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_STARTTOTALEXPVECTOR_OFFSET UNITYSDK_OFFSET(0x1A29D00)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_ENDCHARACTERGEARLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x1A29B30)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_FINISHCHARACTERGEARLEVELEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A29D40)
#define MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_FINISHSIZEPREFIXEDCHARACTERGEARLEVELEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A29D60)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterGearLevelExcel_TypeDefinitionIndex = 17020;

	class CharacterGearLevelExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterGearLevelExcel* GetRootAsCharacterGearLevelExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterGearLevelExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_GETROOTASCHARACTERGEARLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterGearLevelExcel* GetRootAsCharacterGearLevelExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterGearLevelExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterGearLevelExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterGearLevelExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_GETROOTASCHARACTERGEARLEVELEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterGearLevelExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterGearLevelExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Level()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int64 TierLevelExp(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_TIERLEVELEXP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TierLevelExpLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_GET_TIERLEVELEXPLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetTierLevelExpBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_GETTIERLEVELEXPBYTES_OFFSET))(nullptr);
		}

		::System::Int64 TotalExp(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_TOTALEXP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TotalExpLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_GET_TOTALEXPLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetTotalExpBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_GETTOTALEXPBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterGearLevelExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_CREATECHARACTERGEARLEVELEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterGearLevelExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_STARTCHARACTERGEARLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_ADDLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTierLevelExp(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_ADDTIERLEVELEXP_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateTierLevelExpVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_CREATETIERLEVELEXPVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartTierLevelExpVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_STARTTIERLEVELEXPVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTotalExp(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_ADDTOTALEXP_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateTotalExpVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_CREATETOTALEXPVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartTotalExpVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_STARTTOTALEXPVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterGearLevelExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_ENDCHARACTERGEARLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterGearLevelExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_FINISHCHARACTERGEARLEVELEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterGearLevelExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEARLEVELEXCEL_FINISHSIZEPREFIXEDCHARACTERGEARLEVELEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

