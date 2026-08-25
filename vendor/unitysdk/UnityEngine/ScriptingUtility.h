#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_SCRIPTINGUTILITY_ISMANAGEDCODEWORKING_OFFSET UNITYSDK_OFFSET(0xA231F30)

namespace UnityEngine
{
	inline static constexpr unsigned int ScriptingUtility_TypeDefinitionIndex = 31165;

	class ScriptingUtility : public Il2CppObject
	{
	public:
		::System::Boolean IsManagedCodeWorking()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTINGUTILITY_ISMANAGEDCODEWORKING_OFFSET))(nullptr);
		}

	};
}

