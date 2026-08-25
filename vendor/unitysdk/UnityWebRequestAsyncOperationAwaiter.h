#pragma once
#include "unitysdk.h"

namespace UnityEngine::Networking { class UnityWebRequestAsyncOperation; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define UNITYWEBREQUESTASYNCOPERATIONAWAITER_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9C1A910)
#define UNITYWEBREQUESTASYNCOPERATIONAWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9C1A920)
#define UNITYWEBREQUESTASYNCOPERATIONAWAITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C1A8E0)
#define UNITYWEBREQUESTASYNCOPERATIONAWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9C1AA00)
#define UNITYWEBREQUESTASYNCOPERATIONAWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x9C1AA20)

	inline static constexpr unsigned int UnityWebRequestAsyncOperationAwaiter_TypeDefinitionIndex = 26638;

	class UnityWebRequestAsyncOperationAwaiter : public Il2CppObject
	{
	public:
		::UnityEngine::Networking::UnityWebRequestAsyncOperation* _asyncOperation; // 0x10
		Il2CppObject* _continuationAction; // 0x18

		::System::Void OnCompleted(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYWEBREQUESTASYNCOPERATIONAWAITER_ONCOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Void UnsafeOnCompleted(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYWEBREQUESTASYNCOPERATIONAWAITER_UNSAFEONCOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Networking::UnityWebRequestAsyncOperation* arg)
		{
			((::System::Void(*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYWEBREQUESTASYNCOPERATIONAWAITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCompleted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYWEBREQUESTASYNCOPERATIONAWAITER_GET_ISCOMPLETED_OFFSET))(nullptr);
		}

		::UnityEngine::Networking::UnityWebRequest* GetResult()
		{
			return (return (::UnityEngine::Networking::UnityWebRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYWEBREQUESTASYNCOPERATIONAWAITER_GETRESULT_OFFSET))(nullptr);
		}

	};

