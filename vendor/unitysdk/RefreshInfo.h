#pragma once
#include "unitysdk.h"

#define REFRESHINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D08DB0)

	inline static constexpr unsigned int RefreshInfo_TypeDefinitionIndex = 1573;

	class RefreshInfo : public Il2CppObject
	{
	public:
		::System::Boolean IsFullyConquested; // 0x10
		::System::Boolean IsConquested; // 0x11
		::System::Int32 Level; // 0x14
		::System::Boolean IsEroded; // 0x18
		::System::Boolean IsUnitLocked; // 0x19

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFRESHINFO_.CTOR_OFFSET))(nullptr);
		}

	};

