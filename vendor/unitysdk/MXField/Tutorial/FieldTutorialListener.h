#pragma once
#include "../../unitysdk.h"

namespace FlatData { class FieldTutorialType; }
namespace UnityEngine { class Animation; }
namespace MXField::Shared::Data { class FieldTutorialInfo; }
namespace MXField::Dispatch { class DispatchType; }

#define MXFIELD_TUTORIAL_FIELDTUTORIALLISTENER_HANDLETUTORIALDISPATCH_OFFSET UNITYSDK_OFFSET(0xEB1D70)
#define MXFIELD_TUTORIAL_FIELDTUTORIALLISTENER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEB1F70)
#define MXFIELD_TUTORIAL_FIELDTUTORIALLISTENER_AWAKE_OFFSET UNITYSDK_OFFSET(0xEB1F80)
#define MXFIELD_TUTORIAL_FIELDTUTORIALLISTENER_GET_TUTORIALINFO_OFFSET UNITYSDK_OFFSET(0xEB22C0)
#define MXFIELD_TUTORIAL_FIELDTUTORIALLISTENER_GET_READYTOPLAY_OFFSET UNITYSDK_OFFSET(0xEB22D0)
#define MXFIELD_TUTORIAL_FIELDTUTORIALLISTENER_SET_READYTOPLAY_OFFSET UNITYSDK_OFFSET(0xEB22E0)
#define MXFIELD_TUTORIAL_FIELDTUTORIALLISTENER_SET_TUTORIALINFO_OFFSET UNITYSDK_OFFSET(0xEB22F0)
#define MXFIELD_TUTORIAL_FIELDTUTORIALLISTENER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xEB2300)

namespace MXField::Tutorial
{
	inline static constexpr unsigned int FieldTutorialListener_TypeDefinitionIndex = 10802;

	class FieldTutorialListener : public Il2CppObject
	{
	public:
		::FlatData::FieldTutorialType* tutorialType; // 0x18
		::UnityEngine::Animation* openAnimation; // 0x20
		::System::Boolean _ReadyToPlay_k__BackingField; // 0x28
		::MXField::Shared::Data::FieldTutorialInfo* _TutorialInfo_k__BackingField; // 0x30

		::System::Boolean HandleTutorialDispatch(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TUTORIAL_FIELDTUTORIALLISTENER_HANDLETUTORIALDISPATCH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TUTORIAL_FIELDTUTORIALLISTENER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TUTORIAL_FIELDTUTORIALLISTENER_AWAKE_OFFSET))(nullptr);
		}

		::MXField::Shared::Data::FieldTutorialInfo* get_TutorialInfo()
		{
			return ((::MXField::Shared::Data::FieldTutorialInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TUTORIAL_FIELDTUTORIALLISTENER_GET_TUTORIALINFO_OFFSET))(nullptr);
		}

		::System::Boolean get_ReadyToPlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TUTORIAL_FIELDTUTORIALLISTENER_GET_READYTOPLAY_OFFSET))(nullptr);
		}

		::System::Void set_ReadyToPlay(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TUTORIAL_FIELDTUTORIALLISTENER_SET_READYTOPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void set_TutorialInfo(::MXField::Shared::Data::FieldTutorialInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldTutorialInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TUTORIAL_FIELDTUTORIALLISTENER_SET_TUTORIALINFO_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TUTORIAL_FIELDTUTORIALLISTENER_ONENABLE_OFFSET))(nullptr);
		}

	};
}

