#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_ISTYLEDATAGROUP`1_COPY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_ISTYLEDATAGROUP`1_COPYFROM_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IStyleDataGroup`1_TypeDefinitionIndex = 30632;

	class IStyleDataGroup`1 : public Il2CppObject
	{
	public:
		Il2CppObject* Copy()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEDATAGROUP`1_COPY_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ISTYLEDATAGROUP`1_COPYFROM_OFFSET))(arg, nullptr);
		}

	};
}

