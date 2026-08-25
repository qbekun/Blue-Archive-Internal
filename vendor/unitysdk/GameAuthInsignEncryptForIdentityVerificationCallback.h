#pragma once
#include "unitysdk.h"

#define GAMEAUTHINSIGNENCRYPTFORIDENTITYVERIFICATIONCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CFA0F0)
#define GAMEAUTHINSIGNENCRYPTFORIDENTITYVERIFICATIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9CFA1C0)
#define GAMEAUTHINSIGNENCRYPTFORIDENTITYVERIFICATIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9CFA1D0)
#define GAMEAUTHINSIGNENCRYPTFORIDENTITYVERIFICATIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9CFA250)

	inline static constexpr unsigned int GameAuthInsignEncryptForIdentityVerificationCallback_TypeDefinitionIndex = 25812;

	class GameAuthInsignEncryptForIdentityVerificationCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNENCRYPTFORIDENTITYVERIFICATIONCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNENCRYPTFORIDENTITYVERIFICATIONCALLBACK_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNENCRYPTFORIDENTITYVERIFICATIONCALLBACK_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEAUTHINSIGNENCRYPTFORIDENTITYVERIFICATIONCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

