#pragma once
#include "unitysdk.h"

#define ENDWORLDRAIDZONEANIMATIONCALLBACKMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xC06CA0)

	inline static constexpr unsigned int EndWorldRaidZoneAnimationCallBackMessage_TypeDefinitionIndex = 8791;

	class EndWorldRaidZoneAnimationCallBackMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDWORLDRAIDZONEANIMATIONCALLBACKMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

