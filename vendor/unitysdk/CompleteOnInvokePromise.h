#pragma once
#include "unitysdk.h"

#define COMPLETEONINVOKEPROMISE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93FEAA0)
#define COMPLETEONINVOKEPROMISE_INVOKE_OFFSET UNITYSDK_OFFSET(0x93FEBD0)
#define COMPLETEONINVOKEPROMISE_GET_INVOKEMAYRUNARBITRARYCODE_OFFSET UNITYSDK_OFFSET(0x93FEED0)

	inline static constexpr unsigned int CompleteOnInvokePromise_TypeDefinitionIndex = 24201;

	class CompleteOnInvokePromise : public MatchOptions
	{
	public:
		Il2CppObject* _tasks; // 0x58

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COMPLETEONINVOKEPROMISE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + COMPLETEONINVOKEPROMISE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_InvokeMayRunArbitraryCode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPLETEONINVOKEPROMISE_GET_INVOKEMAYRUNARBITRARYCODE_OFFSET))(nullptr);
		}

	};

