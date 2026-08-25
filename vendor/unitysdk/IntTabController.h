#pragma once
#include "unitysdk.h"

#define INTTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2056B80)

	inline static constexpr unsigned int IntTabController_TypeDefinitionIndex = 3344;

	class IntTabController : public ::MS::Internal::Xml::XPath::AttributeQuery
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

