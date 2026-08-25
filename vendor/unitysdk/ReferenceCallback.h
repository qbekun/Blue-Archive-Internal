#pragma once
#include "unitysdk.h"

#define REFERENCECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9585930)
#define REFERENCECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9585940)
#define REFERENCECALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x956F110)
#define REFERENCECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9585970)

	inline static constexpr unsigned int ReferenceCallback_TypeDefinitionIndex = 35710;

	class ReferenceCallback : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + REFERENCECALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Object*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + REFERENCECALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + REFERENCECALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + REFERENCECALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

	};

