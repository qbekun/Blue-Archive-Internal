#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class FieldWarpExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_FIELDWARPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B1F880)
#define MX_DATA_EXCEL_FIELDWARPEXCEL_GETROOTASFIELDWARPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B1F890)
#define MX_DATA_EXCEL_FIELDWARPEXCEL_GETROOTASFIELDWARPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B1F8F0)
#define MX_DATA_EXCEL_FIELDWARPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B1F980)
#define MX_DATA_EXCEL_FIELDWARPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B1F950)
#define MX_DATA_EXCEL_FIELDWARPEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1B1F9A0)
#define MX_DATA_EXCEL_FIELDWARPEXCEL_GET_CURRENTSCENEID_OFFSET UNITYSDK_OFFSET(0x1B1F9F0)
#define MX_DATA_EXCEL_FIELDWARPEXCEL_GET_RESULTSCENEID_OFFSET UNITYSDK_OFFSET(0x1B1FA40)
#define MX_DATA_EXCEL_FIELDWARPEXCEL_GET_RESULTSCENENAMEKEY_OFFSET UNITYSDK_OFFSET(0x1B1FA90)
#define MX_DATA_EXCEL_FIELDWARPEXCEL_GET_RESULTSCENEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B1FAE0)
#define MX_DATA_EXCEL_FIELDWARPEXCEL_GETRESULTSCENEIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B1FB20)
#define MX_DATA_EXCEL_FIELDWARPEXCEL_CREATEFIELDWARPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B1FB40)
#define MX_DATA_EXCEL_FIELDWARPEXCEL_STARTFIELDWARPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B1FD80)
#define MX_DATA_EXCEL_FIELDWARPEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1B1FCA0)
#define MX_DATA_EXCEL_FIELDWARPEXCEL_ADDCURRENTSCENEID_OFFSET UNITYSDK_OFFSET(0x1B1FC70)
#define MX_DATA_EXCEL_FIELDWARPEXCEL_ADDRESULTSCENEID_OFFSET UNITYSDK_OFFSET(0x1B1FC40)
#define MX_DATA_EXCEL_FIELDWARPEXCEL_ADDRESULTSCENENAMEKEY_OFFSET UNITYSDK_OFFSET(0x1B1FD00)
#define MX_DATA_EXCEL_FIELDWARPEXCEL_ADDRESULTSCENEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B1FCD0)
#define MX_DATA_EXCEL_FIELDWARPEXCEL_ENDFIELDWARPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B1FD30)
#define MX_DATA_EXCEL_FIELDWARPEXCEL_FINISHFIELDWARPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B1FDA0)
#define MX_DATA_EXCEL_FIELDWARPEXCEL_FINISHSIZEPREFIXEDFIELDWARPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B1FDC0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FieldWarpExcel_TypeDefinitionIndex = 17982;

	class FieldWarpExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::FieldWarpExcel* GetRootAsFieldWarpExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FieldWarpExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPEXCEL_GETROOTASFIELDWARPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::FieldWarpExcel* GetRootAsFieldWarpExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::FieldWarpExcel* arg)
		{
			return (return (::MX::Data::Excel::FieldWarpExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::FieldWarpExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPEXCEL_GETROOTASFIELDWARPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::FieldWarpExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FieldWarpExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentSceneId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPEXCEL_GET_CURRENTSCENEID_OFFSET))(nullptr);
		}

		::System::Int64 get_ResultSceneId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPEXCEL_GET_RESULTSCENEID_OFFSET))(nullptr);
		}

		::System::UInt32 get_ResultSceneNameKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPEXCEL_GET_RESULTSCENENAMEKEY_OFFSET))(nullptr);
		}

		::System::String* get_ResultSceneImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPEXCEL_GET_RESULTSCENEIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetResultSceneImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPEXCEL_GETRESULTSCENEIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldWarpExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::UInt32, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPEXCEL_CREATEFIELDWARPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartFieldWarpExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPEXCEL_STARTFIELDWARPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCurrentSceneId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPEXCEL_ADDCURRENTSCENEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddResultSceneId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPEXCEL_ADDRESULTSCENEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddResultSceneNameKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPEXCEL_ADDRESULTSCENENAMEKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddResultSceneImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPEXCEL_ADDRESULTSCENEIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndFieldWarpExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPEXCEL_ENDFIELDWARPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFieldWarpExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPEXCEL_FINISHFIELDWARPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedFieldWarpExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDWARPEXCEL_FINISHSIZEPREFIXEDFIELDWARPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

