#pragma once
#include "../unitysdk.h"

namespace UnityEngineInternal { class TypeInferenceRules; }

namespace UnityEngineInternal
{
	inline static constexpr unsigned int TypeInferenceRules_TypeDefinitionIndex = 30846;

	class TypeInferenceRules : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngineInternal::TypeInferenceRules* TypeReferencedByFirstArgument; // 0x0
		::UnityEngineInternal::TypeInferenceRules* TypeReferencedBySecondArgument; // 0x0
		::UnityEngineInternal::TypeInferenceRules* ArrayOfTypeReferencedByFirstArgument; // 0x0
		::UnityEngineInternal::TypeInferenceRules* TypeOfFirstArgument; // 0x0

	};
}

