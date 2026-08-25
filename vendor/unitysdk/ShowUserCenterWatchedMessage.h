#pragma once
#include "unitysdk.h"

#define SHOWUSERCENTERWATCHEDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xCC8A20)

	inline static constexpr unsigned int ShowUserCenterWatchedMessage_TypeDefinitionIndex = 9131;

	class ShowUserCenterWatchedMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOWUSERCENTERWATCHEDMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

