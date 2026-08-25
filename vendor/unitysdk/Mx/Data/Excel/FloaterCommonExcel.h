#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class FloaterCommonExcel; }
namespace FlatData { class TacticEntityType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_FLOATERCOMMONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B26B20)
#define MX_DATA_EXCEL_FLOATERCOMMONEXCEL_GETROOTASFLOATERCOMMONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B26B30)
#define MX_DATA_EXCEL_FLOATERCOMMONEXCEL_GETROOTASFLOATERCOMMONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B26B90)
#define MX_DATA_EXCEL_FLOATERCOMMONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B26C20)
#define MX_DATA_EXCEL_FLOATERCOMMONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B26BF0)
#define MX_DATA_EXCEL_FLOATERCOMMONEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B26C40)
#define MX_DATA_EXCEL_FLOATERCOMMONEXCEL_GET_TACTICENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x1B26C90)
#define MX_DATA_EXCEL_FLOATERCOMMONEXCEL_GET_FLOATEROFFSETPOSX_OFFSET UNITYSDK_OFFSET(0x1B26CE0)
#define MX_DATA_EXCEL_FLOATERCOMMONEXCEL_GET_FLOATEROFFSETPOSY_OFFSET UNITYSDK_OFFSET(0x1B26D30)
#define MX_DATA_EXCEL_FLOATERCOMMONEXCEL_GET_FLOATERRANDOMPOSRANGEX_OFFSET UNITYSDK_OFFSET(0x1B26D80)
#define MX_DATA_EXCEL_FLOATERCOMMONEXCEL_GET_FLOATERRANDOMPOSRANGEY_OFFSET UNITYSDK_OFFSET(0x1B26DD0)
#define MX_DATA_EXCEL_FLOATERCOMMONEXCEL_CREATEFLOATERCOMMONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B26E20)
#define MX_DATA_EXCEL_FLOATERCOMMONEXCEL_STARTFLOATERCOMMONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B270C0)
#define MX_DATA_EXCEL_FLOATERCOMMONEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B26F50)
#define MX_DATA_EXCEL_FLOATERCOMMONEXCEL_ADDTACTICENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x1B27040)
#define MX_DATA_EXCEL_FLOATERCOMMONEXCEL_ADDFLOATEROFFSETPOSX_OFFSET UNITYSDK_OFFSET(0x1B27010)
#define MX_DATA_EXCEL_FLOATERCOMMONEXCEL_ADDFLOATEROFFSETPOSY_OFFSET UNITYSDK_OFFSET(0x1B26FE0)
#define MX_DATA_EXCEL_FLOATERCOMMONEXCEL_ADDFLOATERRANDOMPOSRANGEX_OFFSET UNITYSDK_OFFSET(0x1B26FB0)
#define MX_DATA_EXCEL_FLOATERCOMMONEXCEL_ADDFLOATERRANDOMPOSRANGEY_OFFSET UNITYSDK_OFFSET(0x1B26F80)
#define MX_DATA_EXCEL_FLOATERCOMMONEXCEL_ENDFLOATERCOMMONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B27070)
#define MX_DATA_EXCEL_FLOATERCOMMONEXCEL_FINISHFLOATERCOMMONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B270E0)
#define MX_DATA_EXCEL_FLOATERCOMMONEXCEL_FINISHSIZEPREFIXEDFLOATERCOMMONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B27100)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FloaterCommonExcel_TypeDefinitionIndex = 18003;

	class FloaterCommonExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::FloaterCommonExcel* GetRootAsFloaterCommonExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FloaterCommonExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCEL_GETROOTASFLOATERCOMMONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::FloaterCommonExcel* GetRootAsFloaterCommonExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::FloaterCommonExcel* arg)
		{
			return (return (::MX::Data::Excel::FloaterCommonExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::FloaterCommonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCEL_GETROOTASFLOATERCOMMONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::FloaterCommonExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FloaterCommonExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::TacticEntityType* get_TacticEntityType()
		{
			return (return (::FlatData::TacticEntityType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCEL_GET_TACTICENTITYTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_FloaterOffsetPosX()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCEL_GET_FLOATEROFFSETPOSX_OFFSET))(nullptr);
		}

		::System::Int32 get_FloaterOffsetPosY()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCEL_GET_FLOATEROFFSETPOSY_OFFSET))(nullptr);
		}

		::System::Int32 get_FloaterRandomPosRangeX()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCEL_GET_FLOATERRANDOMPOSRANGEX_OFFSET))(nullptr);
		}

		::System::Int32 get_FloaterRandomPosRangeY()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCEL_GET_FLOATERRANDOMPOSRANGEY_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFloaterCommonExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::TacticEntityType* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::TacticEntityType*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCEL_CREATEFLOATERCOMMONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartFloaterCommonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCEL_STARTFLOATERCOMMONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTacticEntityType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TacticEntityType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TacticEntityType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCEL_ADDTACTICENTITYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFloaterOffsetPosX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCEL_ADDFLOATEROFFSETPOSX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFloaterOffsetPosY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCEL_ADDFLOATEROFFSETPOSY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFloaterRandomPosRangeX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCEL_ADDFLOATERRANDOMPOSRANGEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFloaterRandomPosRangeY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCEL_ADDFLOATERRANDOMPOSRANGEY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndFloaterCommonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCEL_ENDFLOATERCOMMONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFloaterCommonExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCEL_FINISHFLOATERCOMMONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedFloaterCommonExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FLOATERCOMMONEXCEL_FINISHSIZEPREFIXEDFLOATERCOMMONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

