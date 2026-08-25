#pragma once
#include "unitysdk.h"

#define GAMEAUTHINSIGNGETTOKENCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CF99C0)
#define GAMEAUTHINSIGNGETTOKENCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9CF9A90)
#define GAMEAUTHINSIGNGETTOKENCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9CF9AA0)
#define GAMEAUTHINSIGNGETTOKENCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9CF9B20)

	inline static constexpr unsigned int GameAuthInsignGetTokenCallback_TypeDefinitionIndex = 25807;

	class GameAuthInsignGetTokenCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNGETTOKENCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNGETTOKENCALLBACK_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNGETTOKENCALLBACK_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNGETTOKENCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

