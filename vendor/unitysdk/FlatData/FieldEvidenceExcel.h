#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldEvidenceExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_FIELDEVIDENCEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD3B350)
#define FLATDATA_FIELDEVIDENCEEXCEL_GETROOTASFIELDEVIDENCEEXCEL_OFFSET UNITYSDK_OFFSET(0xD3B360)
#define FLATDATA_FIELDEVIDENCEEXCEL_GETROOTASFIELDEVIDENCEEXCEL_OFFSET UNITYSDK_OFFSET(0xD3B3C0)
#define FLATDATA_FIELDEVIDENCEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD3B420)
#define FLATDATA_FIELDEVIDENCEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD3B070)
#define FLATDATA_FIELDEVIDENCEEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD3B440)
#define FLATDATA_FIELDEVIDENCEEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD3B490)
#define FLATDATA_FIELDEVIDENCEEXCEL_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xD3B510)
#define FLATDATA_FIELDEVIDENCEEXCEL_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xD3B560)
#define FLATDATA_FIELDEVIDENCEEXCEL_GET_NAMELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xD3B5E0)
#define FLATDATA_FIELDEVIDENCEEXCEL_GET_NAMELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xD3B620)
#define FLATDATA_FIELDEVIDENCEEXCEL_GETNAMELOCALIZEKEYBYTES_OFFSET UNITYSDK_OFFSET(0xD3B690)
#define FLATDATA_FIELDEVIDENCEEXCEL_GET_DESCRIPTIONLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xD3B6B0)
#define FLATDATA_FIELDEVIDENCEEXCEL_GET_DESCRIPTIONLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xD3B6F0)
#define FLATDATA_FIELDEVIDENCEEXCEL_GETDESCRIPTIONLOCALIZEKEYBYTES_OFFSET UNITYSDK_OFFSET(0xD3B760)
#define FLATDATA_FIELDEVIDENCEEXCEL_GET_DETAILLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xD3B780)
#define FLATDATA_FIELDEVIDENCEEXCEL_GET_DETAILLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xD3B7C0)
#define FLATDATA_FIELDEVIDENCEEXCEL_GETDETAILLOCALIZEKEYBYTES_OFFSET UNITYSDK_OFFSET(0xD3B830)
#define FLATDATA_FIELDEVIDENCEEXCEL_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD3B850)
#define FLATDATA_FIELDEVIDENCEEXCEL_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD3B890)
#define FLATDATA_FIELDEVIDENCEEXCEL_GETIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0xD3B900)
#define FLATDATA_FIELDEVIDENCEEXCEL_CREATEFIELDEVIDENCEEXCEL_OFFSET UNITYSDK_OFFSET(0xD3B920)
#define FLATDATA_FIELDEVIDENCEEXCEL_STARTFIELDEVIDENCEEXCEL_OFFSET UNITYSDK_OFFSET(0xD3BBC0)
#define FLATDATA_FIELDEVIDENCEEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xD3BA80)
#define FLATDATA_FIELDEVIDENCEEXCEL_ADDSEASONID_OFFSET UNITYSDK_OFFSET(0xD3BA50)
#define FLATDATA_FIELDEVIDENCEEXCEL_ADDNAMELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xD3BB40)
#define FLATDATA_FIELDEVIDENCEEXCEL_ADDDESCRIPTIONLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xD3BB10)
#define FLATDATA_FIELDEVIDENCEEXCEL_ADDDETAILLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xD3BAE0)
#define FLATDATA_FIELDEVIDENCEEXCEL_ADDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD3BAB0)
#define FLATDATA_FIELDEVIDENCEEXCEL_ENDFIELDEVIDENCEEXCEL_OFFSET UNITYSDK_OFFSET(0xD3BB70)

namespace FlatData
{
	inline static constexpr unsigned int FieldEvidenceExcel_TypeDefinitionIndex = 9267;

	class FieldEvidenceExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldEvidenceExcel* GetRootAsFieldEvidenceExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldEvidenceExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_GETROOTASFIELDEVIDENCEEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldEvidenceExcel* GetRootAsFieldEvidenceExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldEvidenceExcel* arg2)
		{
			return ((::FlatData::FieldEvidenceExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldEvidenceExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_GETROOTASFIELDEVIDENCEEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldEvidenceExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldEvidenceExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_uniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_seasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::String* get_nameLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_GET_NAMELOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::String* get_NameLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_GET_NAMELOCALIZEKEY_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameLocalizeKeyBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_GETNAMELOCALIZEKEYBYTES_OFFSET))(nullptr);
		}

		::System::String* get_descriptionLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_GET_DESCRIPTIONLOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::String* get_DescriptionLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_GET_DESCRIPTIONLOCALIZEKEY_OFFSET))(nullptr);
		}

		Il2CppObject* GetDescriptionLocalizeKeyBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_GETDESCRIPTIONLOCALIZEKEYBYTES_OFFSET))(nullptr);
		}

		::System::String* get_detailLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_GET_DETAILLOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::String* get_DetailLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_GET_DETAILLOCALIZEKEY_OFFSET))(nullptr);
		}

		Il2CppObject* GetDetailLocalizeKeyBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_GETDETAILLOCALIZEKEYBYTES_OFFSET))(nullptr);
		}

		::System::String* get_imagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_GET_IMAGEPATH_OFFSET))(nullptr);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_GET_IMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetImagePathBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_GETIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldEvidenceExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::FlatBuffers::StringOffset* arg4, ::FlatBuffers::StringOffset* arg5, ::FlatBuffers::StringOffset* arg6, ::FlatBuffers::StringOffset* arg7)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_CREATEFIELDEVIDENCEEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void StartFieldEvidenceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_STARTFIELDEVIDENCEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_ADDUNIQUEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_ADDSEASONID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddNameLocalizeKey(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_ADDNAMELOCALIZEKEY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDescriptionLocalizeKey(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_ADDDESCRIPTIONLOCALIZEKEY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDetailLocalizeKey(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_ADDDETAILLOCALIZEKEY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_ADDIMAGEPATH_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldEvidenceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDEVIDENCEEXCEL_ENDFIELDEVIDENCEEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

