#pragma once
#include "unitysdk.h"

#define UNSHARED_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C1700)

	inline static constexpr unsigned int UnShared_TypeDefinitionIndex = 35248;

	class UnShared : public ObserverState
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSHARED_.CTOR_OFFSET))(nullptr);
		}

	};

