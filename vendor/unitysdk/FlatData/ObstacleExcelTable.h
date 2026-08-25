#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ObstacleExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_OBSTACLEEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD52230)
#define FLATDATA_OBSTACLEEXCELTABLE_GETROOTASOBSTACLEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD52240)
#define FLATDATA_OBSTACLEEXCELTABLE_GETROOTASOBSTACLEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD522A0)
#define FLATDATA_OBSTACLEEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD52330)
#define FLATDATA_OBSTACLEEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD52300)
#define FLATDATA_OBSTACLEEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD52350)
#define FLATDATA_OBSTACLEEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD52450)
#define FLATDATA_OBSTACLEEXCELTABLE_CREATEOBSTACLEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD52490)
#define FLATDATA_OBSTACLEEXCELTABLE_STARTOBSTACLEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD52580)
#define FLATDATA_OBSTACLEEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD52500)
#define FLATDATA_OBSTACLEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD525A0)
#define FLATDATA_OBSTACLEEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD52630)
#define FLATDATA_OBSTACLEEXCELTABLE_ENDOBSTACLEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD52530)
#define FLATDATA_OBSTACLEEXCELTABLE_FINISHOBSTACLEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD52670)
#define FLATDATA_OBSTACLEEXCELTABLE_FINISHSIZEPREFIXEDOBSTACLEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD52690)

namespace FlatData
{
	inline static constexpr unsigned int ObstacleExcelTable_TypeDefinitionIndex = 9312;

	class ObstacleExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ObstacleExcelTable* GetRootAsObstacleExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ObstacleExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCELTABLE_GETROOTASOBSTACLEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::ObstacleExcelTable* GetRootAsObstacleExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::ObstacleExcelTable* arg2)
		{
			return ((::FlatData::ObstacleExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ObstacleExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCELTABLE_GETROOTASOBSTACLEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ObstacleExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ObstacleExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateObstacleExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCELTABLE_CREATEOBSTACLEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartObstacleExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCELTABLE_STARTOBSTACLEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndObstacleExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCELTABLE_ENDOBSTACLEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishObstacleExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCELTABLE_FINISHOBSTACLEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedObstacleExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_OBSTACLEEXCELTABLE_FINISHSIZEPREFIXEDOBSTACLEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

