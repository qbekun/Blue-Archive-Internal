#pragma once
#include "../../unitysdk.h"

#define MXFIELD_EVENTS_COMPONENTENABLECONDITION_START_OFFSET UNITYSDK_OFFSET(0xEC6180)
#define MXFIELD_EVENTS_COMPONENTENABLECONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC61B0)
#define MXFIELD_EVENTS_COMPONENTENABLECONDITION_EXECUTEIMPL_OFFSET UNITYSDK_OFFSET(0xEC6220)
#define MXFIELD_EVENTS_COMPONENTENABLECONDITION_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0xEC6360)

namespace MXField::Events
{
	inline static constexpr unsigned int ComponentEnableCondition_TypeDefinitionIndex = 10878;

	class ComponentEnableCondition : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* targets; // 0x20
		::System::Boolean checkOnStartOnly; // 0x28

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_COMPONENTENABLECONDITION_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_COMPONENTENABLECONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ExecuteImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_COMPONENTENABLECONDITION_EXECUTEIMPL_OFFSET))(nullptr);
		}

		::System::Void Subscribe()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_COMPONENTENABLECONDITION_SUBSCRIBE_OFFSET))(nullptr);
		}

	};
}

