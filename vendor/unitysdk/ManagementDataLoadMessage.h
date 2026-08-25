#pragma once
#include "unitysdk.h"

#define MANAGEMENTDATALOADMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xC29740)

	inline static constexpr unsigned int ManagementDataLoadMessage_TypeDefinitionIndex = 8904;

	class ManagementDataLoadMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANAGEMENTDATALOADMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

