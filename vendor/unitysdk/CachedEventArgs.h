#pragma once
#include "unitysdk.h"

#define CACHEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AA26C0)

	inline static constexpr unsigned int CachedEventArgs_TypeDefinitionIndex = 29891;

	class CachedEventArgs : public Il2CppObject
	{
	public:
		Il2CppObject* TaskAccept; // 0x10
		Int32TaskSocketAsyncEventArgs* TaskReceive; // 0x18
		Int32TaskSocketAsyncEventArgs* TaskSend; // 0x20
		AwaitableSocketAsyncEventArgs* ValueTaskReceive; // 0x28
		AwaitableSocketAsyncEventArgs* ValueTaskSend; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CACHEDEVENTARGS_.CTOR_OFFSET))(nullptr);
		}

	};

