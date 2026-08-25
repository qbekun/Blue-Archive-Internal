#pragma once
#include "../unitysdk.h"

namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_INPRECVNOTIFICATIONLISTENER_ONRECVNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA
{
	inline static constexpr unsigned int INPRecvNotificationListener_TypeDefinitionIndex = 25644;

	class INPRecvNotificationListener : public Il2CppObject
	{
	public:
		::System::Void OnRecvNotification(::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPRECVNOTIFICATIONLISTENER_ONRECVNOTIFICATION_OFFSET))(arg, nullptr);
		}

	};
}

