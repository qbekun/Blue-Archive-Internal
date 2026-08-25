#pragma once
#include "unitysdk.h"

#define ONHOVERCB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x243EBE0)
#define ONHOVERCB_INVOKE_OFFSET UNITYSDK_OFFSET(0x243EC60)
#define ONHOVERCB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x243EC70)
#define ONHOVERCB_.CTOR_OFFSET UNITYSDK_OFFSET(0x243EC80)

	inline static constexpr unsigned int OnHoverCB_TypeDefinitionIndex = 255;

	class OnHoverCB : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::Boolean arg2, ::System::AsyncCallback* arg3, ::System::Object* arg4)
		{
			return ((::System::IAsyncResult*(*)(::System::Object*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONHOVERCB_BEGININVOKE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ONHOVERCB_INVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONHOVERCB_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONHOVERCB_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

