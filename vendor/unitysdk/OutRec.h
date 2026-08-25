#pragma once
#include "unitysdk.h"

#define OUTREC_.CTOR_OFFSET UNITYSDK_OFFSET(0x286DBB0)

	inline static constexpr unsigned int OutRec_TypeDefinitionIndex = 34391;

	class OutRec : public Il2CppObject
	{
	public:
		::System::Int32 Idx; // 0x10
		::System::Boolean IsHole; // 0x14
		::System::Boolean IsOpen; // 0x15
		OutRec* FirstLeft; // 0x18
		OutPt* Pts; // 0x20
		OutPt* BottomPt; // 0x28
		PolyNode* PolyNode; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OUTREC_.CTOR_OFFSET))(nullptr);
		}

	};

