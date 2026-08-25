#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DELAYEDACTIONMANAGER_ADDACTION_OFFSET UNITYSDK_OFFSET(0xA0E3290)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DELAYEDACTIONMANAGER_DESTROYWHENCOMPLETE_OFFSET UNITYSDK_OFFSET(0xA0E35C0)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DELAYEDACTIONMANAGER_GETNODE_OFFSET UNITYSDK_OFFSET(0xA0E35D0)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DELAYEDACTIONMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E36D0)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DELAYEDACTIONMANAGER_ADDACTIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xA0E3300)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DELAYEDACTIONMANAGER_INTERNALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA0E3960)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DELAYEDACTIONMANAGER_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA0E3E40)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DELAYEDACTIONMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA0E3F40)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DELAYEDACTIONMANAGER_WAIT_OFFSET UNITYSDK_OFFSET(0xA0E3F60)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DELAYEDACTIONMANAGER_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0xA0E41C0)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DELAYEDACTIONMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0xA0E4260)

namespace UnityEngine::ResourceManagement::Util
{
	inline static constexpr unsigned int DelayedActionManager_TypeDefinitionIndex = 36366;

	class DelayedActionManager : public <>c__DisplayClass14_1
	{
	public:
		::Il2CppArray<::System::Object*>* m_Actions; // 0x18
		Il2CppObject* m_DelayedActions; // 0x20
		Il2CppObject* m_NodeCache; // 0x28
		::System::Int32 m_CollectionIndex; // 0x30
		::System::Boolean m_DestroyOnCompletion; // 0x34

		::System::Void AddAction(::System::Delegate* arg, ::System::Single arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Delegate*, ::System::Single, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DELAYEDACTIONMANAGER_ADDACTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DestroyWhenComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DELAYEDACTIONMANAGER_DESTROYWHENCOMPLETE_OFFSET))(nullptr);
		}

		Il2CppObject* GetNode(DelegateInfo&* arg)
		{
			return (return (Il2CppObject*(*)(DelegateInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DELAYEDACTIONMANAGER_GETNODE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DELAYEDACTIONMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddActionInternal(::System::Delegate* arg, ::System::Single arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Delegate*, ::System::Single, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DELAYEDACTIONMANAGER_ADDACTIONINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InternalLateUpdate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DELAYEDACTIONMANAGER_INTERNALLATEUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DELAYEDACTIONMANAGER_GET_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DELAYEDACTIONMANAGER_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Boolean Wait(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DELAYEDACTIONMANAGER_WAIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnApplicationQuit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DELAYEDACTIONMANAGER_ONAPPLICATIONQUIT_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_DELAYEDACTIONMANAGER_CLEAR_OFFSET))(nullptr);
		}

	};
}

