#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DYNAMIC_UTILS_LISTARGUMENTPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x96BEF30)
#define SYSTEM_DYNAMIC_UTILS_LISTARGUMENTPROVIDER_GET_FIRST_OFFSET UNITYSDK_OFFSET(0x96C08F0)
#define SYSTEM_DYNAMIC_UTILS_LISTARGUMENTPROVIDER_GET_ELEMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x96C0900)
#define SYSTEM_DYNAMIC_UTILS_LISTARGUMENTPROVIDER_GETELEMENT_OFFSET UNITYSDK_OFFSET(0x96C09A0)

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int ListArgumentProvider_TypeDefinitionIndex = 33579;

	class ListArgumentProvider : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::PrivateKeyFactory
	{
	public:
		::System::Linq::Expressions::IArgumentProvider* _provider; // 0x10
		::System::Linq::Expressions::Expression* _arg0; // 0x18

		::System::Void .ctor(::System::Linq::Expressions::IArgumentProvider* arg, ::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::IArgumentProvider*, ::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTARGUMENTPROVIDER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* get_First()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTARGUMENTPROVIDER_GET_FIRST_OFFSET))(nullptr);
		}

		::System::Int32 get_ElementCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTARGUMENTPROVIDER_GET_ELEMENTCOUNT_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* GetElement(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_LISTARGUMENTPROVIDER_GETELEMENT_OFFSET))(arg, nullptr);
		}

	};
}

