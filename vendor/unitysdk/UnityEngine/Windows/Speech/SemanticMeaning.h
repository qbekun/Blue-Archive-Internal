#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int SemanticMeaning_TypeDefinitionIndex = 31261;

	class SemanticMeaning : public Il2CppObject
	{
	public:
		::System::String* key; // 0x10
		::Il2CppArray<::System::Object*>* values; // 0x18

	};
}

