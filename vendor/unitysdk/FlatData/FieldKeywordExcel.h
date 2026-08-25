#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldKeywordExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_FIELDKEYWORDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD3DFF0)
#define FLATDATA_FIELDKEYWORDEXCEL_GETROOTASFIELDKEYWORDEXCEL_OFFSET UNITYSDK_OFFSET(0xD3E000)
#define FLATDATA_FIELDKEYWORDEXCEL_GETROOTASFIELDKEYWORDEXCEL_OFFSET UNITYSDK_OFFSET(0xD3E060)
#define FLATDATA_FIELDKEYWORDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD3E0C0)
#define FLATDATA_FIELDKEYWORDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD3DD10)
#define FLATDATA_FIELDKEYWORDEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD3E0E0)
#define FLATDATA_FIELDKEYWORDEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD3E130)
#define FLATDATA_FIELDKEYWORDEXCEL_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xD3E1B0)
#define FLATDATA_FIELDKEYWORDEXCEL_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xD3E200)
#define FLATDATA_FIELDKEYWORDEXCEL_GET_NAMELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xD3E280)
#define FLATDATA_FIELDKEYWORDEXCEL_GET_NAMELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xD3E2C0)
#define FLATDATA_FIELDKEYWORDEXCEL_GETNAMELOCALIZEKEYBYTES_OFFSET UNITYSDK_OFFSET(0xD3E330)
#define FLATDATA_FIELDKEYWORDEXCEL_GET_DESCRIPTIONLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xD3E350)
#define FLATDATA_FIELDKEYWORDEXCEL_GET_DESCRIPTIONLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xD3E390)
#define FLATDATA_FIELDKEYWORDEXCEL_GETDESCRIPTIONLOCALIZEKEYBYTES_OFFSET UNITYSDK_OFFSET(0xD3E400)
#define FLATDATA_FIELDKEYWORDEXCEL_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD3E420)
#define FLATDATA_FIELDKEYWORDEXCEL_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD3E460)
#define FLATDATA_FIELDKEYWORDEXCEL_GETIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0xD3E4D0)
#define FLATDATA_FIELDKEYWORDEXCEL_CREATEFIELDKEYWORDEXCEL_OFFSET UNITYSDK_OFFSET(0xD3E4F0)
#define FLATDATA_FIELDKEYWORDEXCEL_STARTFIELDKEYWORDEXCEL_OFFSET UNITYSDK_OFFSET(0xD3E730)
#define FLATDATA_FIELDKEYWORDEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xD3E620)
#define FLATDATA_FIELDKEYWORDEXCEL_ADDSEASONID_OFFSET UNITYSDK_OFFSET(0xD3E5F0)
#define FLATDATA_FIELDKEYWORDEXCEL_ADDNAMELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xD3E6B0)
#define FLATDATA_FIELDKEYWORDEXCEL_ADDDESCRIPTIONLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xD3E680)
#define FLATDATA_FIELDKEYWORDEXCEL_ADDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD3E650)
#define FLATDATA_FIELDKEYWORDEXCEL_ENDFIELDKEYWORDEXCEL_OFFSET UNITYSDK_OFFSET(0xD3E6E0)

namespace FlatData
{
	inline static constexpr unsigned int FieldKeywordExcel_TypeDefinitionIndex = 9271;

	class FieldKeywordExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldKeywordExcel* GetRootAsFieldKeywordExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldKeywordExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCEL_GETROOTASFIELDKEYWORDEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldKeywordExcel* GetRootAsFieldKeywordExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldKeywordExcel* arg2)
		{
			return ((::FlatData::FieldKeywordExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldKeywordExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCEL_GETROOTASFIELDKEYWORDEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldKeywordExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldKeywordExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_uniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_seasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCEL_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCEL_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::String* get_nameLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCEL_GET_NAMELOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::String* get_NameLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCEL_GET_NAMELOCALIZEKEY_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameLocalizeKeyBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCEL_GETNAMELOCALIZEKEYBYTES_OFFSET))(nullptr);
		}

		::System::String* get_descriptionLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCEL_GET_DESCRIPTIONLOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::String* get_DescriptionLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCEL_GET_DESCRIPTIONLOCALIZEKEY_OFFSET))(nullptr);
		}

		Il2CppObject* GetDescriptionLocalizeKeyBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCEL_GETDESCRIPTIONLOCALIZEKEYBYTES_OFFSET))(nullptr);
		}

		::System::String* get_imagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCEL_GET_IMAGEPATH_OFFSET))(nullptr);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCEL_GET_IMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetImagePathBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCEL_GETIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldKeywordExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::FlatBuffers::StringOffset* arg4, ::FlatBuffers::StringOffset* arg5, ::FlatBuffers::StringOffset* arg6)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCEL_CREATEFIELDKEYWORDEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void StartFieldKeywordExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCEL_STARTFIELDKEYWORDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCEL_ADDUNIQUEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCEL_ADDSEASONID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddNameLocalizeKey(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCEL_ADDNAMELOCALIZEKEY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDescriptionLocalizeKey(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCEL_ADDDESCRIPTIONLOCALIZEKEY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCEL_ADDIMAGEPATH_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldKeywordExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDKEYWORDEXCEL_ENDFIELDKEYWORDEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

