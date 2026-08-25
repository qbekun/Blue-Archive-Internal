#pragma once
#include "unitysdk.h"

#define WIN32_FIND_DATA_GET_CFILENAME_OFFSET UNITYSDK_OFFSET(0x911EDB0)
#define WIN32_FIND_DATA_SETFILENAME_OFFSET UNITYSDK_OFFSET(0x911EE20)

	inline static constexpr unsigned int WIN32_FIND_DATA_TypeDefinitionIndex = 23525;

	class WIN32_FIND_DATA : public Il2CppObject
	{
	public:
		::System::UInt32 dwFileAttributes; // 0x10
		FILE_TIME* ftCreationTime; // 0x14
		FILE_TIME* ftLastAccessTime; // 0x1C
		FILE_TIME* ftLastWriteTime; // 0x24
		::System::UInt32 nFileSizeHigh; // 0x2C
		::System::UInt32 nFileSizeLow; // 0x30
		::System::UInt32 dwReserved0; // 0x34
		::System::UInt32 dwReserved1; // 0x38
		<_cFileName>e__FixedBuffer* _cFileName; // 0x3C
		<_cAlternateFileName>e__FixedBuffer* _cAlternateFileName; // 0x244

		Il2CppObject* get_cFileName()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIN32_FIND_DATA_GET_CFILENAME_OFFSET))(nullptr);
		}

		::System::Void SetFileName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WIN32_FIND_DATA_SETFILENAME_OFFSET))(str, nullptr);
		}

	};

