#pragma once
#include "../../../unitysdk.h"

class Enumerator;

#define MX_CORE_GAMETEXT_EFFICIENTCOMMASPLITTER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x103FFF0)
#define MX_CORE_GAMETEXT_EFFICIENTCOMMASPLITTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1040030)

namespace MX::Core::GameText
{
	inline static constexpr unsigned int EfficientCommaSplitter_TypeDefinitionIndex = 12857;

	class EfficientCommaSplitter : public Il2CppObject
	{
	public:
		Il2CppObject* _input; // 0x10

		Enumerator* GetEnumerator()
		{
			return ((Enumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_GAMETEXT_EFFICIENTCOMMASPLITTER_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_GAMETEXT_EFFICIENTCOMMASPLITTER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

