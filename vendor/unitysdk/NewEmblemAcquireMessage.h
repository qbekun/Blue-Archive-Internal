#pragma once
#include "unitysdk.h"

#define NEWEMBLEMACQUIREMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x23F09A0)

	inline static constexpr unsigned int NewEmblemAcquireMessage_TypeDefinitionIndex = 5413;

	class NewEmblemAcquireMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWEMBLEMACQUIREMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

