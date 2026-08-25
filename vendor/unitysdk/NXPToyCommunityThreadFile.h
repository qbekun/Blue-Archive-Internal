#pragma once
#include "unitysdk.h"

#define NXPTOYCOMMUNITYTHREADFILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD97C0)

	inline static constexpr unsigned int NXPToyCommunityThreadFile_TypeDefinitionIndex = 27472;

	class NXPToyCommunityThreadFile : public Il2CppObject
	{
	public:
		::System::Int64 fileId; // 0x10
		::System::Int64 threadId; // 0x18
		::System::String* url; // 0x20
		::System::String* filePath; // 0x28
		::System::String* orgFilename; // 0x30
		::System::String* fileSize; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NXPTOYCOMMUNITYTHREADFILE_.CTOR_OFFSET))(nullptr);
		}

	};

