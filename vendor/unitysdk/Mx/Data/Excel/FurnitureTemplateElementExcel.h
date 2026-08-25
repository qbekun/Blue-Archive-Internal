#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class FurnitureTemplateElementExcel; }
namespace FlatData { class FurnitureLocation; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B2DAB0)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_GETROOTASFURNITURETEMPLATEELEMENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B2DAC0)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_GETROOTASFURNITURETEMPLATEELEMENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B2DB20)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B2DBB0)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B2DB80)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_GET_FURNITURETEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1B2DBD0)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_GET_FURNITUREID_OFFSET UNITYSDK_OFFSET(0x1B2DC20)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x1B2DC70)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_GET_POSITIONX_OFFSET UNITYSDK_OFFSET(0x1B2DCC0)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_GET_POSITIONY_OFFSET UNITYSDK_OFFSET(0x1B2DD10)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1B2DD60)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1B2DDB0)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_CREATEFURNITURETEMPLATEELEMENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B2DE00)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_STARTFURNITURETEMPLATEELEMENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B2E110)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_ADDFURNITURETEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1B2DFD0)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_ADDFURNITUREID_OFFSET UNITYSDK_OFFSET(0x1B2DFA0)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_ADDLOCATION_OFFSET UNITYSDK_OFFSET(0x1B2E090)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_ADDPOSITIONX_OFFSET UNITYSDK_OFFSET(0x1B2E060)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_ADDPOSITIONY_OFFSET UNITYSDK_OFFSET(0x1B2E030)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_ADDROTATION_OFFSET UNITYSDK_OFFSET(0x1B2E000)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_ADDORDER_OFFSET UNITYSDK_OFFSET(0x1B2DF70)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_ENDFURNITURETEMPLATEELEMENTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B2E0C0)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_FINISHFURNITURETEMPLATEELEMENTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B2E130)
#define MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_FINISHSIZEPREFIXEDFURNITURETEMPLATEELEMENTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B2E150)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FurnitureTemplateElementExcel_TypeDefinitionIndex = 18031;

	class FurnitureTemplateElementExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::FurnitureTemplateElementExcel* GetRootAsFurnitureTemplateElementExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FurnitureTemplateElementExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_GETROOTASFURNITURETEMPLATEELEMENTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::FurnitureTemplateElementExcel* GetRootAsFurnitureTemplateElementExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::FurnitureTemplateElementExcel* arg)
		{
			return (return (::MX::Data::Excel::FurnitureTemplateElementExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::FurnitureTemplateElementExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_GETROOTASFURNITURETEMPLATEELEMENTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::FurnitureTemplateElementExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FurnitureTemplateElementExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_FurnitureTemplateId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_GET_FURNITURETEMPLATEID_OFFSET))(nullptr);
		}

		::System::Int64 get_FurnitureId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_GET_FURNITUREID_OFFSET))(nullptr);
		}

		::FlatData::FurnitureLocation* get_Location()
		{
			return (return (::FlatData::FurnitureLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_GET_LOCATION_OFFSET))(nullptr);
		}

		::System::Single get_PositionX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_GET_POSITIONX_OFFSET))(nullptr);
		}

		::System::Single get_PositionY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_GET_POSITIONY_OFFSET))(nullptr);
		}

		::System::Single get_Rotation()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_GET_ROTATION_OFFSET))(nullptr);
		}

		::System::Int64 get_Order()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_GET_ORDER_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFurnitureTemplateElementExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::FurnitureLocation* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::FurnitureLocation*, ::System::Single, ::System::Single, ::System::Single, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_CREATEFURNITURETEMPLATEELEMENTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartFurnitureTemplateElementExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_STARTFURNITURETEMPLATEELEMENTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddFurnitureTemplateId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_ADDFURNITURETEMPLATEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFurnitureId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_ADDFURNITUREID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocation(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::FurnitureLocation* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::FurnitureLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_ADDLOCATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPositionX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_ADDPOSITIONX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPositionY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_ADDPOSITIONY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRotation(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_ADDROTATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_ADDORDER_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndFurnitureTemplateElementExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_ENDFURNITURETEMPLATEELEMENTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFurnitureTemplateElementExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_FINISHFURNITURETEMPLATEELEMENTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedFurnitureTemplateElementExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITURETEMPLATEELEMENTEXCEL_FINISHSIZEPREFIXEDFURNITURETEMPLATEELEMENTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

