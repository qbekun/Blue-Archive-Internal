#pragma once
#include "unitysdk.h"

#define SETBIRTHMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xCCEAF0)

	inline static constexpr unsigned int SetBirthMessage_TypeDefinitionIndex = 9140;

	class SetBirthMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SETBIRTHMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

