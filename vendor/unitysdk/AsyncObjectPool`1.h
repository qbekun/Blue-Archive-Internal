#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }

#define ASYNCOBJECTPOOL`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASYNCOBJECTPOOL`1_REQUEST_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASYNCOBJECTPOOL`1_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int AsyncObjectPool`1_TypeDefinitionIndex = 8822;

	class AsyncObjectPool`1 : public Il2CppObject
	{
	public:
		Il2CppObject* poolIdle; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASYNCOBJECTPOOL`1_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Request(::System::String* str, ::UnityEngine::Transform* arg)
		{
			return ((Il2CppObject*(*)(::System::String*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + ASYNCOBJECTPOOL`1_REQUEST_OFFSET))(str, arg, nullptr);
		}

		::System::Void Release(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASYNCOBJECTPOOL`1_RELEASE_OFFSET))(arg, nullptr);
		}

	};

