#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class BuffParticleExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_BUFFPARTICLEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE5160)
#define FLATDATA_BUFFPARTICLEEXCEL_GETROOTASBUFFPARTICLEEXCEL_OFFSET UNITYSDK_OFFSET(0xCE5170)
#define FLATDATA_BUFFPARTICLEEXCEL_GETROOTASBUFFPARTICLEEXCEL_OFFSET UNITYSDK_OFFSET(0xCE51D0)
#define FLATDATA_BUFFPARTICLEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xCE5230)
#define FLATDATA_BUFFPARTICLEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCE4ED0)
#define FLATDATA_BUFFPARTICLEEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xCE5250)
#define FLATDATA_BUFFPARTICLEEXCEL_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0xCE52A0)
#define FLATDATA_BUFFPARTICLEEXCEL_GETUNIQUENAMEBYTES_OFFSET UNITYSDK_OFFSET(0xCE52E0)
#define FLATDATA_BUFFPARTICLEEXCEL_GET_BUFFTYPE_OFFSET UNITYSDK_OFFSET(0xCE5300)
#define FLATDATA_BUFFPARTICLEEXCEL_GETBUFFTYPEBYTES_OFFSET UNITYSDK_OFFSET(0xCE5340)
#define FLATDATA_BUFFPARTICLEEXCEL_GET_BUFFNAME_OFFSET UNITYSDK_OFFSET(0xCE5360)
#define FLATDATA_BUFFPARTICLEEXCEL_GETBUFFNAMEBYTES_OFFSET UNITYSDK_OFFSET(0xCE53A0)
#define FLATDATA_BUFFPARTICLEEXCEL_GET_RESOURCEPATH_OFFSET UNITYSDK_OFFSET(0xCE53C0)
#define FLATDATA_BUFFPARTICLEEXCEL_GETRESOURCEPATHBYTES_OFFSET UNITYSDK_OFFSET(0xCE5400)
#define FLATDATA_BUFFPARTICLEEXCEL_CREATEBUFFPARTICLEEXCEL_OFFSET UNITYSDK_OFFSET(0xCE5420)
#define FLATDATA_BUFFPARTICLEEXCEL_STARTBUFFPARTICLEEXCEL_OFFSET UNITYSDK_OFFSET(0xCE5660)
#define FLATDATA_BUFFPARTICLEEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xCE5520)
#define FLATDATA_BUFFPARTICLEEXCEL_ADDUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xCE55E0)
#define FLATDATA_BUFFPARTICLEEXCEL_ADDBUFFTYPE_OFFSET UNITYSDK_OFFSET(0xCE55B0)
#define FLATDATA_BUFFPARTICLEEXCEL_ADDBUFFNAME_OFFSET UNITYSDK_OFFSET(0xCE5580)
#define FLATDATA_BUFFPARTICLEEXCEL_ADDRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0xCE5550)
#define FLATDATA_BUFFPARTICLEEXCEL_ENDBUFFPARTICLEEXCEL_OFFSET UNITYSDK_OFFSET(0xCE5610)

namespace FlatData
{
	inline static constexpr unsigned int BuffParticleExcel_TypeDefinitionIndex = 9199;

	class BuffParticleExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::BuffParticleExcel* GetRootAsBuffParticleExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::BuffParticleExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCEL_GETROOTASBUFFPARTICLEEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::BuffParticleExcel* GetRootAsBuffParticleExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::BuffParticleExcel* arg2)
		{
			return ((::FlatData::BuffParticleExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::BuffParticleExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCEL_GETROOTASBUFFPARTICLEEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::BuffParticleExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::BuffParticleExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::String* get_UniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCEL_GET_UNIQUENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetUniqueNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCEL_GETUNIQUENAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_BuffType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCEL_GET_BUFFTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* GetBuffTypeBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCEL_GETBUFFTYPEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_BuffName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCEL_GET_BUFFNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetBuffNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCEL_GETBUFFNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ResourcePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCEL_GET_RESOURCEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetResourcePathBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCEL_GETRESOURCEPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateBuffParticleExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::FlatBuffers::StringOffset* arg3, ::FlatBuffers::StringOffset* arg4, ::FlatBuffers::StringOffset* arg5, ::FlatBuffers::StringOffset* arg6)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCEL_CREATEBUFFPARTICLEEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void StartBuffParticleExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCEL_STARTBUFFPARTICLEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCEL_ADDUNIQUEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddUniqueName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCEL_ADDUNIQUENAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddBuffType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCEL_ADDBUFFTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddBuffName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCEL_ADDBUFFNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddResourcePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCEL_ADDRESOURCEPATH_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndBuffParticleExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_BUFFPARTICLEEXCEL_ENDBUFFPARTICLEEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

