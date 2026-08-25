#pragma once
#include "unitysdk.h"

#define TYPEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x96B1ED0)

	inline static constexpr unsigned int TypeInfo_TypeDefinitionIndex = 33508;

	class TypeInfo : public Il2CppObject
	{
	public:
		::System::Type* DelegateType; // 0x10
		Il2CppObject* TypeChain; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TYPEINFO_.CTOR_OFFSET))(nullptr);
		}

	};

