#pragma once
#include "unitysdk.h"

#define INPUTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xD15C90)
#define INPUTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xD15310)
#define INPUTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xD15CA0)
#define INPUTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xD15CD0)

	inline static constexpr unsigned int InputDelegate_TypeDefinitionIndex = 661;

	class InputDelegate : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INPUTDELEGATE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Object*>* arg, ::System::AsyncCallback* arg2, ::System::Object* arg3)
		{
			return ((::System::IAsyncResult*(*)(::Il2CppArray<::System::Object*>*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTDELEGATE_BEGININVOKE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Invoke(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

	};

