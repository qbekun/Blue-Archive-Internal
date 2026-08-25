#pragma once
#include "unitysdk.h"

#define RUNDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C039A0)
#define RUNDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9C03A70)
#define RUNDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9C03A90)
#define RUNDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9C03B20)

	inline static constexpr unsigned int RunDelegate_TypeDefinitionIndex = 26528;

	class RunDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RUNDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::String* str, ::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RUNDELEGATE_INVOKE_OFFSET))(str, str, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::String*, ::System::String*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RUNDELEGATE_BEGININVOKE_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + RUNDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

