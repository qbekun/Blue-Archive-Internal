#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ShopRecruitSettingExcel; }
namespace FlatData { class ScenarioModeSubTypes; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C80AB0)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_GETROOTASSHOPRECRUITSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1C80AC0)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_GETROOTASSHOPRECRUITSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1C80B20)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C80BB0)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C80B80)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C80BD0)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_GET_RECRUITCHANGESCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1C80C20)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_GET_PRIORITYORDER_OFFSET UNITYSDK_OFFSET(0x1C80C70)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_GET_TOGETHERPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1C80CC0)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_GET_ANOTHERPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1C80D10)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_GET_TWISTPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1C80D60)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_GET_RECRUITCHANGEICON_OFFSET UNITYSDK_OFFSET(0x1C80DB0)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_GETRECRUITCHANGEICONBYTES_OFFSET UNITYSDK_OFFSET(0x1C80DF0)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_GET_SERIESFORCEENTER_OFFSET UNITYSDK_OFFSET(0x1C80E10)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_CREATESHOPRECRUITSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1C80E60)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_STARTSHOPRECRUITSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1C811B0)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C81040)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_ADDRECRUITCHANGESCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1C81010)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_ADDPRIORITYORDER_OFFSET UNITYSDK_OFFSET(0x1C80FE0)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_ADDTOGETHERPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1C81130)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_ADDANOTHERPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1C81100)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_ADDTWISTPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1C810D0)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_ADDRECRUITCHANGEICON_OFFSET UNITYSDK_OFFSET(0x1C810A0)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_ADDSERIESFORCEENTER_OFFSET UNITYSDK_OFFSET(0x1C81070)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_ENDSHOPRECRUITSETTINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1C81160)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_FINISHSHOPRECRUITSETTINGEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C811D0)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_FINISHSIZEPREFIXEDSHOPRECRUITSETTINGEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C811F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopRecruitSettingExcel_TypeDefinitionIndex = 19433;

	class ShopRecruitSettingExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ShopRecruitSettingExcel* GetRootAsShopRecruitSettingExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShopRecruitSettingExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_GETROOTASSHOPRECRUITSETTINGEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ShopRecruitSettingExcel* GetRootAsShopRecruitSettingExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ShopRecruitSettingExcel* arg)
		{
			return (return (::MX::Data::Excel::ShopRecruitSettingExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ShopRecruitSettingExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_GETROOTASSHOPRECRUITSETTINGEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ShopRecruitSettingExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShopRecruitSettingExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_RecruitChangeScenarioModeID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_GET_RECRUITCHANGESCENARIOMODEID_OFFSET))(nullptr);
		}

		::System::Int64 get_PriorityOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_GET_PRIORITYORDER_OFFSET))(nullptr);
		}

		::System::Int32 get_TogetherPercentage()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_GET_TOGETHERPERCENTAGE_OFFSET))(nullptr);
		}

		::System::Int32 get_AnotherPercentage()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_GET_ANOTHERPERCENTAGE_OFFSET))(nullptr);
		}

		::System::Int32 get_TwistPercentage()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_GET_TWISTPERCENTAGE_OFFSET))(nullptr);
		}

		::System::String* get_RecruitChangeIcon()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_GET_RECRUITCHANGEICON_OFFSET))(nullptr);
		}

		Il2CppObject* GetRecruitChangeIconBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_GETRECRUITCHANGEICONBYTES_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeSubTypes* get_SeriesForceEnter()
		{
			return (return (::FlatData::ScenarioModeSubTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_GET_SERIESFORCEENTER_OFFSET))(nullptr);
		}

		Il2CppObject* CreateShopRecruitSettingExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatData::ScenarioModeSubTypes* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatData::ScenarioModeSubTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_CREATESHOPRECRUITSETTINGEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartShopRecruitSettingExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_STARTSHOPRECRUITSETTINGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecruitChangeScenarioModeID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_ADDRECRUITCHANGESCENARIOMODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPriorityOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_ADDPRIORITYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTogetherPercentage(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_ADDTOGETHERPERCENTAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAnotherPercentage(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_ADDANOTHERPERCENTAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTwistPercentage(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_ADDTWISTPERCENTAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRecruitChangeIcon(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_ADDRECRUITCHANGEICON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSeriesForceEnter(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ScenarioModeSubTypes* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ScenarioModeSubTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_ADDSERIESFORCEENTER_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndShopRecruitSettingExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_ENDSHOPRECRUITSETTINGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishShopRecruitSettingExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_FINISHSHOPRECRUITSETTINGEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedShopRecruitSettingExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCEL_FINISHSIZEPREFIXEDSHOPRECRUITSETTINGEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

