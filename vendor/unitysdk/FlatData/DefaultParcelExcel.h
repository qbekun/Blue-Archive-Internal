#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class DefaultParcelExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define FLATDATA_DEFAULTPARCELEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD337F0)
#define FLATDATA_DEFAULTPARCELEXCEL_GETROOTASDEFAULTPARCELEXCEL_OFFSET UNITYSDK_OFFSET(0xD33800)
#define FLATDATA_DEFAULTPARCELEXCEL_GETROOTASDEFAULTPARCELEXCEL_OFFSET UNITYSDK_OFFSET(0xD33860)
#define FLATDATA_DEFAULTPARCELEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD338C0)
#define FLATDATA_DEFAULTPARCELEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD33510)
#define FLATDATA_DEFAULTPARCELEXCEL_GET_PARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD338E0)
#define FLATDATA_DEFAULTPARCELEXCEL_GET_PARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD33930)
#define FLATDATA_DEFAULTPARCELEXCEL_GET_PARCELID_OFFSET UNITYSDK_OFFSET(0xD339B0)
#define FLATDATA_DEFAULTPARCELEXCEL_GET_PARCELID_OFFSET UNITYSDK_OFFSET(0xD33A00)
#define FLATDATA_DEFAULTPARCELEXCEL_GET_PARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0xD33A80)
#define FLATDATA_DEFAULTPARCELEXCEL_GET_PARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0xD33AD0)
#define FLATDATA_DEFAULTPARCELEXCEL_CREATEDEFAULTPARCELEXCEL_OFFSET UNITYSDK_OFFSET(0xD33B50)
#define FLATDATA_DEFAULTPARCELEXCEL_STARTDEFAULTPARCELEXCEL_OFFSET UNITYSDK_OFFSET(0xD33CE0)
#define FLATDATA_DEFAULTPARCELEXCEL_ADDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD33C60)
#define FLATDATA_DEFAULTPARCELEXCEL_ADDPARCELID_OFFSET UNITYSDK_OFFSET(0xD33C30)
#define FLATDATA_DEFAULTPARCELEXCEL_ADDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0xD33C00)
#define FLATDATA_DEFAULTPARCELEXCEL_ENDDEFAULTPARCELEXCEL_OFFSET UNITYSDK_OFFSET(0xD33C90)

namespace FlatData
{
	inline static constexpr unsigned int DefaultParcelExcel_TypeDefinitionIndex = 9251;

	class DefaultParcelExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::DefaultParcelExcel* GetRootAsDefaultParcelExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::DefaultParcelExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCEL_GETROOTASDEFAULTPARCELEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::DefaultParcelExcel* GetRootAsDefaultParcelExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::DefaultParcelExcel* arg2)
		{
			return ((::FlatData::DefaultParcelExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::DefaultParcelExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCEL_GETROOTASDEFAULTPARCELEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::DefaultParcelExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::DefaultParcelExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ParcelType* get_parcelType()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCEL_GET_PARCELTYPE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ParcelType()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCEL_GET_PARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_parcelId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCEL_GET_PARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_ParcelId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCEL_GET_PARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_parcelAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCEL_GET_PARCELAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_ParcelAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCEL_GET_PARCELAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateDefaultParcelExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg2, ::System::Int64 arg3, ::System::Int64 arg4)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCEL_CREATEDEFAULTPARCELEXCEL_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void StartDefaultParcelExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCEL_STARTDEFAULTPARCELEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCEL_ADDPARCELTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCEL_ADDPARCELID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCEL_ADDPARCELAMOUNT_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndDefaultParcelExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTPARCELEXCEL_ENDDEFAULTPARCELEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

