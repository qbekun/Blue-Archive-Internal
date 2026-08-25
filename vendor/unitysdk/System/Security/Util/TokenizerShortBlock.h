#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_UTIL_TOKENIZERSHORTBLOCK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9182BE0)

namespace System::Security::Util
{
	inline static constexpr unsigned int TokenizerShortBlock_TypeDefinitionIndex = 24290;

	class TokenizerShortBlock : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_block; // 0x10
		::System::Security::Util::TokenizerShortBlock* m_next; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZERSHORTBLOCK_.CTOR_OFFSET))(nullptr);
		}

	};
}

