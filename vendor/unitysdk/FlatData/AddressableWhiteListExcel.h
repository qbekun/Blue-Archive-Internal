#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class AddressableWhiteListExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_ADDRESSABLEWHITELISTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCDDFF0)
#define FLATDATA_ADDRESSABLEWHITELISTEXCEL_GETROOTASADDRESSABLEWHITELISTEXCEL_OFFSET UNITYSDK_OFFSET(0xCDE000)
#define FLATDATA_ADDRESSABLEWHITELISTEXCEL_GETROOTASADDRESSABLEWHITELISTEXCEL_OFFSET UNITYSDK_OFFSET(0xCDE060)
#define FLATDATA_ADDRESSABLEWHITELISTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xCDE0C0)
#define FLATDATA_ADDRESSABLEWHITELISTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCDDD10)
#define FLATDATA_ADDRESSABLEWHITELISTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xCDE0E0)
#define FLATDATA_ADDRESSABLEWHITELISTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xCDE130)
#define FLATDATA_ADDRESSABLEWHITELISTEXCEL_FOLDERPATH_OFFSET UNITYSDK_OFFSET(0xCDE1B0)
#define FLATDATA_ADDRESSABLEWHITELISTEXCEL_GET_FOLDERPATHLENGTH_OFFSET UNITYSDK_OFFSET(0xCDE200)
#define FLATDATA_ADDRESSABLEWHITELISTEXCEL_FOLDERPATH_OFFSET UNITYSDK_OFFSET(0xCDE240)
#define FLATDATA_ADDRESSABLEWHITELISTEXCEL_RESOURCEPATH_OFFSET UNITYSDK_OFFSET(0xCDE2C0)
#define FLATDATA_ADDRESSABLEWHITELISTEXCEL_GET_RESOURCEPATHLENGTH_OFFSET UNITYSDK_OFFSET(0xCDE310)
#define FLATDATA_ADDRESSABLEWHITELISTEXCEL_RESOURCEPATH_OFFSET UNITYSDK_OFFSET(0xCDE350)
#define FLATDATA_ADDRESSABLEWHITELISTEXCEL_CREATEADDRESSABLEWHITELISTEXCEL_OFFSET UNITYSDK_OFFSET(0xCDE3D0)
#define FLATDATA_ADDRESSABLEWHITELISTEXCEL_STARTADDRESSABLEWHITELISTEXCEL_OFFSET UNITYSDK_OFFSET(0xCDE570)
#define FLATDATA_ADDRESSABLEWHITELISTEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0xCDE490)
#define FLATDATA_ADDRESSABLEWHITELISTEXCEL_ADDFOLDERPATH_OFFSET UNITYSDK_OFFSET(0xCDE4F0)
#define FLATDATA_ADDRESSABLEWHITELISTEXCEL_CREATEFOLDERPATHVECTOR_OFFSET UNITYSDK_OFFSET(0xCDE590)
#define FLATDATA_ADDRESSABLEWHITELISTEXCEL_STARTFOLDERPATHVECTOR_OFFSET UNITYSDK_OFFSET(0xCDE620)
#define FLATDATA_ADDRESSABLEWHITELISTEXCEL_ADDRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0xCDE4C0)
#define FLATDATA_ADDRESSABLEWHITELISTEXCEL_CREATERESOURCEPATHVECTOR_OFFSET UNITYSDK_OFFSET(0xCDE660)
#define FLATDATA_ADDRESSABLEWHITELISTEXCEL_STARTRESOURCEPATHVECTOR_OFFSET UNITYSDK_OFFSET(0xCDE6F0)
#define FLATDATA_ADDRESSABLEWHITELISTEXCEL_ENDADDRESSABLEWHITELISTEXCEL_OFFSET UNITYSDK_OFFSET(0xCDE520)

namespace FlatData
{
	inline static constexpr unsigned int AddressableWhiteListExcel_TypeDefinitionIndex = 9186;

	class AddressableWhiteListExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::AddressableWhiteListExcel* GetRootAsAddressableWhiteListExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::AddressableWhiteListExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCEL_GETROOTASADDRESSABLEWHITELISTEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::AddressableWhiteListExcel* GetRootAsAddressableWhiteListExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::AddressableWhiteListExcel* arg2)
		{
			return ((::FlatData::AddressableWhiteListExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::AddressableWhiteListExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCEL_GETROOTASADDRESSABLEWHITELISTEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::AddressableWhiteListExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::AddressableWhiteListExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* folderPath(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCEL_FOLDERPATH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FolderPathLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCEL_GET_FOLDERPATHLENGTH_OFFSET))(nullptr);
		}

		::System::String* FolderPath(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCEL_FOLDERPATH_OFFSET))(arg, nullptr);
		}

		::System::String* resourcePath(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCEL_RESOURCEPATH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ResourcePathLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCEL_GET_RESOURCEPATHLENGTH_OFFSET))(nullptr);
		}

		::System::String* ResourcePath(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCEL_RESOURCEPATH_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateAddressableWhiteListExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::FlatBuffers::VectorOffset* arg3, ::FlatBuffers::VectorOffset* arg4)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCEL_CREATEADDRESSABLEWHITELISTEXCEL_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void StartAddressableWhiteListExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCEL_STARTADDRESSABLEWHITELISTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCEL_ADDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddFolderPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCEL_ADDFOLDERPATH_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateFolderPathVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCEL_CREATEFOLDERPATHVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartFolderPathVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCEL_STARTFOLDERPATHVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddResourcePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCEL_ADDRESOURCEPATH_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateResourcePathVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCEL_CREATERESOURCEPATHVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartResourcePathVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCEL_STARTRESOURCEPATHVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndAddressableWhiteListExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEWHITELISTEXCEL_ENDADDRESSABLEWHITELISTEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

