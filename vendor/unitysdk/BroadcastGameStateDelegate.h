#pragma once
#include "unitysdk.h"

#define BROADCASTGAMESTATEDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE160)
#define BROADCASTGAMESTATEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DAE220)
#define BROADCASTGAMESTATEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DAE250)
#define BROADCASTGAMESTATEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DAE260)

	inline static constexpr unsigned int BroadcastGameStateDelegate_TypeDefinitionIndex = 20411;

	class BroadcastGameStateDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BROADCASTGAMESTATEDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BROADCASTGAMESTATEDELEGATE_BEGININVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BROADCASTGAMESTATEDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BROADCASTGAMESTATEDELEGATE_INVOKE_OFFSET))(nullptr);
		}

	};

