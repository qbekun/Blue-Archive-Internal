#pragma once
#include "unitysdk.h"

#define POOLEDOBJECT_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define POOLEDOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int PooledObject_TypeDefinitionIndex = 33914;

	class PooledObject : public Il2CppObject
	{
	public:
		Il2CppObject* m_ToReturn; // 0x0
		Il2CppObject* m_Pool; // 0x0

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOLEDOBJECT_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + POOLEDOBJECT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

