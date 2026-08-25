#pragma once
#include "../../unitysdk.h"

#define MXFIELD_EVENTS_AMBIENCESOUNDENABLECONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC5DB0)
#define MXFIELD_EVENTS_AMBIENCESOUNDENABLECONDITION_EXECUTEIMPL_OFFSET UNITYSDK_OFFSET(0xEC5E90)

namespace MXField::Events
{
	inline static constexpr unsigned int AmbienceSoundEnableCondition_TypeDefinitionIndex = 10874;

	class AmbienceSoundEnableCondition : public Il2CppObject
	{
	public:
		::System::Boolean alreadySatisfied; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_AMBIENCESOUNDENABLECONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ExecuteImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_EVENTS_AMBIENCESOUNDENABLECONDITION_EXECUTEIMPL_OFFSET))(nullptr);
		}

	};
}

