#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_MONOIO_GETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9324270)
#define SYSTEM_IO_MONOIO_GETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x931FF70)
#define SYSTEM_IO_MONOIO_GETCURRENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x9324390)
#define SYSTEM_IO_MONOIO_SETCURRENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x93243A0)
#define SYSTEM_IO_MONOIO_SETCURRENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x93243B0)
#define SYSTEM_IO_MONOIO_GETFILETYPE_OFFSET UNITYSDK_OFFSET(0x9324430)
#define SYSTEM_IO_MONOIO_GETFILETYPE_OFFSET UNITYSDK_OFFSET(0x9320630)
#define SYSTEM_IO_MONOIO_FINDCLOSEFILE_OFFSET UNITYSDK_OFFSET(0x9324440)
#define SYSTEM_IO_MONOIO_OPEN_OFFSET UNITYSDK_OFFSET(0x9324450)
#define SYSTEM_IO_MONOIO_OPEN_OFFSET UNITYSDK_OFFSET(0x931FE10)
#define SYSTEM_IO_MONOIO_CANCEL_INTERNAL_OFFSET UNITYSDK_OFFSET(0x9324460)
#define SYSTEM_IO_MONOIO_CANCEL_OFFSET UNITYSDK_OFFSET(0x9324470)
#define SYSTEM_IO_MONOIO_CLOSE_OFFSET UNITYSDK_OFFSET(0x9323D20)
#define SYSTEM_IO_MONOIO_READ_OFFSET UNITYSDK_OFFSET(0x93245F0)
#define SYSTEM_IO_MONOIO_READ_OFFSET UNITYSDK_OFFSET(0x9323E20)
#define SYSTEM_IO_MONOIO_WRITE_OFFSET UNITYSDK_OFFSET(0x9324600)
#define SYSTEM_IO_MONOIO_WRITE_OFFSET UNITYSDK_OFFSET(0x93227F0)
#define SYSTEM_IO_MONOIO_SEEK_OFFSET UNITYSDK_OFFSET(0x9324610)
#define SYSTEM_IO_MONOIO_SEEK_OFFSET UNITYSDK_OFFSET(0x9320B80)
#define SYSTEM_IO_MONOIO_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x9324620)
#define SYSTEM_IO_MONOIO_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x9320EE0)
#define SYSTEM_IO_MONOIO_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x9324630)
#define SYSTEM_IO_MONOIO_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x9323600)
#define SYSTEM_IO_MONOIO_GET_CONSOLEOUTPUT_OFFSET UNITYSDK_OFFSET(0x9324640)
#define SYSTEM_IO_MONOIO_GET_CONSOLEINPUT_OFFSET UNITYSDK_OFFSET(0x9324650)
#define SYSTEM_IO_MONOIO_GET_CONSOLEERROR_OFFSET UNITYSDK_OFFSET(0x9324660)
#define SYSTEM_IO_MONOIO_DUPLICATEHANDLE_OFFSET UNITYSDK_OFFSET(0x9324670)
#define SYSTEM_IO_MONOIO_GET_VOLUMESEPARATORCHAR_OFFSET UNITYSDK_OFFSET(0x9324680)
#define SYSTEM_IO_MONOIO_GET_DIRECTORYSEPARATORCHAR_OFFSET UNITYSDK_OFFSET(0x9324690)
#define SYSTEM_IO_MONOIO_GET_ALTDIRECTORYSEPARATORCHAR_OFFSET UNITYSDK_OFFSET(0x93246A0)
#define SYSTEM_IO_MONOIO_GET_PATHSEPARATOR_OFFSET UNITYSDK_OFFSET(0x93246B0)
#define SYSTEM_IO_MONOIO_DUMPHANDLES_OFFSET UNITYSDK_OFFSET(0x9324380)
#define SYSTEM_IO_MONOIO_REMAPPATH_OFFSET UNITYSDK_OFFSET(0x93246C0)
#define SYSTEM_IO_MONOIO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93246D0)

namespace System::IO
{
	inline static constexpr unsigned int MonoIO_TypeDefinitionIndex = 25299;

	class MonoIO : public Il2CppObject
	{
	public:
		::System::Int32 InvalidHandle; // 0x0
		::System::Boolean dump_handles; // 0x8

		::System::Exception* GetException(::System::IO::MonoIOError* arg)
		{
			return (return (::System::Exception*(*)(::System::IO::MonoIOError*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Exception* GetException(::System::String* str, ::System::IO::MonoIOError* arg)
		{
			return (return (::System::Exception*(*)(::System::String*, ::System::IO::MonoIOError*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETEXCEPTION_OFFSET))(str, arg, nullptr);
		}

		::System::String* GetCurrentDirectory(::System::IO::MonoIOError&* arg)
		{
			return (return (::System::String*(*)(::System::IO::MonoIOError&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETCURRENTDIRECTORY_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetCurrentDirectory(::System::Object** arg, ::System::IO::MonoIOError&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::IO::MonoIOError&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SETCURRENTDIRECTORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SetCurrentDirectory(::System::String* str, ::System::IO::MonoIOError&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::IO::MonoIOError&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SETCURRENTDIRECTORY_OFFSET))(str, arg, nullptr);
		}

		::System::IO::MonoFileType* GetFileType(::System::Int32 arg, ::System::IO::MonoIOError&* arg)
		{
			return (return (::System::IO::MonoFileType*(*)(::System::Int32, ::System::IO::MonoIOError&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETFILETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::IO::MonoFileType* GetFileType(::System::Runtime::InteropServices::SafeHandle* arg, ::System::IO::MonoIOError&* arg)
		{
			return (return (::System::IO::MonoFileType*(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::IO::MonoIOError&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETFILETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean FindCloseFile(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_FINDCLOSEFILE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Open(::System::Object** arg, ::System::IO::FileMode* arg, ::System::IO::FileAccess* arg, ::System::IO::FileShare* arg, ::System::IO::FileOptions* arg, ::System::IO::MonoIOError&* arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::IO::FileMode*, ::System::IO::FileAccess*, ::System::IO::FileShare*, ::System::IO::FileOptions*, ::System::IO::MonoIOError&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_OPEN_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Open(::System::String* str, ::System::IO::FileMode* arg, ::System::IO::FileAccess* arg, ::System::IO::FileShare* arg, ::System::IO::FileOptions* arg, ::System::IO::MonoIOError&* arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::IO::FileMode*, ::System::IO::FileAccess*, ::System::IO::FileShare*, ::System::IO::FileOptions*, ::System::IO::MonoIOError&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_OPEN_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Cancel_internal(::System::Int32 arg, ::System::IO::MonoIOError&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::IO::MonoIOError&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_CANCEL_INTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Cancel(::System::Runtime::InteropServices::SafeHandle* arg, ::System::IO::MonoIOError&* arg)
		{
			return (return (::System::Boolean(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::IO::MonoIOError&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_CANCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Close(::System::Int32 arg, ::System::IO::MonoIOError&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::IO::MonoIOError&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_CLOSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Read(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::IO::MonoIOError&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::IO::MonoIOError&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_READ_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Read(::System::Runtime::InteropServices::SafeHandle* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::IO::MonoIOError&* arg)
		{
			return (return (::System::Int32(*)(::System::Runtime::InteropServices::SafeHandle*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::IO::MonoIOError&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_READ_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Write(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::IO::MonoIOError&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::IO::MonoIOError&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_WRITE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Write(::System::Runtime::InteropServices::SafeHandle* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::IO::MonoIOError&* arg)
		{
			return (return (::System::Int32(*)(::System::Runtime::InteropServices::SafeHandle*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::IO::MonoIOError&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_WRITE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int64 Seek(::System::Int32 arg, ::System::Int64 arg, ::System::IO::SeekOrigin* arg, ::System::IO::MonoIOError&* arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int64, ::System::IO::SeekOrigin*, ::System::IO::MonoIOError&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SEEK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int64 Seek(::System::Runtime::InteropServices::SafeHandle* arg, ::System::Int64 arg, ::System::IO::SeekOrigin* arg, ::System::IO::MonoIOError&* arg)
		{
			return (return (::System::Int64(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::Int64, ::System::IO::SeekOrigin*, ::System::IO::MonoIOError&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SEEK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int64 GetLength(::System::Int32 arg, ::System::IO::MonoIOError&* arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::IO::MonoIOError&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETLENGTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetLength(::System::Runtime::InteropServices::SafeHandle* arg, ::System::IO::MonoIOError&* arg)
		{
			return (return (::System::Int64(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::IO::MonoIOError&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GETLENGTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SetLength(::System::Int32 arg, ::System::Int64 arg, ::System::IO::MonoIOError&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int64, ::System::IO::MonoIOError&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SETLENGTH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean SetLength(::System::Runtime::InteropServices::SafeHandle* arg, ::System::Int64 arg, ::System::IO::MonoIOError&* arg)
		{
			return (return (::System::Boolean(*)(::System::Runtime::InteropServices::SafeHandle*, ::System::Int64, ::System::IO::MonoIOError&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_SETLENGTH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_ConsoleOutput()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GET_CONSOLEOUTPUT_OFFSET))(nullptr);
		}

		::System::Int32 get_ConsoleInput()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GET_CONSOLEINPUT_OFFSET))(nullptr);
		}

		::System::Int32 get_ConsoleError()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GET_CONSOLEERROR_OFFSET))(nullptr);
		}

		::System::Boolean DuplicateHandle(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, int32_t&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::IO::MonoIOError&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, int32_t&*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::IO::MonoIOError&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_DUPLICATEHANDLE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Char get_VolumeSeparatorChar()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GET_VOLUMESEPARATORCHAR_OFFSET))(nullptr);
		}

		::System::Char get_DirectorySeparatorChar()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GET_DIRECTORYSEPARATORCHAR_OFFSET))(nullptr);
		}

		::System::Char get_AltDirectorySeparatorChar()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GET_ALTDIRECTORYSEPARATORCHAR_OFFSET))(nullptr);
		}

		::System::Char get_PathSeparator()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_GET_PATHSEPARATOR_OFFSET))(nullptr);
		}

		::System::Void DumpHandles()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_DUMPHANDLES_OFFSET))(nullptr);
		}

		::System::Boolean RemapPath(::System::String* str, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_REMAPPATH_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_MONOIO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

