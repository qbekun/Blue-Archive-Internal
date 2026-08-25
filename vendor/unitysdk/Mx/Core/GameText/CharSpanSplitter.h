#pragma once
#include "../../../unitysdk.h"

class Enumerator;

#define MX_CORE_GAMETEXT_CHARSPANSPLITTER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x103FE80)
#define MX_CORE_GAMETEXT_CHARSPANSPLITTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x103FEC0)

namespace MX::Core::GameText
{
	inline static constexpr unsigned int CharSpanSplitter_TypeDefinitionIndex = 12855;

	class CharSpanSplitter : public Il2CppObject
	{
	public:
		Il2CppObject* _input; // 0x10

		Enumerator* GetEnumerator()
		{
			return ((Enumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_GAMETEXT_CHARSPANSPLITTER_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_GAMETEXT_CHARSPANSPLITTER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

