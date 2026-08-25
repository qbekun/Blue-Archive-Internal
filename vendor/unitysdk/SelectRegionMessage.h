#pragma once
#include "unitysdk.h"

#define SELECTREGIONMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xCD49B0)

	inline static constexpr unsigned int SelectRegionMessage_TypeDefinitionIndex = 9151;

	class SelectRegionMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SELECTREGIONMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

