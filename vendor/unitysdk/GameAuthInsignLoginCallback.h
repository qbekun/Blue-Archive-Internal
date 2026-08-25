#pragma once
#include "unitysdk.h"

#define GAMEAUTHINSIGNLOGINCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CF9B30)
#define GAMEAUTHINSIGNLOGINCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9CF9C00)
#define GAMEAUTHINSIGNLOGINCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9CF9C10)
#define GAMEAUTHINSIGNLOGINCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9CF9C90)

	inline static constexpr unsigned int GameAuthInsignLoginCallback_TypeDefinitionIndex = 25808;

	class GameAuthInsignLoginCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNLOGINCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNLOGINCALLBACK_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNLOGINCALLBACK_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNLOGINCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

