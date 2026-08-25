#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class BuffParticleExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_BUFFPARTICLEEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE4CE0)
#define FLATDATA_BUFFPARTICLEEXCELTABLE_GETROOTASBUFFPARTICLEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE4CF0)
#define FLATDATA_BUFFPARTICLEEXCELTABLE_GETROOTASBUFFPARTICLEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE4D50)
#define FLATDATA_BUFFPARTICLEEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xCE4DE0)
#define FLATDATA_BUFFPARTICLEEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCE4DB0)
#define FLATDATA_BUFFPARTICLEEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xCE4E00)
#define FLATDATA_BUFFPARTICLEEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xCE4F00)
#define FLATDATA_BUFFPARTICLEEXCELTABLE_CREATEBUFFPARTICLEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE4F40)
#define FLATDATA_BUFFPARTICLEEXCELTABLE_STARTBUFFPARTICLEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE5030)
#define FLATDATA_BUFFPARTICLEEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xCE4FB0)
#define FLATDATA_BUFFPARTICLEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCE5050)
#define FLATDATA_BUFFPARTICLEEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCE50E0)
#define FLATDATA_BUFFPARTICLEEXCELTABLE_ENDBUFFPARTICLEEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xCE4FE0)
#define FLATDATA_BUFFPARTICLEEXCELTABLE_FINISHBUFFPARTICLEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE5120)
#define FLATDATA_BUFFPARTICLEEXCELTABLE_FINISHSIZEPREFIXEDBUFFPARTICLEEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE5140)

namespace FlatData
{
	inline static constexpr unsigned int BuffParticleExcelTable_TypeDefinitionIndex = 9198;

	class BuffParticleExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::BuffParticleExcelTable* GetRootAsBuffParticleExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::BuffParticleExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCELTABLE_GETROOTASBUFFPARTICLEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::BuffParticleExcelTable* GetRootAsBuffParticleExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::BuffParticleExcelTable* arg2)
		{
			return ((::FlatData::BuffParticleExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::BuffParticleExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCELTABLE_GETROOTASBUFFPARTICLEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::BuffParticleExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::BuffParticleExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateBuffParticleExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCELTABLE_CREATEBUFFPARTICLEEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartBuffParticleExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCELTABLE_STARTBUFFPARTICLEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndBuffParticleExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCELTABLE_ENDBUFFPARTICLEEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishBuffParticleExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCELTABLE_FINISHBUFFPARTICLEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedBuffParticleExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCELTABLE_FINISHSIZEPREFIXEDBUFFPARTICLEEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

