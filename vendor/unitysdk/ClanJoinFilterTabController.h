#pragma once
#include "unitysdk.h"

#define CLANJOINFILTERTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2332C10)
#define CLANJOINFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0x2332C50)

	inline static constexpr unsigned int ClanJoinFilterTabController_TypeDefinitionIndex = 4950;

	class ClanJoinFilterTabController : public ::System::Xml::Schema::XsdDuration
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANJOINFILTERTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANJOINFILTERTABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

	};

