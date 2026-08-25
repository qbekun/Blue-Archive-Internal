#pragma once
#include "unitysdk.h"

#define PERSISTENTBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2127AA0)

	inline static constexpr unsigned int PersistentBase_TypeDefinitionIndex = 3919;

	class PersistentBase : public ::ToyWebViewShared::Messages::ReplyResize
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PERSISTENTBASE_.CTOR_OFFSET))(nullptr);
		}

	};

