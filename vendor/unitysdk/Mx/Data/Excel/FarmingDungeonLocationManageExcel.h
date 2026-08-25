#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class FarmingDungeonLocationManageExcel; }
namespace FlatData { class ContentType; }
namespace FlatData { class WeekDungeonType; }
namespace FlatData { class SchoolDungeonType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B18180)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GETROOTASFARMINGDUNGEONLOCATIONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B18190)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GETROOTASFARMINGDUNGEONLOCATIONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B181F0)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B18280)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B18250)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GET_FARMINGDUNGEONLOCATIONID_OFFSET UNITYSDK_OFFSET(0x1B182A0)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1B182F0)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GET_WEEKDUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x1B18340)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GET_SCHOOLDUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x1B18390)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1B183E0)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GET_OPENSTARTDATETIME_OFFSET UNITYSDK_OFFSET(0x1B18430)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GETOPENSTARTDATETIMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B18470)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GET_OPENENDDATETIME_OFFSET UNITYSDK_OFFSET(0x1B18490)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GETOPENENDDATETIMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B184D0)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GET_LOCATIONBUTTONIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B184F0)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GETLOCATIONBUTTONIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B18530)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GET_LOCALIZECODETITLE_OFFSET UNITYSDK_OFFSET(0x1B18550)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GET_LOCALIZECODEINFO_OFFSET UNITYSDK_OFFSET(0x1B185A0)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_CREATEFARMINGDUNGEONLOCATIONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B185F0)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_STARTFARMINGDUNGEONLOCATIONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B189F0)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_ADDFARMINGDUNGEONLOCATIONID_OFFSET UNITYSDK_OFFSET(0x1B187F0)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_ADDCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1B18970)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_ADDWEEKDUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x1B18940)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_ADDSCHOOLDUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x1B18910)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_ADDORDER_OFFSET UNITYSDK_OFFSET(0x1B187C0)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_ADDOPENSTARTDATETIME_OFFSET UNITYSDK_OFFSET(0x1B188E0)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_ADDOPENENDDATETIME_OFFSET UNITYSDK_OFFSET(0x1B188B0)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_ADDLOCATIONBUTTONIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B18880)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_ADDLOCALIZECODETITLE_OFFSET UNITYSDK_OFFSET(0x1B18850)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_ADDLOCALIZECODEINFO_OFFSET UNITYSDK_OFFSET(0x1B18820)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_ENDFARMINGDUNGEONLOCATIONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B189A0)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_FINISHFARMINGDUNGEONLOCATIONMANAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B18A10)
#define MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_FINISHSIZEPREFIXEDFARMINGDUNGEONLOCATIONMANAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B18A30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FarmingDungeonLocationManageExcel_TypeDefinitionIndex = 17940;

	class FarmingDungeonLocationManageExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::FarmingDungeonLocationManageExcel* GetRootAsFarmingDungeonLocationManageExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FarmingDungeonLocationManageExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GETROOTASFARMINGDUNGEONLOCATIONMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::FarmingDungeonLocationManageExcel* GetRootAsFarmingDungeonLocationManageExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::FarmingDungeonLocationManageExcel* arg)
		{
			return (return (::MX::Data::Excel::FarmingDungeonLocationManageExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::FarmingDungeonLocationManageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GETROOTASFARMINGDUNGEONLOCATIONMANAGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::FarmingDungeonLocationManageExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FarmingDungeonLocationManageExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_FarmingDungeonLocationId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GET_FARMINGDUNGEONLOCATIONID_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return (return (::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::FlatData::WeekDungeonType* get_WeekDungeonType()
		{
			return (return (::FlatData::WeekDungeonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GET_WEEKDUNGEONTYPE_OFFSET))(nullptr);
		}

		::FlatData::SchoolDungeonType* get_SchoolDungeonType()
		{
			return (return (::FlatData::SchoolDungeonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GET_SCHOOLDUNGEONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_Order()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GET_ORDER_OFFSET))(nullptr);
		}

		::System::String* get_OpenStartDateTime()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GET_OPENSTARTDATETIME_OFFSET))(nullptr);
		}

		Il2CppObject* GetOpenStartDateTimeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GETOPENSTARTDATETIMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_OpenEndDateTime()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GET_OPENENDDATETIME_OFFSET))(nullptr);
		}

		Il2CppObject* GetOpenEndDateTimeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GETOPENENDDATETIMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LocationButtonImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GET_LOCATIONBUTTONIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocationButtonImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GETLOCATIONBUTTONIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeCodeTitle()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GET_LOCALIZECODETITLE_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeCodeInfo()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_GET_LOCALIZECODEINFO_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFarmingDungeonLocationManageExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::ContentType* arg, ::FlatData::WeekDungeonType* arg, ::FlatData::SchoolDungeonType* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::ContentType*, ::FlatData::WeekDungeonType*, ::FlatData::SchoolDungeonType*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_CREATEFARMINGDUNGEONLOCATIONMANAGEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartFarmingDungeonLocationManageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_STARTFARMINGDUNGEONLOCATIONMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddFarmingDungeonLocationId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_ADDFARMINGDUNGEONLOCATIONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddContentType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_ADDCONTENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWeekDungeonType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::WeekDungeonType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_ADDWEEKDUNGEONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSchoolDungeonType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::SchoolDungeonType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::SchoolDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_ADDSCHOOLDUNGEONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_ADDORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenStartDateTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_ADDOPENSTARTDATETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenEndDateTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_ADDOPENENDDATETIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocationButtonImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_ADDLOCATIONBUTTONIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeCodeTitle(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_ADDLOCALIZECODETITLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeCodeInfo(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_ADDLOCALIZECODEINFO_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndFarmingDungeonLocationManageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_ENDFARMINGDUNGEONLOCATIONMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFarmingDungeonLocationManageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_FINISHFARMINGDUNGEONLOCATIONMANAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedFarmingDungeonLocationManageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FARMINGDUNGEONLOCATIONMANAGEEXCEL_FINISHSIZEPREFIXEDFARMINGDUNGEONLOCATIONMANAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

