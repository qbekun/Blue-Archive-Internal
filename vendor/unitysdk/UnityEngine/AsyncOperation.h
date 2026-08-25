#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_ASYNCOPERATION_INTERNALDESTROY_OFFSET UNITYSDK_OFFSET(0xA22DAE0)
#define UNITYENGINE_ASYNCOPERATION_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0xA22DB20)
#define UNITYENGINE_ASYNCOPERATION_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xA22DB60)
#define UNITYENGINE_ASYNCOPERATION_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xA22DBA0)
#define UNITYENGINE_ASYNCOPERATION_GET_ALLOWSCENEACTIVATION_OFFSET UNITYSDK_OFFSET(0xA22DBE0)
#define UNITYENGINE_ASYNCOPERATION_SET_ALLOWSCENEACTIVATION_OFFSET UNITYSDK_OFFSET(0xA22DC20)
#define UNITYENGINE_ASYNCOPERATION_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA22DC60)
#define UNITYENGINE_ASYNCOPERATION_INVOKECOMPLETIONEVENT_OFFSET UNITYSDK_OFFSET(0xA22DD50)
#define UNITYENGINE_ASYNCOPERATION_ADD_COMPLETED_OFFSET UNITYSDK_OFFSET(0xA22DDA0)
#define UNITYENGINE_ASYNCOPERATION_REMOVE_COMPLETED_OFFSET UNITYSDK_OFFSET(0xA22DEA0)
#define UNITYENGINE_ASYNCOPERATION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22D310)

namespace UnityEngine
{
	inline static constexpr unsigned int AsyncOperation_TypeDefinitionIndex = 31130;

	class AsyncOperation : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10
		Il2CppObject* m_completeCallback; // 0x18

		::System::Void InternalDestroy(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_INTERNALDESTROY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isDone()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_GET_ISDONE_OFFSET))(nullptr);
		}

		::System::Single get_progress()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_GET_PROGRESS_OFFSET))(nullptr);
		}

		::System::Void set_priority(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_SET_PRIORITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_allowSceneActivation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_GET_ALLOWSCENEACTIVATION_OFFSET))(nullptr);
		}

		::System::Void set_allowSceneActivation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_SET_ALLOWSCENEACTIVATION_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void InvokeCompletionEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_INVOKECOMPLETIONEVENT_OFFSET))(nullptr);
		}

		::System::Void add_completed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_ADD_COMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_completed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_REMOVE_COMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCOPERATION_.CTOR_OFFSET))(nullptr);
		}

	};
}

