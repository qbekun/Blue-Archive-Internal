#pragma once
#include "unitysdk.h"

#define IPOOLABLE_RESET_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IPoolable_TypeDefinitionIndex = 35000;

	class IPoolable : public Il2CppObject
	{
	public:
		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPOOLABLE_RESET_OFFSET))(nullptr);
		}

	};

