#pragma once
#include "unitysdk.h"

#define ONPRESSCB_.CTOR_OFFSET UNITYSDK_OFFSET(0x243ED90)
#define ONPRESSCB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x243EEA0)
#define ONPRESSCB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x243EF20)
#define ONPRESSCB_INVOKE_OFFSET UNITYSDK_OFFSET(0x243EF30)

	inline static constexpr unsigned int OnPressCB_TypeDefinitionIndex = 256;

	class OnPressCB : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONPRESSCB_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::Boolean arg2, ::System::AsyncCallback* arg3, ::System::Object* arg4)
		{
			return ((::System::IAsyncResult*(*)(::System::Object*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONPRESSCB_BEGININVOKE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONPRESSCB_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ONPRESSCB_INVOKE_OFFSET))(arg, arg2, nullptr);
		}

	};

