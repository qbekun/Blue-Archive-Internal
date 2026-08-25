#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class PropertyName; }

#define UNITYENGINE_PLAYABLES_INOTIFICATION_GET_ID_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int INotification_TypeDefinitionIndex = 31599;

	class INotification : public Il2CppObject
	{
	public:
		::UnityEngine::PropertyName* get_id()
		{
			return (return (::UnityEngine::PropertyName*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_INOTIFICATION_GET_ID_OFFSET))(nullptr);
		}

	};
}

