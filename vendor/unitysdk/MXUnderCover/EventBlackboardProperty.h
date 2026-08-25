#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class EventBlackboardAsset; }

#define MXUNDERCOVER_EVENTBLACKBOARDPROPERTY_.CTOR_OFFSET UNITYSDK_OFFSET(0xD93260)
#define MXUNDERCOVER_EVENTBLACKBOARDPROPERTY_SETVALUE_OFFSET UNITYSDK_OFFSET(0xD93270)
#define MXUNDERCOVER_EVENTBLACKBOARDPROPERTY_GETVALUE_OFFSET UNITYSDK_OFFSET(0xD93390)
#define MXUNDERCOVER_EVENTBLACKBOARDPROPERTY_REMOVE_ONCHANGED_OFFSET UNITYSDK_OFFSET(0xD93450)
#define MXUNDERCOVER_EVENTBLACKBOARDPROPERTY_ADD_ONCHANGED_OFFSET UNITYSDK_OFFSET(0xD934F0)

namespace MXUnderCover
{
	inline static constexpr unsigned int EventBlackboardProperty_TypeDefinitionIndex = 9724;

	class EventBlackboardProperty : public Il2CppObject
	{
	public:
		::MXUnderCover::EventBlackboardAsset* asset; // 0x18
		Il2CppObject* OnChanged; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_EVENTBLACKBOARDPROPERTY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetValue(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_EVENTBLACKBOARDPROPERTY_SETVALUE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean GetValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_EVENTBLACKBOARDPROPERTY_GETVALUE_OFFSET))(nullptr);
		}

		::System::Void remove_OnChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_EVENTBLACKBOARDPROPERTY_REMOVE_ONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_EVENTBLACKBOARDPROPERTY_ADD_ONCHANGED_OFFSET))(arg, nullptr);
		}

	};
}

