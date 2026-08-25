#pragma once
#include "unitysdk.h"

#define WIN32_FILE_ATTRIBUTE_DATA_POPULATEFROM_OFFSET UNITYSDK_OFFSET(0x911F0B0)

	inline static constexpr unsigned int WIN32_FILE_ATTRIBUTE_DATA_TypeDefinitionIndex = 23542;

	class WIN32_FILE_ATTRIBUTE_DATA : public Il2CppObject
	{
	public:
		::System::Int32 dwFileAttributes; // 0x10
		FILE_TIME* ftCreationTime; // 0x14
		FILE_TIME* ftLastAccessTime; // 0x1C
		FILE_TIME* ftLastWriteTime; // 0x24
		::System::UInt32 nFileSizeHigh; // 0x2C
		::System::UInt32 nFileSizeLow; // 0x30

		::System::Void PopulateFrom(WIN32_FIND_DATA&* arg)
		{
			((::System::Void(*)(WIN32_FIND_DATA&*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32_FILE_ATTRIBUTE_DATA_POPULATEFROM_OFFSET))(arg, nullptr);
		}

	};

