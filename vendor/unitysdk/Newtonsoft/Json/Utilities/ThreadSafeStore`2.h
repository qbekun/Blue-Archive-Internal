#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_THREADSAFESTORE`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_THREADSAFESTORE`2_GET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ThreadSafeStore`2_TypeDefinitionIndex = 31902;

	class ThreadSafeStore`2 : public Il2CppObject
	{
	public:
		Il2CppObject* _concurrentStore; // 0x0
		Il2CppObject* _creator; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_THREADSAFESTORE`2_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Get(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_THREADSAFESTORE`2_GET_OFFSET))(arg, nullptr);
		}

	};
}

