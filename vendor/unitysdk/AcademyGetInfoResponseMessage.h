#pragma once
#include "unitysdk.h"

#define ACADEMYGETINFORESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EFE290)

	inline static constexpr unsigned int AcademyGetInfoResponseMessage_TypeDefinitionIndex = 1940;

	class AcademyGetInfoResponseMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYGETINFORESPONSEMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

