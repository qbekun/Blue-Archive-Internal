#pragma once
#include "unitysdk.h"

#define NEEDTOREFRESHARENAOPPONENTSMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x182AEB0)

	inline static constexpr unsigned int NeedToRefreshArenaOpponentsMessage_TypeDefinitionIndex = 1310;

	class NeedToRefreshArenaOpponentsMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEDTOREFRESHARENAOPPONENTSMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

