#pragma once
#include "unitysdk.h"

#define EVIDENCEENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9182F00)
#define EVIDENCEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9182F60)
#define EVIDENCEENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9183090)
#define EVIDENCEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x91831B0)

	inline static constexpr unsigned int EvidenceEnumerator_TypeDefinitionIndex = 24293;

	class EvidenceEnumerator : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* currentEnum; // 0x10
		::System::Collections::IEnumerator* hostEnum; // 0x18
		::System::Collections::IEnumerator* assemblyEnum; // 0x20

		::System::Void .ctor(::System::Collections::IEnumerator* arg, ::System::Collections::IEnumerator* arg)
		{
			((::System::Void(*)(::System::Collections::IEnumerator*, ::System::Collections::IEnumerator*, ::PVOID))((::PBYTE)hIl2Cpp + EVIDENCEENUMERATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVIDENCEENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVIDENCEENUMERATOR_RESET_OFFSET))(nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVIDENCEENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

	};

