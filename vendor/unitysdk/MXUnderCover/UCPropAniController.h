#pragma once
#include "../unitysdk.h"

class EntityCompositionData;

#define MXUNDERCOVER_UCPROPANICONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD92C00)
#define MXUNDERCOVER_UCPROPANICONTROLLER_ADDSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xD92C40)
#define MXUNDERCOVER_UCPROPANICONTROLLER_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0xD92C90)
#define MXUNDERCOVER_UCPROPANICONTROLLER_SYNCTOMODEL_OFFSET UNITYSDK_OFFSET(0xD92CA0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCPropAniController_TypeDefinitionIndex = 9720;

	class UCPropAniController : public ExtraDataPerTouchState
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPROPANICONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* AddStateMachine()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPROPANICONTROLLER_ADDSTATEMACHINE_OFFSET))(nullptr);
		}

		::System::Void Uninitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPROPANICONTROLLER_UNINITIALIZE_OFFSET))(nullptr);
		}

		EntityCompositionData* SyncToModel()
		{
			return ((EntityCompositionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPROPANICONTROLLER_SYNCTOMODEL_OFFSET))(nullptr);
		}

	};
}

