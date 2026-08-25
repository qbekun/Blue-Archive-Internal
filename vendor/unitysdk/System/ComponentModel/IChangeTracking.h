#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_ICHANGETRACKING_GET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ICHANGETRACKING_ACCEPTCHANGES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int IChangeTracking_TypeDefinitionIndex = 29473;

	class IChangeTracking : public Il2CppObject
	{
	public:
		::System::Boolean get_IsChanged()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ICHANGETRACKING_GET_ISCHANGED_OFFSET))(nullptr);
		}

		::System::Void AcceptChanges()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ICHANGETRACKING_ACCEPTCHANGES_OFFSET))(nullptr);
		}

	};
}

