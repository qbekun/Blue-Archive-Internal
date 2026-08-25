#pragma once
#include "unitysdk.h"

#define MUTESETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x13C3000)

	inline static constexpr unsigned int MuteSetting_TypeDefinitionIndex = 1039;

	class MuteSetting : public Il2CppObject
	{
	public:
		::System::String* AssetName; // 0x10
		Il2CppObject* Groups; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MUTESETTING_.CTOR_OFFSET))(nullptr);
		}

	};

