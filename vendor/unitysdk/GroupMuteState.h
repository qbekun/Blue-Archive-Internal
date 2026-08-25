#pragma once
#include "unitysdk.h"

#define GROUPMUTESTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x13C2FF0)

	inline static constexpr unsigned int GroupMuteState_TypeDefinitionIndex = 1038;

	class GroupMuteState : public Il2CppObject
	{
	public:
		::System::String* RootName; // 0x10
		::System::Boolean Muted; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUPMUTESTATE_.CTOR_OFFSET))(nullptr);
		}

	};

