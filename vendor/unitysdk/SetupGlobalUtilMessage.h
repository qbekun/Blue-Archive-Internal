#pragma once
#include "unitysdk.h"

#define SETUPGLOBALUTILMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xCD1B80)

	inline static constexpr unsigned int SetupGlobalUtilMessage_TypeDefinitionIndex = 9147;

	class SetupGlobalUtilMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SETUPGLOBALUTILMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

