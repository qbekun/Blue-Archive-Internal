#pragma once
#include "unitysdk.h"

namespace UnityEngine { class WaitForEndOfFrame; }
namespace Cysharp::Threading::Tasks { class UniTaskStatus; }
namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace UnityEngine { class MonoBehaviour; }

#define WAITFORENDOFFRAMEPROMISE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DD9B20)
#define WAITFORENDOFFRAMEPROMISE_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9DD9B30)
#define WAITFORENDOFFRAMEPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9DD9B80)
#define WAITFORENDOFFRAMEPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x9DD9BE0)
#define WAITFORENDOFFRAMEPROMISE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x9DD9D30)
#define WAITFORENDOFFRAMEPROMISE_SYSTEM.COLLECTIONS.IENUMERATOR.MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9DD9D40)
#define WAITFORENDOFFRAMEPROMISE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DD9DF0)
#define WAITFORENDOFFRAMEPROMISE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x9DD9F60)
#define WAITFORENDOFFRAMEPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DDA010)
#define WAITFORENDOFFRAMEPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x9DD5930)
#define WAITFORENDOFFRAMEPROMISE_RESET_OFFSET UNITYSDK_OFFSET(0x9DDA000)
#define WAITFORENDOFFRAMEPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x9DDA060)

	inline static constexpr unsigned int WaitForEndOfFramePromise_TypeDefinitionIndex = 35906;

	class WaitForEndOfFramePromise : public Il2CppObject
	{
	public:
		Il2CppObject* pool; // 0x0
		WaitForEndOfFramePromise* nextNode; // 0x10
		Il2CppObject* core; // 0x18
		::System::Threading::CancellationToken* cancellationToken; // 0x40
		::System::Threading::CancellationTokenRegistration* cancellationTokenRegistration; // 0x48
		::System::Boolean cancelImmediately; // 0x60
		::UnityEngine::WaitForEndOfFrame* waitForEndOfFrameYieldInstruction; // 0x10
		::System::Boolean isFirst; // 0x61

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITFORENDOFFRAMEPROMISE_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITFORENDOFFRAMEPROMISE_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void OnCompleted(Il2CppObject* arg, ::System::Object* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + WAITFORENDOFFRAMEPROMISE_ONCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetResult(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + WAITFORENDOFFRAMEPROMISE_GETRESULT_OFFSET))(arg, nullptr);
		}

		WaitForEndOfFramePromise&* get_NextNode()
		{
			return (return (WaitForEndOfFramePromise&*(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITFORENDOFFRAMEPROMISE_GET_NEXTNODE_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.IEnumerator.MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITFORENDOFFRAMEPROMISE_SYSTEM.COLLECTIONS.IENUMERATOR.MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITFORENDOFFRAMEPROMISE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryReturn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITFORENDOFFRAMEPROMISE_TRYRETURN_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* GetStatus(::System::Int16 arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + WAITFORENDOFFRAMEPROMISE_GETSTATUS_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::IUniTaskSource* Create(::UnityEngine::MonoBehaviour* arg, ::System::Threading::CancellationToken* arg, ::System::Boolean arg, int16_t&* arg)
		{
			return (return (::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::UnityEngine::MonoBehaviour*, ::System::Threading::CancellationToken*, ::System::Boolean, int16_t&*, ::PVOID))((::PBYTE)hIl2Cpp + WAITFORENDOFFRAMEPROMISE_CREATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITFORENDOFFRAMEPROMISE_RESET_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus* UnsafeGetStatus()
		{
			return (return (::Cysharp::Threading::Tasks::UniTaskStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + WAITFORENDOFFRAMEPROMISE_UNSAFEGETSTATUS_OFFSET))(nullptr);
		}

	};

