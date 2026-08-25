#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class JsonSerializerSettings; }

#define MX_LOGIC_GENERICCONDITION_MEMBERREFERENCETO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x108E3B0)
#define MX_LOGIC_GENERICCONDITION_MEMBERREFERENCETO_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_GENERICCONDITION_MEMBERREFERENCETO_.CTOR_OFFSET UNITYSDK_OFFSET(0x108E460)
#define MX_LOGIC_GENERICCONDITION_MEMBERREFERENCETO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x108E470)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int MemberReferenceTo_TypeDefinitionIndex = 12954;

	class MemberReferenceTo : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::JsonSerializerSettings* serializerSettings; // 0x0
		::System::String* memberName; // 0x10
		::System::String* memberTypeJson; // 0x18
		Il2CppObject* getFunc; // 0x20
		::System::Type* memberType; // 0x28

		::System::Void Initialize(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_MEMBERREFERENCETO_INITIALIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Get()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_MEMBERREFERENCETO_GET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_MEMBERREFERENCETO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_MEMBERREFERENCETO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

