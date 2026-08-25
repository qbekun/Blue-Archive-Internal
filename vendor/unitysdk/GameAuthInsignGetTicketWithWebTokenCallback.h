#pragma once
#include "unitysdk.h"

#define GAMEAUTHINSIGNGETTICKETWITHWEBTOKENCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CF9850)
#define GAMEAUTHINSIGNGETTICKETWITHWEBTOKENCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9CF9920)
#define GAMEAUTHINSIGNGETTICKETWITHWEBTOKENCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9CF9930)
#define GAMEAUTHINSIGNGETTICKETWITHWEBTOKENCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9CF99B0)

	inline static constexpr unsigned int GameAuthInsignGetTicketWithWebTokenCallback_TypeDefinitionIndex = 25806;

	class GameAuthInsignGetTicketWithWebTokenCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNGETTICKETWITHWEBTOKENCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNGETTICKETWITHWEBTOKENCALLBACK_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNGETTICKETWITHWEBTOKENCALLBACK_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNGETTICKETWITHWEBTOKENCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

