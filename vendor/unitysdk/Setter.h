#pragma once
#include "unitysdk.h"

#define SETTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9571AC0)
#define SETTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9571AD0)
#define SETTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9571B00)
#define SETTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x956D9F0)

	inline static constexpr unsigned int Setter_TypeDefinitionIndex = 35658;

	class Setter : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SETTER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Object*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SETTER_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SETTER_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SETTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

