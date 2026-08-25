#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_ASYNCLOCALVALUECHANGEDARGS`1_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_ASYNCLOCALVALUECHANGEDARGS`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Threading
{
	inline static constexpr unsigned int AsyncLocalValueChangedArgs`1_TypeDefinitionIndex = 24034;

	class AsyncLocalValueChangedArgs`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _PreviousValue_k__BackingField; // 0x0
		Il2CppObject* _CurrentValue_k__BackingField; // 0x0
		::System::Boolean _ThreadContextChanged_k__BackingField; // 0x0

		Il2CppObject* get_CurrentValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ASYNCLOCALVALUECHANGEDARGS`1_GET_CURRENTVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ASYNCLOCALVALUECHANGEDARGS`1_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

