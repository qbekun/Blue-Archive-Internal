#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ScenarioBGName_GlobalExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C57890)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_GETROOTASSCENARIOBGNAME_GLOBALEXCEL_OFFSET UNITYSDK_OFFSET(0x1C578A0)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_GETROOTASSCENARIOBGNAME_GLOBALEXCEL_OFFSET UNITYSDK_OFFSET(0x1C57900)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C57990)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C57960)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_GET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0x1C579B0)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_GET_NAMEKR_OFFSET UNITYSDK_OFFSET(0x1C57A00)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_GET_NAMETW_OFFSET UNITYSDK_OFFSET(0x1C57A50)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_GET_NAMEASIA_OFFSET UNITYSDK_OFFSET(0x1C57AA0)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_GET_NAMENA_OFFSET UNITYSDK_OFFSET(0x1C57AF0)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_GET_NAMEGLOBAL_OFFSET UNITYSDK_OFFSET(0x1C57B40)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_GET_NAMETEEN_OFFSET UNITYSDK_OFFSET(0x1C57B90)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_CREATESCENARIOBGNAME_GLOBALEXCEL_OFFSET UNITYSDK_OFFSET(0x1C57BE0)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_STARTSCENARIOBGNAME_GLOBALEXCEL_OFFSET UNITYSDK_OFFSET(0x1C57ED0)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_ADDGROUPNAME_OFFSET UNITYSDK_OFFSET(0x1C57E50)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_ADDNAMEKR_OFFSET UNITYSDK_OFFSET(0x1C57E20)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_ADDNAMETW_OFFSET UNITYSDK_OFFSET(0x1C57DF0)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_ADDNAMEASIA_OFFSET UNITYSDK_OFFSET(0x1C57DC0)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_ADDNAMENA_OFFSET UNITYSDK_OFFSET(0x1C57D90)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_ADDNAMEGLOBAL_OFFSET UNITYSDK_OFFSET(0x1C57D60)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_ADDNAMETEEN_OFFSET UNITYSDK_OFFSET(0x1C57D30)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_ENDSCENARIOBGNAME_GLOBALEXCEL_OFFSET UNITYSDK_OFFSET(0x1C57E80)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_FINISHSCENARIOBGNAME_GLOBALEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C57EF0)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_FINISHSIZEPREFIXEDSCENARIOBGNAME_GLOBALEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C57F10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioBGName_GlobalExcel_TypeDefinitionIndex = 19248;

	class ScenarioBGName_GlobalExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ScenarioBGName_GlobalExcel* GetRootAsScenarioBGName_GlobalExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioBGName_GlobalExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_GETROOTASSCENARIOBGNAME_GLOBALEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ScenarioBGName_GlobalExcel* GetRootAsScenarioBGName_GlobalExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ScenarioBGName_GlobalExcel* arg)
		{
			return (return (::MX::Data::Excel::ScenarioBGName_GlobalExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ScenarioBGName_GlobalExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_GETROOTASSCENARIOBGNAME_GLOBALEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ScenarioBGName_GlobalExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioBGName_GlobalExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 get_GroupName()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_GET_GROUPNAME_OFFSET))(nullptr);
		}

		::System::UInt32 get_NameKr()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_GET_NAMEKR_OFFSET))(nullptr);
		}

		::System::UInt32 get_NameTw()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_GET_NAMETW_OFFSET))(nullptr);
		}

		::System::UInt32 get_NameAsia()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_GET_NAMEASIA_OFFSET))(nullptr);
		}

		::System::UInt32 get_NameNa()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_GET_NAMENA_OFFSET))(nullptr);
		}

		::System::UInt32 get_NameGlobal()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_GET_NAMEGLOBAL_OFFSET))(nullptr);
		}

		::System::UInt32 get_NameTeen()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_GET_NAMETEEN_OFFSET))(nullptr);
		}

		Il2CppObject* CreateScenarioBGName_GlobalExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_CREATESCENARIOBGNAME_GLOBALEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartScenarioBGName_GlobalExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_STARTSCENARIOBGNAME_GLOBALEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupName(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_ADDGROUPNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNameKr(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_ADDNAMEKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNameTw(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_ADDNAMETW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNameAsia(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_ADDNAMEASIA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNameNa(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_ADDNAMENA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNameGlobal(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_ADDNAMEGLOBAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNameTeen(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_ADDNAMETEEN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndScenarioBGName_GlobalExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_ENDSCENARIOBGNAME_GLOBALEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishScenarioBGName_GlobalExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_FINISHSCENARIOBGNAME_GLOBALEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedScenarioBGName_GlobalExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCEL_FINISHSIZEPREFIXEDSCENARIOBGNAME_GLOBALEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

