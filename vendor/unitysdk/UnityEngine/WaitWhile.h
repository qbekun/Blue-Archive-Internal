#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_WAITWHILE_GET_KEEPWAITING_OFFSET UNITYSDK_OFFSET(0xA236F80)
#define UNITYENGINE_WAITWHILE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA236FB0)

namespace UnityEngine
{
	inline static constexpr unsigned int WaitWhile_TypeDefinitionIndex = 31187;

	class WaitWhile : public Il2CppObject
	{
	public:
		Il2CppObject* m_Predicate; // 0x10

		::System::Boolean get_keepWaiting()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WAITWHILE_GET_KEEPWAITING_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WAITWHILE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

