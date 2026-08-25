#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Object; }

#define ACTIONSETTINGS_INVOKE_OFFSET UNITYSDK_OFFSET(0x2866690)
#define ACTIONSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x2866290)

	inline static constexpr unsigned int ActionSettings_TypeDefinitionIndex = 34349;

	class ActionSettings : public Il2CppObject
	{
	public:
		Mode* m_Action; // 0x10
		::UnityEngine::Object* m_Target; // 0x18
		::System::Int32 m_BoostAmount; // 0x20
		::System::Single m_StartTime; // 0x24
		TimeMode* m_Mode; // 0x28
		TriggerEvent* m_Event; // 0x30

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIONSETTINGS_INVOKE_OFFSET))(nullptr);
		}

		::System::Void .ctor(Mode* arg)
		{
			((::System::Void(*)(Mode*, ::PVOID))((::PBYTE)hIl2Cpp + ACTIONSETTINGS_.CTOR_OFFSET))(arg, nullptr);
		}

	};

