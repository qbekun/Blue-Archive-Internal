#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class AnimatorDataTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_ANIMATORDATATABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCDF400)
#define FLATDATA_ANIMATORDATATABLE_GETROOTASANIMATORDATATABLE_OFFSET UNITYSDK_OFFSET(0xCDF410)
#define FLATDATA_ANIMATORDATATABLE_GETROOTASANIMATORDATATABLE_OFFSET UNITYSDK_OFFSET(0xCDF470)
#define FLATDATA_ANIMATORDATATABLE___INIT_OFFSET UNITYSDK_OFFSET(0xCDF500)
#define FLATDATA_ANIMATORDATATABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCDF4D0)
#define FLATDATA_ANIMATORDATATABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xCDF520)
#define FLATDATA_ANIMATORDATATABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xCDF5F0)
#define FLATDATA_ANIMATORDATATABLE_CREATEANIMATORDATATABLE_OFFSET UNITYSDK_OFFSET(0xCDF630)
#define FLATDATA_ANIMATORDATATABLE_STARTANIMATORDATATABLE_OFFSET UNITYSDK_OFFSET(0xCDF720)
#define FLATDATA_ANIMATORDATATABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xCDF6A0)
#define FLATDATA_ANIMATORDATATABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCDF740)
#define FLATDATA_ANIMATORDATATABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xCDF7D0)
#define FLATDATA_ANIMATORDATATABLE_ENDANIMATORDATATABLE_OFFSET UNITYSDK_OFFSET(0xCDF6D0)
#define FLATDATA_ANIMATORDATATABLE_FINISHANIMATORDATATABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCDF810)
#define FLATDATA_ANIMATORDATATABLE_FINISHSIZEPREFIXEDANIMATORDATATABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xCDF830)

namespace FlatData
{
	inline static constexpr unsigned int AnimatorDataTable_TypeDefinitionIndex = 9190;

	class AnimatorDataTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATATABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::AnimatorDataTable* GetRootAsAnimatorDataTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::AnimatorDataTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATATABLE_GETROOTASANIMATORDATATABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::AnimatorDataTable* GetRootAsAnimatorDataTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::AnimatorDataTable* arg2)
		{
			return ((::FlatData::AnimatorDataTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::AnimatorDataTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATATABLE_GETROOTASANIMATORDATATABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATATABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::AnimatorDataTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::AnimatorDataTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATATABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATATABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATATABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateAnimatorDataTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATATABLE_CREATEANIMATORDATATABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartAnimatorDataTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATATABLE_STARTANIMATORDATATABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATATABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATATABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATATABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndAnimatorDataTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATATABLE_ENDANIMATORDATATABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishAnimatorDataTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATATABLE_FINISHANIMATORDATATABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedAnimatorDataTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ANIMATORDATATABLE_FINISHSIZEPREFIXEDANIMATORDATATABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

