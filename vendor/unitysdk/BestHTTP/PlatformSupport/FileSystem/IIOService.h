#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::PlatformSupport::FileSystem { class FileStreamModes; }

#define BESTHTTP_PLATFORMSUPPORT_FILESYSTEM_IIOSERVICE_CREATEFILESTREAM_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_PLATFORMSUPPORT_FILESYSTEM_IIOSERVICE_DIRECTORYEXISTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_PLATFORMSUPPORT_FILESYSTEM_IIOSERVICE_DIRECTORYCREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_PLATFORMSUPPORT_FILESYSTEM_IIOSERVICE_FILEEXISTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_PLATFORMSUPPORT_FILESYSTEM_IIOSERVICE_GETFILES_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_PLATFORMSUPPORT_FILESYSTEM_IIOSERVICE_FILEDELETE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::PlatformSupport::FileSystem
{
	inline static constexpr unsigned int IIOService_TypeDefinitionIndex = 23287;

	class IIOService : public Il2CppObject
	{
	public:
		::System::IO::Stream* CreateFileStream(::System::String* str, ::BestHTTP::PlatformSupport::FileSystem::FileStreamModes* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::String*, ::BestHTTP::PlatformSupport::FileSystem::FileStreamModes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_FILESYSTEM_IIOSERVICE_CREATEFILESTREAM_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean DirectoryExists(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_FILESYSTEM_IIOSERVICE_DIRECTORYEXISTS_OFFSET))(str, nullptr);
		}

		::System::Void DirectoryCreate(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_FILESYSTEM_IIOSERVICE_DIRECTORYCREATE_OFFSET))(str, nullptr);
		}

		::System::Boolean FileExists(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_FILESYSTEM_IIOSERVICE_FILEEXISTS_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetFiles(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_FILESYSTEM_IIOSERVICE_GETFILES_OFFSET))(str, nullptr);
		}

		::System::Void FileDelete(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_FILESYSTEM_IIOSERVICE_FILEDELETE_OFFSET))(str, nullptr);
		}

	};
}

