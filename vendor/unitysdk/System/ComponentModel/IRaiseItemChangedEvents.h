#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_IRAISEITEMCHANGEDEVENTS_GET_RAISESITEMCHANGEDEVENTS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int IRaiseItemChangedEvents_TypeDefinitionIndex = 29407;

	class IRaiseItemChangedEvents : public Il2CppObject
	{
	public:
		::System::Boolean get_RaisesItemChangedEvents()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IRAISEITEMCHANGEDEVENTS_GET_RAISESITEMCHANGEDEVENTS_OFFSET))(nullptr);
		}

	};
}

