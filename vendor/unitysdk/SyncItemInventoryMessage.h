#pragma once
#include "unitysdk.h"

#define SYNCITEMINVENTORYMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F2F0)

	inline static constexpr unsigned int SyncItemInventoryMessage_TypeDefinitionIndex = 1703;

	class SyncItemInventoryMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYNCITEMINVENTORYMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

