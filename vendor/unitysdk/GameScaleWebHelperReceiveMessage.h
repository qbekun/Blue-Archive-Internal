#pragma once
#include "unitysdk.h"

#define GAMESCALEWEBHELPERRECEIVEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DB9920)
#define GAMESCALEWEBHELPERRECEIVEMESSAGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9DBC0B0)
#define GAMESCALEWEBHELPERRECEIVEMESSAGE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9DBC0C0)
#define GAMESCALEWEBHELPERRECEIVEMESSAGE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9DBC140)

	inline static constexpr unsigned int GameScaleWebHelperReceiveMessage_TypeDefinitionIndex = 26411;

	class GameScaleWebHelperReceiveMessage : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GAMESCALEWEBHELPERRECEIVEMESSAGE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMESCALEWEBHELPERRECEIVEMESSAGE_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GAMESCALEWEBHELPERRECEIVEMESSAGE_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GAMESCALEWEBHELPERRECEIVEMESSAGE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

