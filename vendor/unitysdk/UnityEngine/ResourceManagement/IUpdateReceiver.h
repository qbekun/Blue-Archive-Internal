#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RESOURCEMANAGEMENT_IUPDATERECEIVER_UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::ResourceManagement
{
	inline static constexpr unsigned int IUpdateReceiver_TypeDefinitionIndex = 36356;

	class IUpdateReceiver : public Il2CppObject
	{
	public:
		::System::Void Update(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_IUPDATERECEIVER_UPDATE_OFFSET))(arg, nullptr);
		}

	};
}

