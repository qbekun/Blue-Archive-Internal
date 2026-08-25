#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class AddressableBlackListExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_ADDRESSABLEBLACKLISTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCDD3E0)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCEL_GETROOTASADDRESSABLEBLACKLISTEXCEL_OFFSET UNITYSDK_OFFSET(0xCDD3F0)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCEL_GETROOTASADDRESSABLEBLACKLISTEXCEL_OFFSET UNITYSDK_OFFSET(0xCDD450)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xCDD4B0)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCDD100)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xCDD4D0)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xCDD520)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCEL_FOLDERPATH_OFFSET UNITYSDK_OFFSET(0xCDD5A0)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCEL_GET_FOLDERPATHLENGTH_OFFSET UNITYSDK_OFFSET(0xCDD5F0)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCEL_FOLDERPATH_OFFSET UNITYSDK_OFFSET(0xCDD630)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCEL_RESOURCEPATH_OFFSET UNITYSDK_OFFSET(0xCDD6B0)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCEL_GET_RESOURCEPATHLENGTH_OFFSET UNITYSDK_OFFSET(0xCDD700)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCEL_RESOURCEPATH_OFFSET UNITYSDK_OFFSET(0xCDD740)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCEL_CREATEADDRESSABLEBLACKLISTEXCEL_OFFSET UNITYSDK_OFFSET(0xCDD7C0)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCEL_STARTADDRESSABLEBLACKLISTEXCEL_OFFSET UNITYSDK_OFFSET(0xCDD960)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0xCDD880)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCEL_ADDFOLDERPATH_OFFSET UNITYSDK_OFFSET(0xCDD8E0)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCEL_CREATEFOLDERPATHVECTOR_OFFSET UNITYSDK_OFFSET(0xCDD980)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCEL_STARTFOLDERPATHVECTOR_OFFSET UNITYSDK_OFFSET(0xCDDA10)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCEL_ADDRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0xCDD8B0)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCEL_CREATERESOURCEPATHVECTOR_OFFSET UNITYSDK_OFFSET(0xCDDA50)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCEL_STARTRESOURCEPATHVECTOR_OFFSET UNITYSDK_OFFSET(0xCDDAE0)
#define FLATDATA_ADDRESSABLEBLACKLISTEXCEL_ENDADDRESSABLEBLACKLISTEXCEL_OFFSET UNITYSDK_OFFSET(0xCDD910)

namespace FlatData
{
	inline static constexpr unsigned int AddressableBlackListExcel_TypeDefinitionIndex = 9184;

	class AddressableBlackListExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::AddressableBlackListExcel* GetRootAsAddressableBlackListExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::AddressableBlackListExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCEL_GETROOTASADDRESSABLEBLACKLISTEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::AddressableBlackListExcel* GetRootAsAddressableBlackListExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::AddressableBlackListExcel* arg2)
		{
			return ((::FlatData::AddressableBlackListExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::AddressableBlackListExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCEL_GETROOTASADDRESSABLEBLACKLISTEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::AddressableBlackListExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::AddressableBlackListExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* folderPath(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCEL_FOLDERPATH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FolderPathLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCEL_GET_FOLDERPATHLENGTH_OFFSET))(nullptr);
		}

		::System::String* FolderPath(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCEL_FOLDERPATH_OFFSET))(arg, nullptr);
		}

		::System::String* resourcePath(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCEL_RESOURCEPATH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ResourcePathLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCEL_GET_RESOURCEPATHLENGTH_OFFSET))(nullptr);
		}

		::System::String* ResourcePath(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCEL_RESOURCEPATH_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateAddressableBlackListExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::FlatBuffers::VectorOffset* arg3, ::FlatBuffers::VectorOffset* arg4)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCEL_CREATEADDRESSABLEBLACKLISTEXCEL_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void StartAddressableBlackListExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCEL_STARTADDRESSABLEBLACKLISTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCEL_ADDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddFolderPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCEL_ADDFOLDERPATH_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateFolderPathVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCEL_CREATEFOLDERPATHVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartFolderPathVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCEL_STARTFOLDERPATHVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddResourcePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCEL_ADDRESOURCEPATH_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateResourcePathVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCEL_CREATERESOURCEPATHVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartResourcePathVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCEL_STARTRESOURCEPATHVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndAddressableBlackListExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_ADDRESSABLEBLACKLISTEXCEL_ENDADDRESSABLEBLACKLISTEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

