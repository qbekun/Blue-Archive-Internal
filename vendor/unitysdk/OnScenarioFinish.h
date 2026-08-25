#pragma once
#include "unitysdk.h"

#define ONSCENARIOFINISH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x2034400)
#define ONSCENARIOFINISH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x2034430)
#define ONSCENARIOFINISH_INVOKE_OFFSET UNITYSDK_OFFSET(0x2034440)
#define ONSCENARIOFINISH_.CTOR_OFFSET UNITYSDK_OFFSET(0x20288E0)

	inline static constexpr unsigned int OnScenarioFinish_TypeDefinitionIndex = 3212;

	class OnScenarioFinish : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg2)
		{
			return ((::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONSCENARIOFINISH_BEGININVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONSCENARIOFINISH_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONSCENARIOFINISH_INVOKE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONSCENARIOFINISH_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

