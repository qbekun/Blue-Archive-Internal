#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_UIR_LINKEDPOOL`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UIR_LINKEDPOOL`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UIR_LINKEDPOOL`1_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UIR_LINKEDPOOL`1_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UIR_LINKEDPOOL`1_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UIR_LINKEDPOOL`1_RETURN_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int LinkedPool`1_TypeDefinitionIndex = 30719;

	class LinkedPool`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_CreateFunc; // 0x0
		Il2CppObject* m_ResetAction; // 0x0
		::System::Int32 m_Limit; // 0x0
		Il2CppObject* m_PoolFirst; // 0x0
		::System::Int32 _Count_k__BackingField; // 0x0

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_LINKEDPOOL`1_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_LINKEDPOOL`1_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void set_Count(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_LINKEDPOOL`1_SET_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_LINKEDPOOL`1_CLEAR_OFFSET))(nullptr);
		}

		Il2CppObject* Get()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_LINKEDPOOL`1_GET_OFFSET))(nullptr);
		}

		::System::Void Return(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_LINKEDPOOL`1_RETURN_OFFSET))(arg, nullptr);
		}

	};
}

