#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_WAITUNTIL_GET_KEEPWAITING_OFFSET UNITYSDK_OFFSET(0xA236F20)
#define UNITYENGINE_WAITUNTIL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA236F50)

namespace UnityEngine
{
	inline static constexpr unsigned int WaitUntil_TypeDefinitionIndex = 31186;

	class WaitUntil : public Il2CppObject
	{
	public:
		Il2CppObject* m_Predicate; // 0x10

		::System::Boolean get_keepWaiting()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WAITUNTIL_GET_KEEPWAITING_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WAITUNTIL_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

