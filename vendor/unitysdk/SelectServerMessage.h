#pragma once
#include "unitysdk.h"

#define SELECTSERVERMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA6AFF0)

	inline static constexpr unsigned int SelectServerMessage_TypeDefinitionIndex = 7840;

	class SelectServerMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SELECTSERVERMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

