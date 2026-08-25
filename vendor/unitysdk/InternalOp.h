#pragma once
#include "unitysdk.h"

namespace UnityEngine::ResourceManagement::ResourceProviders { class TextDataProvider; }
namespace UnityEngine::Networking { class UnityWebRequestAsyncOperation; }
namespace UnityEngine::ResourceManagement { class WebRequestQueueOperation; }
namespace UnityEngine::ResourceManagement::ResourceProviders { class ProvideHandle; }
namespace UnityEngine { class AsyncOperation; }

#define INTERNALOP_CONVERTTEXT_OFFSET UNITYSDK_OFFSET(0xA0EE410)
#define INTERNALOP_WAITFORCOMPLETIONHANDLER_OFFSET UNITYSDK_OFFSET(0xA0EE520)
#define INTERNALOP_GETPERCENTCOMPLETE_OFFSET UNITYSDK_OFFSET(0xA0EE890)
#define INTERNALOP_SENDWEBREQUEST_OFFSET UNITYSDK_OFFSET(0xA0EE8B0)
#define INTERNALOP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0EDFE0)
#define INTERNALOP_REQUESTOPERATION_COMPLETED_OFFSET UNITYSDK_OFFSET(0xA0EE590)
#define INTERNALOP_COMPLETEOPERATION_OFFSET UNITYSDK_OFFSET(0xA0EEB40)
#define INTERNALOP_START_OFFSET UNITYSDK_OFFSET(0xA0EDFF0)
#define INTERNALOP__SENDWEBREQUEST_B__13_0_OFFSET UNITYSDK_OFFSET(0xA0EEBD0)

	inline static constexpr unsigned int InternalOp_TypeDefinitionIndex = 36416;

	class InternalOp : public Il2CppObject
	{
	public:
		::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider* m_Provider; // 0x10
		::UnityEngine::Networking::UnityWebRequestAsyncOperation* m_RequestOperation; // 0x18
		::UnityEngine::ResourceManagement::WebRequestQueueOperation* m_RequestQueueOperation; // 0x20
		::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle* m_PI; // 0x28
		::System::Boolean m_IgnoreFailures; // 0x40
		::System::Boolean m_Complete; // 0x41
		::System::Int32 m_Timeout; // 0x44

		::System::Object* ConvertText(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INTERNALOP_CONVERTTEXT_OFFSET))(str, nullptr);
		}

		::System::Boolean WaitForCompletionHandler()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERNALOP_WAITFORCOMPLETIONHANDLER_OFFSET))(nullptr);
		}

		::System::Single GetPercentComplete()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERNALOP_GETPERCENTCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void SendWebRequest(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INTERNALOP_SENDWEBREQUEST_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERNALOP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RequestOperation_completed(::UnityEngine::AsyncOperation* arg)
		{
			((::System::Void(*)(::UnityEngine::AsyncOperation*, ::PVOID))((::PBYTE)hIl2Cpp + INTERNALOP_REQUESTOPERATION_COMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Void CompleteOperation(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + INTERNALOP_COMPLETEOPERATION_OFFSET))(str, arg, nullptr);
		}

		::System::Void Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle* arg, ::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle*, ::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider*, ::PVOID))((::PBYTE)hIl2Cpp + INTERNALOP_START_OFFSET))(arg, arg, nullptr);
		}

		::System::Void _SendWebRequest_b__13_0(::UnityEngine::Networking::UnityWebRequestAsyncOperation* arg)
		{
			((::System::Void(*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*, ::PVOID))((::PBYTE)hIl2Cpp + INTERNALOP__SENDWEBREQUEST_B__13_0_OFFSET))(arg, nullptr);
		}

	};

