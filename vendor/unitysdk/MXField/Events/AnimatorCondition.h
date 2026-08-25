#pragma once
#include "../../unitysdk.h"

#define MXFIELD_EVENTS_ANIMATORCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC6030)
#define MXFIELD_EVENTS_ANIMATORCONDITION_EXECUTEIMPL_OFFSET UNITYSDK_OFFSET(0xEC60A0)

namespace MXField::Events
{
	inline static constexpr unsigned int AnimatorCondition_TypeDefinitionIndex = 10875;

	class AnimatorCondition : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_ANIMATORCONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ExecuteImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_ANIMATORCONDITION_EXECUTEIMPL_OFFSET))(nullptr);
		}

	};
}

