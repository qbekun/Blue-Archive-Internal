#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_ASYNCLOCAL`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_ASYNCLOCAL`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_ASYNCLOCAL`1_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_ASYNCLOCAL`1_SYSTEM.THREADING.IASYNCLOCAL.ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Threading
{
	inline static constexpr unsigned int AsyncLocal`1_TypeDefinitionIndex = 24032;

	class AsyncLocal`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_valueChangedHandler; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ASYNCLOCAL`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ASYNCLOCAL`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_Value(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ASYNCLOCAL`1_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void System.Threading.IAsyncLocal.OnValueChanged(::System::Object* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ASYNCLOCAL`1_SYSTEM.THREADING.IASYNCLOCAL.ONVALUECHANGED_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

