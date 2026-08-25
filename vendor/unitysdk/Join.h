#pragma once
#include "unitysdk.h"

#define JOIN_.CTOR_OFFSET UNITYSDK_OFFSET(0x286DBD0)

	inline static constexpr unsigned int Join_TypeDefinitionIndex = 34393;

	class Join : public Il2CppObject
	{
	public:
		OutPt* OutPt1; // 0x10
		OutPt* OutPt2; // 0x18
		IntPoint* OffPt; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIN_.CTOR_OFFSET))(nullptr);
		}

	};

