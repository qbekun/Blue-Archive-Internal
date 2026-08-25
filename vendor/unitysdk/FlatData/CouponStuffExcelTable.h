#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class CouponStuffExcelTable; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_COUPONSTUFFEXCELTABLE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD2CF20)
#define FLATDATA_COUPONSTUFFEXCELTABLE_GETROOTASCOUPONSTUFFEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD2CF30)
#define FLATDATA_COUPONSTUFFEXCELTABLE_GETROOTASCOUPONSTUFFEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD2CF90)
#define FLATDATA_COUPONSTUFFEXCELTABLE___INIT_OFFSET UNITYSDK_OFFSET(0xD2D020)
#define FLATDATA_COUPONSTUFFEXCELTABLE___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD2CFF0)
#define FLATDATA_COUPONSTUFFEXCELTABLE_DATALIST_OFFSET UNITYSDK_OFFSET(0xD2D040)
#define FLATDATA_COUPONSTUFFEXCELTABLE_INITKEY_OFFSET UNITYSDK_OFFSET(0xD2D140)
#define FLATDATA_COUPONSTUFFEXCELTABLE_GET_DATALISTLENGTH_OFFSET UNITYSDK_OFFSET(0xD2D190)
#define FLATDATA_COUPONSTUFFEXCELTABLE_CREATECOUPONSTUFFEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD2D1D0)
#define FLATDATA_COUPONSTUFFEXCELTABLE_STARTCOUPONSTUFFEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD2D2C0)
#define FLATDATA_COUPONSTUFFEXCELTABLE_ADDDATALIST_OFFSET UNITYSDK_OFFSET(0xD2D240)
#define FLATDATA_COUPONSTUFFEXCELTABLE_CREATEDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD2D2E0)
#define FLATDATA_COUPONSTUFFEXCELTABLE_STARTDATALISTVECTOR_OFFSET UNITYSDK_OFFSET(0xD2D370)
#define FLATDATA_COUPONSTUFFEXCELTABLE_ENDCOUPONSTUFFEXCELTABLE_OFFSET UNITYSDK_OFFSET(0xD2D270)
#define FLATDATA_COUPONSTUFFEXCELTABLE_FINISHCOUPONSTUFFEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD2D3B0)
#define FLATDATA_COUPONSTUFFEXCELTABLE_FINISHSIZEPREFIXEDCOUPONSTUFFEXCELTABLEBUFFER_OFFSET UNITYSDK_OFFSET(0xD2D3D0)

namespace FlatData
{
	inline static constexpr unsigned int CouponStuffExcelTable_TypeDefinitionIndex = 9238;

	class CouponStuffExcelTable : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCELTABLE_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::CouponStuffExcelTable* GetRootAsCouponStuffExcelTable(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::CouponStuffExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCELTABLE_GETROOTASCOUPONSTUFFEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::CouponStuffExcelTable* GetRootAsCouponStuffExcelTable(::FlatBuffers::ByteBuffer* arg, ::FlatData::CouponStuffExcelTable* arg2)
		{
			return ((::FlatData::CouponStuffExcelTable*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::CouponStuffExcelTable*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCELTABLE_GETROOTASCOUPONSTUFFEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCELTABLE___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::CouponStuffExcelTable* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::CouponStuffExcelTable*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCELTABLE___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* DataList(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCELTABLE_DATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCELTABLE_INITKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DataListLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCELTABLE_GET_DATALISTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCouponStuffExcelTable(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCELTABLE_CREATECOUPONSTUFFEXCELTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartCouponStuffExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCELTABLE_STARTCOUPONSTUFFEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddDataList(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCELTABLE_ADDDATALIST_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCELTABLE_CREATEDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDataListVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCELTABLE_STARTDATALISTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndCouponStuffExcelTable(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCELTABLE_ENDCOUPONSTUFFEXCELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCouponStuffExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCELTABLE_FINISHCOUPONSTUFFEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void FinishSizePrefixedCouponStuffExcelTableBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCELTABLE_FINISHSIZEPREFIXEDCOUPONSTUFFEXCELTABLEBUFFER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

