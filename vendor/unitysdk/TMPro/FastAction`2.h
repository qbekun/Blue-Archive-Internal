#pragma once
#include "../unitysdk.h"

#define TMPRO_FASTACTION`2_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_FASTACTION`2_CALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_FASTACTION`2_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_FASTACTION`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace TMPro
{
	inline static constexpr unsigned int FastAction`2_TypeDefinitionIndex = 33601;

	class FastAction`2 : public Il2CppObject
	{
	public:
		Il2CppObject* delegates; // 0x0
		Il2CppObject* lookup; // 0x0

		::System::Void Remove(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FASTACTION`2_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Call(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FASTACTION`2_CALL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FASTACTION`2_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FASTACTION`2_.CTOR_OFFSET))(nullptr);
		}

	};
}

