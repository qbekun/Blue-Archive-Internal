#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_IREORDERABLE_GET_ENABLEREORDERING_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IREORDERABLE_SET_ENABLEREORDERING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IReorderable_TypeDefinitionIndex = 30434;

	class IReorderable : public Il2CppObject
	{
	public:
		::System::Boolean get_enableReordering()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IREORDERABLE_GET_ENABLEREORDERING_OFFSET))(nullptr);
		}

		::System::Void set_enableReordering(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IREORDERABLE_SET_ENABLEREORDERING_OFFSET))(arg, nullptr);
		}

	};
}

