#pragma once
#include "../../unitysdk.h"

#define NPA_EX_EXTERNALPLATFORMTASKBASE`1_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_EXTERNALPLATFORMTASKBASE`1_SET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_EXTERNALPLATFORMTASKBASE`1_SETONFINISHEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_EXTERNALPLATFORMTASKBASE`1_COMPLETEWITHOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_EXTERNALPLATFORMTASKBASE`1_COMPLETEWITHOUTCALLBACKFROMMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_EXTERNALPLATFORMTASKBASE`1_COMPLETE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_EXTERNALPLATFORMTASKBASE`1_COMPLETEFROMMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_EXTERNALPLATFORMTASKBASE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_EXTERNALPLATFORMTASKBASE`1__COMPLETEWITHOUTCALLBACKFROMMAINTHREAD_B__7_0_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EX_EXTERNALPLATFORMTASKBASE`1__COMPLETEFROMMAINTHREAD_B__9_0_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Ex
{
	inline static constexpr unsigned int ExternalPlatformTaskBase`1_TypeDefinitionIndex = 25990;

	class ExternalPlatformTaskBase`1 : public Il2CppObject
	{
	public:
		::System::Boolean isComplete; // 0x0
		Il2CppObject* OnFinishedCallback; // 0x0

		::System::Boolean get_IsComplete()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_EXTERNALPLATFORMTASKBASE`1_GET_ISCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void set_IsComplete(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_EXTERNALPLATFORMTASKBASE`1_SET_ISCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void SetOnFinishedCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_EXTERNALPLATFORMTASKBASE`1_SETONFINISHEDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void CompleteWithoutCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_EXTERNALPLATFORMTASKBASE`1_COMPLETEWITHOUTCALLBACK_OFFSET))(nullptr);
		}

		::System::Void CompleteWithoutCallbackFromMainThread()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_EXTERNALPLATFORMTASKBASE`1_COMPLETEWITHOUTCALLBACKFROMMAINTHREAD_OFFSET))(nullptr);
		}

		::System::Void Complete(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_EXTERNALPLATFORMTASKBASE`1_COMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void CompleteFromMainThread(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_EXTERNALPLATFORMTASKBASE`1_COMPLETEFROMMAINTHREAD_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_EXTERNALPLATFORMTASKBASE`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CompleteWithoutCallbackFromMainThread_b__7_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_EXTERNALPLATFORMTASKBASE`1__COMPLETEWITHOUTCALLBACKFROMMAINTHREAD_B__7_0_OFFSET))(nullptr);
		}

		::System::Void _CompleteFromMainThread_b__9_0(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_EXTERNALPLATFORMTASKBASE`1__COMPLETEFROMMAINTHREAD_B__9_0_OFFSET))(arg, nullptr);
		}

	};
}

