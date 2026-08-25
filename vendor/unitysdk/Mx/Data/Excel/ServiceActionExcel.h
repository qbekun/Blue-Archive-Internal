#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ServiceActionExcel; }
namespace FlatData { class ServiceActionType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_SERVICEACTIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C6E550)
#define MX_DATA_EXCEL_SERVICEACTIONEXCEL_GETROOTASSERVICEACTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C6E560)
#define MX_DATA_EXCEL_SERVICEACTIONEXCEL_GETROOTASSERVICEACTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C6E5C0)
#define MX_DATA_EXCEL_SERVICEACTIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C6E650)
#define MX_DATA_EXCEL_SERVICEACTIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C6E620)
#define MX_DATA_EXCEL_SERVICEACTIONEXCEL_GET_SERVICEACTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C6E670)
#define MX_DATA_EXCEL_SERVICEACTIONEXCEL_GET_ISLEGACY_OFFSET UNITYSDK_OFFSET(0x1C6E6C0)
#define MX_DATA_EXCEL_SERVICEACTIONEXCEL_GET_GOODSID_OFFSET UNITYSDK_OFFSET(0x1C6E710)
#define MX_DATA_EXCEL_SERVICEACTIONEXCEL_CREATESERVICEACTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C6E760)
#define MX_DATA_EXCEL_SERVICEACTIONEXCEL_STARTSERVICEACTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C6E8F0)
#define MX_DATA_EXCEL_SERVICEACTIONEXCEL_ADDSERVICEACTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C6E840)
#define MX_DATA_EXCEL_SERVICEACTIONEXCEL_ADDISLEGACY_OFFSET UNITYSDK_OFFSET(0x1C6E870)
#define MX_DATA_EXCEL_SERVICEACTIONEXCEL_ADDGOODSID_OFFSET UNITYSDK_OFFSET(0x1C6E810)
#define MX_DATA_EXCEL_SERVICEACTIONEXCEL_ENDSERVICEACTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C6E8A0)
#define MX_DATA_EXCEL_SERVICEACTIONEXCEL_FINISHSERVICEACTIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C6E910)
#define MX_DATA_EXCEL_SERVICEACTIONEXCEL_FINISHSIZEPREFIXEDSERVICEACTIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C6E930)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ServiceActionExcel_TypeDefinitionIndex = 19353;

	class ServiceActionExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVICEACTIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ServiceActionExcel* GetRootAsServiceActionExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ServiceActionExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVICEACTIONEXCEL_GETROOTASSERVICEACTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ServiceActionExcel* GetRootAsServiceActionExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ServiceActionExcel* arg)
		{
			return (return (::MX::Data::Excel::ServiceActionExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ServiceActionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVICEACTIONEXCEL_GETROOTASSERVICEACTIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVICEACTIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ServiceActionExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ServiceActionExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVICEACTIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::ServiceActionType* get_ServiceActionType()
		{
			return (return (::FlatData::ServiceActionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVICEACTIONEXCEL_GET_SERVICEACTIONTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLegacy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVICEACTIONEXCEL_GET_ISLEGACY_OFFSET))(nullptr);
		}

		::System::Int64 get_GoodsId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVICEACTIONEXCEL_GET_GOODSID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateServiceActionExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ServiceActionType* arg, ::System::Boolean arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ServiceActionType*, ::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVICEACTIONEXCEL_CREATESERVICEACTIONEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartServiceActionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVICEACTIONEXCEL_STARTSERVICEACTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddServiceActionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ServiceActionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ServiceActionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVICEACTIONEXCEL_ADDSERVICEACTIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsLegacy(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVICEACTIONEXCEL_ADDISLEGACY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGoodsId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVICEACTIONEXCEL_ADDGOODSID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndServiceActionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVICEACTIONEXCEL_ENDSERVICEACTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishServiceActionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVICEACTIONEXCEL_FINISHSERVICEACTIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedServiceActionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SERVICEACTIONEXCEL_FINISHSIZEPREFIXEDSERVICEACTIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

