#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldMasteryManageExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_FIELDMASTERYMANAGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD40E60)
#define FLATDATA_FIELDMASTERYMANAGEEXCEL_GETROOTASFIELDMASTERYMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0xD40E70)
#define FLATDATA_FIELDMASTERYMANAGEEXCEL_GETROOTASFIELDMASTERYMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0xD40ED0)
#define FLATDATA_FIELDMASTERYMANAGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD40F30)
#define FLATDATA_FIELDMASTERYMANAGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD40B80)
#define FLATDATA_FIELDMASTERYMANAGEEXCEL_GET_FIELDSEASON_OFFSET UNITYSDK_OFFSET(0xD40F50)
#define FLATDATA_FIELDMASTERYMANAGEEXCEL_GET_FIELDSEASON_OFFSET UNITYSDK_OFFSET(0xD40FA0)
#define FLATDATA_FIELDMASTERYMANAGEEXCEL_GET_LOCALIZEETC_OFFSET UNITYSDK_OFFSET(0xD41020)
#define FLATDATA_FIELDMASTERYMANAGEEXCEL_GET_LOCALIZEETC_OFFSET UNITYSDK_OFFSET(0xD41070)
#define FLATDATA_FIELDMASTERYMANAGEEXCEL_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD410F0)
#define FLATDATA_FIELDMASTERYMANAGEEXCEL_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD41130)
#define FLATDATA_FIELDMASTERYMANAGEEXCEL_GETIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0xD411A0)
#define FLATDATA_FIELDMASTERYMANAGEEXCEL_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0xD411C0)
#define FLATDATA_FIELDMASTERYMANAGEEXCEL_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0xD41210)
#define FLATDATA_FIELDMASTERYMANAGEEXCEL_CREATEFIELDMASTERYMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0xD41290)
#define FLATDATA_FIELDMASTERYMANAGEEXCEL_STARTFIELDMASTERYMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0xD41480)
#define FLATDATA_FIELDMASTERYMANAGEEXCEL_ADDFIELDSEASON_OFFSET UNITYSDK_OFFSET(0xD413A0)
#define FLATDATA_FIELDMASTERYMANAGEEXCEL_ADDLOCALIZEETC_OFFSET UNITYSDK_OFFSET(0xD41400)
#define FLATDATA_FIELDMASTERYMANAGEEXCEL_ADDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD413D0)
#define FLATDATA_FIELDMASTERYMANAGEEXCEL_ADDLEVELID_OFFSET UNITYSDK_OFFSET(0xD41370)
#define FLATDATA_FIELDMASTERYMANAGEEXCEL_ENDFIELDMASTERYMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0xD41430)

namespace FlatData
{
	inline static constexpr unsigned int FieldMasteryManageExcel_TypeDefinitionIndex = 9277;

	class FieldMasteryManageExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldMasteryManageExcel* GetRootAsFieldMasteryManageExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldMasteryManageExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCEL_GETROOTASFIELDMASTERYMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldMasteryManageExcel* GetRootAsFieldMasteryManageExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldMasteryManageExcel* arg2)
		{
			return ((::FlatData::FieldMasteryManageExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldMasteryManageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCEL_GETROOTASFIELDMASTERYMANAGEEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldMasteryManageExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldMasteryManageExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_fieldSeason()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCEL_GET_FIELDSEASON_OFFSET))(nullptr);
		}

		::System::Int64 get_FieldSeason()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCEL_GET_FIELDSEASON_OFFSET))(nullptr);
		}

		::System::UInt32 get_localizeEtc()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCEL_GET_LOCALIZEETC_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtc()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCEL_GET_LOCALIZEETC_OFFSET))(nullptr);
		}

		::System::String* get_imagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCEL_GET_IMAGEPATH_OFFSET))(nullptr);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCEL_GET_IMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetImagePathBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCEL_GETIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_levelId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCEL_GET_LEVELID_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCEL_GET_LEVELID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldMasteryManageExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::System::UInt32 arg3, ::FlatBuffers::StringOffset* arg4, ::System::Int64 arg5)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::UInt32, ::FlatBuffers::StringOffset*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCEL_CREATEFIELDMASTERYMANAGEEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void StartFieldMasteryManageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCEL_STARTFIELDMASTERYMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddFieldSeason(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCEL_ADDFIELDSEASON_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddLocalizeEtc(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCEL_ADDLOCALIZEETC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCEL_ADDIMAGEPATH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddLevelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCEL_ADDLEVELID_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldMasteryManageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDMASTERYMANAGEEXCEL_ENDFIELDMASTERYMANAGEEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

