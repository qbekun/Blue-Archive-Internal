#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_IPOINTEREVENTINTERNAL_GET_TRIGGEREDBYOS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPOINTEREVENTINTERNAL_SET_TRIGGEREDBYOS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPOINTEREVENTINTERNAL_GET_RECOMPUTETOPELEMENTUNDERPOINTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPOINTEREVENTINTERNAL_SET_RECOMPUTETOPELEMENTUNDERPOINTER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IPointerEventInternal_TypeDefinitionIndex = 30529;

	class IPointerEventInternal : public Il2CppObject
	{
	public:
		::System::Boolean get_triggeredByOS()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENTINTERNAL_GET_TRIGGEREDBYOS_OFFSET))(nullptr);
		}

		::System::Void set_triggeredByOS(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENTINTERNAL_SET_TRIGGEREDBYOS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_recomputeTopElementUnderPointer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENTINTERNAL_GET_RECOMPUTETOPELEMENTUNDERPOINTER_OFFSET))(nullptr);
		}

		::System::Void set_recomputeTopElementUnderPointer(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPOINTEREVENTINTERNAL_SET_RECOMPUTETOPELEMENTUNDERPOINTER_OFFSET))(arg, nullptr);
		}

	};
}

