#pragma once
#include "unitysdk.h"

#define COSTSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x2240D10)

	inline static constexpr unsigned int CostSet_TypeDefinitionIndex = 4481;

	class CostSet : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* ToggleObjects; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTSET_.CTOR_OFFSET))(nullptr);
		}

	};

