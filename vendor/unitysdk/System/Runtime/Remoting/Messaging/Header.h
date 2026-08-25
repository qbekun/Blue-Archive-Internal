#pragma once
#include "../../../../unitysdk.h"

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int Header_TypeDefinitionIndex = 24540;

	class Header : public Il2CppObject
	{
	public:
		::System::String* HeaderNamespace; // 0x10
		::System::Boolean MustUnderstand; // 0x18
		::System::String* Name; // 0x20
		::System::Object* Value; // 0x28

	};
}

