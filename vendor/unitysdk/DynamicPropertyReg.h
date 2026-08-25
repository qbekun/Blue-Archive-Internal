#pragma once
#include "unitysdk.h"

#define DYNAMICPROPERTYREG_.CTOR_OFFSET UNITYSDK_OFFSET(0x91DFB30)

	inline static constexpr unsigned int DynamicPropertyReg_TypeDefinitionIndex = 24474;

	class DynamicPropertyReg : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Contexts::IDynamicProperty* Property; // 0x10
		::System::Runtime::Remoting::Contexts::IDynamicMessageSink* Sink; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICPROPERTYREG_.CTOR_OFFSET))(nullptr);
		}

	};

