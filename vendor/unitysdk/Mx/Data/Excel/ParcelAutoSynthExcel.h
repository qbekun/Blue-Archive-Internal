#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ParcelAutoSynthExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C23E50)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_GETROOTASPARCELAUTOSYNTHEXCEL_OFFSET UNITYSDK_OFFSET(0x1C23E60)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_GETROOTASPARCELAUTOSYNTHEXCEL_OFFSET UNITYSDK_OFFSET(0x1C23EC0)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C23F50)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C23F20)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_GET_REQUIREPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C23F70)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_GET_REQUIREPARCELID_OFFSET UNITYSDK_OFFSET(0x1C23FC0)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_GET_REQUIREPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C24010)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_GET_SYNTHSTARTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C24060)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_GET_SYNTHENDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C240B0)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_GET_SYNTHMAXITEM_OFFSET UNITYSDK_OFFSET(0x1C24100)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_GET_RESULTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C24150)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_GET_RESULTPARCELID_OFFSET UNITYSDK_OFFSET(0x1C241A0)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_GET_RESULTPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C241F0)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_CREATEPARCELAUTOSYNTHEXCEL_OFFSET UNITYSDK_OFFSET(0x1C24240)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_STARTPARCELAUTOSYNTHEXCEL_OFFSET UNITYSDK_OFFSET(0x1C245E0)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_ADDREQUIREPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C24530)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_ADDREQUIREPARCELID_OFFSET UNITYSDK_OFFSET(0x1C244D0)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_ADDREQUIREPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C244A0)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_ADDSYNTHSTARTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C24470)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_ADDSYNTHENDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C24440)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_ADDSYNTHMAXITEM_OFFSET UNITYSDK_OFFSET(0x1C24560)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_ADDRESULTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C24500)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_ADDRESULTPARCELID_OFFSET UNITYSDK_OFFSET(0x1C24410)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_ADDRESULTPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C243E0)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_ENDPARCELAUTOSYNTHEXCEL_OFFSET UNITYSDK_OFFSET(0x1C24590)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_FINISHPARCELAUTOSYNTHEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C24600)
#define MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_FINISHSIZEPREFIXEDPARCELAUTOSYNTHEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C24620)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ParcelAutoSynthExcel_TypeDefinitionIndex = 19012;

	class ParcelAutoSynthExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ParcelAutoSynthExcel* GetRootAsParcelAutoSynthExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ParcelAutoSynthExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_GETROOTASPARCELAUTOSYNTHEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ParcelAutoSynthExcel* GetRootAsParcelAutoSynthExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ParcelAutoSynthExcel* arg)
		{
			return (return (::MX::Data::Excel::ParcelAutoSynthExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ParcelAutoSynthExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_GETROOTASPARCELAUTOSYNTHEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ParcelAutoSynthExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ParcelAutoSynthExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::ParcelType* get_RequireParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_GET_REQUIREPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RequireParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_GET_REQUIREPARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_RequireParcelAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_GET_REQUIREPARCELAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_SynthStartAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_GET_SYNTHSTARTAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_SynthEndAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_GET_SYNTHENDAMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_SynthMaxItem()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_GET_SYNTHMAXITEM_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ResultParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_GET_RESULTPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ResultParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_GET_RESULTPARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_ResultParcelAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_GET_RESULTPARCELAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateParcelAutoSynthExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_CREATEPARCELAUTOSYNTHEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartParcelAutoSynthExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_STARTPARCELAUTOSYNTHEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddRequireParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_ADDREQUIREPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRequireParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_ADDREQUIREPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRequireParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_ADDREQUIREPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSynthStartAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_ADDSYNTHSTARTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSynthEndAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_ADDSYNTHENDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSynthMaxItem(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_ADDSYNTHMAXITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddResultParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_ADDRESULTPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddResultParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_ADDRESULTPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddResultParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_ADDRESULTPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndParcelAutoSynthExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_ENDPARCELAUTOSYNTHEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishParcelAutoSynthExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_FINISHPARCELAUTOSYNTHEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedParcelAutoSynthExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PARCELAUTOSYNTHEXCEL_FINISHSIZEPREFIXEDPARCELAUTOSYNTHEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

