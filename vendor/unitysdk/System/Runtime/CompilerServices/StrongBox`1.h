#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_STRONGBOX`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_STRONGBOX`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_STRONGBOX`1_SYSTEM.RUNTIME.COMPILERSERVICES.ISTRONGBOX.GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_STRONGBOX`1_SYSTEM.RUNTIME.COMPILERSERVICES.ISTRONGBOX.SET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int StrongBox`1_TypeDefinitionIndex = 33530;

	class StrongBox`1 : public Il2CppObject
	{
	public:
		Il2CppObject* Value; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_STRONGBOX`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_STRONGBOX`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* System.Runtime.CompilerServices.IStrongBox.get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_STRONGBOX`1_SYSTEM.RUNTIME.COMPILERSERVICES.ISTRONGBOX.GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void System.Runtime.CompilerServices.IStrongBox.set_Value(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_STRONGBOX`1_SYSTEM.RUNTIME.COMPILERSERVICES.ISTRONGBOX.SET_VALUE_OFFSET))(arg, nullptr);
		}

	};
}

