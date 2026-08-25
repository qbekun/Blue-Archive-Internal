#pragma once
#include "unitysdk.h"

namespace Newtonsoft::Json { class JsonConverter; }

#define TBGENCOUNTERDBSPECIFIEDCONCRETECLASSCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xF01940)
#define TBGENCOUNTERDBSPECIFIEDCONCRETECLASSCONVERTER_RESOLVECONTRACTCONVERTER_OFFSET UNITYSDK_OFFSET(0xF02280)

	inline static constexpr unsigned int TBGEncounterDBSpecifiedConcreteClassConverter_TypeDefinitionIndex = 11186;

	class TBGEncounterDBSpecifiedConcreteClassConverter : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGENCOUNTERDBSPECIFIEDCONCRETECLASSCONVERTER_.CTOR_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::JsonConverter* ResolveContractConverter(::System::Type* arg)
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + TBGENCOUNTERDBSPECIFIEDCONCRETECLASSCONVERTER_RESOLVECONTRACTCONVERTER_OFFSET))(arg, nullptr);
		}

	};

