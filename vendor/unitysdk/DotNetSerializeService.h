#pragma once
#include "unitysdk.h"

#define DOTNETSERIALIZESERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6620)
#define DOTNETSERIALIZESERVICE_DEFAULTSURROGATESELECTOR_OFFSET UNITYSDK_OFFSET(0x1FC6630)

	inline static constexpr unsigned int DotNetSerializeService_TypeDefinitionIndex = 2967;

	class DotNetSerializeService : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOTNETSERIALIZESERVICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Runtime::Serialization::SurrogateSelector* DefaultSurrogateSelector()
		{
			return ((::System::Runtime::Serialization::SurrogateSelector*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOTNETSERIALIZESERVICE_DEFAULTSURROGATESELECTOR_OFFSET))(nullptr);
		}

	};

