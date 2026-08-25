#pragma once
#include "unitysdk.h"

#define UISUPPORT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9E3CA60)

	inline static constexpr unsigned int UISupport_TypeDefinitionIndex = 28354;

	class UISupport : public Il2CppObject
	{
	public:
		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISUPPORT_INITIALIZE_OFFSET))(nullptr);
		}

	};

