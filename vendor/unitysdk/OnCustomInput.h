#pragma once
#include "unitysdk.h"

#define ONCUSTOMINPUT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x22F7B30)
#define ONCUSTOMINPUT_INVOKE_OFFSET UNITYSDK_OFFSET(0x22F7B40)
#define ONCUSTOMINPUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F7B50)
#define ONCUSTOMINPUT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x22F7C10)

	inline static constexpr unsigned int OnCustomInput_TypeDefinitionIndex = 207;

	class OnCustomInput : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONCUSTOMINPUT_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCUSTOMINPUT_INVOKE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONCUSTOMINPUT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg2)
		{
			return ((::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONCUSTOMINPUT_BEGININVOKE_OFFSET))(arg, arg2, nullptr);
		}

	};

