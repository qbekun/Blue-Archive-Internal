#pragma once
#include "../unitysdk.h"

#define NPA_EXTERNALPLATFORMUSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE6810)

namespace NPA
{
	inline static constexpr unsigned int ExternalPlatformUser_TypeDefinitionIndex = 25772;

	class ExternalPlatformUser : public Il2CppObject
	{
	public:
		::System::String* UserId; // 0x10
		::System::String* DisplayName; // 0x18
		::System::Boolean IsOnline; // 0x20
		::System::String* Presence; // 0x28
		::System::String* RealName; // 0x30
		::System::String* PlayingTitleId; // 0x38
		::System::String* PlayingTitleName; // 0x40
		::System::Boolean IsPlayingGame; // 0x48
		::System::Boolean IsPlayingThisGame; // 0x49
		::System::Int32 Index; // 0x4C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EXTERNALPLATFORMUSER_.CTOR_OFFSET))(nullptr);
		}

	};
}

