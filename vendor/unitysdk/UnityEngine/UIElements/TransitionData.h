#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class TransitionData; }
namespace UnityEngine::UIElements { class TransitionData&; }

#define UNITYENGINE_UIELEMENTS_TRANSITIONDATA_COPY_OFFSET UNITYSDK_OFFSET(0xA41AD10)
#define UNITYENGINE_UIELEMENTS_TRANSITIONDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0xA41AEB0)
#define UNITYENGINE_UIELEMENTS_TRANSITIONDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA41B040)
#define UNITYENGINE_UIELEMENTS_TRANSITIONDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xA41B070)
#define UNITYENGINE_UIELEMENTS_TRANSITIONDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xA41B0C0)
#define UNITYENGINE_UIELEMENTS_TRANSITIONDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA41B170)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TransitionData_TypeDefinitionIndex = 30637;

	class TransitionData : public Il2CppObject
	{
	public:
		Il2CppObject* transitionDelay; // 0x10
		Il2CppObject* transitionDuration; // 0x18
		Il2CppObject* transitionProperty; // 0x20
		Il2CppObject* transitionTimingFunction; // 0x28

		::UnityEngine::UIElements::TransitionData* Copy()
		{
			return (return (::UnityEngine::UIElements::TransitionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSITIONDATA_COPY_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(::UnityEngine::UIElements::TransitionData&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TransitionData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSITIONDATA_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::TransitionData* arg, ::UnityEngine::UIElements::TransitionData* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::TransitionData*, ::UnityEngine::UIElements::TransitionData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSITIONDATA_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::TransitionData* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::TransitionData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSITIONDATA_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSITIONDATA_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TRANSITIONDATA_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

