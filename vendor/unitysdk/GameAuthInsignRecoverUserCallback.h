#pragma once
#include "unitysdk.h"

#define GAMEAUTHINSIGNRECOVERUSERCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CF9E10)
#define GAMEAUTHINSIGNRECOVERUSERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9CF9EE0)
#define GAMEAUTHINSIGNRECOVERUSERCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9CF9EF0)
#define GAMEAUTHINSIGNRECOVERUSERCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9CF9F70)

	inline static constexpr unsigned int GameAuthInsignRecoverUserCallback_TypeDefinitionIndex = 25810;

	class GameAuthInsignRecoverUserCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNRECOVERUSERCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNRECOVERUSERCALLBACK_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNRECOVERUSERCALLBACK_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNRECOVERUSERCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

