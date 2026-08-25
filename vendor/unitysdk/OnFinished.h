#pragma once
#include "unitysdk.h"

#define ONFINISHED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x2080120)
#define ONFINISHED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x2080130)
#define ONFINISHED_.CTOR_OFFSET UNITYSDK_OFFSET(0x2080160)
#define ONFINISHED_INVOKE_OFFSET UNITYSDK_OFFSET(0x2080220)

	inline static constexpr unsigned int OnFinished_TypeDefinitionIndex = 160;

	class OnFinished : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONFINISHED_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg2)
		{
			return ((::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONFINISHED_BEGININVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONFINISHED_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFINISHED_INVOKE_OFFSET))(nullptr);
		}

	};

