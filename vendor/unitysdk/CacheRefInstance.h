#pragma once
#include "unitysdk.h"

#define CACHEREFINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E6D010)

	inline static constexpr unsigned int CacheRefInstance_TypeDefinitionIndex = 28864;

	class CacheRefInstance : public Il2CppObject
	{
	public:
		::System::Boolean valid; // 0x10

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CACHEREFINSTANCE_DISPOSE_OFFSET))(nullptr);
		}

	};

