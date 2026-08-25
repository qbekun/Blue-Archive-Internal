#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_TRIDROPDOWNLIST`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TRIINSPECTOR_TRIDROPDOWNLIST`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)

namespace TriInspector
{
	inline static constexpr unsigned int TriDropdownList`1_TypeDefinitionIndex = 37863;

	class TriDropdownList`1 : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_TRIDROPDOWNLIST`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Add(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_TRIDROPDOWNLIST`1_ADD_OFFSET))(str, arg, nullptr);
		}

	};
}

