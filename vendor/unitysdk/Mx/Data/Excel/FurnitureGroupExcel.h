#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class FurnitureGroupExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B2C5D0)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL_GETROOTASFURNITUREGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B2C5E0)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL_GETROOTASFURNITUREGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B2C640)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B2C6D0)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B2C6A0)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B2C6F0)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL_GET_GROUPNAMELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1B2C740)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1B2C790)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL_REQUIREDFURNITURECOUNT_OFFSET UNITYSDK_OFFSET(0x1B2C7E0)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL_GET_REQUIREDFURNITURECOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1B2C840)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL_GETREQUIREDFURNITURECOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1B2C880)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL_COMFORTBONUS_OFFSET UNITYSDK_OFFSET(0x1B2C8A0)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL_GET_COMFORTBONUSLENGTH_OFFSET UNITYSDK_OFFSET(0x1B2C900)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL_GETCOMFORTBONUSBYTES_OFFSET UNITYSDK_OFFSET(0x1B2C940)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL_CREATEFURNITUREGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B2C960)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL_STARTFURNITUREGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B2CBA0)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B2CA60)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL_ADDGROUPNAMELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1B2CB20)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1B2CAF0)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL_ADDREQUIREDFURNITURECOUNT_OFFSET UNITYSDK_OFFSET(0x1B2CAC0)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL_CREATEREQUIREDFURNITURECOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B2CBC0)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL_STARTREQUIREDFURNITURECOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B2CC50)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL_ADDCOMFORTBONUS_OFFSET UNITYSDK_OFFSET(0x1B2CA90)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL_CREATECOMFORTBONUSVECTOR_OFFSET UNITYSDK_OFFSET(0x1B2CC90)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL_STARTCOMFORTBONUSVECTOR_OFFSET UNITYSDK_OFFSET(0x1B2CD20)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL_ENDFURNITUREGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B2CB50)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL_FINISHFURNITUREGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B2CD60)
#define MX_DATA_EXCEL_FURNITUREGROUPEXCEL_FINISHSIZEPREFIXEDFURNITUREGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B2CD80)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FurnitureGroupExcel_TypeDefinitionIndex = 18024;

	class FurnitureGroupExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::FurnitureGroupExcel* GetRootAsFurnitureGroupExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FurnitureGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL_GETROOTASFURNITUREGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::FurnitureGroupExcel* GetRootAsFurnitureGroupExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::FurnitureGroupExcel* arg)
		{
			return (return (::MX::Data::Excel::FurnitureGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::FurnitureGroupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL_GETROOTASFURNITUREGROUPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::FurnitureGroupExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FurnitureGroupExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::UInt32 get_GroupNameLocalize()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL_GET_GROUPNAMELOCALIZE_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::Int32 RequiredFurnitureCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL_REQUIREDFURNITURECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RequiredFurnitureCountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL_GET_REQUIREDFURNITURECOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRequiredFurnitureCountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL_GETREQUIREDFURNITURECOUNTBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ComfortBonus(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL_COMFORTBONUS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ComfortBonusLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL_GET_COMFORTBONUSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetComfortBonusBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL_GETCOMFORTBONUSBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFurnitureGroupExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::UInt32, ::System::UInt32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL_CREATEFURNITUREGROUPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartFurnitureGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL_STARTFURNITUREGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupNameLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL_ADDGROUPNAMELOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRequiredFurnitureCount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL_ADDREQUIREDFURNITURECOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRequiredFurnitureCountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL_CREATEREQUIREDFURNITURECOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRequiredFurnitureCountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL_STARTREQUIREDFURNITURECOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddComfortBonus(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL_ADDCOMFORTBONUS_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateComfortBonusVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL_CREATECOMFORTBONUSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartComfortBonusVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL_STARTCOMFORTBONUSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndFurnitureGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL_ENDFURNITUREGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFurnitureGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL_FINISHFURNITUREGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedFurnitureGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FURNITUREGROUPEXCEL_FINISHSIZEPREFIXEDFURNITUREGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

