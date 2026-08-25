#pragma once
#include "unitysdk.h"

#define PRODUCTSELECTEDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xAD1DB0)

	inline static constexpr unsigned int ProductSelectedMessage_TypeDefinitionIndex = 8058;

	class ProductSelectedMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PRODUCTSELECTEDMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

