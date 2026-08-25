#pragma once
#include "unitysdk.h"

#define STOPCAMERASHAKEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE45AC0)

	inline static constexpr unsigned int StopCameraShakeMessage_TypeDefinitionIndex = 741;

	class StopCameraShakeMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STOPCAMERASHAKEMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

