#pragma once
#include "unitysdk.h"

#define IASYNCPOOLHANDLE_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IAsyncPoolHandle_TypeDefinitionIndex = 8823;

	class IAsyncPoolHandle : public Il2CppObject
	{
	public:
		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IASYNCPOOLHANDLE_RELEASE_OFFSET))(nullptr);
		}

	};

