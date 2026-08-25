#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_GETDATAUWP_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_CREATERELATIVEDIRECTORYHANDLEUWP_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_CLOSEDIRECTORYHANDLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_CREATEDIRECTORYHANDLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_CONTINUEONDIRECTORYERROR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_FINDNEXTENTRY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_DEQUEUENEXTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_INTERNALDISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_GETDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_CREATERELATIVEDIRECTORYHANDLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_SHOULDINCLUDEENTRY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_SHOULDRECURSEINTOENTRY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_TRANSFORMENTRY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_ONDIRECTORYFINISHED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_CONTINUEONERROR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_DIRECTORYFINISHED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_FINALIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::IO::Enumeration
{
	inline static constexpr unsigned int FileSystemEnumerator`1_TypeDefinitionIndex = 25309;

	class FileSystemEnumerator`1 : public Il2CppObject
	{
	public:
		::System::String* _originalRootDirectory; // 0x0
		::System::String* _rootDirectory; // 0x0
		::System::IO::EnumerationOptions* _options; // 0x0
		::System::Object* _lock; // 0x0
		::System::Object** _entry; // 0x0
		Il2CppObject* _current; // 0x0
		::System::Int32 _buffer; // 0x0
		::System::Int32 _bufferLength; // 0x0
		::System::Int32 _directoryHandle; // 0x0
		::System::String* _currentPath; // 0x0
		::System::Boolean _lastEntryFound; // 0x0
		Il2CppObject* _pending; // 0x0

		::System::Boolean GetDataUWP()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_GETDATAUWP_OFFSET))(nullptr);
		}

		::System::Int32 CreateRelativeDirectoryHandleUWP(Il2CppObject* arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_CREATERELATIVEDIRECTORYHANDLEUWP_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::IO::EnumerationOptions* arg)
		{
			((::System::Void(*)(::System::String*, ::System::IO::EnumerationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void CloseDirectoryHandle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_CLOSEDIRECTORYHANDLE_OFFSET))(nullptr);
		}

		::System::Int32 CreateDirectoryHandle(::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_CREATEDIRECTORYHANDLE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean ContinueOnDirectoryError(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_CONTINUEONDIRECTORYERROR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void FindNextEntry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_FINDNEXTENTRY_OFFSET))(nullptr);
		}

		::System::Boolean DequeueNextDirectory()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_DEQUEUENEXTDIRECTORY_OFFSET))(nullptr);
		}

		::System::Void InternalDispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_INTERNALDISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_GETDATA_OFFSET))(nullptr);
		}

		::System::Int32 CreateRelativeDirectoryHandle(Il2CppObject* arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_CREATERELATIVEDIRECTORYHANDLE_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean ShouldIncludeEntry(::System::IO::Enumeration::FileSystemEntry&* arg)
		{
			return (return (::System::Boolean(*)(::System::IO::Enumeration::FileSystemEntry&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_SHOULDINCLUDEENTRY_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldRecurseIntoEntry(::System::IO::Enumeration::FileSystemEntry&* arg)
		{
			return (return (::System::Boolean(*)(::System::IO::Enumeration::FileSystemEntry&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_SHOULDRECURSEINTOENTRY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* TransformEntry(::System::IO::Enumeration::FileSystemEntry&* arg)
		{
			return (return (Il2CppObject*(*)(::System::IO::Enumeration::FileSystemEntry&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_TRANSFORMENTRY_OFFSET))(arg, nullptr);
		}

		::System::Void OnDirectoryFinished(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_ONDIRECTORYFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContinueOnError(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_CONTINUEONERROR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Current()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void DirectoryFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_DIRECTORYFINISHED_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_RESET_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERATOR`1_FINALIZE_OFFSET))(nullptr);
		}

	};
}

