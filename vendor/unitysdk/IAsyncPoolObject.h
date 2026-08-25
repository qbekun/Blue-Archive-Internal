#pragma once
#include "unitysdk.h"

class IAsyncPoolHandle;

#define IASYNCPOOLOBJECT_REGISTERHANDLE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IAsyncPoolObject_TypeDefinitionIndex = 8824;

	class IAsyncPoolObject : public Il2CppObject
	{
	public:
		::System::Void RegisterHandle(IAsyncPoolHandle* arg)
		{
			((::System::Void(*)(IAsyncPoolHandle*, ::PVOID))((::PBYTE)hIl2Cpp + IASYNCPOOLOBJECT_REGISTERHANDLE_OFFSET))(arg, nullptr);
		}

	};

