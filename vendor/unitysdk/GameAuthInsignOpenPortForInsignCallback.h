#pragma once
#include "unitysdk.h"

#define GAMEAUTHINSIGNOPENPORTFORINSIGNCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CF9570)
#define GAMEAUTHINSIGNOPENPORTFORINSIGNCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9CF9640)
#define GAMEAUTHINSIGNOPENPORTFORINSIGNCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9CF9650)
#define GAMEAUTHINSIGNOPENPORTFORINSIGNCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9CF96D0)

	inline static constexpr unsigned int GameAuthInsignOpenPortForInsignCallback_TypeDefinitionIndex = 25804;

	class GameAuthInsignOpenPortForInsignCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNOPENPORTFORINSIGNCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNOPENPORTFORINSIGNCALLBACK_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNOPENPORTFORINSIGNCALLBACK_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNOPENPORTFORINSIGNCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

