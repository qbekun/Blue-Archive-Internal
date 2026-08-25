#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class PossessionCheckExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C2C280)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_GETROOTASPOSSESSIONCHECKEXCEL_OFFSET UNITYSDK_OFFSET(0x1C2C290)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_GETROOTASPOSSESSIONCHECKEXCEL_OFFSET UNITYSDK_OFFSET(0x1C2C2F0)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C2C380)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C2C350)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C2C3A0)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_GET_DEFAULTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C2C3F0)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_GET_DEFAULTPARCELID_OFFSET UNITYSDK_OFFSET(0x1C2C440)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_GET_DEFAULTPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C2C490)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_GET_REPLACEPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C2C4E0)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_GET_REPLACEPARCELID_OFFSET UNITYSDK_OFFSET(0x1C2C530)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_GET_REPLACEPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C2C580)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_CREATEPOSSESSIONCHECKEXCEL_OFFSET UNITYSDK_OFFSET(0x1C2C5D0)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_STARTPOSSESSIONCHECKEXCEL_OFFSET UNITYSDK_OFFSET(0x1C2C8C0)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C2C780)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_ADDDEFAULTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C2C840)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_ADDDEFAULTPARCELID_OFFSET UNITYSDK_OFFSET(0x1C2C750)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_ADDDEFAULTPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C2C810)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_ADDREPLACEPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C2C7E0)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_ADDREPLACEPARCELID_OFFSET UNITYSDK_OFFSET(0x1C2C720)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_ADDREPLACEPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C2C7B0)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_ENDPOSSESSIONCHECKEXCEL_OFFSET UNITYSDK_OFFSET(0x1C2C870)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_FINISHPOSSESSIONCHECKEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C2C8E0)
#define MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_FINISHSIZEPREFIXEDPOSSESSIONCHECKEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C2C900)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int PossessionCheckExcel_TypeDefinitionIndex = 19057;

	class PossessionCheckExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::PossessionCheckExcel* GetRootAsPossessionCheckExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::PossessionCheckExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_GETROOTASPOSSESSIONCHECKEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::PossessionCheckExcel* GetRootAsPossessionCheckExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::PossessionCheckExcel* arg)
		{
			return (return (::MX::Data::Excel::PossessionCheckExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::PossessionCheckExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_GETROOTASPOSSESSIONCHECKEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::PossessionCheckExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::PossessionCheckExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_DefaultParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_GET_DEFAULTPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_DefaultParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_GET_DEFAULTPARCELID_OFFSET))(nullptr);
		}

		::System::Int32 get_DefaultParcelAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_GET_DEFAULTPARCELAMOUNT_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ReplaceParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_GET_REPLACEPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ReplaceParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_GET_REPLACEPARCELID_OFFSET))(nullptr);
		}

		::System::Int32 get_ReplaceParcelAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_GET_REPLACEPARCELAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreatePossessionCheckExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_CREATEPOSSESSIONCHECKEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartPossessionCheckExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_STARTPOSSESSIONCHECKEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDefaultParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_ADDDEFAULTPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDefaultParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_ADDDEFAULTPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDefaultParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_ADDDEFAULTPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddReplaceParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_ADDREPLACEPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddReplaceParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_ADDREPLACEPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddReplaceParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_ADDREPLACEPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndPossessionCheckExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_ENDPOSSESSIONCHECKEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishPossessionCheckExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_FINISHPOSSESSIONCHECKEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedPossessionCheckExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_POSSESSIONCHECKEXCEL_FINISHSIZEPREFIXEDPOSSESSIONCHECKEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

