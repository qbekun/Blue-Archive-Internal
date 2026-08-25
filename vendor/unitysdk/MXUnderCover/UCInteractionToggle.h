#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCTrigger; }
class IBase;
class CoroutineAsyncOperation;
namespace MXUnderCover { class UCEntity; }
class EntityCompositionData;

#define MXUNDERCOVER_UCINTERACTIONTOGGLE_ONTRIGGERONTOOFF_OFFSET UNITYSDK_OFFSET(0xD9C510)
#define MXUNDERCOVER_UCINTERACTIONTOGGLE_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0xD9C6B0)
#define MXUNDERCOVER_UCINTERACTIONTOGGLE_REBIND_OFFSET UNITYSDK_OFFSET(0xD9C7D0)
#define MXUNDERCOVER_UCINTERACTIONTOGGLE_GET_TOGGLE_OFFSET UNITYSDK_OFFSET(0xD9C7E0)
#define MXUNDERCOVER_UCINTERACTIONTOGGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xD9C7F0)
#define MXUNDERCOVER_UCINTERACTIONTOGGLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD9C800)
#define MXUNDERCOVER_UCINTERACTIONTOGGLE_SET_TOGGLE_OFFSET UNITYSDK_OFFSET(0xD9CA30)
#define MXUNDERCOVER_UCINTERACTIONTOGGLE_REFRESHTRIGGERACTIVATION_OFFSET UNITYSDK_OFFSET(0xD9C640)
#define MXUNDERCOVER_UCINTERACTIONTOGGLE_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0xD9CA40)
#define MXUNDERCOVER_UCINTERACTIONTOGGLE_SYNCTOMODEL_OFFSET UNITYSDK_OFFSET(0xD9CA90)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCInteractionToggle_TypeDefinitionIndex = 9829;

	class UCInteractionToggle : public Il2CppObject
	{
	public:
		::MXUnderCover::UCTrigger* TriggerOnToOff; // 0x40
		IBase* ActionOnToOff; // 0x48
		::System::Boolean _Toggle_k__BackingField; // 0x50

		CoroutineAsyncOperation* OnTriggerONtoOFF(::MXUnderCover::UCEntity* arg)
		{
			return ((CoroutineAsyncOperation*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINTERACTIONTOGGLE_ONTRIGGERONTOOFF_OFFSET))(arg, nullptr);
		}

		CoroutineAsyncOperation* OnTrigger(::MXUnderCover::UCEntity* arg)
		{
			return ((CoroutineAsyncOperation*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINTERACTIONTOGGLE_ONTRIGGER_OFFSET))(arg, nullptr);
		}

		::System::Void Rebind()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINTERACTIONTOGGLE_REBIND_OFFSET))(nullptr);
		}

		::System::Boolean get_Toggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINTERACTIONTOGGLE_GET_TOGGLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINTERACTIONTOGGLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MXUnderCover::UCEntity* arg, EntityCompositionData* arg2)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, EntityCompositionData*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINTERACTIONTOGGLE_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Toggle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINTERACTIONTOGGLE_SET_TOGGLE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshTriggerActivation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINTERACTIONTOGGLE_REFRESHTRIGGERACTIVATION_OFFSET))(nullptr);
		}

		::System::Void Uninitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINTERACTIONTOGGLE_UNINITIALIZE_OFFSET))(nullptr);
		}

		EntityCompositionData* SyncToModel()
		{
			return ((EntityCompositionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINTERACTIONTOGGLE_SYNCTOMODEL_OFFSET))(nullptr);
		}

	};
}

