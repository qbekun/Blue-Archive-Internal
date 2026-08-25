#pragma once
#include "unitysdk.h"

#define SOLVEBOTTOMUPJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA2A8C0)

	inline static constexpr unsigned int SolveBottomUpJob_TypeDefinitionIndex = 37969;

	class SolveBottomUpJob : public Il2CppObject
	{
	public:
		::System::Int32 LastIndex; // 0x10
		::System::Single PrevDT; // 0x14
		::System::Single HalfSqDT; // 0x18
		Il2CppObject* BoneLengths; // 0x20
		Il2CppObject* PrevPosArr; // 0x30
		Il2CppObject* PrevVelArr; // 0x40
		Il2CppObject* PrevAccArr; // 0x50

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOLVEBOTTOMUPJOB_EXECUTE_OFFSET))(nullptr);
		}

	};

