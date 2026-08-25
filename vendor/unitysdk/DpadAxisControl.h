#pragma once
#include "unitysdk.h"

#define DPADAXISCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x9E78670)
#define DPADAXISCONTROL_SET_COMPONENT_OFFSET UNITYSDK_OFFSET(0x9E78760)
#define DPADAXISCONTROL_GET_COMPONENT_OFFSET UNITYSDK_OFFSET(0x9E78770)
#define DPADAXISCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E78780)
#define DPADAXISCONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E78810)

	inline static constexpr unsigned int DpadAxisControl_TypeDefinitionIndex = 28885;

	class DpadAxisControl : public ::System::Runtime::CompilerServices::NullableAttribute
	{
	public:
		::System::Int32 _component_k__BackingField; // 0x130

		::System::Single ReadUnprocessedValueFromState(::System::Object** arg)
		{
			return (return (::System::Single(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + DPADAXISCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_component(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DPADAXISCONTROL_SET_COMPONENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_component()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPADAXISCONTROL_GET_COMPONENT_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPADAXISCONTROL_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPADAXISCONTROL_.CTOR_OFFSET))(nullptr);
		}

	};

