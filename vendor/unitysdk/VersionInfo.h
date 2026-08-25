#pragma once
#include "unitysdk.h"

#define VERSIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x95EC760)

	inline static constexpr unsigned int VersionInfo_TypeDefinitionIndex = 35280;

	class VersionInfo : public Il2CppObject
	{
	public:
		::System::String* rawVersion; // 0x10
		::Il2CppArray<::System::Object*>* version; // 0x18
		SourceType* sourceType; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VERSIONINFO_.CTOR_OFFSET))(nullptr);
		}

	};

