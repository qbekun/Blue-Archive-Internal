#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_CHANGEEVENT`1_GET_PREVIOUSVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CHANGEEVENT`1_SET_PREVIOUSVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CHANGEEVENT`1_GET_NEWVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CHANGEEVENT`1_SET_NEWVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CHANGEEVENT`1_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CHANGEEVENT`1_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CHANGEEVENT`1_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CHANGEEVENT`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ChangeEvent`1_TypeDefinitionIndex = 30450;

	class ChangeEvent`1 : public <>c__DisplayClass48_0
	{
	public:
		Il2CppObject* _previousValue_k__BackingField; // 0x0
		Il2CppObject* _newValue_k__BackingField; // 0x0

		Il2CppObject* get_previousValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CHANGEEVENT`1_GET_PREVIOUSVALUE_OFFSET))(nullptr);
		}

		::System::Void set_previousValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CHANGEEVENT`1_SET_PREVIOUSVALUE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_newValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CHANGEEVENT`1_GET_NEWVALUE_OFFSET))(nullptr);
		}

		::System::Void set_newValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CHANGEEVENT`1_SET_NEWVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CHANGEEVENT`1_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CHANGEEVENT`1_LOCALINIT_OFFSET))(nullptr);
		}

		Il2CppObject* GetPooled(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CHANGEEVENT`1_GETPOOLED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CHANGEEVENT`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

