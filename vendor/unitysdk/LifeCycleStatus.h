#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int LifeCycleStatus_TypeDefinitionIndex = 30459;

	class LifeCycleStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		LifeCycleStatus* None; // 0x0
		LifeCycleStatus* PropagationStopped; // 0x0
		LifeCycleStatus* ImmediatePropagationStopped; // 0x0
		LifeCycleStatus* DefaultPrevented; // 0x0
		LifeCycleStatus* Dispatching; // 0x0
		LifeCycleStatus* Pooled; // 0x0
		LifeCycleStatus* IMGUIEventIsValid; // 0x0
		LifeCycleStatus* StopDispatch; // 0x0
		LifeCycleStatus* PropagateToIMGUI; // 0x0
		LifeCycleStatus* Dispatched; // 0x0
		LifeCycleStatus* Processed; // 0x0
		LifeCycleStatus* ProcessedByFocusController; // 0x0

	};

