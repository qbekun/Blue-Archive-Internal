#pragma once
#include "unitysdk.h"

#define PLATFORMSERVICEHELPER_CHECKRESULT_OFFSET UNITYSDK_OFFSET(0x2107E40)

	inline static constexpr unsigned int PlatformServiceHelper_TypeDefinitionIndex = 3861;

	class PlatformServiceHelper : public Il2CppObject
	{
	public:
		::System::Boolean CheckResult(Il2CppObject* arg, ::System::Action* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICEHELPER_CHECKRESULT_OFFSET))(arg, arg2, nullptr);
		}

	};

