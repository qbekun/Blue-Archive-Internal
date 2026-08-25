#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class TranscendenceRecipeExcel; }
namespace FlatData { class CurrencyTypes; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_TRANSCENDENCERECIPEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD61EA0)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_GETROOTASTRANSCENDENCERECIPEEXCEL_OFFSET UNITYSDK_OFFSET(0xD61EB0)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_GETROOTASTRANSCENDENCERECIPEEXCEL_OFFSET UNITYSDK_OFFSET(0xD61F10)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD61F70)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD61C10)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xD61F90)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_GET_DEVNAME_OFFSET UNITYSDK_OFFSET(0xD61FE0)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_GETDEVNAMEBYTES_OFFSET UNITYSDK_OFFSET(0xD62020)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_GET_COSTCURRENCYTYPE_OFFSET UNITYSDK_OFFSET(0xD62040)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_GET_COSTCURRENCYAMOUNT_OFFSET UNITYSDK_OFFSET(0xD62090)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_PARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD620E0)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_GET_PARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0xD62140)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_GETPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0xD62180)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_PARCELID_OFFSET UNITYSDK_OFFSET(0xD621A0)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_GET_PARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0xD62200)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_GETPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0xD62240)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_PARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0xD62260)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_GET_PARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0xD622C0)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_GETPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0xD62300)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_CREATETRANSCENDENCERECIPEEXCEL_OFFSET UNITYSDK_OFFSET(0xD62320)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_STARTTRANSCENDENCERECIPEEXCEL_OFFSET UNITYSDK_OFFSET(0xD62610)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0xD624A0)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_ADDDEVNAME_OFFSET UNITYSDK_OFFSET(0xD62590)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_ADDCOSTCURRENCYTYPE_OFFSET UNITYSDK_OFFSET(0xD62560)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_ADDCOSTCURRENCYAMOUNT_OFFSET UNITYSDK_OFFSET(0xD62470)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_ADDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD62530)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_CREATEPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0xD62630)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_STARTPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0xD626C0)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_ADDPARCELID_OFFSET UNITYSDK_OFFSET(0xD62500)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_CREATEPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD62700)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_STARTPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD62790)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_ADDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0xD624D0)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_CREATEPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0xD627D0)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_STARTPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0xD62860)
#define FLATDATA_TRANSCENDENCERECIPEEXCEL_ENDTRANSCENDENCERECIPEEXCEL_OFFSET UNITYSDK_OFFSET(0xD625C0)

namespace FlatData
{
	inline static constexpr unsigned int TranscendenceRecipeExcel_TypeDefinitionIndex = 9347;

	class TranscendenceRecipeExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::TranscendenceRecipeExcel* GetRootAsTranscendenceRecipeExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::TranscendenceRecipeExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_GETROOTASTRANSCENDENCERECIPEEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::TranscendenceRecipeExcel* GetRootAsTranscendenceRecipeExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::TranscendenceRecipeExcel* arg2)
		{
			return ((::FlatData::TranscendenceRecipeExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::TranscendenceRecipeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_GETROOTASTRANSCENDENCERECIPEEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::TranscendenceRecipeExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::TranscendenceRecipeExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_DevName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_GET_DEVNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetDevNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_GETDEVNAMEBYTES_OFFSET))(nullptr);
		}

		::FlatData::CurrencyTypes* get_CostCurrencyType()
		{
			return ((::FlatData::CurrencyTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_GET_COSTCURRENCYTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_CostCurrencyAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_GET_COSTCURRENCYAMOUNT_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* ParcelType(::System::Int32 arg)
		{
			return ((::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_PARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelTypeLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_GET_PARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParcelTypeBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_GETPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 ParcelId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_PARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelIdLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_GET_PARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParcelIdBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_GETPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int32 ParcelAmount(::System::Int32 arg)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_PARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelAmountLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_GET_PARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParcelAmountBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_GETPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateTranscendenceRecipeExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::FlatBuffers::StringOffset* arg3, ::FlatData::CurrencyTypes* arg4, ::System::Int64 arg5, ::FlatBuffers::VectorOffset* arg6, ::FlatBuffers::VectorOffset* arg7, ::FlatBuffers::VectorOffset* arg8)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatData::CurrencyTypes*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_CREATETRANSCENDENCERECIPEEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void StartTranscendenceRecipeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_STARTTRANSCENDENCERECIPEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_ADDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDevName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_ADDDEVNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCostCurrencyType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CurrencyTypes* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CurrencyTypes*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_ADDCOSTCURRENCYTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCostCurrencyAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_ADDCOSTCURRENCYAMOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_ADDPARCELTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_CREATEPARCELTYPEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_STARTPARCELTYPEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_ADDPARCELID_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_CREATEPARCELIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_STARTPARCELIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_ADDPARCELAMOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_CREATEPARCELAMOUNTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_STARTPARCELAMOUNTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndTranscendenceRecipeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_TRANSCENDENCERECIPEEXCEL_ENDTRANSCENDENCERECIPEEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

