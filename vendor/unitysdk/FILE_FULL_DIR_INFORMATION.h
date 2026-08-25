#pragma once
#include "unitysdk.h"

#define FILE_FULL_DIR_INFORMATION_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x911F740)
#define FILE_FULL_DIR_INFORMATION_GETNEXTINFO_OFFSET UNITYSDK_OFFSET(0x911F7C0)

	inline static constexpr unsigned int FILE_FULL_DIR_INFORMATION_TypeDefinitionIndex = 23551;

	class FILE_FULL_DIR_INFORMATION : public Il2CppObject
	{
	public:
		::System::UInt32 NextEntryOffset; // 0x10
		::System::UInt32 FileIndex; // 0x14
		LongFileTime* CreationTime; // 0x18
		LongFileTime* LastAccessTime; // 0x20
		LongFileTime* LastWriteTime; // 0x28
		LongFileTime* ChangeTime; // 0x30
		::System::Int64 EndOfFile; // 0x38
		::System::Int64 AllocationSize; // 0x40
		::System::IO::FileAttributes* FileAttributes; // 0x48
		::System::UInt32 FileNameLength; // 0x4C
		::System::UInt32 EaSize; // 0x50
		::System::Char _fileName; // 0x54

		Il2CppObject* get_FileName()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FILE_FULL_DIR_INFORMATION_GET_FILENAME_OFFSET))(nullptr);
		}

		::System::Object** GetNextInfo(::System::Object** arg)
		{
			return (return (::System::Object**(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + FILE_FULL_DIR_INFORMATION_GETNEXTINFO_OFFSET))(arg, nullptr);
		}

	};

