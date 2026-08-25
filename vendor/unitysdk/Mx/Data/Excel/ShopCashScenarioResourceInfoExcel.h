#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ShopCashScenarioResourceInfoExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C73110)
#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_GETROOTASSHOPCASHSCENARIORESOURCEINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1C73120)
#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_GETROOTASSHOPCASHSCENARIORESOURCEINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1C73180)
#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C73210)
#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C731E0)
#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_GET_SCENARIORESROUCEINFOID_OFFSET UNITYSDK_OFFSET(0x1C73230)
#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_GET_SHOPCASHID_OFFSET UNITYSDK_OFFSET(0x1C73280)
#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1C732D0)
#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_GETICONPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C73310)
#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_CREATESHOPCASHSCENARIORESOURCEINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1C73330)
#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_STARTSHOPCASHSCENARIORESOURCEINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1C734D0)
#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_ADDSCENARIORESROUCEINFOID_OFFSET UNITYSDK_OFFSET(0x1C73420)
#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_ADDSHOPCASHID_OFFSET UNITYSDK_OFFSET(0x1C733F0)
#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_ADDICONPATH_OFFSET UNITYSDK_OFFSET(0x1C73450)
#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_ENDSHOPCASHSCENARIORESOURCEINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1C73480)
#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_FINISHSHOPCASHSCENARIORESOURCEINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C734F0)
#define MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_FINISHSIZEPREFIXEDSHOPCASHSCENARIORESOURCEINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C73510)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopCashScenarioResourceInfoExcel_TypeDefinitionIndex = 19374;

	class ShopCashScenarioResourceInfoExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ShopCashScenarioResourceInfoExcel* GetRootAsShopCashScenarioResourceInfoExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShopCashScenarioResourceInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_GETROOTASSHOPCASHSCENARIORESOURCEINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ShopCashScenarioResourceInfoExcel* GetRootAsShopCashScenarioResourceInfoExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ShopCashScenarioResourceInfoExcel* arg)
		{
			return (return (::MX::Data::Excel::ShopCashScenarioResourceInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ShopCashScenarioResourceInfoExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_GETROOTASSHOPCASHSCENARIORESOURCEINFOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ShopCashScenarioResourceInfoExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShopCashScenarioResourceInfoExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_ScenarioResrouceInfoId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_GET_SCENARIORESROUCEINFOID_OFFSET))(nullptr);
		}

		::System::Int64 get_ShopCashId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_GET_SHOPCASHID_OFFSET))(nullptr);
		}

		::System::String* get_IconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_GET_ICONPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_GETICONPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateShopCashScenarioResourceInfoExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_CREATESHOPCASHSCENARIORESOURCEINFOEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartShopCashScenarioResourceInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_STARTSHOPCASHSCENARIORESOURCEINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddScenarioResrouceInfoId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_ADDSCENARIORESROUCEINFOID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopCashId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_ADDSHOPCASHID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_ADDICONPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndShopCashScenarioResourceInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_ENDSHOPCASHSCENARIORESOURCEINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishShopCashScenarioResourceInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_FINISHSHOPCASHSCENARIORESOURCEINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedShopCashScenarioResourceInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHSCENARIORESOURCEINFOEXCEL_FINISHSIZEPREFIXEDSHOPCASHSCENARIORESOURCEINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

