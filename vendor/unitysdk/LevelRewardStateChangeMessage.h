#pragma once
#include "unitysdk.h"

#define LEVELREWARDSTATECHANGEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x267A5C0)

	inline static constexpr unsigned int LevelRewardStateChangeMessage_TypeDefinitionIndex = 6727;

	class LevelRewardStateChangeMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEVELREWARDSTATECHANGEMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

