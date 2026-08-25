#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class TrophyCollectionExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA7E30)
#define MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_GETROOTASTROPHYCOLLECTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA7E40)
#define MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_GETROOTASTROPHYCOLLECTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA7EA0)
#define MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CA7F30)
#define MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CA7F00)
#define MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CA7F50)
#define MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_GET_LOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1CA7FA0)
#define MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_FURNITUREID_OFFSET UNITYSDK_OFFSET(0x1CA7FF0)
#define MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_GET_FURNITUREIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1CA8050)
#define MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_GETFURNITUREIDBYTES_OFFSET UNITYSDK_OFFSET(0x1CA8090)
#define MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_CREATETROPHYCOLLECTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA80B0)
#define MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_STARTTROPHYCOLLECTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA8250)
#define MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1CA8170)
#define MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_ADDLOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1CA81D0)
#define MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_ADDFURNITUREID_OFFSET UNITYSDK_OFFSET(0x1CA81A0)
#define MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_CREATEFURNITUREIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA8270)
#define MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_STARTFURNITUREIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CA8300)
#define MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_ENDTROPHYCOLLECTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CA8200)
#define MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_FINISHTROPHYCOLLECTIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA8340)
#define MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_FINISHSIZEPREFIXEDTROPHYCOLLECTIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA8360)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TrophyCollectionExcel_TypeDefinitionIndex = 19631;

	class TrophyCollectionExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::TrophyCollectionExcel* GetRootAsTrophyCollectionExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::TrophyCollectionExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_GETROOTASTROPHYCOLLECTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::TrophyCollectionExcel* GetRootAsTrophyCollectionExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::TrophyCollectionExcel* arg)
		{
			return (return (::MX::Data::Excel::TrophyCollectionExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::TrophyCollectionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_GETROOTASTROPHYCOLLECTIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::TrophyCollectionExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::TrophyCollectionExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeCodeId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_GET_LOCALIZECODEID_OFFSET))(nullptr);
		}

		::System::Int64 FurnitureId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_FURNITUREID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FurnitureIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_GET_FURNITUREIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetFurnitureIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_GETFURNITUREIDBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateTrophyCollectionExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::UInt32 arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::UInt32, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_CREATETROPHYCOLLECTIONEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartTrophyCollectionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_STARTTROPHYCOLLECTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeCodeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_ADDLOCALIZECODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFurnitureId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_ADDFURNITUREID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateFurnitureIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_CREATEFURNITUREIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartFurnitureIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_STARTFURNITUREIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndTrophyCollectionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_ENDTROPHYCOLLECTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishTrophyCollectionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_FINISHTROPHYCOLLECTIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedTrophyCollectionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONEXCEL_FINISHSIZEPREFIXEDTROPHYCOLLECTIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

