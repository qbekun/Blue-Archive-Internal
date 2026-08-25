#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_UTIL_TOKENIZERSTRINGBLOCK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9182C40)

namespace System::Security::Util
{
	inline static constexpr unsigned int TokenizerStringBlock_TypeDefinitionIndex = 24291;

	class TokenizerStringBlock : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_block; // 0x10
		::System::Security::Util::TokenizerStringBlock* m_next; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZERSTRINGBLOCK_.CTOR_OFFSET))(nullptr);
		}

	};
}

