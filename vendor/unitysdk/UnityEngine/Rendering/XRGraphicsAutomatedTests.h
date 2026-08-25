#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_XRGRAPHICSAUTOMATEDTESTS_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9FE65E0)
#define UNITYENGINE_RENDERING_XRGRAPHICSAUTOMATEDTESTS_GET_ACTIVATEDFROMCOMMANDLINE_OFFSET UNITYSDK_OFFSET(0x9FE6630)
#define UNITYENGINE_RENDERING_XRGRAPHICSAUTOMATEDTESTS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9FE6640)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int XRGraphicsAutomatedTests_TypeDefinitionIndex = 34136;

	class XRGraphicsAutomatedTests : public Il2CppObject
	{
	public:
		::System::Boolean _enabled_k__BackingField; // 0x0
		::System::Boolean running; // 0x1

		::System::Boolean get_enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICSAUTOMATEDTESTS_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::Boolean get_activatedFromCommandLine()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICSAUTOMATEDTESTS_GET_ACTIVATEDFROMCOMMANDLINE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRGRAPHICSAUTOMATEDTESTS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

