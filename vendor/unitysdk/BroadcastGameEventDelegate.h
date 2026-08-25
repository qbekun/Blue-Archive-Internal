#pragma once
#include "unitysdk.h"

#define BROADCASTGAMEEVENTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DAE050)
#define BROADCASTGAMEEVENTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE080)
#define BROADCASTGAMEEVENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DAE140)
#define BROADCASTGAMEEVENTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DAE150)

	inline static constexpr unsigned int BroadcastGameEventDelegate_TypeDefinitionIndex = 20410;

	class BroadcastGameEventDelegate : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BROADCASTGAMEEVENTDELEGATE_BEGININVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BROADCASTGAMEEVENTDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BROADCASTGAMEEVENTDELEGATE_INVOKE_OFFSET))(nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BROADCASTGAMEEVENTDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

