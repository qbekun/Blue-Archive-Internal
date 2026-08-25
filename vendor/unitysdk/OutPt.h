#pragma once
#include "unitysdk.h"

#define OUTPT_.CTOR_OFFSET UNITYSDK_OFFSET(0x286DBC0)

	inline static constexpr unsigned int OutPt_TypeDefinitionIndex = 34392;

	class OutPt : public Il2CppObject
	{
	public:
		::System::Int32 Idx; // 0x10
		IntPoint* Pt; // 0x18
		OutPt* Next; // 0x28
		OutPt* Prev; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OUTPT_.CTOR_OFFSET))(nullptr);
		}

	};

