#pragma once
#include "../unitysdk.h"

#define NPA_NPACCOUNTGAMEOBJECT_SETPUSHACTION_OFFSET UNITYSDK_OFFSET(0x9BC8C80)
#define NPA_NPACCOUNTGAMEOBJECT_SETONMESSAGERECEIVEDACTION_OFFSET UNITYSDK_OFFSET(0x9BC8C90)
#define NPA_NPACCOUNTGAMEOBJECT_ONRECEIVENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x9BC8CA0)
#define NPA_NPACCOUNTGAMEOBJECT_ONMESSAGERECEIVED_OFFSET UNITYSDK_OFFSET(0x9BC8E10)
#define NPA_NPACCOUNTGAMEOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BC8EB0)

namespace NPA
{
	inline static constexpr unsigned int NPAccountGameObject_TypeDefinitionIndex = 25610;

	class NPAccountGameObject : public Il2CppObject
	{
	public:
		Il2CppObject* pushRecvAction; // 0x18
		Il2CppObject* messageReceivedAction; // 0x20

		::System::Void setPushAction(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNTGAMEOBJECT_SETPUSHACTION_OFFSET))(arg, nullptr);
		}

		::System::Void setOnMessageReceivedAction(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNTGAMEOBJECT_SETONMESSAGERECEIVEDACTION_OFFSET))(arg, nullptr);
		}

		::System::Void OnReceiveNotification(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNTGAMEOBJECT_ONRECEIVENOTIFICATION_OFFSET))(str, nullptr);
		}

		::System::Void OnMessageReceived(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNTGAMEOBJECT_ONMESSAGERECEIVED_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NPACCOUNTGAMEOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};
}

