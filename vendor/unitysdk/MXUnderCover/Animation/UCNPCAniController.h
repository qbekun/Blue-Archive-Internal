#pragma once
#include "../../unitysdk.h"

namespace MXUnderCover { class UCEntityMovement; }
class EntityCompositionData;

#define MXUNDERCOVER_ANIMATION_UCNPCANICONTROLLER_REBIND_OFFSET UNITYSDK_OFFSET(0xDD3660)
#define MXUNDERCOVER_ANIMATION_UCNPCANICONTROLLER_ADDSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xDD3710)
#define MXUNDERCOVER_ANIMATION_UCNPCANICONTROLLER_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0xDD3760)
#define MXUNDERCOVER_ANIMATION_UCNPCANICONTROLLER_SYNCTOMODEL_OFFSET UNITYSDK_OFFSET(0xDD3770)
#define MXUNDERCOVER_ANIMATION_UCNPCANICONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xDD3780)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCNPCAniController_TypeDefinitionIndex = 10106;

	class UCNPCAniController : public GlobalState
	{
	public:
		::MXUnderCover::UCEntityMovement* movement; // 0x80

		::System::Void Rebind()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCNPCANICONTROLLER_REBIND_OFFSET))(nullptr);
		}

		Il2CppObject* AddStateMachine()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCNPCANICONTROLLER_ADDSTATEMACHINE_OFFSET))(nullptr);
		}

		::System::Void Uninitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCNPCANICONTROLLER_UNINITIALIZE_OFFSET))(nullptr);
		}

		EntityCompositionData* SyncToModel()
		{
			return ((EntityCompositionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCNPCANICONTROLLER_SYNCTOMODEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCNPCANICONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};
}

