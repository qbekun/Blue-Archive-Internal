#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Networking { class CertificateHandler; }

#define UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_CREATE_OFFSET UNITYSDK_OFFSET(0xA4A5F20)
#define UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_RELEASE_OFFSET UNITYSDK_OFFSET(0xA4A5F60)
#define UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4A5FA0)
#define UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA4A5FE0)
#define UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_VALIDATECERTIFICATE_OFFSET UNITYSDK_OFFSET(0xA4A6120)
#define UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_VALIDATECERTIFICATENATIVE_OFFSET UNITYSDK_OFFSET(0xA4A6130)
#define UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4A4140)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int CertificateHandler_TypeDefinitionIndex = 37427;

	class CertificateHandler : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10

		::System::Int32 Create(::UnityEngine::Networking::CertificateHandler* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Networking::CertificateHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_RELEASE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_FINALIZE_OFFSET))(nullptr);
		}

		::System::Boolean ValidateCertificate(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_VALIDATECERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidateCertificateNative(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_VALIDATECERTIFICATENATIVE_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_DISPOSE_OFFSET))(nullptr);
		}

	};
}

