#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::PlatformSupport::FileSystem { class FileStreamModes; }

#define BESTHTTP_PLATFORMSUPPORT_FILESYSTEM_DEFAULTIOSERVICE_DIRECTORYEXISTS_OFFSET UNITYSDK_OFFSET(0x899EC0)
#define BESTHTTP_PLATFORMSUPPORT_FILESYSTEM_DEFAULTIOSERVICE_FILEEXISTS_OFFSET UNITYSDK_OFFSET(0x89A090)
#define BESTHTTP_PLATFORMSUPPORT_FILESYSTEM_DEFAULTIOSERVICE_FILEDELETE_OFFSET UNITYSDK_OFFSET(0x89A260)
#define BESTHTTP_PLATFORMSUPPORT_FILESYSTEM_DEFAULTIOSERVICE_CREATEFILESTREAM_OFFSET UNITYSDK_OFFSET(0x89A440)
#define BESTHTTP_PLATFORMSUPPORT_FILESYSTEM_DEFAULTIOSERVICE_GETFILES_OFFSET UNITYSDK_OFFSET(0x89A7C0)
#define BESTHTTP_PLATFORMSUPPORT_FILESYSTEM_DEFAULTIOSERVICE_DIRECTORYCREATE_OFFSET UNITYSDK_OFFSET(0x89A9A0)
#define BESTHTTP_PLATFORMSUPPORT_FILESYSTEM_DEFAULTIOSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x89AB80)

namespace BestHTTP::PlatformSupport::FileSystem
{
	inline static constexpr unsigned int DefaultIOService_TypeDefinitionIndex = 23285;

	class DefaultIOService : public Il2CppObject
	{
	public:
		::System::Boolean DirectoryExists(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_FILESYSTEM_DEFAULTIOSERVICE_DIRECTORYEXISTS_OFFSET))(str, nullptr);
		}

		::System::Boolean FileExists(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_FILESYSTEM_DEFAULTIOSERVICE_FILEEXISTS_OFFSET))(str, nullptr);
		}

		::System::Void FileDelete(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_FILESYSTEM_DEFAULTIOSERVICE_FILEDELETE_OFFSET))(str, nullptr);
		}

		::System::IO::Stream* CreateFileStream(::System::String* str, ::BestHTTP::PlatformSupport::FileSystem::FileStreamModes* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::String*, ::BestHTTP::PlatformSupport::FileSystem::FileStreamModes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_FILESYSTEM_DEFAULTIOSERVICE_CREATEFILESTREAM_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetFiles(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_FILESYSTEM_DEFAULTIOSERVICE_GETFILES_OFFSET))(str, nullptr);
		}

		::System::Void DirectoryCreate(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_FILESYSTEM_DEFAULTIOSERVICE_DIRECTORYCREATE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_FILESYSTEM_DEFAULTIOSERVICE_.CTOR_OFFSET))(nullptr);
		}

	};
}

