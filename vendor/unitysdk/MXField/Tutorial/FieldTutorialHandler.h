#pragma once
#include "../../unitysdk.h"

namespace MXField::Dispatch { class DispatchType; }

#define MXFIELD_TUTORIAL_FIELDTUTORIALHANDLER_HANDLECONDITIONCHANGED_OFFSET UNITYSDK_OFFSET(0xEB13D0)
#define MXFIELD_TUTORIAL_FIELDTUTORIALHANDLER_SET_TUTORIALINFOS_OFFSET UNITYSDK_OFFSET(0xEB1BA0)
#define MXFIELD_TUTORIAL_FIELDTUTORIALHANDLER_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0xEB1BB0)
#define MXFIELD_TUTORIAL_FIELDTUTORIALHANDLER_GET_TUTORIALINFOS_OFFSET UNITYSDK_OFFSET(0xEB1D00)
#define MXFIELD_TUTORIAL_FIELDTUTORIALHANDLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xEB1D10)
#define MXFIELD_TUTORIAL_FIELDTUTORIALHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEB1D20)

namespace MXField::Tutorial
{
	inline static constexpr unsigned int FieldTutorialHandler_TypeDefinitionIndex = 10801;

	class FieldTutorialHandler : public Il2CppObject
	{
	public:
		Il2CppObject* _TutorialInfos_k__BackingField; // 0x10

		::System::Boolean HandleConditionChanged(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TUTORIAL_FIELDTUTORIALHANDLER_HANDLECONDITIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void set_TutorialInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TUTORIAL_FIELDTUTORIALHANDLER_SET_TUTORIALINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void Subscribe()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TUTORIAL_FIELDTUTORIALHANDLER_SUBSCRIBE_OFFSET))(nullptr);
		}

		Il2CppObject* get_TutorialInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TUTORIAL_FIELDTUTORIALHANDLER_GET_TUTORIALINFOS_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TUTORIAL_FIELDTUTORIALHANDLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TUTORIAL_FIELDTUTORIALHANDLER_.CTOR_OFFSET))(nullptr);
		}

	};
}

