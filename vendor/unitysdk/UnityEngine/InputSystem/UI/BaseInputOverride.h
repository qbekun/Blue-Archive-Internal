#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_UI_BASEINPUTOVERRIDE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F2EE70)
#define UNITYENGINE_INPUTSYSTEM_UI_BASEINPUTOVERRIDE_GET_COMPOSITIONSTRING_OFFSET UNITYSDK_OFFSET(0x9F2EE80)

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int BaseInputOverride_TypeDefinitionIndex = 28621;

	class BaseInputOverride : public ::TriInspector::ReadOnlyAttribute
	{
	public:
		::System::String* _compositionString_k__BackingField; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_BASEINPUTOVERRIDE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_compositionString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_BASEINPUTOVERRIDE_GET_COMPOSITIONSTRING_OFFSET))(nullptr);
		}

	};
}

