#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_POLICY_EVIDENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9182CB0)
#define SYSTEM_SECURITY_POLICY_EVIDENCE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9182CC0)
#define SYSTEM_SECURITY_POLICY_EVIDENCE_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x9182D20)
#define SYSTEM_SECURITY_POLICY_EVIDENCE_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x9182D30)
#define SYSTEM_SECURITY_POLICY_EVIDENCE_COPYTO_OFFSET UNITYSDK_OFFSET(0x9182D40)
#define SYSTEM_SECURITY_POLICY_EVIDENCE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9182E10)

namespace System::Security::Policy
{
	inline static constexpr unsigned int Evidence_TypeDefinitionIndex = 24294;

	class Evidence : public Il2CppObject
	{
	public:
		::System::Boolean _locked; // 0x10
		::System::Collections::ArrayList* hostEvidenceList; // 0x18
		::System::Collections::ArrayList* assemblyEvidenceList; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_POLICY_EVIDENCE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_POLICY_EVIDENCE_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_POLICY_EVIDENCE_GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_POLICY_EVIDENCE_GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_POLICY_EVIDENCE_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_POLICY_EVIDENCE_GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

