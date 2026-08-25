#pragma once
#include "unitysdk.h"

#define MOREINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AD2B90)

	inline static constexpr unsigned int MoreInfo_TypeDefinitionIndex = 29173;

	class MoreInfo : public Il2CppObject
	{
	public:
		::System::String* Path; // 0x10
		::System::String* Query; // 0x18
		::System::String* Fragment; // 0x20
		::System::String* AbsoluteUri; // 0x28
		::System::Int32 Hash; // 0x30
		::System::String* RemoteUrl; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOREINFO_.CTOR_OFFSET))(nullptr);
		}

	};

