#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_FILE_OPENTEXT_OFFSET UNITYSDK_OFFSET(0x9306470)
#define SYSTEM_IO_FILE_CREATETEXT_OFFSET UNITYSDK_OFFSET(0x9306520)
#define SYSTEM_IO_FILE_COPY_OFFSET UNITYSDK_OFFSET(0x93065D0)
#define SYSTEM_IO_FILE_COPY_OFFSET UNITYSDK_OFFSET(0x93065E0)
#define SYSTEM_IO_FILE_CREATE_OFFSET UNITYSDK_OFFSET(0x9306790)
#define SYSTEM_IO_FILE_CREATE_OFFSET UNITYSDK_OFFSET(0x9306810)
#define SYSTEM_IO_FILE_DELETE_OFFSET UNITYSDK_OFFSET(0x9306890)
#define SYSTEM_IO_FILE_EXISTS_OFFSET UNITYSDK_OFFSET(0x9306940)
#define SYSTEM_IO_FILE_OPEN_OFFSET UNITYSDK_OFFSET(0x9306AE0)
#define SYSTEM_IO_FILE_OPEN_OFFSET UNITYSDK_OFFSET(0x9306BD0)
#define SYSTEM_IO_FILE_GETLASTWRITETIME_OFFSET UNITYSDK_OFFSET(0x9306C50)
#define SYSTEM_IO_FILE_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9306CF0)
#define SYSTEM_IO_FILE_OPENREAD_OFFSET UNITYSDK_OFFSET(0x9306D50)
#define SYSTEM_IO_FILE_OPENWRITE_OFFSET UNITYSDK_OFFSET(0x9306DC0)
#define SYSTEM_IO_FILE_READALLTEXT_OFFSET UNITYSDK_OFFSET(0x9306E30)
#define SYSTEM_IO_FILE_READALLTEXT_OFFSET UNITYSDK_OFFSET(0x93070B0)
#define SYSTEM_IO_FILE_INTERNALREADALLTEXT_OFFSET UNITYSDK_OFFSET(0x9306F00)
#define SYSTEM_IO_FILE_WRITEALLTEXT_OFFSET UNITYSDK_OFFSET(0x93071A0)
#define SYSTEM_IO_FILE_READALLBYTES_OFFSET UNITYSDK_OFFSET(0x93073F0)
#define SYSTEM_IO_FILE_READALLBYTESUNKNOWNLENGTH_OFFSET UNITYSDK_OFFSET(0x93076C0)
#define SYSTEM_IO_FILE_WRITEALLBYTES_OFFSET UNITYSDK_OFFSET(0x9307C80)
#define SYSTEM_IO_FILE_INTERNALWRITEALLBYTES_OFFSET UNITYSDK_OFFSET(0x9307DA0)
#define SYSTEM_IO_FILE_READALLLINES_OFFSET UNITYSDK_OFFSET(0x9307F70)
#define SYSTEM_IO_FILE_INTERNALREADALLLINES_OFFSET UNITYSDK_OFFSET(0x9308040)
#define SYSTEM_IO_FILE_MOVE_OFFSET UNITYSDK_OFFSET(0x93082F0)
#define SYSTEM_IO_FILE_READALLBYTESASYNC_OFFSET UNITYSDK_OFFSET(0x9308510)
#define SYSTEM_IO_FILE_INTERNALREADALLBYTESASYNC_OFFSET UNITYSDK_OFFSET(0x93088E0)
#define SYSTEM_IO_FILE_INTERNALREADALLBYTESUNKNOWNLENGTHASYNC_OFFSET UNITYSDK_OFFSET(0x93087D0)
#define SYSTEM_IO_FILE_WRITEALLBYTESASYNC_OFFSET UNITYSDK_OFFSET(0x9308A10)
#define SYSTEM_IO_FILE_INTERNALWRITEALLBYTESASYNC_OFFSET UNITYSDK_OFFSET(0x9308BC0)

namespace System::IO
{
	inline static constexpr unsigned int File_TypeDefinitionIndex = 25264;

	class File : public Il2CppObject
	{
	public:
		::System::IO::StreamReader* OpenText(::System::String* str)
		{
			return (return (::System::IO::StreamReader*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_OPENTEXT_OFFSET))(str, nullptr);
		}

		::System::IO::StreamWriter* CreateText(::System::String* str)
		{
			return (return (::System::IO::StreamWriter*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_CREATETEXT_OFFSET))(str, nullptr);
		}

		::System::Void Copy(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_COPY_OFFSET))(str, str, nullptr);
		}

		::System::Void Copy(::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_COPY_OFFSET))(str, str, arg, nullptr);
		}

		::System::IO::FileStream* Create(::System::String* str)
		{
			return (return (::System::IO::FileStream*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_CREATE_OFFSET))(str, nullptr);
		}

		::System::IO::FileStream* Create(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::IO::FileStream*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_CREATE_OFFSET))(str, arg, nullptr);
		}

		::System::Void Delete(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_DELETE_OFFSET))(str, nullptr);
		}

		::System::Boolean Exists(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_EXISTS_OFFSET))(str, nullptr);
		}

		::System::IO::FileStream* Open(::System::String* str, ::System::IO::FileMode* arg)
		{
			return (return (::System::IO::FileStream*(*)(::System::String*, ::System::IO::FileMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_OPEN_OFFSET))(str, arg, nullptr);
		}

		::System::IO::FileStream* Open(::System::String* str, ::System::IO::FileMode* arg, ::System::IO::FileAccess* arg, ::System::IO::FileShare* arg)
		{
			return (return (::System::IO::FileStream*(*)(::System::String*, ::System::IO::FileMode*, ::System::IO::FileAccess*, ::System::IO::FileShare*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_OPEN_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::DateTime* GetLastWriteTime(::System::String* str)
		{
			return (return (::System::DateTime*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_GETLASTWRITETIME_OFFSET))(str, nullptr);
		}

		::System::IO::FileAttributes* GetAttributes(::System::String* str)
		{
			return (return (::System::IO::FileAttributes*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_GETATTRIBUTES_OFFSET))(str, nullptr);
		}

		::System::IO::FileStream* OpenRead(::System::String* str)
		{
			return (return (::System::IO::FileStream*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_OPENREAD_OFFSET))(str, nullptr);
		}

		::System::IO::FileStream* OpenWrite(::System::String* str)
		{
			return (return (::System::IO::FileStream*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_OPENWRITE_OFFSET))(str, nullptr);
		}

		::System::String* ReadAllText(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_READALLTEXT_OFFSET))(str, nullptr);
		}

		::System::String* ReadAllText(::System::String* str, ::System::Text::Encoding* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_READALLTEXT_OFFSET))(str, arg, nullptr);
		}

		::System::String* InternalReadAllText(::System::String* str, ::System::Text::Encoding* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_INTERNALREADALLTEXT_OFFSET))(str, arg, nullptr);
		}

		::System::Void WriteAllText(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_WRITEALLTEXT_OFFSET))(str, str, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadAllBytes(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_READALLBYTES_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadAllBytesUnknownLength(::System::IO::FileStream* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::IO::FileStream*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_READALLBYTESUNKNOWNLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void WriteAllBytes(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_WRITEALLBYTES_OFFSET))(str, arg, nullptr);
		}

		::System::Void InternalWriteAllBytes(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_INTERNALWRITEALLBYTES_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadAllLines(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_READALLLINES_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* InternalReadAllLines(::System::String* str, ::System::Text::Encoding* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_INTERNALREADALLLINES_OFFSET))(str, arg, nullptr);
		}

		::System::Void Move(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_MOVE_OFFSET))(str, str, nullptr);
		}

		Il2CppObject* ReadAllBytesAsync(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_READALLBYTESASYNC_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* InternalReadAllBytesAsync(::System::IO::FileStream* arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::IO::FileStream*, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_INTERNALREADALLBYTESASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* InternalReadAllBytesUnknownLengthAsync(::System::IO::FileStream* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::IO::FileStream*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_INTERNALREADALLBYTESUNKNOWNLENGTHASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAllBytesAsync(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_WRITEALLBYTESASYNC_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* InternalWriteAllBytesAsync(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILE_INTERNALWRITEALLBYTESASYNC_OFFSET))(str, arg, arg, nullptr);
		}

	};
}

