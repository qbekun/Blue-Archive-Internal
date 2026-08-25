#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class InputEvent; }

#define UNITYENGINE_UIELEMENTS_INPUTEVENT_SET_PREVIOUSDATA_OFFSET UNITYSDK_OFFSET(0xA3E1550)
#define UNITYENGINE_UIELEMENTS_INPUTEVENT_SET_NEWDATA_OFFSET UNITYSDK_OFFSET(0xA3E1560)
#define UNITYENGINE_UIELEMENTS_INPUTEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xA3E1580)
#define UNITYENGINE_UIELEMENTS_INPUTEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0xA3E1600)
#define UNITYENGINE_UIELEMENTS_INPUTEVENT_GETPOOLED_OFFSET UNITYSDK_OFFSET(0xA3E1650)
#define UNITYENGINE_UIELEMENTS_INPUTEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E1720)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int InputEvent_TypeDefinitionIndex = 30482;

	class InputEvent : public <>c__DisplayClass48_4
	{
	public:
		::System::String* _previousData_k__BackingField; // 0x80
		::System::String* _newData_k__BackingField; // 0x88

		::System::Void set_previousData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INPUTEVENT_SET_PREVIOUSDATA_OFFSET))(str, nullptr);
		}

		::System::Void set_newData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INPUTEVENT_SET_NEWDATA_OFFSET))(str, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INPUTEVENT_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INPUTEVENT_LOCALINIT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::InputEvent* GetPooled(::System::String* str, ::System::String* str)
		{
			return (return (::UnityEngine::UIElements::InputEvent*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INPUTEVENT_GETPOOLED_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INPUTEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

