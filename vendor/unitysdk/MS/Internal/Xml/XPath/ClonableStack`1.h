#pragma once
#include "../../../../unitysdk.h"

#define MS_INTERNAL_XML_XPATH_CLONABLESTACK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MS_INTERNAL_XML_XPATH_CLONABLESTACK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MS_INTERNAL_XML_XPATH_CLONABLESTACK`1_PUSH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MS_INTERNAL_XML_XPATH_CLONABLESTACK`1_POP_OFFSET UNITYSDK_OFFSET(0x000000)
#define MS_INTERNAL_XML_XPATH_CLONABLESTACK`1_PEEK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MS_INTERNAL_XML_XPATH_CLONABLESTACK`1_CLONE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MS::Internal::Xml::XPath
{
	inline static constexpr unsigned int ClonableStack`1_TypeDefinitionIndex = 28258;

	class ClonableStack`1 : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::MontgomeryLadderMultiplier
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CLONABLESTACK`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CLONABLESTACK`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Push(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CLONABLESTACK`1_PUSH_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Pop()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CLONABLESTACK`1_POP_OFFSET))(nullptr);
		}

		Il2CppObject* Peek()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CLONABLESTACK`1_PEEK_OFFSET))(nullptr);
		}

		Il2CppObject* Clone()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MS_INTERNAL_XML_XPATH_CLONABLESTACK`1_CLONE_OFFSET))(nullptr);
		}

	};
}

