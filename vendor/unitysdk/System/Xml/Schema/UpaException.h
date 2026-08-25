#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_UPAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A0C930)
#define SYSTEM_XML_SCHEMA_UPAEXCEPTION_GET_PARTICLE1_OFFSET UNITYSDK_OFFSET(0x9A0C9C0)
#define SYSTEM_XML_SCHEMA_UPAEXCEPTION_GET_PARTICLE2_OFFSET UNITYSDK_OFFSET(0x9A0C9D0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int UpaException_TypeDefinitionIndex = 27968;

	class UpaException : public Il2CppObject
	{
	public:
		::System::Object* particle1; // 0x90
		::System::Object* particle2; // 0x98

		::System::Void .ctor(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_UPAEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* get_Particle1()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_UPAEXCEPTION_GET_PARTICLE1_OFFSET))(nullptr);
		}

		::System::Object* get_Particle2()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_UPAEXCEPTION_GET_PARTICLE2_OFFSET))(nullptr);
		}

	};
}

