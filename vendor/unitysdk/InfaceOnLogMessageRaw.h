#pragma once
#include "unitysdk.h"

#define INFACEONLOGMESSAGERAW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CF8B20)
#define INFACEONLOGMESSAGERAW_INVOKE_OFFSET UNITYSDK_OFFSET(0x9CF8BF0)
#define INFACEONLOGMESSAGERAW_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9CF8C00)
#define INFACEONLOGMESSAGERAW_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9CF8CA0)

	inline static constexpr unsigned int InfaceOnLogMessageRaw_TypeDefinitionIndex = 25797;

	class InfaceOnLogMessageRaw : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INFACEONLOGMESSAGERAW_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INFACEONLOGMESSAGERAW_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + INFACEONLOGMESSAGERAW_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + INFACEONLOGMESSAGERAW_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

